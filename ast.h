#pragma once
#include <iostream>
#include <vector>
using namespace std;


////////////////////////   TOBE DELETED
 enum TYPE
{
    INVALID = -1,
    BOOL_TYPE,
    CHAR_TYPE,
    DOUBLE_TYPE,
    FLOAT_TYPE,
    INT_TYPE,
    LONG_TYPE,
    SHORT_TYPE,
    SIGNED_TYPE,
    STRING_TYPE,
    UNSIGNED_TYPE,
    VOID_TYPE,
    ENUM_TYPE,
    CONST_TYPE
} ;

typedef enum 
{
    NO_ERROR,
    USED_IDENTIFIER,
    UNDECLARED_IDENTIFIER,
    UNINITIALIZED_IDENTIFIER,
    NOT_A_FUNCTION,
    IS_A_FUNCTION,
    INVALID_TYPE,
    UNDEFINED_FUNCTION,
    INCOMPATIBLE_TYPES
} SEMANTIC_ERROR;
///////////////////////////////////////////////////////////////////////

 enum OPERATION    // nOT IN THIS FILE
{
    RET_OP,
    THROW_OP,
    COMMA_OP,
    CALL_OP,
    ADD_ASSIGN_OP,
    AND_ASSIGN_OP,
    ASSIGN_OP,
    DIV_ASSIGN_OP,
    MOD_ASSIGN_OP,
    MUL_ASSIGN_OP,
    OR_ASSIGN_OP,
    SHL_ASSIGN_OP,
    SHR_ASSIGN_OP,
    SUB_ASSIGN_OP,
    XOR_ASSIGN_OP,
    ADD_OP,
    AND_OP,
    BIT_AND_OP,
    BIT_NOT_OP,
    BIT_OR_OP,
    DEC_OP,
    DIV_OP,
    EQ_OP,
    GE_OP,
    GT_OP,
    INC_OP,
    LE_OP,
    LT_OP,
    MOD_OP,
    MUL_OP,
    NE_OP,
    NOT_OP,
    OR_OP,
    SHL_OP,
    SHR_OP,
    SUB_OP,
    XOR_OP
} ;

enum NODE_TYPE
{
    NODE_TYPE_IF,
    NODE_TYPE_SWITCH,
    NODE_TYPE_WHILE,
    NODE_TYPE_DO_WHILE,
    NODE_TYPE_FOR,
    NODE_TYPE_BREAK,
    NODE_TYPE_CONTINUE,
    NODE_TYPE_TRY,
    NODE_TYPE_FUNC_DEF,
    NODE_TYPE_STATEMENTS,
    NODE_TYPE_OPERATION,
    NODE_TYPE_IDENTIFIER,
    NODE_TYPE_INT,
    NODE_TYPE_FLOAT,
    NODE_TYPE_CHAR,
    NODE_TYPE_STRING,
    NODE_TYPE_BOOL
}  ;

class AST_Node;

struct
{
     AST_Node* condition;
     AST_Node* then_branch;
    union
    {
        struct AST_Node* else_branch;
        struct AST_Node* initialization;
    };

}typedef if_struct;

struct
{
    int statements_count, statements_capacity;
    vector<AST_Node*> statements;
} typedef statements;


struct
{
    enum OPERATION op;
     AST_Node* left;
     AST_Node* right;
}typedef operation;




class AST_Node {
public:
    NODE_TYPE tag;  // the name that identifies  it
    int intValue;
    double floatValue;
    char charValue;
    char* stringValue;
    bool boolValue;
    
    operation opNode;
    statements statementStruct;
    if_struct ifStruct;

    //statements statementStruct;
    // Node operation parameters


    //struct symbolTableEntry* identifier;

    void printAst() {
        //cout << endl << this->intValue<<endl;
        cout << this->tag << endl;
        //sizeof(myNumbers) / sizeof(int)
       /* for (int i = 0; i < sizeof(statementStruct.statements)/ sizeof(AST_Node*); i++) {
            statementStruct.statements[i]->printAst();
        }*/

    }


     
};
//
//
//
 AST_Node* int_node(int value);
 AST_Node* float_node(float value);
 AST_Node* char_node(char value);
 AST_Node* string_node(char* value);
 AST_Node* bool_node(bool value);



 AST_Node* operation_node(enum OPERATION op, AST_Node* left, AST_Node* right);
 AST_Node* block_node( AST_Node* statement);
 ///////////////////////////////////////////////////////
  AST_Node* if_node( AST_Node* condition,  AST_Node* then_branch,  AST_Node* else_branch);
  AST_Node* switch_node( AST_Node* expression,  AST_Node* cases);
  AST_Node* while_node( AST_Node* condition,  AST_Node* body);
  AST_Node* do_while_node( AST_Node* condition,  AST_Node* body);
  AST_Node* add_statement( AST_Node* block,  AST_Node* statement);
   AST_Node* for_node( AST_Node* initialization,  AST_Node* condition,  AST_Node* loop,  AST_Node* body);
   AST_Node* try_node( AST_Node* try_block,  AST_Node* catch_block,  AST_Node* finally_block);
   AST_Node* break_node();
   AST_Node* continue_node();







