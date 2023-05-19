%{
    //#include "y.tab.h"
    #include "parser.tab.h"
    #include <stdio.h>
    int countn=0;
%}


%option yylineno
%option noyywrap


alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"


%%
"printf"                    { /*printf("print");*/ return PRINTF;}  //print output
"scanf"                     {  /*printf("print");*/ return SCANF;}  //scan input
"enum"                      { /*printf("print");*/ return ENUM;}
"string"                    {/*printf("print");*/ return STRING;}
"int"                       { /*printf("print");*/ return INT;}
"float"                     { /*printf("print");*/ return FLOAT; }
"char"                      { /*printf("print");*/ return CHAR; }
"void"                      { /*printf("print");*/ return VOID; }
"const"                     { /*printf("print");*/ return CONST; }
"return"                    { /*printf("print");*/ return RETURN; }
"if"	                    { /*printf("print");*/ return IF; }
"else"	                    { /*printf("print");*/ return ELSE; }
"switch"                    { /*printf("print");*/ return SWITCH;}
"default"                   { /*printf("print");*/ return DEFAULT;}
"case"                      { /*printf("print");*/ return CASE;}

"true"                      { /*printf("print");*/ return TRUE; }  // BOOLEAN VALUES
"false"                     { /*printf("print");*/ return FALSE; }  // if wrong means false
"for"	                    { /*printf("print");*/ return FOR; }
"while"                     {/*printf("print");*/ return WHILE;}
"repeat"                    {/*printf("print");*/ return REPEAT;}
"until"                     {/*printf("print");*/ return UNTIL;}
"do"                        {/*printf("print");*/ return DO;}
"++"                        { /*printf("print");*/ return UNARYADD; }
"--"                        { /*printf("print");*/ return UNARYSUB; }
"<="                        { /*printf("print");*/ return LE;}
">="                        {/*printf("print");*/ return GE;}
"=="                        { /*printf("print");*/ return EQ;}
"!="                        { /*printf("print");*/ return NE;}
">"	                    { /*printf("print");*/ return GT;}
"<"	                    { /*printf("print");*/ return LT; }
"&&"	                    { /*printf("print");*/  return AND;}
"||"	                    { /*printf("print");*/ return OR; }
"+"                         { /*printf("print");*/ return PLUS; }
"-"                         {/*printf("print");*/ return SUBTRACT; }
"/"                         {/*printf("print");*/ return DIVIDE; }
"*"                         { /*printf("print");*/ return MULTIPLY; }

"{"                         {/*printf("print");*/ return LCURLY;}
"}"                          {/*printf("print");*/ return RCURLY;}

"("                            {/*printf("print");*/ return LPAREN;}
")"                             {/*printf("print");*/ return RPAREN;}

";"                             {/*printf("print");*/ return SEMICOLON;}
":"                             {/*printf("print");*/ return COLON;}
","                             {/*printf("print");*/ return COMMA;}
"="                             {/*printf("print");*/ return ASSIGNOP;}

{alpha}({alpha}|{digit}|_)*   {/*printf("print");*/ return IDENTIFIER;}  //identifier starts with any letter not symbol or digti then
[-]?{digit}+                {/*printf("print");*/ return INT_LITERAL;} //return INTVAL; 
[-]?{digit}+\.{digit}{1,8}  {/*printf("print");*/ return FLOAT_LITERAL;}  //PREcision of the float is 3 digits after the decimal point
['].?[']             { /*printf("print");*/ return CHARACTER_LITERAL; }



[ \t]+                      { ; }  // ignore whitespaces
[\n]                        { countn++; }
                            

%%

    // int yywrap(){
    //     return 1;
    // }



    // int main(){
    //     yylex();
    //     return 0;
    // }