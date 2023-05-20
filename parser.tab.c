/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "parser.y"

        #include "symbol_table.h"
        #include "ast.h"
        #include<stdio.h>
        #include<string.h>
        #include<stdlib.h>
        #include<ctype.h>
        extern FILE* yyin;
        extern int yylineno;
        int yyerror(char *s);
        int yywrap();
        int yylex();
        
        
    

#line 88 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PRINTF = 3,                     /* PRINTF  */
  YYSYMBOL_SCANF = 4,                      /* SCANF  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_BOOL = 8,                       /* BOOL  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_SWITCH = 15,                    /* SWITCH  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_REPEAT = 22,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 23,                     /* UNTIL  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MULTIPLY = 25,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 26,                    /* DIVIDE  */
  YYSYMBOL_SUBTRACT = 27,                  /* SUBTRACT  */
  YYSYMBOL_UNARYADD = 28,                  /* UNARYADD  */
  YYSYMBOL_UNARYSUB = 29,                  /* UNARYSUB  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NE = 34,                        /* NE  */
  YYSYMBOL_GT = 35,                        /* GT  */
  YYSYMBOL_LT = 36,                        /* LT  */
  YYSYMBOL_AND = 37,                       /* AND  */
  YYSYMBOL_OR = 38,                        /* OR  */
  YYSYMBOL_ASSIGNOP = 39,                  /* ASSIGNOP  */
  YYSYMBOL_SEMICOLON = 40,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_LCURLY = 43,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 44,                    /* RCURLY  */
  YYSYMBOL_LPAREN = 45,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 46,                    /* RPAREN  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_IDENTIFIER = 48,                /* IDENTIFIER  */
  YYSYMBOL_RETURN = 49,                    /* RETURN  */
  YYSYMBOL_INCLUDE = 50,                   /* INCLUDE  */
  YYSYMBOL_END = 51,                       /* END  */
  YYSYMBOL_FALSE = 52,                     /* FALSE  */
  YYSYMBOL_TRUE = 53,                      /* TRUE  */
  YYSYMBOL_INT_LITERAL = 54,               /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 55,             /* FLOAT_LITERAL  */
  YYSYMBOL_CHARACTER_LITERAL = 56,         /* CHARACTER_LITERAL  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_block_statement = 60,           /* block_statement  */
  YYSYMBOL_statement_list = 61,            /* statement_list  */
  YYSYMBOL_variable_declaration = 62,      /* variable_declaration  */
  YYSYMBOL_variable_list = 63,             /* variable_list  */
  YYSYMBOL_variable = 64,                  /* variable  */
  YYSYMBOL_data_type = 65,                 /* data_type  */
  YYSYMBOL_enum_declaration = 66,          /* enum_declaration  */
  YYSYMBOL_enum_values = 67,               /* enum_values  */
  YYSYMBOL_function_declaration = 68,      /* function_declaration  */
  YYSYMBOL_function_siganture = 69,        /* function_siganture  */
  YYSYMBOL_parameter_list = 70,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 71,     /* parameter_declaration  */
  YYSYMBOL_variable_declaration_list = 72, /* variable_declaration_list  */
  YYSYMBOL_if_statement = 73,              /* if_statement  */
  YYSYMBOL_matched_if_statement = 74,      /* matched_if_statement  */
  YYSYMBOL_unmatched_if_statement = 75,    /* unmatched_if_statement  */
  YYSYMBOL_switch_statement = 76,          /* switch_statement  */
  YYSYMBOL_case_statement = 77,            /* case_statement  */
  YYSYMBOL_default_statement = 78,         /* default_statement  */
  YYSYMBOL_case_list = 79,                 /* case_list  */
  YYSYMBOL_iteration_statement = 80,       /* iteration_statement  */
  YYSYMBOL_function_call_statement = 81,   /* function_call_statement  */
  YYSYMBOL_function_call_expression = 82,  /* function_call_expression  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_assign_expression = 84,         /* assign_expression  */
  YYSYMBOL_logical_or_expression = 85,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 86,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 87,       /* equality_expression  */
  YYSYMBOL_relational_expression = 88,     /* relational_expression  */
  YYSYMBOL_additive_expression = 89,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 90, /* multiplicative_expression  */
  YYSYMBOL_prefix_expression = 91,         /* prefix_expression  */
  YYSYMBOL_postfix_expression = 92,        /* postfix_expression  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_literal = 94                    /* literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    90,    91,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   108,   109,   112,
     113,   116,   117,   120,   121,   124,   125,   131,   132,   133,
     134,   135,   136,   139,   142,   143,   144,   145,   148,   151,
     157,   158,   159,   162,   163,   167,   168,   174,   175,   178,
     179,   182,   183,   186,   189,   191,   194,   195,   196,   197,
     201,   202,   203,   206,   209,   210,   213,   214,   217,   218,
     221,   222,   225,   226,   230,   231,   232,   235,   236,   237,
     238,   239,   242,   243,   244,   247,   248,   249,   252,   253,
     254,   257,   258,   259,   262,   263,   265,   266,   267,   268,
     269
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PRINTF", "SCANF",
  "INT", "FLOAT", "CHAR", "BOOL", "STRING", "VOID", "CONST", "FOR", "IF",
  "ELSE", "SWITCH", "WHILE", "DO", "CASE", "CONTINUE", "BREAK", "DEFAULT",
  "REPEAT", "UNTIL", "PLUS", "MULTIPLY", "DIVIDE", "SUBTRACT", "UNARYADD",
  "UNARYSUB", "NOT", "LE", "GE", "EQ", "NE", "GT", "LT", "AND", "OR",
  "ASSIGNOP", "SEMICOLON", "COLON", "COMMA", "LCURLY", "RCURLY", "LPAREN",
  "RPAREN", "ENUM", "IDENTIFIER", "RETURN", "INCLUDE", "END", "FALSE",
  "TRUE", "INT_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL", "$accept",
  "program", "statement", "block_statement", "statement_list",
  "variable_declaration", "variable_list", "variable", "data_type",
  "enum_declaration", "enum_values", "function_declaration",
  "function_siganture", "parameter_list", "parameter_declaration",
  "variable_declaration_list", "if_statement", "matched_if_statement",
  "unmatched_if_statement", "switch_statement", "case_statement",
  "default_statement", "case_list", "iteration_statement",
  "function_call_statement", "function_call_expression", "expression",
  "assign_expression", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "prefix_expression", "postfix_expression",
  "primary_expression", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,     0,   -12,  -160,   -51,   182,   123,    -6,  -161,
    -161,  -161,  -161,    80,  -161,  -161,  -161,  -128,    78,  -161,
      74,    77,  -161,  -161,  -161,  -161,   -19,   -61,  -161,   163,
     165,   105,    62,   102,   -10,  -161,  -161,  -142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    28,    67,    30,    68,    31,    77,    78,    32,    33,
     137,    34,    35,   142,   143,   100,    36,    37,    38,    39,
     165,   166,   167,    40,    41,   109,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: statement  */
#line 89 "parser.y"
                                                                {appendProgram((yyvsp[0].nodeP));}
#line 1356 "parser.tab.c"
    break;

  case 3: /* program: program statement  */
#line 90 "parser.y"
                                                                {appendProgram((yyvsp[0].nodeP));}
#line 1362 "parser.tab.c"
    break;

  case 4: /* program: error SEMICOLON  */
#line 91 "parser.y"
                                                                {yyerror("error in program");}
#line 1368 "parser.tab.c"
    break;

  case 7: /* statement: iteration_statement  */
#line 96 "parser.y"
                                                            {printf("itreration match\n");}
#line 1374 "parser.tab.c"
    break;

  case 8: /* statement: function_call_statement  */
#line 97 "parser.y"
                                                            {printf("function_call_statement match\n");}
#line 1380 "parser.tab.c"
    break;

  case 10: /* statement: BREAK SEMICOLON  */
#line 99 "parser.y"
                                                             {printf("break match\n");}
#line 1386 "parser.tab.c"
    break;

  case 12: /* statement: RETURN expression SEMICOLON  */
#line 101 "parser.y"
                                                             {printf("return match\n");}
#line 1392 "parser.tab.c"
    break;

  case 14: /* statement: function_declaration  */
#line 103 "parser.y"
                                                              {printf("function declaration match\n");}
#line 1398 "parser.tab.c"
    break;

  case 15: /* statement: variable_declaration  */
#line 104 "parser.y"
                                                              {;}
#line 1404 "parser.tab.c"
    break;

  case 16: /* statement: enum_declaration  */
#line 105 "parser.y"
                                                              {printf("enum declaration match\n");}
#line 1410 "parser.tab.c"
    break;

  case 17: /* block_statement: LCURLY statement_list RCURLY  */
#line 108 "parser.y"
                                                            {printf("block statement match\n");}
#line 1416 "parser.tab.c"
    break;

  case 21: /* variable_declaration: data_type variable_list SEMICOLON  */
#line 116 "parser.y"
                                                                 {printf("variable declaration match\n");}
#line 1422 "parser.tab.c"
    break;

  case 22: /* variable_declaration: CONST data_type variable_list SEMICOLON  */
#line 117 "parser.y"
                                                                      {printf("constant variable declaration match\n");}
#line 1428 "parser.tab.c"
    break;

  case 25: /* variable: IDENTIFIER  */
#line 124 "parser.y"
                                                        {struct TableEntry* symbol = insert((yyvsp[0].stringValue), 0, 0, 0, 0); if (symbol==NULL) YYERROR; else (yyval.nodeP) = identifier_node(symbol);}
#line 1434 "parser.tab.c"
    break;

  case 26: /* variable: IDENTIFIER ASSIGNOP assign_expression  */
#line 125 "parser.y"
                                                        { struct TableEntry* symbol = insert((yyvsp[-2].stringValue), 0, 1, 0, 0); 
                                                          if (symbol==NULL) YYERROR; else (yyval.nodeP) = operation_node(ASSIGN_OP, identifier_node(symbol), (yyvsp[0].nodeP));
                                                          if ((yyval.nodeP) == NULL) YYERROR; }
#line 1442 "parser.tab.c"
    break;

  case 48: /* if_statement: unmatched_if_statement  */
#line 175 "parser.y"
                                                                                    {printf("unmatched if statement match\n");}
#line 1448 "parser.tab.c"
    break;

  case 53: /* switch_statement: SWITCH LPAREN expression RPAREN LCURLY case_list RCURLY  */
#line 186 "parser.y"
                                                                                     {printf("switch statement match\n");}
#line 1454 "parser.tab.c"
    break;

  case 54: /* case_statement: CASE expression COLON statement_list  */
#line 189 "parser.y"
                                                                                    {printf("case statement match\n");}
#line 1460 "parser.tab.c"
    break;

  case 55: /* default_statement: DEFAULT COLON statement_list  */
#line 191 "parser.y"
                                                                                    {printf("default statement match\n");}
#line 1466 "parser.tab.c"
    break;

  case 60: /* iteration_statement: WHILE LPAREN expression RPAREN block_statement  */
#line 201 "parser.y"
                                                                            {printf("while statement match\n");}
#line 1472 "parser.tab.c"
    break;

  case 61: /* iteration_statement: FOR LPAREN variable_declaration_list expression SEMICOLON expression RPAREN block_statement  */
#line 202 "parser.y"
                                                                                                                        {printf("for statement match\n");}
#line 1478 "parser.tab.c"
    break;

  case 62: /* iteration_statement: DO block_statement WHILE LPAREN expression RPAREN SEMICOLON  */
#line 203 "parser.y"
                                                                                        {printf("do while statement match\n");}
#line 1484 "parser.tab.c"
    break;

  case 67: /* expression: assign_expression  */
#line 214 "parser.y"
                                                            {printf("expression match\n");}
#line 1490 "parser.tab.c"
    break;

  case 68: /* assign_expression: IDENTIFIER ASSIGNOP assign_expression  */
#line 217 "parser.y"
                                                                            {printf("assign_expression match\n");}
#line 1496 "parser.tab.c"
    break;

  case 70: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 221 "parser.y"
                                                                                {printf("logical_or_expression match\n");}
#line 1502 "parser.tab.c"
    break;

  case 72: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 225 "parser.y"
                                                                               {printf("logical_and_expression match\n");}
#line 1508 "parser.tab.c"
    break;

  case 74: /* equality_expression: equality_expression EQ relational_expression  */
#line 230 "parser.y"
                                                                               {printf("equality_expression match\n");}
#line 1514 "parser.tab.c"
    break;

  case 77: /* relational_expression: relational_expression LT additive_expression  */
#line 235 "parser.y"
                                                                                {printf("LT match\n");}
#line 1520 "parser.tab.c"
    break;

  case 78: /* relational_expression: relational_expression GT additive_expression  */
#line 236 "parser.y"
                                                                                {printf("GT match\n");}
#line 1526 "parser.tab.c"
    break;

  case 79: /* relational_expression: relational_expression LE additive_expression  */
#line 237 "parser.y"
                                                                                {printf("LE match\n");}
#line 1532 "parser.tab.c"
    break;

  case 80: /* relational_expression: relational_expression GE additive_expression  */
#line 238 "parser.y"
                                                                                {printf("GE match\n");}
#line 1538 "parser.tab.c"
    break;

  case 85: /* multiplicative_expression: multiplicative_expression MULTIPLY prefix_expression  */
#line 247 "parser.y"
                                                                                       {printf("multiply match\n");}
#line 1544 "parser.tab.c"
    break;

  case 86: /* multiplicative_expression: multiplicative_expression DIVIDE prefix_expression  */
#line 248 "parser.y"
                                                                                       {printf("divide match\n");}
#line 1550 "parser.tab.c"
    break;

  case 88: /* prefix_expression: UNARYADD prefix_expression  */
#line 252 "parser.y"
                                                       {printf("unary add prefix match\n");}
#line 1556 "parser.tab.c"
    break;

  case 89: /* prefix_expression: UNARYSUB prefix_expression  */
#line 253 "parser.y"
                                                       {printf("unary sub prefix match\n");}
#line 1562 "parser.tab.c"
    break;

  case 91: /* postfix_expression: postfix_expression UNARYADD  */
#line 257 "parser.y"
                                                         {printf("unary add postfix match\n");}
#line 1568 "parser.tab.c"
    break;

  case 92: /* postfix_expression: postfix_expression UNARYSUB  */
#line 258 "parser.y"
                                                         {printf("unary sub postfix match\n");}
#line 1574 "parser.tab.c"
    break;

  case 94: /* primary_expression: IDENTIFIER  */
#line 262 "parser.y"
                                                    {printf("identifier from expression match\n");}
#line 1580 "parser.tab.c"
    break;

  case 96: /* literal: FALSE  */
#line 265 "parser.y"
                                                        {             }
#line 1586 "parser.tab.c"
    break;

  case 97: /* literal: TRUE  */
#line 266 "parser.y"
                                                        {printf("true match\n");}
#line 1592 "parser.tab.c"
    break;

  case 100: /* literal: CHARACTER_LITERAL  */
#line 269 "parser.y"
                                                         {printf("character literal match\n");}
#line 1598 "parser.tab.c"
    break;


#line 1602 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 272 "parser.y"

    int yyerror(char *s) {
        printf("syntax error on line %d: %s\n", yylineno, s);
        return 0;
    }


    int yywrap(){
        return 1;
    }
    
    int main(void){
    //    #ifdef YYDEBUG
    //         yydebug = 1;
    //     #endif 
       FILE* input = fopen("inputfile.txt", "r"); // open input file
       if (input == NULL) {
        perror("Error opening input file");
        return 1;
       }

       yyin = input; // use input file as input stream

       yyparse(); // parse the input

       fclose(input); // close the input file

       return 0;
    }
   



