#include "ast.h"

int main(){
    return 0;
};



 enum TYPE get_type(AST_Node* node)
{
    if (node == NULL)
        return INVALID;
    switch (node->tag)
    {
    case NODE_TYPE_OPERATION:
        return get_type(node->opNode.left);
    case NODE_TYPE_IDENTIFIER:
        //return node->identifier->main_type;
    case NODE_TYPE_INT:
        return INT_TYPE;
    case NODE_TYPE_FLOAT:
        return FLOAT_TYPE;
    case NODE_TYPE_CHAR:
        return CHAR_TYPE;
    case NODE_TYPE_STRING:
        return VOID_TYPE;
    case NODE_TYPE_BOOL:
        return BOOL_TYPE;
    default:
        return VOID_TYPE;
    }
}




AST_Node* int_node(int value) {
	AST_Node* ast = new AST_Node();

	ast->intValue = value;
	ast->tag = NODE_TYPE_INT;
	return ast;
}


struct AST_Node* float_node(float value)
{
    AST_Node* node = new AST_Node();
    node->tag = NODE_TYPE_FLOAT;
    node->floatValue = value;
    return node;
}

struct AST_Node* char_node(char value)
{
    AST_Node* node = new AST_Node();
    node->tag = NODE_TYPE_CHAR;
    node->charValue = value;
    return node;
}

struct AST_Node* string_node(char* value)
{
    AST_Node* node = new AST_Node();
    node->tag = NODE_TYPE_STRING;
    node->stringValue = value;
    return node;
}


bool compatible(enum TYPE type1, enum TYPE type2)
{
    // removed invalid types 
    return ((type1 == type2) || (type1 == INVALID) || (type2 == INVALID)) && (type1 != VOID_TYPE);
}

AST_Node* operation_node(enum OPERATION op,  AST_Node* left,  AST_Node* right)
{

    enum TYPE left_type = get_type(left);   // types in symbol table
    enum TYPE right_type = get_type(right);
    //cout << left_type << right_type;
    if (compatible(left_type, right_type) == 0)
    {
        //semantic_error = INCOMPATIBLE_TYPES;
        cout << "incompatible";
        return NULL;
    }
    else {
        cout << "compatible";
    }
    AST_Node* node = new AST_Node();
    node->tag = NODE_TYPE_OPERATION;
    node->opNode.op = op;
    node->opNode.left = left;
    node->opNode.right = right;
    return node;
}


AST_Node* block_node(AST_Node* statement)
{
    AST_Node* node = new AST_Node();
    node->tag = NODE_TYPE_STATEMENTS;
    node->statementStruct.statements_count = 1;
    node->statementStruct.statements_capacity = 2;
    //node->statementStruct.statements =  
        //new AST_Node* [node->statementStruct.statements_capacity];
    node->statementStruct.statements.push_back(statement);
    //node->statementStruct.statements[0] = statement;
    return node;
}

AST_Node* if_node(AST_Node* condition, AST_Node* then_branch, AST_Node* else_branch) {
    AST_Node* node = new AST_Node;
    node->tag = NODE_TYPE_IF;
    node->ifStruct.condition = condition;
    node->ifStruct.then_branch = then_branch;
    node->ifStruct.else_branch = else_branch;
    return node;
}

 AST_Node* switch_node( AST_Node* expression,  AST_Node* cases)
{
    AST_Node* node = new AST_Node;
    node->tag = NODE_TYPE_SWITCH;
    node->opNode.left = expression;
    node->opNode.right = cases;
    return node;
}


  AST_Node* while_node( AST_Node* condition,  AST_Node* body)
 {
      AST_Node* node = new AST_Node();
     node->tag = NODE_TYPE_WHILE;
     node->ifStruct.condition = condition;
     node->ifStruct.then_branch = body;
     node->ifStruct.else_branch = NULL;
     return node;
 }

  AST_Node* do_while_node( AST_Node* condition,  AST_Node* body)
 {
     AST_Node* node = new AST_Node();
     node->tag = NODE_TYPE_DO_WHILE;
     node->ifStruct.condition = condition;
     node->ifStruct.then_branch = body;
     node->ifStruct.else_branch = NULL;
     return node;
 }


  struct AST_Node* for_node(struct AST_Node* initialization, struct AST_Node* condition, struct AST_Node* loop, struct AST_Node* body)
  {
      struct AST_Node* node = new AST_Node();
      node->tag = NODE_TYPE_FOR;
      node->ifStruct.condition = condition;
      node->ifStruct.then_branch = add_statement(body->tag == NODE_TYPE_STATEMENTS ? body : blockNode(body), loop);
      node->ifStruct.initialization = initialization;
      return node;
  }

  struct AST_Node* break_node()
  {
      struct AST_Node* node = new AST_Node();
      node->tag = NODE_TYPE_BREAK;
      return node;
  }

  struct AST_Node* continue_node()
  {
      struct AST_Node* node = new AST_Node();
      node->tag = NODE_TYPE_CONTINUE;
      return node;
  }


//
//
//AST_Node* function_node(SymbolTableEntry* identifier, AST_Node* parameters,  AST_Node* statements)
//{
//    AST_Node* node = new AST_Node();
//    node->tag = NODE_TYPE_FUNC_DEF;
//    node->identifier = identifier;
//    node->left = parameters;
//    node->right = statements;
//    return node;
//}
//
AST_Node* add_statement(AST_Node* block, AST_Node* statement)
{
    if (block->tag == NODE_TYPE_STATEMENTS) {      
        block->statementStruct.statements.push_back(statement);
    }
    return block;
}
