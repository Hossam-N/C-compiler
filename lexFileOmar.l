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
"printf"                    { printf("print"); r}  //print output
"scanf"                     {  printf("scan");}  //scan input
"enum"                      {printf("enum matched");}
"string"                    {printf("string matched");}
"int"                       { printf("int matched"); }
"float"                     { printf("float matched"); }
"char"                      { printf("char matched"); }
"void"                      { printf("void matched"); }
"return"                    { printf("return matched"); }
"if"	                    { printf("if matched"); }
"else"	                    { printf("else matched"); }
"switch"                    {printf("switch matched");}
"default"                   {printf("default matched");}
"case"                      {printf("case matched");}

"true"                      { printf("true matched"); }  // BOOLEAN VALUES
"false"                     { printf("false matched"); }  // if wrong means false
"for"	                    { printf("for matched"); }
"while"                     {printf("while matched");}
"repeat"                    {printf("repeat matched");}
"until"                     {printf("until matched");}
"do"                        {printf("do matched");}
"++"                        { printf("++ matched"); }
"--"                        { printf("-- matched"); }
"<="                        { printf("<= matched"); }
">="                        {printf(">= matched"); }
"=="                        { printf("== matched");}
"!="                        { printf("!= matched"); }
">"	                    { printf("> matched");}
"<"	                    { printf("< matched"); }
"&&"	                    { printf("&& matched"); }
"||"	                    { printf("|| matched"); }
"+"                         { printf("+ matched"); }
"-"                         {printf("- matched"); }
"/"                         {printf("/ matched"); }
"*"                         { printf("* matched"); }

"{"                         {printf("{ matched");}
"}"                          {printf("} matched");}

"("                            {printf("( matched");}
")"                             {printf(") matched");}

";"                             {printf("; matched");}
":"                             {printf(": matched");}
","                             {printf(", matched");}
"="                             {printf("= matched");}

{alpha}({alpha}|{digit}|_)*   {printf("Identifier matched"); }  //identifier starts with any letter not symbol or digti then
[-]?{digit}+                {printf("number matched");} //return INTVAL; 
[-]?{digit}+\.{digit}{1,8}  {printf("float matched");}  //PREcision of the float is 3 digits after the decimal point
['][a-zA-z]?[']             { printf("char matched"); }



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