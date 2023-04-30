
    %{
        #include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<ctype.h>
        
        void yyerror(char *s);
    %}


    %union 
    {
        int intValue;
        double floatValue;
        char charValue;
        _Bool boolValue;
    }

    /* printf and scanf*/
    %token  PRINTFF SCANFF

    /* datatypes */
    %token  INT FLOAT CHAR BOOL STRING VOID

    /* Body */
    %token  FOR IF ELSE SWITCH WHILE DO CASE CONTINUE BREAK DEFAULT 

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

    
    /* values */
    %token <boolValue>FALSE <boolValue>TRUE <intValue>INT_LITERAL <floatValue>FLOAT_LITERAL <charValue>CHARACTER_LITERAL

 
    %%     
   

    program: statement
             | program statement
             ;

    statement:    if_statement                              {printf("if statement match");}
                | switch_statement                          {printf("switch match");}    
                | iteration_statement                       {printf("itreration match");} 
                | function_call_statement                   {printf("function_call_statement match");}
                | CONTINUE SEMICOLON                        
                | BREAK SEMICOLON
                | expression SEMICOLON
                | RETURN expression SEMICOLON
                | SEMICOLON
                | function_declaration
                | variable_declaration
                | enum_declaration
                ;

    block_statement: LCURLY statement_list RCURLY
                    | LCURLY RCURLY
                    ;

    statement_list:   statement
                    | statement_list statement
                    ;   

    variable_declaration: data_type variable_list SEMICOLON     
                        ;

    variable_list: variable
                  | variable_list COMMA variable
                  ;

    variable: IDENTIFIER
           | IDENTIFIER ASSIGNOP assign_expression   
           ;

    data_type:    INT
                | FLOAT
                | CHAR
                | BOOL
                | STRING
                ;  


    enum_declaration: ENUM IDENTIFIER LCURLY enum_values RCURLY SEMICOLON
                    ;

    enum_values: IDENTIFIER
             | IDENTIFIER ASSIGNOP literal
             | enum_values COMMA IDENTIFIER
             | enum_values COMMA IDENTIFIER ASSIGNOP literal                         
             ; 

    function_declaration: function_siganture function_body
                        ;

    function_siganture: data_type IDENTIFIER LPAREN parameter_list RPAREN
                      ;


    function_body: LCURLY block_statement RCURLY
                ;
    
    parameter_list: VOID
                  | parameter_declaration
                  | parameter_declaration COMMA parameter_list
                  ;

    parameter_declaration: data_type IDENTIFIER
                          ;


    variable_declaration_list:    variable_declaration
                                | variable_declaration_list variable_declaration
                                ;



    
    if_statement: matched_if_statement
                | unmatched_if_statement
                ;

    matched_if_statement: IF LPAREN expression RPAREN matched_if_statement ELSE matched_if_statement
                        | block_statement
                        ;

    unmatched_if_statement: IF LPAREN expression RPAREN block_statement
                            | IF LPAREN expression RPAREN matched_if_statement ELSE unmatched_if_statement
                            ;

    switch_statement: SWITCH LPAREN expression RPAREN LCURLY case_list RCURLY
                
    case_statement: CASE expression COLON statement_list ;
    default_statement: DEFAULT COLON statement_list ;

    case_list: case_list case_statement
            | case_list default_statement
            | case_statement
            | default_statement
            ;


    iteration_statement: WHILE LPAREN expression RPAREN block_statement
                        | FOR LPAREN variable_declaration_list SEMICOLON expression SEMICOLON expression RPAREN block_statement 
                        | DO block_statement WHILE LPAREN expression RPAREN SEMICOLON
                        ;

    function_call_statement: IDENTIFIER LPAREN parameter_list RPAREN SEMICOLON
                            ;
    
    expression:  expression COMMA assign_expression
                | assign_expression 
                ;

    assign_expression   : IDENTIFIER ASSIGNOP assign_expression              
                        | logical_or_expression
                        ;

    logical_or_expression: logical_or_expression OR logical_and_expression    
                        | logical_and_expression
                        ;
    
    logical_and_expression: logical_and_expression AND equality_expression    
                        | equality_expression
                        ;

    /* == */
    equality_expression: equality_expression EQ relational_expression    
                        | equality_expression NE relational_expression
                        | relational_expression
                        ;

    relational_expression: relational_expression LT additive_expression    
                        | relational_expression GT additive_expression
                        | relational_expression LE additive_expression
                        | relational_expression GE additive_expression
                        | additive_expression
                        ;

    additive_expression: additive_expression PLUS multiplicative_expression    
                        | additive_expression SUBTRACT multiplicative_expression
                        | multiplicative_expression
                        ;
    
    multiplicative_expression: multiplicative_expression MULTIPLY prefix_expression
                                | multiplicative_expression DIVIDE prefix_expression
                                | prefix_expression
                                ;

    prefix_expression: UNARYADD prefix_expression
                    | UNARYSUB prefix_expression
                    | postfix_expression
                    ;
    
    postfix_expression: postfix_expression UNARYADD
                        | postfix_expression UNARYSUB
                        | primary_expression
                        ;

    primary_expression: IDENTIFIER
                        | literal

    literal                 : FALSE                             
                            | TRUE                             
                            | INT_LITERAL                       
                            | FLOAT_LITERAL                     
                            | CHARACTER_LITERAL                                          
                            ;

    %%
    void yyerror(char *s) {
        printf(stderr, "Error: %s\n", s);
    }


    int yywrap(){

        return 1;
    }

    int main(void){
       printf("enter an expression :");
       yyparse();
       return 0;
    }


