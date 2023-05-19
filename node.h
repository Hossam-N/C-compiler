
// enum OPERATION
// {
//     RET_OP,
//     THROW_OP,
//     COMMA_OP,
//     CALL_OP,
//     ADD_ASSIGN_OP,
//     AND_ASSIGN_OP,
//     ASSIGN_OP,
//     DIV_ASSIGN_OP,
//     MOD_ASSIGN_OP,
//     MUL_ASSIGN_OP,
//     OR_ASSIGN_OP,
//     SHL_ASSIGN_OP,
//     SHR_ASSIGN_OP,
//     SUB_ASSIGN_OP,
//     XOR_ASSIGN_OP,
//     ADD_OP,
//     AND_OP,
//     BIT_AND_OP,
//     BIT_NOT_OP,
//     BIT_OR_OP,
//     DEC_OP,
//     DIV_OP,
//     EQ_OP,
//     GE_OP,
//     GT_OP,
//     INC_OP,
//     LE_OP,
//     LT_OP,
//     MOD_OP,
//     MUL_OP,
//     NE_OP,
//     NOT_OP,
//     OR_OP,
//     SHL_OP,
//     SHR_OP,
//     SUB_OP,
//     XOR_OP
// };

// typedef enum NODE_TYPE
// {
//     NODE_TYPE_IF,
//     NODE_TYPE_SWITCH,
//     NODE_TYPE_WHILE,
//     NODE_TYPE_DO_WHILE,
//     NODE_TYPE_FOR,
//     NODE_TYPE_BREAK,
//     NODE_TYPE_CONTINUE,
//     NODE_TYPE_TRY,
//     NODE_TYPE_FUNC_DEF,
//     NODE_TYPE_STATEMENTS,
//     NODE_TYPE_OPERATION,
//     NODE_TYPE_IDENTIFIER,
//     NODE_TYPE_INT,
//     NODE_TYPE_FLOAT,
//     NODE_TYPE_CHAR,
//     NODE_TYPE_STRING,
//     NODE_TYPE_BOOL
// };


// struct
// {
//     struct AST_Node *condition;
//     struct AST_Node *then_branch;
//     union
//     {
//         struct AST_Node *else_branch;
//         struct AST_Node *initialization;
//     };

// }typedef if_struct;

// struct
// {
//     unsigned int statements_count, statements_capacity;
//     struct AST_Node **statements;
// };


// class AST_node{
//     NODE_TYPE tag;  // the name that identifies  it
//     int type;
//     int value;
//     int lineNo;  
//     // AST_node(int tag,int type,int lineno = 0){
//     //     this-> tag = tag;
//     //     this -> type = type;
//     //     this-> value = value;
//     // }
// };



// class intNode: AST_node{
    
//     public:
//         intNode(int type,int )
// };


