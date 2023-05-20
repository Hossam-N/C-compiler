
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* "%code requires" blocks.  */

/* Line 1676 of yacc.c  */
#line 1 "parser.y"

        #include "ast.h"
        #include <string>
        #include "symbol_table.h"
    


/* Line 1676 of yacc.c  */
#line 48 "parser.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PRINTF = 258,
     SCANF = 259,
     INT = 260,
     FLOAT = 261,
     CHAR = 262,
     BOOL = 263,
     STRING = 264,
     VOID = 265,
     CONST = 266,
     FOR = 267,
     IF = 268,
     ELSE = 269,
     SWITCH = 270,
     WHILE = 271,
     DO = 272,
     CASE = 273,
     CONTINUE = 274,
     BREAK = 275,
     DEFAULT = 276,
     REPEAT = 277,
     UNTIL = 278,
     PLUS = 279,
     MULTIPLY = 280,
     DIVIDE = 281,
     SUBTRACT = 282,
     UNARYADD = 283,
     UNARYSUB = 284,
     NOT = 285,
     LE = 286,
     GE = 287,
     EQ = 288,
     NE = 289,
     GT = 290,
     LT = 291,
     AND = 292,
     OR = 293,
     ASSIGNOP = 294,
     SEMICOLON = 295,
     COLON = 296,
     COMMA = 297,
     LCURLY = 298,
     RCURLY = 299,
     LPAREN = 300,
     RPAREN = 301,
     ENUM = 302,
     IDENTIFIER = 303,
     RETURN = 304,
     INCLUDE = 305,
     END = 306,
     FALSE = 307,
     TRUE = 308,
     INT_LITERAL = 309,
     FLOAT_LITERAL = 310,
     CHARACTER_LITERAL = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 30 "parser.y"

        int intValue;
        double floatValue;
        char charValue;
        bool boolValue;
        char* stringValue;
        AST_Node* nodeP;
        enum DATA_T* enumPointer;
        int enumValue;
    


/* Line 1676 of yacc.c  */
#line 134 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


