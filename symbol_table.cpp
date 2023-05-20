#include "symbol_table.h"

#define STB_DS_IMPLEMENTATION
#include "stb_ds.h"

extern int yyerror (const char*format, ...);
extern int yylineno;
FILE *error_file;

struct SymbolTable *current_scope = NULL;
enum SEMANTIC_ERROR semantic_error = NO_ERROR;

// int main(){
//     return 0;
// }
unsigned int hashe(char *string)
{
    int hash = stbds_hash_string(string, HASH_SEED);
    return hash % ST_ARRAY_SIZE;
}

struct TableEntry *searchEntry(struct TableEntry *node, char* identifier)
{
    cout<< "searching\n";
      while (node != NULL)
    {
        cout<< "searching\n";
        if (strcmp(node->name, identifier) == 0)
            return node;
        node = node->next;
    }
    return NULL;
}

struct TableEntry *searchTables(struct SymbolTable *table, char* identifier){

  unsigned int bucket = hashe(identifier);

    while (table != NULL)
    {
        struct TableEntry *entry = searchEntry(table->entries[bucket], identifier);
        if (entry != NULL)
            return entry;
        table = table->parent;
    }

    return NULL;
}

struct SymbolTable *createTable(){
 struct SymbolTable *table = (SymbolTable*)malloc(sizeof(*table));
    assert(table != NULL);

    table->parent = NULL;
    for (unsigned int i = 0; i < ST_ARRAY_SIZE; i++)
        table->entries[i] = NULL;

    return table;
}

struct TableEntry *insert(char* identifier, bool is_const, bool is_init, bool is_func, bool is_param)
{
    cout<< "inserting\n";
    unsigned int id = hashe(identifier);
    struct TableEntry *head = current_scope->entries[id];

    if (searchEntry(head, identifier) != NULL)
    {
        cout<< "used identifier\n";
        semantic_error = USED_IDENTIFIER;
        return NULL;
    }

    cout<< "inserting\n";
    struct TableEntry *entry = new TableEntry();
    assert(entry != NULL);

    entry->name = identifier;
    entry->next = head;
    entry->types = NULL;
    entry->isInitialized = is_init;
    entry->isUsed = 0;
    entry->isFunction = is_func;
    entry->isConstant = is_const;
    entry->isParamater = is_param;
    entry->mainType = INVALID;
    
    current_scope->entries[id] = entry;
    cout<< "no error\n";
    semantic_error = NO_ERROR;
    return entry;
}

void scopeDown()
{
    struct SymbolTable *newScope= createTable();
    newScope->parent = current_scope;
    current_scope = newScope;
}

void scopeUp()
{

     for (unsigned int i = 0; i < ST_ARRAY_SIZE; i++)
    {
        struct TableEntry *head = current_scope->entries[i];
        while (head != NULL)
        {
            struct TableEntry *next = head->next;
            if (!(head->isUsed))
                fprintf(error_file, "Warning on line %d: Identifier '%s' declared but not used\n", yylineno, head->name);
            head = next;
        }
    }
    struct SymbolTable *old_scope = current_scope;
    current_scope = old_scope->parent;
}

// will be called when a function is defined or in assigning expression
struct TableEntry *lookup(char* identifier, bool func,bool need_init, bool init)
{
    struct TableEntry *found = searchTables(current_scope, identifier);
    
    
    if (found == NULL)
    {
        semantic_error = UNDECLARED_IDENTIFIER;
        cout<< "undeclared identifier\n";
    }
        
    else if (found->isFunction == 0 && func == 1)
        semantic_error = NOT_A_FUNCTION;
    else if (found->isFunction == 1 && func == 0)
        semantic_error = IS_A_FUNCTION;
    else if (found->isInitialized == 0 && func == 1)
        semantic_error = UNDEFINED_FUNCTION;
    else if (found->isInitialized == 0 && need_init && found->isParamater == 0)
        semantic_error = UNINITIALIZED_IDENTIFIER;
    else
    {
        // printf("lookup: %s\n, need init: %d, init: %d, is_init: %d\n", identifier, need_init, init, found->is_init);
        found->isUsed = 1;
        found->isInitialized |= init;
        cout<< "Tmam"; 
        // printf("lookup: %s\n, need init: %d, init: %d, is_init: %d\n", identifier, need_init, init, found->is_init);
        return found;
    }
    return NULL;
}



char* getErrorMessage()
{
    switch (semantic_error)
    {
    case NO_ERROR:
        return NULL;
    case USED_IDENTIFIER:
        return "Identifier already used";
    case UNDECLARED_IDENTIFIER:
        return "Identifier not declared";
    case UNINITIALIZED_IDENTIFIER:
        return "Identifier not initialized";
    case NOT_A_FUNCTION:
        return "Identifier is not a function";
    case IS_A_FUNCTION:
        return "Identifier is a function";
    case INVALID_TYPE:
        return "Invalid type modifier combination";
    case UNDEFINED_FUNCTION:
        return "Function declared but not defined";
    case INCOMPATIBLE_TYPES:
        return "Operation between incompatible types";
    default:
        return "Unknown error";
    }
}

vector <enum DATA_T> insertIntoArray(vector <enum DATA_T> arr, enum DATA_T type)
{
    cout<< "inserting into array\n";
    arr.push_back(type);
    return arr;
}

void def_func(struct TableEntry *entry)
{
    entry->isFunction = 1;
    entry->isInitialized = 1;
}


enum DATA_T *insert_into_array(enum DATA_T *arr, enum DATA_T type)
{
    arrput(arr, type);
    return arr;
}
void destroy_table(struct SymbolTable *table)
{
    for (unsigned int i = 0; i < ST_ARRAY_SIZE; i++)
    {
        struct TableEntry *head = table->entries[i];
        while (head != NULL)
        {
            struct TableEntry *next = head->next;
            // delete_array(&head->types);
            free(head);
            head = next;
        }
    }

    free(table);
}

void destroy_global_table()
{
    destroy_table(current_scope);
}