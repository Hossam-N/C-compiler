
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "parser.y"

        #include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<ctype.h>
        extern FILE* yyin;
        extern int yylineno;
        int yyerror(char *s);
        int yylex();
        extern char* yytext;
        extern int yyleng;
        #include "ast.h"
    

/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 20 "parser.y"

        int intValue;
        double floatValue;
        char charValue;
        bool boolValue;
    


/* Line 214 of yacc.c  */
#line 189 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    17,    19,
      22,    25,    28,    32,    34,    36,    38,    40,    44,    47,
      49,    52,    56,    61,    63,    67,    69,    73,    75,    77,
      79,    81,    83,    85,    92,    94,    98,   102,   108,   111,
     117,   118,   120,   124,   127,   131,   133,   136,   138,   140,
     148,   150,   156,   164,   172,   177,   181,   184,   187,   189,
     191,   197,   206,   214,   220,   221,   223,   227,   229,   233,
     235,   239,   241,   245,   247,   251,   255,   257,   261,   265,
     269,   273,   275,   279,   283,   285,   289,   293,   295,   298,
     301,   303,   306,   309,   311,   313,   315,   317,   319,   321,
     323
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    58,    59,    -1,     1,    40,
      -1,    73,    -1,    76,    -1,    80,    -1,    81,    -1,    19,
      40,    -1,    20,    40,    -1,    83,    40,    -1,    49,    83,
      40,    -1,    40,    -1,    68,    -1,    62,    -1,    66,    -1,
      43,    61,    44,    -1,    43,    44,    -1,    59,    -1,    61,
      59,    -1,    65,    63,    40,    -1,    11,    65,    63,    40,
      -1,    64,    -1,    63,    42,    64,    -1,    48,    -1,    48,
      39,    84,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    47,    48,    43,    67,    44,
      40,    -1,    48,    -1,    48,    39,    94,    -1,    67,    42,
      48,    -1,    67,    42,    48,    39,    94,    -1,    69,    60,
      -1,    65,    48,    45,    70,    46,    -1,    -1,    71,    -1,
      71,    42,    70,    -1,    65,    48,    -1,    11,    65,    48,
      -1,    62,    -1,    72,    62,    -1,    74,    -1,    75,    -1,
      13,    45,    83,    46,    74,    14,    74,    -1,    60,    -1,
      13,    45,    83,    46,    60,    -1,    13,    45,    83,    46,
      74,    14,    75,    -1,    15,    45,    83,    46,    43,    79,
      44,    -1,    18,    83,    41,    61,    -1,    21,    41,    61,
      -1,    79,    77,    -1,    79,    78,    -1,    77,    -1,    78,
      -1,    16,    45,    83,    46,    60,    -1,    12,    45,    72,
      83,    40,    83,    46,    60,    -1,    17,    60,    16,    45,
      83,    46,    40,    -1,    48,    45,    82,    46,    40,    -1,
      -1,    83,    -1,    83,    42,    84,    -1,    84,    -1,    48,
      39,    84,    -1,    85,    -1,    85,    38,    86,    -1,    86,
      -1,    86,    37,    87,    -1,    87,    -1,    87,    33,    88,
      -1,    87,    34,    88,    -1,    88,    -1,    88,    36,    89,
      -1,    88,    35,    89,    -1,    88,    31,    89,    -1,    88,
      32,    89,    -1,    89,    -1,    89,    24,    90,    -1,    89,
      27,    90,    -1,    90,    -1,    90,    25,    91,    -1,    90,
      26,    91,    -1,    91,    -1,    28,    91,    -1,    29,    91,
      -1,    92,    -1,    92,    28,    -1,    92,    29,    -1,    93,
      -1,    48,    -1,    94,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    71,    72,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    89,    90,    93,
      94,    97,    98,   101,   102,   105,   106,   109,   110,   111,
     112,   113,   114,   117,   120,   121,   122,   123,   126,   129,
     132,   133,   134,   137,   138,   142,   143,   149,   150,   153,
     154,   157,   158,   161,   164,   166,   169,   170,   171,   172,
     176,   177,   178,   181,   184,   185,   188,   189,   192,   193,
     196,   197,   200,   201,   205,   206,   207,   210,   211,   212,
     213,   214,   217,   218,   219,   222,   223,   224,   227,   228,
     229,   232,   233,   234,   237,   238,   240,   241,   242,   243,
     244
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINTF", "SCANF", "INT", "FLOAT",
  "CHAR", "BOOL", "STRING", "VOID", "CONST", "FOR", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "CASE", "CONTINUE", "BREAK", "DEFAULT", "REPEAT", "UNTIL",
  "PLUS", "MULTIPLY", "DIVIDE", "SUBTRACT", "UNARYADD", "UNARYSUB", "NOT",
  "LE", "GE", "EQ", "NE", "GT", "LT", "AND", "OR", "ASSIGNOP", "SEMICOLON",
  "COLON", "COMMA", "LCURLY", "RCURLY", "LPAREN", "RPAREN", "ENUM",
  "IDENTIFIER", "RETURN", "INCLUDE", "END", "FALSE", "TRUE", "INT_LITERAL",
  "FLOAT_LITERAL", "CHARACTER_LITERAL", "$accept", "program", "statement",
  "block_statement", "statement_list", "variable_declaration",
  "variable_list", "variable", "data_type", "enum_declaration",
  "enum_values", "function_declaration", "function_siganture",
  "parameter_list", "parameter_declaration", "variable_declaration_list",
  "if_statement", "matched_if_statement", "unmatched_if_statement",
  "switch_statement", "case_statement", "default_statement", "case_list",
  "iteration_statement", "function_call_statement",
  "function_call_expression", "expression", "assign_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "prefix_expression", "postfix_expression",
  "primary_expression", "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    67,    67,    67,    67,    68,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    77,    78,    79,    79,    79,    79,
      80,    80,    80,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     1,     1,     3,     2,     1,
       2,     3,     4,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     5,     2,     5,
       0,     1,     3,     2,     3,     1,     2,     1,     1,     7,
       1,     5,     7,     7,     4,     3,     2,     2,     1,     1,
       5,     8,     7,     5,     0,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    94,     0,    96,    97,    98,    99,   100,     0,     2,
      50,    15,     0,    16,    14,     0,     5,    47,    48,     6,
       7,     8,     0,    67,    69,    71,    73,    76,    81,    84,
      87,    90,    93,    95,     4,     0,     0,     0,     0,     0,
       0,     9,    10,    94,    88,    89,    18,    19,     0,     0,
       0,    64,    94,     0,     1,     3,    25,     0,    23,    38,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    25,     0,    45,     0,
       0,     0,     0,     0,     0,    17,    20,     0,    68,     0,
      65,    12,     0,    40,    21,     0,    66,    70,    72,    74,
      75,    79,    80,    78,    77,    82,    83,    85,    86,    22,
      46,     0,     0,     0,     0,     0,    34,     0,     0,    26,
       0,     0,     0,    41,    24,     0,     0,    51,     0,     0,
      60,     0,     0,     0,     0,    63,     0,    43,    39,    40,
       0,     0,     0,     0,     0,    58,    59,     0,     0,    35,
      36,    33,    44,    42,     0,     0,    49,    52,     0,     0,
      53,    56,    57,    62,     0,    61,     0,     0,    55,    37,
       0,    54,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    67,    30,    68,    31,    77,    78,    32,    33,
     137,    34,    35,   142,   143,   100,    36,    37,    38,    39,
     165,   166,   167,    40,    41,   109,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -161
static const yytype_int16 yypact[] =
{
     214,   -32,  -161,  -161,  -161,  -161,  -161,  -161,   122,   -24,
     -16,    -1,    12,    48,    40,    58,    17,    17,  -161,   266,
      57,   -13,    47,  -161,  -161,  -161,  -161,  -161,   158,  -161,
    -161,  -161,    70,  -161,  -161,    48,  -161,  -161,  -161,  -161,
    -161,  -161,    37,  -161,    86,    96,    33,    61,     6,   154,
    -161,   153,  -161,  -161,  -161,    92,    79,    47,    47,    47,
     130,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   318,   113,
      47,    47,   121,    64,  -161,  -161,    -8,   112,  -161,  -161,
    -161,    47,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,  -161,  -161,   133,   115,  -161,    92,
       7,     1,    32,    73,   131,  -161,  -161,   137,  -161,   148,
     155,  -161,    47,   103,  -161,    92,  -161,    96,    33,    61,
      61,     6,     6,     6,     6,   154,   154,  -161,  -161,  -161,
    -161,   119,    -2,   152,    48,    47,   157,    81,   159,  -161,
     122,   156,   162,   160,  -161,    47,   164,   186,   189,    35,
    -161,    75,    83,   168,   177,  -161,   170,  -161,  -161,   103,
      99,    47,    11,    47,   187,  -161,  -161,     4,   192,  -161,
     196,  -161,  -161,  -161,    48,   101,  -161,  -161,   142,   370,
    -161,  -161,  -161,  -161,    83,  -161,    -2,   370,   370,  -161,
     222,   370,    -2
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,     0,   -12,  -160,   -51,   182,   123,    -6,  -161,
    -161,  -161,  -161,    80,  -161,  -161,  -161,  -128,    78,  -161,
      74,    77,  -161,  -161,  -161,  -161,   -19,   -61,  -161,   163,
     165,   105,    62,   102,   -10,  -161,  -161,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -51
static const yytype_int16 yytable[] =
{
      29,    60,    55,    73,   148,    98,    64,    65,    54,   108,
     169,   146,     2,     3,     4,     5,     6,     7,     8,   188,
     116,    56,   163,    79,    10,   164,    70,   191,    75,    57,
      90,   112,    71,    91,   176,    16,    17,   113,   101,   102,
     103,    19,   189,    81,    58,    16,    17,   132,   180,   130,
      99,   139,   110,   163,    19,    72,   164,    59,   190,    23,
      24,    25,    26,    27,   176,    63,    84,    85,   106,    23,
      24,    25,    26,    27,    81,    16,    17,    80,   133,    81,
      61,   131,   127,   128,     2,     3,     4,     5,     6,     7,
       8,    19,    86,    87,    99,    72,    88,    89,    62,    23,
      24,    25,    26,    27,   111,    69,    81,   141,     2,     3,
       4,     5,     6,     7,   140,    81,   151,    81,    76,   134,
     147,   168,   150,   153,    82,   154,   160,     2,     3,     4,
       5,     6,     7,    83,   156,    23,    24,    25,    26,    27,
      96,    81,   175,    81,   178,   174,   104,   186,   121,   122,
     123,   124,   114,   141,   115,   129,   107,   115,    74,   145,
      70,    81,   185,     2,     3,     4,     5,     6,     7,     8,
       9,    10,   112,    11,    12,    13,   135,    14,    15,    92,
      93,    94,    95,   187,    81,   136,    16,    17,   106,   119,
     120,   106,   125,   126,   138,   149,   152,    81,    18,   155,
     -50,    19,   159,   162,   157,    20,    21,    22,   158,   161,
      23,    24,    25,    26,    27,     1,   170,   171,   172,     2,
       3,     4,     5,     6,     7,     8,     9,    10,   179,    11,
      12,    13,   183,    14,    15,   184,   192,    97,   144,   173,
     177,   181,    16,    17,   182,   117,     0,     0,   118,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,     0,
       0,    20,    21,    22,     0,     0,    23,    24,    25,    26,
      27,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,    19,
      66,     0,     0,    20,    21,    22,     0,     0,    23,    24,
      25,    26,    27,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,    11,    12,    13,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    19,   105,     0,     0,    20,    21,    22,     0,     0,
      23,    24,    25,    26,    27,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,    11,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     0,    20,    21,    22,
       0,     0,    23,    24,    25,    26,    27
};

static const yytype_int16 yycheck[] =
{
       0,    13,     8,    22,   132,    56,    16,    17,    40,    70,
     152,    13,     5,     6,     7,     8,     9,    10,    11,   179,
      81,    45,    18,    35,    13,    21,    39,   187,    28,    45,
      24,    39,    45,    27,   162,    28,    29,    45,    57,    58,
      59,    43,   184,    42,    45,    28,    29,    46,    44,   100,
      56,   112,    71,    18,    43,    48,    21,    45,   186,    52,
      53,    54,    55,    56,   192,    48,    33,    34,    68,    52,
      53,    54,    55,    56,    42,    28,    29,    40,    46,    42,
      40,   100,    92,    93,     5,     6,     7,     8,     9,    10,
      11,    43,    31,    32,   100,    48,    35,    36,    40,    52,
      53,    54,    55,    56,    40,    48,    42,   113,     5,     6,
       7,     8,     9,    10,    11,    42,   135,    42,    48,    46,
     132,    46,   134,    42,    38,    44,   145,     5,     6,     7,
       8,     9,    10,    37,   140,    52,    53,    54,    55,    56,
      48,    42,   161,    42,   163,    46,    16,    46,    86,    87,
      88,    89,    40,   159,    42,    40,    43,    42,     0,    40,
      39,    42,   174,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    39,    15,    16,    17,    45,    19,    20,    25,
      26,    28,    29,    41,    42,    48,    28,    29,   188,    84,
      85,   191,    90,    91,    46,    43,    39,    42,    40,    40,
      14,    43,    42,    14,    48,    47,    48,    49,    46,    45,
      52,    53,    54,    55,    56,     1,    48,    40,    48,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    41,    15,
      16,    17,    40,    19,    20,    39,    14,    55,   115,   159,
     162,   167,    28,    29,   167,    82,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    52,    53,    54,    55,
      56,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    -1,    -1,    52,    53,
      54,    55,    56,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    -1,    -1,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    56,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    15,    16,    17,    19,    20,    28,    29,    40,    43,
      47,    48,    49,    52,    53,    54,    55,    56,    58,    59,
      60,    62,    65,    66,    68,    69,    73,    74,    75,    76,
      80,    81,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    40,    65,    45,    45,    45,    45,
      60,    40,    40,    48,    91,    91,    44,    59,    61,    48,
      39,    45,    48,    83,     0,    59,    48,    63,    64,    60,
      40,    42,    38,    37,    33,    34,    31,    32,    35,    36,
      24,    27,    25,    26,    28,    29,    48,    63,    62,    65,
      72,    83,    83,    83,    16,    44,    59,    43,    84,    82,
      83,    40,    39,    45,    40,    42,    84,    86,    87,    88,
      88,    89,    89,    89,    89,    90,    90,    91,    91,    40,
      62,    83,    46,    46,    46,    45,    48,    67,    46,    84,
      11,    65,    70,    71,    64,    40,    13,    60,    74,    43,
      60,    83,    39,    42,    44,    40,    65,    48,    46,    42,
      83,    45,    14,    18,    21,    77,    78,    79,    46,    94,
      48,    40,    48,    70,    46,    83,    74,    75,    83,    41,
      44,    77,    78,    40,    39,    60,    46,    41,    61,    94,
      74,    61,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {printf("entered program\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf("itreration match\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {printf("function_call_statement match\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {printf("break match\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {printf("return match\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {printf("function declaration match\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {printf("variable decalration\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {printf("enum declaration match\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {printf("block statement match\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {printf("variable declaration match\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {printf("constant variable declaration match\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {printf("identifier match\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {printf("unmatched if statement match\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {printf("switch statement match\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {printf("case statement match\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {printf("default statement match\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {printf("while statement match\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {printf("for statement match\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {printf("do while statement match\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {printf("expression match\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {printf("assign_expression match\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {printf("logical_or_expression match\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {printf("logical_and_expression match\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {printf("equality_expression match\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {printf("LT match\n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {printf("GT match\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {printf("LE match\n");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {printf("GE match\n");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {printf("multiply match\n");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {printf("divide match\n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {printf("unary add prefix match\n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {printf("unary sub prefix match\n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {printf("unary add postfix match\n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {printf("unary sub postfix match\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    {printf("identifier from expression match\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {printf("true match\n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {printf("character literal match\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1885 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 247 "parser.y"

    int yyerror(char *s) {
        printf("syntax error on line %d: %s\n", yylineno, s);
        return 0;
    }


    int yywrap(){
        return 1;
    }
    
    
   




