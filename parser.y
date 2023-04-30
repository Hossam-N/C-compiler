
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

    %token SEMICOLON COLON 

    %token LCURLY RCURLY LPAREN RPAREN 

    %token ENUM 

    %token IDENTIFIER

    %token RETURN 

    %token INCLUDE

    %token END

    %start root


    %%     
    root: expr { printf("result = %d\n", $$); return 0; }
    expr:  expr PLUS NUMBER      {printf("dakhalt aho"); $$=$1+$3}
         |NUMBER               {$$ = $1;}
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


