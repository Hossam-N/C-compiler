%{
    //#include "y.tab.h"
    #include <stdio.h>
    int countn=0;
%}

%option yylineno

alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"


%%
"printf"                    { printf("%s",*yytext);return PRINT; }  //print output
"scanf"                     { return SCAN; }  //scan input
{alpha}({alpha}|{digit}|_)*   { return IDENTIFIER; }  //identifier starts with any letter not symbol or digti then
\/\/.*\\n                   {return COMMENT;}  //single line comment and ends with carriage return

"{"                         {return LCURLY;}
"}"                          {return RCURLY;}

"("                            {return LPAR;}
")"                             {return RPAR;}

";"                             {return SEMICOLON;}
":"                             {return COLON;}
","                             {return COMMA;}
"="                             {return ASSIGNOP;}

[-]?{digit}+                {printf("%s %d \n",*yytext,yylval); yylval = atoi(yytext);return INTVAL} //return INTVAL; 
[-]?{digit}+\.{digit}{1,8}  {yylval = atof(yytext); return FLOATVAL; }  //PREcision of the float is 3 digits after the decimal point
['].[']                     { yylval  = char(yyltext);return CHARACTERVAL; }

\/\/.*                      { ; }  // if you want to do nothing feed ; and donot return any value
\/\*(.*\n)*.*\*\/           { ; } 

[ \t]+                      { ; }  // ignore whitespaces
[\n]                        { countn++; }
.	                    { return *yytext; }

["].*["]                    { return STR; }

"const"                     {return CONSTANT;}
"enum"                      {return ENUM;}
"string"                    {return STRING}
"int"                       { return INT; }
"float"                     { return FLOAT; }
"char"                      { return CHAR; }
"void"                      { return VOID; }
"return"                    { return RETURN; }
/* conditional statement */
"if"	                    { return IF; }
"else"	                    { return ELSE; }
"switch"                    {return SWITCH;}
"default"                   {return DEFAULT;}
"case"                      {return CASE;}
^"#include"[ ]*<.+\.h>      { return INCLUDE; }
"true"                      { return TRUE; }  // BOOLEAN VALUES
"false"                     { return FALSE; }  // if wrong means false
/*  loop statements */
"for"	                    { return FOR; }
"while"                     { return WHILE;}
"repeat"                    {return REPEAT;}
"until"                     {return UNTIL;}
"do"                        {return DO;}

""
{unary}                     { return UNARY; }
"<="                        { return LE; }
">="                        { return GE; }
"=="                        { return EQ; }
"!="                        { return NE; }
">"	                    { return GT; }
"<"	                    { return LT; }
"&&"	                    { return AND; }
"||"	                    { return OR; }
"+"                         { return ADD; }
"-"                         { return SUBTRACT; }
"/"                         { return DIVIDE; }
"*"                         { return MULTIPLY; }

%%

int yywrap() {
    return 1;
}

// int main(){
//     yylex();
//     return 0;
// }