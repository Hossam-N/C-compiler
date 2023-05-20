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
    cout<<"dgbrbtebtwe";
    cout<<string<<"gfntete"<<endl;
    int hash = stbds_hash_string(string, HASH_SEED);
    cout<<hash<<endl;
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
    // cout<<"bgbdbdf";
    struct TableEntry *head = current_scope->entries[id];
    // cout<<"bfdbebebe";
    if (searchEntry(head, identifier) != NULL)
    {
        cout<< "used identifier\n";
        semantic_error = USED_IDENTIFIER;
        return NULL;
    }

    cout<< "inserting\n";
    struct TableEntry *entry = (TableEntry*)malloc(sizeof(*entry));
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

void change_parameters(struct TableEntry *entry, enum DATA_T *types, bool func, bool init, bool param, enum DATA_T main_type)
{
    entry->types = types;
    entry->isInitialized = init;
    entry->isParamater = param;
    entry->mainType = main_type;
    // entry->isConstant = 
    (void *)func;
}


// class AST_Node;

AST_Node *change_list_params(AST_Node *initializer_list, enum DATA_T *types, bool param)
{
    // enum DATA_T main_type = (types);
    // AST_Node *node = new AST_Node();
    AST_Node *node = initializer_list;
    // printf("Tag %d\n", node->tag);
    while (node != NULL)
    {
        switch (node->tag)
        {
        case NODE_TYPE_IDENTIFIER:
            change_parameters(node->identifier, types, 0, 0, param, types[0]);
            return initializer_list;
        case NODE_TYPE_OPERATION:
            if (node->opNode.op == ASSIGN_OP)
            {
                // assert(node->left->tag == NODE_TYPE_IDENTIFIER);
                change_parameters(node->opNode.left->identifier, types, 0, 1, param, types[0]);
                return initializer_list;
            }
            else if (node->opNode.op == COMMA_OP)
            {
                if (node->opNode.right->tag == NODE_TYPE_OPERATION)
                {
                    // assert(node->right->op == ASSIGN_OP);
                    // assert(node->right->left->tag == NODE_TYPE_IDENTIFIER);
                    change_parameters(node->opNode.right->opNode.left->identifier, types, 0, 1, param, types[0]);
                }
                else
                {
                    // assert(node->right->tag == NODE_TYPE_IDENTIFIER);
                    change_parameters(node->opNode.right->identifier, types, 0, 0, param, types[0]);
                }
                node = node->opNode.left;
            }
            else
                printf("IDK OP %d\n", node->opNode.op);
            break;
        default:
            printf("IDK NODE_TYPE %d\n", node->tag);
            break;
        }
    }

    return initializer_list;
}


void destroy_global_table()
{
    destroy_table(current_scope);
}