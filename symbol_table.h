#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <unordered_map>
#include <string>  
#include <vector> 
#include <assert.h>
//#include "lex.yy.c"
#include <iostream>



using namespace std;

#define ST_ARRAY_SIZE 1

enum DATA_T {
  INVALID = -1,
  INTEGER_T,
  FLOAT_T,
  CHAR_T,
  BOOLEAN_T,
  VOID_T,
  CONST_T,
  ENUM_TYPE
};

struct TableEntry
{
    // info about the identifier
    string name;
    vector<enum DATA_T> types;
    bool isInitialized;
    bool isUsed;
    bool isFunction;
    bool isParamater;
    bool isConstant;

    enum DATA_T mainType;

    struct TableEntry *next; // for chaining in block starements
};

struct SymbolTable
{
    struct SymbolTable *parent;
    unordered_map<string, struct TableEntry *> entries_map;
};

enum SEMANTIC_ERROR
{
    // possible errors
    USED_IDENTIFIER,
    UNDECLARED_IDENTIFIER,
    UNINITIALIZED_IDENTIFIER,
    NOT_A_FUNCTION,
    IS_A_FUNCTION,
    INVALID_TYPE,
    UNDEFINED_FUNCTION,
    INCOMPATIBLE_TYPES,
    NO_ERROR
};

// symbol table functions
void scopeUp();
void scopeDown();
struct SymbolTable *createTable();
struct TableEntry *insert(string identifier, bool is_const, bool is_init, bool is_func, bool is_param);
struct TableEntry *lookup(string identifier, bool func, bool need_init, bool init);
void destroy_table(struct SymbolTable *table);
void destroy_global_table();

// utilities 
struct AST_Node *changeListParams(struct AST_Node *initializer_list, enum DATA_T *types, bool param);
vector <enum DATA_T> insertIntoArray(enum DATA_T *arr, enum DATA_T type);
void def_func(struct TableEntry *entry);
string getErrorMessage();
void delete_array(enum DATA_T **arr);
void changeParams(struct TableEntry *entry, enum DATA_T *types, bool func, bool init, bool param, enum DATA_T main_type);
enum DATA_T verifyType(vector<enum DATA_T> types);
struct TableEntry *searchEntry(struct TableEntry *node, char *identifier);
struct TableEntry *searchTables(struct SymbolTable *table, char *identifier);



#endif // SYMBOL_TABLE_H

