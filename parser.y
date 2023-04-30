
    %{
        #include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<ctype.h>
        
        void yyerror(char *s);
    %}



    /* values */
    %token CHARACTER FLOATNUM TRUE FALSE
 

    %token NUMBER
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

    

 
    %%     
   

    program: declarations
             | program declarations
             ;

    declarations: function_declaration
             | variable_declaration
             | enum_declaration
             ; 

    enum_declaration: ENUM IDENTIFIER LCURLY enum_values RCURLY SEMICOLON
                    ;
    enum_values: IDENTIFIER
             | IDENTIFIER ASSIGNOP NUMBER
             | enum_values COMMA IDENTIFIER
             | enum_values COMMA IDENTIFIER ASSIGNOP NUMBER                         
             ;          
    function_declaration: function_siganture function_body
                        ;

    function_siganture: data_type IDENTIFIER LPAREN parameter_list RPAREN
                      ;


    function_body: LCURLY variable_declaration_list statement_list RCURLY
                ;
    
    parameter_list: VOID
                  | parameter_declaration
                  | parameter_declaration COMMA parameter_list
                  ;
    parameter_declaration: data_type IDENTIFIER
                          ;
    
    variable_declaration: data_type variable_list SEMICOLON     
                        ;
    variable_list: variable
                  | variable_list COMMA variable
    variable: IDENTIFIER
           | IDENTIFIER ASSIGNOP expression   
           ;
    data_type: INT
             | FLOAT
             | CHAR
             | BOOL
             | STRING
             ;   
    statement : assignment_statement
          | if_statement
          | while_statement
          | for_statement
          | repeat_until_statement
          | switch_statement
          | function_call_statement
          | block_statement
          | CONTINUE SEMICOLON
          | BREAK SEMICOLON
          | RETURN expression SEMICOLON
          | SEMICOLON
          ;
    assignment_statement : variable ASSIGNOP expression SEMICOLON
                     ;     
                             
    %%
    void yyerror(char *s) {
        printf(stderr, "Error: %s\n", s);
    }


    int yywrap(){

        return 1;
    }

    int main(void){
       printf("enter an expressiom :");
       yyparse();
       return 0;
    }


