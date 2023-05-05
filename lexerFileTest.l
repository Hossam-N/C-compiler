%{
    typedef enum {false,true} bool;
    #include "parser.tab.h"
    #include <stdio.h>
    int countn=0;
%}

%option yylineno

alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"|"!"


%%
"printf"                    { printf("%s",*yytext);return PRINTF; }  //print output
"scanf"                     { return SCANF; }  //scan input
{alpha}({alpha}|{digit}|_)*   { return IDENTIFIER; }  //identifier starts with any letter not symbol or digti then
\/\/.*\\n                   {return ;}  //single line comment and ends with carriage return (comments shoulnot be returned as well as whitespaces)

"{"                         {return LCURLY;}
"}"                          {return RCURLY;}

"("                            {return LPAREN;}
")"                             {return RPAREN;}

";"                             {return SEMICOLON;}
":"                             {return COLON;}
","                             {return COMMA;}
"="                             {return ASSIGNOP;}

[-]?{digit}+                {yylval.intValue = atoi(yytext); printf("%s %d \n",*yytext,yylval);return INT_LITERAL;} //return INTVAL; 
[-]?{digit}+\.{digit}{1,3}  {yylval.floatValue = atof(yytext); return FLOAT_LITERAL; }  //PREcision of the float is 3 digits after the decimal point

\/\/.*                      { ; }  // if you want to do nothing feed ; and donot return any value
\/\*(.*\n)*.*\*\/           { ; } 

[ \t]+                      { ; }  // ignore whitespaces
[\n]                        { countn++; }
.	                    { return *yytext; }

["].*["]                    { return STRING_LITERAL; }
['].[']                     { yylval.charValue  = (yytext[0]);return CHARACTER_LITERAL; } 

"const"                     {return CONST;}
"enum"                      {return ENUM;}



%%

int yywrap(void) {
    return 1;
}

int main(void) {
    // int testInteger;
    printf("Enter the commands: ");
    // while (1){
    //     yylex();
    // }
    return 0;
}
