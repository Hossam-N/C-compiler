%{
    #include "parser.tab.h"
    #include <stdio.h>
    int countn=0;
%}

%option yylineno

alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"


%%

"printf"                    { printf("%s",yytext);}


[-]?{digit}+                {yylval = atoi(yytext); return NUMBER;}
[-]?{digit}+\.{digit}{1,3}  {yylval = atof(yytext); return FLOATNUM;}
"+"                         { return PLUS; }
"="                         { ;}
[ \t\n]+                     ;
"End"                       {return END;}
.                           {printf("error");}  
%%


