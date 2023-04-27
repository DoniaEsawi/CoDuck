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
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern FILE *yyin;
    extern int lineno;
    extern int yylex();
    void yyerror();

#line 81 "parser.tab.c"

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
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 6,                     /* DOUBLE  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_BOOLEAN = 8,                    /* BOOLEAN  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_CONST_INT = 11,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 12,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 13,                /* CONST_CHAR  */
  YYSYMBOL_STRING_LITERAL = 14,            /* STRING_LITERAL  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_ELIF = 17,                      /* ELIF  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_SWITCH = 21,                    /* SWITCH  */
  YYSYMBOL_CASE = 22,                      /* CASE  */
  YYSYMBOL_DEFAULT = 23,                   /* DEFAULT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_BREAK = 25,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_TRUE = 27,                      /* TRUE  */
  YYSYMBOL_FALSE = 28,                     /* FALSE  */
  YYSYMBOL_ENUM = 29,                      /* ENUM  */
  YYSYMBOL_FUNC = 30,                      /* FUNC  */
  YYSYMBOL_UNTIL = 31,                     /* UNTIL  */
  YYSYMBOL_LEFT_PAREN = 32,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 33,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 34,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 35,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_SQ_BRACKET = 36,           /* LEFT_SQ_BRACKET  */
  YYSYMBOL_RIGHT_SQ_BRACKET = 37,          /* RIGHT_SQ_BRACKET  */
  YYSYMBOL_SEMICOLON = 38,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_QUESTION_MARK = 41,             /* QUESTION_MARK  */
  YYSYMBOL_DOT = 42,                       /* DOT  */
  YYSYMBOL_ADD_OP = 43,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 44,                    /* SUB_OP  */
  YYSYMBOL_MUL_OP = 45,                    /* MUL_OP  */
  YYSYMBOL_DIV_OP = 46,                    /* DIV_OP  */
  YYSYMBOL_MOD_OP = 47,                    /* MOD_OP  */
  YYSYMBOL_INC_OP = 48,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 49,                    /* DEC_OP  */
  YYSYMBOL_OR_OP = 50,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 51,                    /* AND_OP  */
  YYSYMBOL_NOT_OP = 52,                    /* NOT_OP  */
  YYSYMBOL_BIT_OR_OP = 53,                 /* BIT_OR_OP  */
  YYSYMBOL_AND = 54,                       /* AND  */
  YYSYMBOL_BIT_XOR_OP = 55,                /* BIT_XOR_OP  */
  YYSYMBOL_BIT_NOT_OP = 56,                /* BIT_NOT_OP  */
  YYSYMBOL_BIT_LSHIFT_OP = 57,             /* BIT_LSHIFT_OP  */
  YYSYMBOL_BIT_RSHIFT_OP = 58,             /* BIT_RSHIFT_OP  */
  YYSYMBOL_EQ_OP = 59,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 60,                     /* NE_OP  */
  YYSYMBOL_GT_OP = 61,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 62,                     /* LT_OP  */
  YYSYMBOL_GE_OP = 63,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 64,                     /* LE_OP  */
  YYSYMBOL_ASSIGN_OP = 65,                 /* ASSIGN_OP  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_type = 68,                      /* type  */
  YYSYMBOL_beforedecl = 69,                /* beforedecl  */
  YYSYMBOL_declaration = 70,               /* declaration  */
  YYSYMBOL_declarations = 71,              /* declarations  */
  YYSYMBOL_tail = 72,                      /* tail  */
  YYSYMBOL_tail_inloop = 73,               /* tail_inloop  */
  YYSYMBOL_bool_expression = 74,           /* bool_expression  */
  YYSYMBOL_assign = 75,                    /* assign  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_simpleExp = 77,                 /* simpleExp  */
  YYSYMBOL_andExp = 78,                    /* andExp  */
  YYSYMBOL_bitRelExp = 79,                 /* bitRelExp  */
  YYSYMBOL_op = 80,                        /* op  */
  YYSYMBOL_relExp = 81,                    /* relExp  */
  YYSYMBOL_bitshiftExp = 82,               /* bitshiftExp  */
  YYSYMBOL_pls_min = 83,                   /* pls_min  */
  YYSYMBOL_mul_div = 84,                   /* mul_div  */
  YYSYMBOL_sumExp = 85,                    /* sumExp  */
  YYSYMBOL_mulExp = 86,                    /* mulExp  */
  YYSYMBOL_unaryExp = 87,                  /* unaryExp  */
  YYSYMBOL_value = 88,                     /* value  */
  YYSYMBOL_else_if = 89,                   /* else_if  */
  YYSYMBOL_else = 90,                      /* else  */
  YYSYMBOL_if_statement = 91,              /* if_statement  */
  YYSYMBOL_while_statement = 92,           /* while_statement  */
  YYSYMBOL_for_statement = 93,             /* for_statement  */
  YYSYMBOL_do_statement = 94,              /* do_statement  */
  YYSYMBOL_switch_statement = 95,          /* switch_statement  */
  YYSYMBOL_cases = 96,                     /* cases  */
  YYSYMBOL_default = 97,                   /* default  */
  YYSYMBOL_case = 98,                      /* case  */
  YYSYMBOL_return_val = 99,                /* return_val  */
  YYSYMBOL_return_statement = 100,         /* return_statement  */
  YYSYMBOL_break_statement = 101,          /* break_statement  */
  YYSYMBOL_continue_statement = 102,       /* continue_statement  */
  YYSYMBOL_expression_statement = 103,     /* expression_statement  */
  YYSYMBOL_statements = 104,               /* statements  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_statement_inloop = 106,         /* statement_inloop  */
  YYSYMBOL_statements_inloop = 107,        /* statements_inloop  */
  YYSYMBOL_function = 108,                 /* function  */
  YYSYMBOL_parameters = 109,               /* parameters  */
  YYSYMBOL_parameter = 110,                /* parameter  */
  YYSYMBOL_enum = 111,                     /* enum  */
  YYSYMBOL_enum_list = 112,                /* enum_list  */
  YYSYMBOL_one_val = 113,                  /* one_val  */
  YYSYMBOL_func_call = 114,                /* func_call  */
  YYSYMBOL_arguments = 115,                /* arguments  */
  YYSYMBOL_argument = 116                  /* argument  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    27,    27,    29,    29,    29,    29,    29,
      29,    31,    31,    34,    34,    37,    37,    39,    39,    41,
      41,    43,    44,    45,    48,    50,    50,    50,    50,    51,
      51,    52,    52,    53,    53,    53,    53,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    59,    59,    59,
      61,    61,    62,    62,    62,    63,    63,    64,    64,    66,
      66,    66,    66,    66,    66,    69,    69,    69,    69,    72,
      73,    74,    76,    76,    78,    80,    82,    84,    86,    88,
      88,    88,    90,    92,    94,    94,    95,    97,    99,   101,
     103,   103,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   116,   116,   116,   117,   117,   120,   122,   122,
     122,   123,   125,   127,   127,   129,   129,   131,   131,   132,
     132,   132,   133
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "INTEGER",
  "FLOAT", "DOUBLE", "VOID", "BOOLEAN", "CHAR", "CONST", "CONST_INT",
  "CONST_FLOAT", "CONST_CHAR", "STRING_LITERAL", "IF", "ELSE", "ELIF",
  "WHILE", "FOR", "DO", "SWITCH", "CASE", "DEFAULT", "RETURN", "BREAK",
  "CONTINUE", "TRUE", "FALSE", "ENUM", "FUNC", "UNTIL", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "LEFT_SQ_BRACKET", "RIGHT_SQ_BRACKET", "SEMICOLON", "COMMA", "COLON",
  "QUESTION_MARK", "DOT", "ADD_OP", "SUB_OP", "MUL_OP", "DIV_OP", "MOD_OP",
  "INC_OP", "DEC_OP", "OR_OP", "AND_OP", "NOT_OP", "BIT_OR_OP", "AND",
  "BIT_XOR_OP", "BIT_NOT_OP", "BIT_LSHIFT_OP", "BIT_RSHIFT_OP", "EQ_OP",
  "NE_OP", "GT_OP", "LT_OP", "GE_OP", "LE_OP", "ASSIGN_OP", "$accept",
  "program", "type", "beforedecl", "declaration", "declarations", "tail",
  "tail_inloop", "bool_expression", "assign", "expression", "simpleExp",
  "andExp", "bitRelExp", "op", "relExp", "bitshiftExp", "pls_min",
  "mul_div", "sumExp", "mulExp", "unaryExp", "value", "else_if", "else",
  "if_statement", "while_statement", "for_statement", "do_statement",
  "switch_statement", "cases", "default", "case", "return_val",
  "return_statement", "break_statement", "continue_statement",
  "expression_statement", "statements", "statement", "statement_inloop",
  "statements_inloop", "function", "parameters", "parameter", "enum",
  "enum_list", "one_val", "func_call", "arguments", "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    14,    10,  -156,    16,  -156,  -156,   135,  -156,  -156,
    -156,  -156,  -156,  -156,    48,   -27,  -156,  -156,   135,   135,
      22,  -156,   344,   -16,  -156,  -156,  -156,  -156,  -156,    27,
      30,    39,   215,    58,    15,    62,    15,   516,    82,    91,
     107,   135,  -156,   204,    99,  -156,    86,    75,    85,    53,
      98,   -35,    70,    71,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,    63,  -156,  -156,  -156,    15,  -156,  -156,
     243,   118,   118,   130,   113,   114,   301,   119,  -156,  -156,
    -156,  -156,   172,    15,   -28,  -156,   116,   122,   131,   387,
    -156,  -156,  -156,   160,  -156,   133,  -156,   286,  -156,   286,
     286,   286,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     286,   286,   286,  -156,  -156,   286,  -156,  -156,  -156,   286,
    -156,  -156,   -14,  -156,    21,  -156,  -156,  -156,  -156,   132,
      98,   136,   108,   138,  -156,  -156,   258,   145,  -156,   146,
      15,  -156,   175,  -156,  -156,   -30,  -156,    85,    98,    98,
      98,   -35,    70,    70,    71,  -156,  -156,    15,    15,   344,
     215,   118,  -156,   118,   161,   129,    33,  -156,  -156,    15,
    -156,    -9,   182,  -156,   162,   169,   181,    88,  -156,   175,
     167,  -156,   174,    80,    15,   177,    15,    23,  -156,  -156,
    -156,  -156,   118,   344,   184,  -156,   186,  -156,   183,   191,
    -156,  -156,  -156,   189,  -156,   118,   215,   516,   516,   344,
     199,  -156,   430,   473,  -156,   344,   179,   200,  -156,  -156,
    -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     3,     0,     1,     2,   108,     5,     6,
       7,     8,     9,    10,     0,     0,   109,   111,     0,     0,
       0,   110,    11,    62,    12,    65,    66,    67,    68,     0,
       0,     0,    11,     0,    84,     0,     0,    11,     0,     0,
       0,     0,    15,    99,     0,    25,     0,    28,    30,    32,
      36,    46,    49,    56,    58,    63,    92,    93,    94,    95,
      96,    97,    98,    11,    90,   100,   101,   119,    26,    27,
       0,     0,     0,     0,     0,     0,    11,     0,   103,   104,
     102,   105,    11,     0,    62,    85,     0,     0,     0,    11,
      59,    60,    61,     0,    16,     0,    89,     0,    31,     0,
       0,     0,    43,    44,    37,    38,    39,    40,    42,    41,
       0,     0,     0,    50,    51,     0,    52,    53,    54,     0,
      91,   122,     0,   120,    62,    24,    62,    22,    23,     0,
      21,     0,     0,     0,    87,    88,    11,     0,   106,     0,
       0,    86,     0,    64,    18,     0,   107,    29,    33,    34,
      35,    45,    47,    48,    55,    57,   117,     0,   119,    11,
      11,     0,    20,     0,     0,   115,     0,   113,    13,     0,
     121,     0,    69,    75,     0,     0,     0,     0,   112,     0,
       0,   118,     0,    72,     0,     0,     0,     0,    79,   116,
     114,    14,     0,    11,     0,    74,     0,    77,     0,     0,
      78,    81,    80,     0,    73,     0,    11,    11,    11,    11,
       0,    76,    11,    11,    70,    11,     0,     0,    71,    83,
      82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,    -7,  -156,   194,  -156,  -155,  -151,   -70,   170,
     -31,  -156,   148,  -156,  -156,   -58,   140,  -156,  -156,     8,
     127,   134,    74,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,    61,  -156,   208,  -156,  -156,  -156,   -36,   -32,
     -75,   190,   256,  -156,   240,  -156,  -156,    81,  -156,   104,
     117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    14,    41,    42,    43,    44,    77,   129,    45,
      46,    47,    48,    49,   110,    50,    51,   115,   119,    52,
      53,    54,    55,   183,   195,    56,    57,    58,    59,    60,
     187,   201,   188,    86,    61,    78,    79,    62,    63,    64,
      81,    82,     3,    15,    16,    65,   166,   167,    66,   122,
     123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    89,   131,    85,   172,    88,    18,   138,   168,   173,
       5,    20,    19,   130,   130,     1,    67,     4,    84,   156,
      68,    69,   111,   112,   181,   157,    25,    26,    27,    28,
     157,   120,    68,    69,    93,   169,   121,   140,   204,   125,
       1,   148,   149,   150,    80,   186,   199,    36,     7,    70,
      80,    17,   139,   158,   214,   211,    22,   120,   200,    71,
     218,   138,    72,    38,    39,    87,    23,    40,   178,    68,
      69,    73,   179,    24,    25,    26,    27,    28,    29,   -17,
     -17,    30,    31,    32,    33,    90,   140,    34,   -17,   -17,
      83,   174,    35,   175,    91,    36,   193,   194,   -17,    25,
      26,    27,    28,   130,    80,   130,    99,   100,   101,   125,
      92,    38,    39,   113,   114,    40,   116,   117,   118,   152,
     153,   126,   203,    34,    96,    97,   121,   121,    80,    25,
      26,    27,    28,   132,   130,   210,    98,   137,   180,     8,
       9,    10,    11,    12,    13,   127,   128,   130,   102,   103,
      36,   134,   135,   196,   141,   198,   142,   104,   105,   106,
     107,   108,   109,   145,   143,   159,    38,    39,   146,   160,
      40,   212,   213,   140,    80,    23,   161,   163,   165,   164,
     120,   120,    24,    25,    26,    27,    28,    29,   -19,   -19,
      30,    31,    32,    33,   177,   176,    34,    74,    75,   182,
     184,    35,   185,   186,    36,   191,   192,   -19,   -11,   -11,
     -11,   -11,   -11,   -11,    24,   197,   205,   219,    23,   206,
      38,    39,   209,   207,    40,    24,    25,    26,    27,    28,
      29,   208,   215,    30,    31,    32,    33,    94,   220,    34,
      74,    75,   154,   133,    35,   147,   124,    36,   202,    76,
     151,   189,    95,   155,    25,    26,    27,    28,     6,    21,
     190,    23,   171,    38,    39,     0,   136,    40,    24,    25,
      26,    27,    28,    29,   170,    36,    30,    31,    32,    33,
       0,     0,    34,    74,    75,     0,     0,    35,     0,   126,
      36,    38,    39,   162,     0,    40,     0,    25,    26,    27,
      28,     0,     0,     0,    23,     0,    38,    39,     0,     0,
      40,    24,    25,    26,    27,    28,    29,     0,    36,    30,
      31,    32,    33,     0,     0,    34,    74,    75,     0,     0,
      35,     0,     0,    36,    38,    39,     0,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,    38,
      39,     0,     0,    40,    24,    25,    26,    27,    28,    29,
       0,     0,    30,    31,    32,    33,     0,     0,    34,     0,
       0,     0,     0,    35,     0,     0,    36,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,    38,    39,     0,     0,    40,    24,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    32,    33,     0,
       0,    34,     0,     0,     0,     0,    35,     0,     0,    36,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,    38,    39,     0,     0,    40,
      24,    25,    26,    27,    28,    29,     0,     0,    30,    31,
      32,    33,     0,     0,    34,   216,     0,     0,     0,    35,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,    38,    39,
       0,     0,    40,    24,    25,    26,    27,    28,    29,     0,
       0,    30,    31,    32,    33,     0,     0,    34,   217,     0,
       0,     0,    35,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,    38,    39,     0,     0,    40,    24,    25,    26,    27,
      28,    29,     0,     0,    30,    31,    32,    33,     0,     0,
      34,     0,     0,     0,     0,    35,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      32,    37,    72,    34,   159,    36,    33,    82,    38,   160,
       0,    18,    39,    71,    72,    30,    32,     3,     3,    33,
      48,    49,    57,    58,    33,    39,    11,    12,    13,    14,
      39,    63,    48,    49,    41,    65,    67,    65,   193,    70,
      30,    99,   100,   101,    76,    22,    23,    32,    32,    65,
      82,     3,    83,    32,   209,   206,    34,    89,    35,    32,
     215,   136,    32,    48,    49,     3,     3,    52,    35,    48,
      49,    32,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     3,    65,    24,    25,    26,
      32,   161,    29,   163,     3,    32,    16,    17,    35,    11,
      12,    13,    14,   161,   136,   163,    53,    54,    55,   140,
       3,    48,    49,    43,    44,    52,    45,    46,    47,   111,
     112,     3,   192,    24,    38,    50,   157,   158,   160,    11,
      12,    13,    14,     3,   192,   205,    51,    18,   169,     4,
       5,     6,     7,     8,     9,    27,    28,   205,    50,    51,
      32,    38,    38,   184,    38,   186,    34,    59,    60,    61,
      62,    63,    64,     3,    33,    33,    48,    49,    35,    33,
      52,   207,   208,    65,   206,     3,    38,    32,     3,    33,
     212,   213,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    65,    34,    24,    25,    26,    17,
      38,    29,    33,    22,    32,    38,    32,    35,     4,     5,
       6,     7,     8,     9,    10,    38,    32,    38,     3,    33,
      48,    49,    33,    40,    52,    10,    11,    12,    13,    14,
      15,    40,    33,    18,    19,    20,    21,    43,    38,    24,
      25,    26,   115,    73,    29,    97,     3,    32,   187,    34,
     110,   177,    44,   119,    11,    12,    13,    14,     2,    19,
     179,     3,   158,    48,    49,    -1,    76,    52,    10,    11,
      12,    13,    14,    15,   157,    32,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    -1,    29,    -1,     3,
      32,    48,    49,    35,    -1,    52,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,     3,    -1,    48,    49,    -1,    -1,
      52,    10,    11,    12,    13,    14,    15,    -1,    32,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    -1,
      29,    -1,    -1,    32,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    48,
      49,    -1,    -1,    52,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    48,    49,    -1,    -1,    52,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    48,    49,    -1,    -1,    52,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    48,    49,
      -1,    -1,    52,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    48,    49,    -1,    -1,    52,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    30,    67,   108,     3,     0,   108,    32,     4,     5,
       6,     7,     8,     9,    68,   109,   110,     3,    33,    39,
      68,   110,    34,     3,    10,    11,    12,    13,    14,    15,
      18,    19,    20,    21,    24,    29,    32,    34,    48,    49,
      52,    69,    70,    71,    72,    75,    76,    77,    78,    79,
      81,    82,    85,    86,    87,    88,    91,    92,    93,    94,
      95,   100,   103,   104,   105,   111,   114,    32,    48,    49,
      65,    32,    32,    32,    25,    26,    34,    73,   101,   102,
     105,   106,   107,    32,     3,    76,    99,     3,    76,   104,
       3,     3,     3,    68,    70,   100,    38,    50,    51,    53,
      54,    55,    50,    51,    59,    60,    61,    62,    63,    64,
      80,    57,    58,    43,    44,    83,    45,    46,    47,    84,
     105,    76,   115,   116,     3,    76,     3,    27,    28,    74,
      81,    74,     3,    75,    38,    38,   107,    18,   106,    76,
      65,    38,    34,    33,    35,     3,    35,    78,    81,    81,
      81,    82,    85,    85,    86,    87,    33,    39,    32,    33,
      33,    38,    35,    32,    33,     3,   112,   113,    38,    65,
     116,   115,    72,    73,    74,    74,    34,    65,    35,    39,
      76,    33,    17,    89,    38,    33,    22,    96,    98,    88,
     113,    38,    32,    16,    17,    90,    76,    38,    76,    23,
      35,    97,    98,    74,    72,    32,    33,    40,    40,    33,
      74,    73,   104,   104,    72,    33,    25,    25,    72,    38,
      38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    75,    76,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    91,    92,    93,    94,    95,    96,
      96,    96,    97,    98,    99,    99,   100,   101,   102,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   108,   109,   109,
     109,   110,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     0,     1,     4,     6,     1,     2,     1,     3,     1,
       3,     1,     1,     1,     3,     1,     2,     2,     1,     3,
       1,     2,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     2,
       2,     2,     1,     1,     3,     1,     1,     1,     1,     0,
       5,     6,     0,     2,     7,     5,     9,     7,     7,     1,
       2,     2,     5,     6,     0,     1,     3,     2,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,    10,     0,     1,
       3,     2,     5,     1,     3,     1,     3,     4,     6,     0,
       1,     3,     1
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

#line 1418 "parser.tab.c"

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

#line 138 "parser.y"


void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

int main (int argc, char *argv[]){

    // parsing
    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);
    
    return flag;
}
