#include "symbol_table.h"

#define STB_DS_IMPLEMENTATION

extern int yyerror (const char*format, ...);
extern int yylineno;
FILE *error_file;

struct SymbolTable *current_scope = NULL;
enum SEMANTIC_ERROR semantic_error = NO_ERROR;

int main(){
    return 0;
}

struct TableEntry *searchEntry(struct TableEntry *node, string identifier)
{
    while(node != NULL){
        if(node->name == identifier){
            return node;
        }
        node = node->next;
    }
    return NULL;
}

struct TableEntry *searchTables(struct SymbolTable *table, string identifier){

    struct TableEntry *entry = NULL;
    while(table != NULL){

        // check if identifier is in current scope
        if(table->entries_map.find(identifier) != table->entries_map.end()){
            entry = searchEntry(table->entries_map.at(identifier), identifier);
            if(entry != NULL){
            return entry;
            }
        }  
        table = table->parent;
    }
    return NULL;
}

struct SymbolTable *createTable(){
    struct SymbolTable *table = (struct SymbolTable *)malloc(sizeof(struct SymbolTable));
    table->parent = NULL;
    return table;
}

struct TableEntry *insert(string identifier, bool is_const, bool is_init, bool is_func, bool is_param)
{
    struct TableEntry *head=NULL;
    if (current_scope->entries_map.find(identifier) != current_scope->entries_map.end())
    {
         head = current_scope->entries_map[identifier]; 
    }
    if (searchEntry(head, identifier) != NULL)
    {
        semantic_error = USED_IDENTIFIER;
        return NULL;
    }

    struct TableEntry *entry = (TableEntry*)malloc(sizeof(*entry));
    assert(entry != NULL);
    vector<enum DATA_T> t;
    entry->name = identifier;
    entry->next = head;
    entry->types = t;
    entry->isInitialized = is_init;
    entry->isUsed = 0;
    entry->isFunction = is_func;
    entry->isConstant = is_const;
    entry->isParamater= is_param;
    entry->mainType = INVALID;

    current_scope->entries_map[identifier] = entry;

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

    for (auto key : current_scope->entries_map)
    {
       struct TableEntry *entry = key.second;
       while(entry != NULL)
       {
           if(!(entry->isUsed)){
             fprintf(error_file, "Warning on line %d: Identifier '%s' declared but not used\n", yylineno, entry->name);
           }
           entry = entry->next;
       }
    }
    // scope up
    struct SymbolTable *oldScope = current_scope;
    current_scope = oldScope->parent;
}

// will be called when a function is defined or in assigning expression
struct TableEntry *lookup(string identifier, bool func,bool need_init, bool init)
{
    struct TableEntry *found = searchTables(current_scope, identifier);
    
    
    if (found == NULL)
        semantic_error = UNDECLARED_IDENTIFIER;
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
        // printf("lookup: %s\n, need init: %d, init: %d, is_init: %d\n", identifier, need_init, init, found->is_init);
        return found;
    }
    return NULL;
}



string getErrorMessage()
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
    arr.push_back(type);
    return arr;
}

void def_func(struct TableEntry *entry)
{
    entry->isFunction = 1;
    entry->isInitialized = 1;
}



void destroy_table(struct SymbolTable *table)
{
    for (auto key : table->entries_map)
    {
        struct TableEntry *head = key.second;
        while (head != NULL)
        {
            struct TableEntry *next = head->next;
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