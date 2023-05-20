    %code requires {
        #include "ast.h"
        #include <string>
        #include "symbol_table.h"
    }


    %{
        #include "symbol_table.h"
        #include "ast.h"
        #include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<ctype.h>
        extern FILE* yyin;
        extern int yylineno;
        int yyerror(char *s);
        int yywrap();
        int yylex();
        
        
    %}




    %union 
    {
        int intValue;
        double floatValue;
        char charValue;
        bool boolValue;
        char* stringValue;
        AST_Node* nodeP;
    }

    /* printf and scanf*/
    %token  PRINTF SCANF

    /* datatypes */
    %token  INT FLOAT CHAR BOOL STRING VOID CONST

    /* Body */
    %token  FOR IF ELSE SWITCH WHILE DO CASE CONTINUE BREAK DEFAULT REPEAT UNTIL

    /* Binary Operators */
    %token PLUS MULTIPLY DIVIDE SUBTRACT  

    /* Unary Operators ++ --*/
    %token UNARYADD UNARYSUB NOT

    /* conditional operators <=  >= == != > < */ 
    %token  LE GE EQ NE GT LT AND OR 

    /* assignment operator =  */
    %token ASSIGNOP

    %token SEMICOLON COLON COMMA

    %token LCURLY RCURLY LPAREN RPAREN 

    %token ENUM 

    %token IDENTIFIER

    %token RETURN 

    %token INCLUDE

    %token END

    %start program
    
    /* values */
    %token <boolValue>FALSE <boolValue>TRUE <intValue>INT_LITERAL <floatValue>FLOAT_LITERAL <charValue>CHARACTER_LITERAL 
    %type<stringValue>IDENTIFIER
    %type<nodeP>statement
    %type<nodeP>block_statement  if_statement switch_statement iteration_statement function_call_statement 
    %type<nodeP>function_declaration function_siganture parameter_list parameter_declaration variable_declaration   
    %type<nodeP>expression assign_expression logical_or_expression logical_and_expression equality_expression relational_expression additive_expression multiplicative_expression prefix_expression postfix_expression primary_expression variable  
    
    


 
    %%     


    program: statement                                          {appendProgram($1);}  
             | program statement                                {appendProgram($2);}  
             | error SEMICOLON                                  {yyerror("error in program");}
             ;

    statement:   if_statement                              
                | switch_statement                             
                | iteration_statement                       {printf("itreration match\n");} 
                | function_call_statement                   {printf("function_call_statement match\n");}
                | CONTINUE SEMICOLON                        
                | BREAK SEMICOLON                            {printf("break match\n");}
                | expression SEMICOLON                       
                | RETURN expression SEMICOLON                {printf("return match\n");}
                | SEMICOLON
                | function_declaration                        {printf("function declaration match\n");}
                | variable_declaration                        {;}
                | enum_declaration                            {printf("enum declaration match\n");}   
                ;

    block_statement: LCURLY statement_list RCURLY           {printf("block statement match\n");}
                    | LCURLY RCURLY                         
                    ;

    statement_list:   statement                             
                    | statement_list statement
                    ;   

    variable_declaration: data_type variable_list SEMICOLON      {printf("variable declaration match\n");}
                        | CONST data_type variable_list SEMICOLON     {printf("constant variable declaration match\n");}
                        ;

    variable_list: variable
                  | variable_list COMMA variable
                  ;

    variable: IDENTIFIER                                {struct TableEntry* symbol = insert($1, 0, 0, 0, 0); if (symbol==NULL) YYERROR; else $$ = identifier_node(symbol);}
           | IDENTIFIER ASSIGNOP assign_expression      { struct TableEntry* symbol = insert($1, 0, 1, 0, 0); 
                                                          if (symbol==NULL) YYERROR; else $$ = operation_node(ASSIGN_OP, identifier_node(symbol), $3);
                                                          if ($$ == NULL) YYERROR; }
           ;
       

    data_type:    INT
                | FLOAT
                | CHAR
                | BOOL
                | STRING
                | VOID
                ; 
 
    enum_declaration: ENUM IDENTIFIER LCURLY enum_values RCURLY SEMICOLON
                    ;

    enum_values: IDENTIFIER
             | IDENTIFIER ASSIGNOP literal
             | enum_values COMMA IDENTIFIER
             | enum_values COMMA IDENTIFIER ASSIGNOP literal                         
             ; 

    function_declaration: function_siganture block_statement
                        ;

    function_siganture: data_type IDENTIFIER LPAREN parameter_list RPAREN
                      ;

    

    
    parameter_list: 
                  | parameter_declaration
                  | parameter_declaration COMMA parameter_list
                  ;
                
    parameter_declaration: data_type IDENTIFIER
                        | CONST data_type IDENTIFIER
                        ;


    variable_declaration_list:    variable_declaration           
                                | variable_declaration_list variable_declaration
                                ;



    
    if_statement: matched_if_statement                                                      
                | unmatched_if_statement                                            {printf("unmatched if statement match\n");}
                ;

    matched_if_statement: IF LPAREN expression RPAREN matched_if_statement ELSE matched_if_statement
                        | block_statement
                        ;

    unmatched_if_statement: IF LPAREN expression RPAREN block_statement
                            | IF LPAREN expression RPAREN matched_if_statement ELSE unmatched_if_statement
                            ;

    switch_statement: SWITCH LPAREN expression RPAREN LCURLY case_list RCURLY        {printf("switch statement match\n");} 
                    ;
                
    case_statement: CASE expression COLON statement_list                            {printf("case statement match\n");}
                ;   
    default_statement: DEFAULT COLON statement_list                                 {printf("default statement match\n");}
                    ;                          

    case_list: case_list case_statement
            | case_list default_statement
            | case_statement
            | default_statement
            ;


    iteration_statement: WHILE LPAREN expression RPAREN block_statement     {printf("while statement match\n");}
                        | FOR LPAREN variable_declaration_list expression SEMICOLON expression RPAREN block_statement   {printf("for statement match\n");}
                        | DO block_statement WHILE LPAREN expression RPAREN SEMICOLON   {printf("do while statement match\n");}
                        ;

    function_call_statement: IDENTIFIER LPAREN function_call_expression RPAREN SEMICOLON
                            ;
    
    function_call_expression: 
                            | expression
                            ;
    
    expression:  expression COMMA assign_expression           
                | assign_expression                         {printf("expression match\n");}
                ;

    assign_expression   : IDENTIFIER ASSIGNOP assign_expression             {printf("assign_expression match\n");} 
                        | logical_or_expression
                        ;

    logical_or_expression: logical_or_expression OR logical_and_expression      {printf("logical_or_expression match\n");}
                        | logical_and_expression                     
                        ;
     
    logical_and_expression: logical_and_expression AND equality_expression     {printf("logical_and_expression match\n");}
                        | equality_expression
                        ;

    /* == */
    equality_expression: equality_expression EQ relational_expression          {printf("equality_expression match\n");}
                        | equality_expression NE relational_expression
                        | relational_expression
                        ;

    relational_expression: relational_expression LT additive_expression         {printf("LT match\n");}
                        | relational_expression GT additive_expression          {printf("GT match\n");}
                        | relational_expression LE additive_expression          {printf("LE match\n");}
                        | relational_expression GE additive_expression          {printf("GE match\n");}
                        | additive_expression
                        ;

    additive_expression: additive_expression PLUS multiplicative_expression    
                        | additive_expression SUBTRACT multiplicative_expression
                        | multiplicative_expression
                        ;
    
    multiplicative_expression: multiplicative_expression MULTIPLY prefix_expression    {printf("multiply match\n");}
                                | multiplicative_expression DIVIDE prefix_expression   {printf("divide match\n");}
                                | prefix_expression
                                ;

    prefix_expression: UNARYADD prefix_expression      {printf("unary add prefix match\n");}
                    | UNARYSUB prefix_expression       {printf("unary sub prefix match\n");}
                    | postfix_expression
                    ;
    
    postfix_expression: postfix_expression UNARYADD      {printf("unary add postfix match\n");}
                        | postfix_expression UNARYSUB    {printf("unary sub postfix match\n");}
                        | primary_expression
                        ;

    primary_expression: IDENTIFIER                  {printf("identifier from expression match\n");}
                        | literal

    literal                 : FALSE                     {             }        
                            | TRUE                      {printf("true match\n");}                            
                            | INT_LITERAL                         
                            | FLOAT_LITERAL                     
                            | CHARACTER_LITERAL          {printf("character literal match\n");}                          
                            ;

    %%
    int yyerror(char *s) {
        printf("syntax error on line %d: %s\n", yylineno, s);
        return 0;
    }


    int yywrap(){
        return 1;
    }
    
    int main(void){
    //    #ifdef YYDEBUG
    //         yydebug = 1;
    //     #endif 
       FILE* input = fopen("inputfile.txt", "r"); // open input file
       if (input == NULL) {
        perror("Error opening input file");
        return 1;
       }

       yyin = input; // use input file as input stream

       yyparse(); // parse the input

       fclose(input); // close the input file

       return 0;
    }
   



