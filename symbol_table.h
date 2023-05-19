
#include <stdio.h>
#include <unordered_map>
#include <string>  
#include <vector> 
#include <assert.h>

using namespace std;

#define ST_ARRAY_SIZE 1

enum DATA_TYPE {
  INVALID = -1,
  INTEGER,
  FLOAT,
  CHAR,
  BOOLEAN,
  VOID,
  CONST,
  ENUM_TYPE
};

struct TableEntry
{
    // info about the identifier
    string name;
    vector<enum DATA_TYPE> types;
    bool isInitialized;
    bool isUsed;
    bool isFunction;
    bool isParamater;
    bool isConstant;

    enum DATA_TYPE mainType;

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
struct AST_Node *changeListParams(struct AST_Node *initializer_list, enum DATA_TYPE *types, bool param);
vector <enum DATA_TYPE> insertIntoArray(enum DATA_TYPE *arr, enum DATA_TYPE type);
void def_func(struct TableEntry *entry);
string getErrorMessage();
void delete_array(enum DATA_TYPE **arr);
void changeParams(struct TableEntry *entry, enum DATA_TYPE *types, bool func, bool init, bool param, enum DATA_TYPE main_type);
enum DATA_TYPE verifyType(vector<enum DATA_TYPE> types);
struct TableEntry *searchEntry(struct TableEntry *node, char *identifier);
struct TableEntry *searchTables(struct SymbolTable *table, char *identifier);




