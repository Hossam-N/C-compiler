%{
    //#include "y.tab.h"
    #include "parser.tab.h"
    #include <stdio.h>
    int countn=0;
%}


%option yylineno

alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"


%%
"printf"                    { printf("print"); return PRINTF;}  //print output
"scanf"                     {  printf("scan"); return SCANF;}  //scan input
"enum"                      {printf("enum matched"); return ENUM;}
"string"                    {printf("string matched"); return STRING;}
"int"                       { printf("int matched"); return INT;}
"float"                     { printf("float matched"); return FLOAT; }
"char"                      { printf("char matched"); return CHAR; }
"void"                      { printf("void matched"); return VOID; }
"return"                    { printf("return matched"); return RETURN; }
"if"	                    { printf("if matched"); return IF; }
"else"	                    { printf("else matched"); return ELSE; }
"switch"                    {printf("switch matched"); return SWITCH;}
"default"                   {printf("default matched"); return DEFAULT;}
"case"                      {printf("case matched"); return CASE;}

"true"                      { printf("true matched"); return TRUE; }  // BOOLEAN VALUES
"false"                     { printf("false matched"); return FALSE; }  // if wrong means false
"for"	                    { printf("for matched"); return FOR; }
"while"                     {printf("while matched"); return WHILE;}
"repeat"                    {printf("repeat matched"); return REPEAT;}
"until"                     {printf("until matched"); return UNTIL;}
"do"                        {printf("do matched"); return DO;}
"++"                        { printf("++ matched"); return UNARYADD; }
"--"                        { printf("-- matched"); return UNARYSUB; }
"<="                        { printf("<= matched"); return LE;}
">="                        {printf(">= matched"); return GE;}
"=="                        { printf("== matched"); return EQ;}
"!="                        { printf("!= matched"); return NE;}
">"	                    { printf("> matched"); return GT;}
"<"	                    { printf("< matched"); return LT; }
"&&"	                    { printf("&& matched");  return AND;}
"||"	                    { printf("|| matched"); return OR; }
"+"                         { printf("+ matched"); return PLUS; }
"-"                         {printf("- matched"); return SUBTRACT; }
"/"                         {printf("/ matched"); return DIVIDE; }
"*"                         { printf("* matched"); return MULTIPLY; }

"{"                         {printf("{ matched"); return LCURLY;}
"}"                          {printf("} matched"); return RCURLY;}

"("                            {printf("( matched"); return LPAREN;}
")"                             {printf(") matched"); return RPAREN;}

";"                             {printf("; matched"); return SEMICOLON;}
":"                             {printf(": matched"); return COLON;}
","                             {printf(", matched"); return COMMA;}
"="                             {printf("= matched"); return ASSIGNOP;}

{alpha}({alpha}|{digit}|_)*   {printf("Identifier matched"); return IDENTIFIER;}  //identifier starts with any letter not symbol or digti then
[-]?{digit}+                {printf("number matched"); return INT_LITERAL;} //return INTVAL; 
[-]?{digit}+\.{digit}{1,8}  {printf("float matched"); return FLOAT_LITERAL;}  //PREcision of the float is 3 digits after the decimal point
['][a-zA-z]?[']             { printf("char matched"); return CHARACTER_LITERAL; }



[ \t]+                      { ; }  // ignore whitespaces
[\n]                        { countn++; }
                            

%%

    int yywrap(){
        return 1;
    }



    int main(){
        yylex();
        return 0;
    }