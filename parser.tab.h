/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PRINTF = 258,                  /* PRINTF  */
    SCANF = 259,                   /* SCANF  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    CHAR = 262,                    /* CHAR  */
    BOOL = 263,                    /* BOOL  */
    STRING = 264,                  /* STRING  */
    VOID = 265,                    /* VOID  */
    CONST = 266,                   /* CONST  */
    FOR = 267,                     /* FOR  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    SWITCH = 270,                  /* SWITCH  */
    WHILE = 271,                   /* WHILE  */
    DO = 272,                      /* DO  */
    CASE = 273,                    /* CASE  */
    CONTINUE = 274,                /* CONTINUE  */
    BREAK = 275,                   /* BREAK  */
    DEFAULT = 276,                 /* DEFAULT  */
    REPEAT = 277,                  /* REPEAT  */
    UNTIL = 278,                   /* UNTIL  */
    PLUS = 279,                    /* PLUS  */
    MULTIPLY = 280,                /* MULTIPLY  */
    DIVIDE = 281,                  /* DIVIDE  */
    SUBTRACT = 282,                /* SUBTRACT  */
    UNARYADD = 283,                /* UNARYADD  */
    UNARYSUB = 284,                /* UNARYSUB  */
    NOT = 285,                     /* NOT  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    GT = 290,                      /* GT  */
    LT = 291,                      /* LT  */
    AND = 292,                     /* AND  */
    OR = 293,                      /* OR  */
    ASSIGNOP = 294,                /* ASSIGNOP  */
    SEMICOLON = 295,               /* SEMICOLON  */
    COLON = 296,                   /* COLON  */
    COMMA = 297,                   /* COMMA  */
    LCURLY = 298,                  /* LCURLY  */
    RCURLY = 299,                  /* RCURLY  */
    LPAREN = 300,                  /* LPAREN  */
    RPAREN = 301,                  /* RPAREN  */
    ENUM = 302,                    /* ENUM  */
    IDENTIFIER = 303,              /* IDENTIFIER  */
    RETURN = 304,                  /* RETURN  */
    INCLUDE = 305,                 /* INCLUDE  */
    END = 306,                     /* END  */
    FALSE = 307,                   /* FALSE  */
    TRUE = 308,                    /* TRUE  */
    INT_LITERAL = 309,             /* INT_LITERAL  */
    FLOAT_LITERAL = 310,           /* FLOAT_LITERAL  */
    CHARACTER_LITERAL = 311        /* CHARACTER_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

        int intValue;
        double floatValue;
        char charValue;
        _Bool boolValue;
    

#line 128 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
