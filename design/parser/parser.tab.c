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
    #include <math.h>
    #include "../semantics/semantics.c"
    #include"../symbol_table/symbol_table.c"
    #include "../ast/ast.h"
	  #include "../ast/ast.c"
    extern FILE *yyin;
    extern FILE *yyout;
    extern int lineno;
    extern int yylex();
    void yyerror();
    // for declaration
    void add_to_names(ListNode *entry);
	  ListNode **names;
	  int nc = 0;

#line 91 "parser.tab.c"

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
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_BOOLEAN = 7,                    /* BOOLEAN  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_STR = 10,                       /* STR  */
  YYSYMBOL_IDENT = 11,                     /* IDENT  */
  YYSYMBOL_CONST_INT = 12,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 13,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_CHAR = 14,                /* CONST_CHAR  */
  YYSYMBOL_STRING_LITERAL = 15,            /* STRING_LITERAL  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ELIF = 18,                      /* ELIF  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_DO = 21,                        /* DO  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_TRUE_TOKEN = 28,                /* TRUE_TOKEN  */
  YYSYMBOL_FALSE_TOKEN = 29,               /* FALSE_TOKEN  */
  YYSYMBOL_ENUM = 30,                      /* ENUM  */
  YYSYMBOL_FUNC = 31,                      /* FUNC  */
  YYSYMBOL_UNTIL = 32,                     /* UNTIL  */
  YYSYMBOL_LEFT_PAREN = 33,                /* LEFT_PAREN  */
  YYSYMBOL_RIGHT_PAREN = 34,               /* RIGHT_PAREN  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 35,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 36,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_SQ_BRACKET = 37,           /* LEFT_SQ_BRACKET  */
  YYSYMBOL_RIGHT_SQ_BRACKET = 38,          /* RIGHT_SQ_BRACKET  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_QUESTION_MARK = 42,             /* QUESTION_MARK  */
  YYSYMBOL_DOT = 43,                       /* DOT  */
  YYSYMBOL_ADD_OP = 44,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 45,                    /* SUB_OP  */
  YYSYMBOL_MUL_OP = 46,                    /* MUL_OP  */
  YYSYMBOL_DIV_OP = 47,                    /* DIV_OP  */
  YYSYMBOL_MOD_OP = 48,                    /* MOD_OP  */
  YYSYMBOL_INC_OP = 49,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 50,                    /* DEC_OP  */
  YYSYMBOL_OR_OP = 51,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 52,                    /* AND_OP  */
  YYSYMBOL_NOT_OP = 53,                    /* NOT_OP  */
  YYSYMBOL_BIT_LOGIC_OP = 54,              /* BIT_LOGIC_OP  */
  YYSYMBOL_EQ_OP = 55,                     /* EQ_OP  */
  YYSYMBOL_REL_OP = 56,                    /* REL_OP  */
  YYSYMBOL_ASSIGN_OP = 57,                 /* ASSIGN_OP  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_functions_optional = 60,        /* functions_optional  */
  YYSYMBOL_type = 61,                      /* type  */
  YYSYMBOL_declaration = 62,               /* declaration  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_names = 67,                     /* names  */
  YYSYMBOL_init = 68,                      /* init  */
  YYSYMBOL_var_init = 69,                  /* var_init  */
  YYSYMBOL_variable = 70,                  /* variable  */
  YYSYMBOL_declarations = 71,              /* declarations  */
  YYSYMBOL_expression = 72,                /* expression  */
  YYSYMBOL_sign = 73,                      /* sign  */
  YYSYMBOL_unary_expression = 74,          /* unary_expression  */
  YYSYMBOL_value = 75,                     /* value  */
  YYSYMBOL_tail = 76,                      /* tail  */
  YYSYMBOL_else_if = 77,                   /* else_if  */
  YYSYMBOL_else_part = 78,                 /* else_part  */
  YYSYMBOL_if_statement = 79,              /* if_statement  */
  YYSYMBOL_while_statement = 80,           /* while_statement  */
  YYSYMBOL_optional_type = 81,             /* optional_type  */
  YYSYMBOL_assignment = 82,                /* assignment  */
  YYSYMBOL_for_statement = 83,             /* for_statement  */
  YYSYMBOL_do_statement = 84,              /* do_statement  */
  YYSYMBOL_switch_statement = 85,          /* switch_statement  */
  YYSYMBOL_cases = 86,                     /* cases  */
  YYSYMBOL_default = 87,                   /* default  */
  YYSYMBOL_case = 88,                      /* case  */
  YYSYMBOL_break_statement = 89,           /* break_statement  */
  YYSYMBOL_continue_statement = 90,        /* continue_statement  */
  YYSYMBOL_statements = 91,                /* statements  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_functions = 93,                 /* functions  */
  YYSYMBOL_function = 94,                  /* function  */
  YYSYMBOL_95_5 = 95,                      /* $@5  */
  YYSYMBOL_param_empty = 96,               /* param_empty  */
  YYSYMBOL_function_head = 97,             /* function_head  */
  YYSYMBOL_function_tail = 98,             /* function_tail  */
  YYSYMBOL_declarations_statements = 99,   /* declarations_statements  */
  YYSYMBOL_declarations_statements_optional = 100, /* declarations_statements_optional  */
  YYSYMBOL_return_optional = 101,          /* return_optional  */
  YYSYMBOL_return_val = 102,               /* return_val  */
  YYSYMBOL_parameters = 103,               /* parameters  */
  YYSYMBOL_parameter = 104,                /* parameter  */
  YYSYMBOL_105_6 = 105,                    /* $@6  */
  YYSYMBOL_enum_statement = 106,           /* enum_statement  */
  YYSYMBOL_enum_list = 107,                /* enum_list  */
  YYSYMBOL_one_val = 108,                  /* one_val  */
  YYSYMBOL_func_call = 109,                /* func_call  */
  YYSYMBOL_arguments = 110,                /* arguments  */
  YYSYMBOL_argument = 111                  /* argument  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    86,    86,    87,    88,    89,    90,    91,
      92,    93,    96,    96,    96,   122,   122,   122,   149,   153,
     157,   161,   167,   169,   178,   181,   181,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     200,   201,   202,   202,   203,   203,   203,   203,   203,   226,
     227,   228,   229,   230,   232,   235,   237,   238,   240,   240,
     242,   243,   245,   247,   247,   251,   252,   254,   256,   258,
     258,   258,   260,   262,   264,   266,   270,   271,   274,   275,
     276,   277,   278,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   298,   298,   300,   300,   302,   302,   304,   306,
     307,   307,   307,   307,   308,   308,   310,   310,   312,   312,
     314,   314,   316,   316,   319,   321,   321,   323,   323,   325,
     326,   326,   327,   327
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "FLOAT",
  "DOUBLE", "VOID", "BOOLEAN", "CHAR", "CONST", "STR", "IDENT",
  "CONST_INT", "CONST_FLOAT", "CONST_CHAR", "STRING_LITERAL", "IF", "ELSE",
  "ELIF", "WHILE", "FOR", "DO", "SWITCH", "CASE", "DEFAULT", "RETURN",
  "BREAK", "CONTINUE", "TRUE_TOKEN", "FALSE_TOKEN", "ENUM", "FUNC",
  "UNTIL", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_SQ_BRACKET", "RIGHT_SQ_BRACKET",
  "SEMICOLON", "COMMA", "COLON", "QUESTION_MARK", "DOT", "ADD_OP",
  "SUB_OP", "MUL_OP", "DIV_OP", "MOD_OP", "INC_OP", "DEC_OP", "OR_OP",
  "AND_OP", "NOT_OP", "BIT_LOGIC_OP", "EQ_OP", "REL_OP", "ASSIGN_OP",
  "$accept", "program", "functions_optional", "type", "declaration", "$@1",
  "$@2", "$@3", "$@4", "names", "init", "var_init", "variable",
  "declarations", "expression", "sign", "unary_expression", "value",
  "tail", "else_if", "else_part", "if_statement", "while_statement",
  "optional_type", "assignment", "for_statement", "do_statement",
  "switch_statement", "cases", "default", "case", "break_statement",
  "continue_statement", "statements", "statement", "functions", "function",
  "$@5", "param_empty", "function_head", "function_tail",
  "declarations_statements", "declarations_statements_optional",
  "return_optional", "return_val", "parameters", "parameter", "$@6",
  "enum_statement", "enum_list", "one_val", "func_call", "arguments",
  "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-122)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     459,  -116,  -116,  -116,  -116,  -116,  -116,   467,  -116,    11,
    -116,  -116,   107,  -116,  -116,    22,   -25,   -18,     2,     5,
      19,    13,    20,    21,    41,    51,    52,  -116,     7,  -116,
    -116,    28,  -116,  -116,  -116,  -116,  -116,   194,  -116,  -116,
      31,    22,    14,    35,  -116,  -116,  -116,    -2,    40,    42,
      23,    23,   467,   219,    60,    23,  -116,  -116,    64,    62,
      63,    23,  -116,    67,  -116,  -116,    35,   130,    22,    68,
     -13,    23,  -116,    92,    97,    98,  -116,   374,   130,  -116,
    -116,    85,    80,  -116,  -116,   226,   241,  -116,   110,   206,
      89,   256,   113,  -116,  -116,   374,    99,    93,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
     271,  -116,  -116,  -116,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,  -116,  -116,    23,    19,    19,  -116,
      96,  -116,    23,   101,    14,  -116,   -26,  -116,  -116,    99,
    -116,   100,  -116,  -116,    50,    50,    84,    84,    84,   387,
     400,  -116,   405,   125,   374,    -1,  -116,    23,   286,   117,
     102,   113,  -116,   136,   114,    19,   121,     4,  -116,   345,
     111,    23,    17,  -116,  -116,  -116,   122,   107,  -116,  -116,
      23,   127,  -116,    23,  -116,   361,   120,  -116,  -116,  -116,
     129,  -116,  -116,   107,   140,   301,    23,   316,   219,   219,
     141,   137,  -116,   467,  -116,  -116,    16,   142,    19,   331,
      19,   219,   219,   467,  -116,   110,   374,   146,  -116,  -116,
      19,  -116,  -116,  -116,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     9,    10,     0,    11,     0,
      12,    26,     0,    15,     1,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    78,
      79,     0,    80,    81,    82,    85,    86,     0,    77,    83,
       0,     0,    24,    13,    21,    22,    20,    43,     0,     0,
      43,    43,    63,     0,     0,    43,    74,    75,     0,     0,
       0,    43,    87,     0,    76,    84,    16,     0,     0,     0,
      24,    43,    42,     0,     0,     0,    40,   123,     0,    38,
      39,     0,   120,    88,    89,     0,     0,    64,     0,     0,
       0,     0,     0,    90,    91,    65,     4,     0,    49,    50,
      51,    52,    53,    54,    23,    19,    18,    14,    47,    48,
       0,    44,    45,    46,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    41,   119,    43,     0,     0,    24,
       0,    55,    43,     0,   117,   118,     0,   115,     2,     3,
      93,     0,    17,    37,    27,    28,    29,    30,    31,    34,
      33,    32,    35,    36,   122,    59,    62,    43,     0,     0,
       0,     0,    92,     0,     0,     0,     0,    59,    61,     0,
       0,    43,     0,    70,   114,   116,     0,   105,    95,    58,
      43,     0,    60,    43,    67,     0,     0,    68,    71,    69,
     112,   103,   102,   104,   107,     0,    43,     0,     0,     0,
       0,    96,   111,     0,   101,   100,    43,     0,     0,     0,
       0,    73,    72,     0,   112,     0,   108,     0,    99,    56,
       0,    66,    98,   110,   113,   106,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,    -7,   -10,  -116,  -116,  -116,  -116,   135,
     118,   -87,   -11,  -116,   -32,  -116,  -116,   115,  -115,  -116,
      24,  -116,  -116,  -116,   104,  -116,  -116,  -116,  -116,  -116,
      25,  -116,  -116,   -46,   -31,  -116,    55,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,   -19,  -116,  -116,  -116,
      37,    -9,  -116,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,   138,    10,    11,    15,    69,    41,    97,    43,
      44,    45,    76,    12,    77,    78,    79,   104,    54,   167,
     168,    29,    30,    88,    31,    32,    33,    34,   172,   188,
     173,    35,    36,    37,    38,   139,   140,   141,   200,   164,
     178,   193,   194,   207,   217,   201,   202,   203,    39,   136,
     137,    80,    81,    82
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    28,    27,    40,    46,   135,    64,    89,    47,    70,
     160,    14,   155,   156,   161,    50,   165,   166,    85,    86,
      47,   165,   181,    91,    48,    49,    28,    70,    40,    95,
      46,    71,  -121,    42,    70,    51,   108,   109,    52,   110,
     171,   186,    28,    72,    40,    87,    55,    73,    74,    71,
     179,    75,    58,   187,    53,  -109,    71,   106,    64,    56,
      57,    72,    59,    60,    61,    73,    74,    62,    72,    75,
      65,    67,    73,    74,   135,    68,    75,    28,    28,    83,
      40,    84,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    90,   219,   154,   221,   116,   117,   118,    92,
     158,    93,    94,   111,   121,   226,    96,   107,   112,   113,
       1,     2,     3,     4,     5,     6,     7,     8,    16,   125,
     126,   129,   132,    17,   134,   169,    18,    19,    20,    21,
     -94,   163,   142,    22,    23,   157,   159,    24,   121,   185,
     171,   174,    98,    99,   100,   101,   192,   176,   195,   177,
     184,   197,   211,   212,   180,   190,    25,    26,   102,   103,
     196,   199,   205,   -97,   209,   206,    28,   191,    40,   114,
     115,   116,   117,   118,   216,   213,    66,   214,   218,   121,
      64,    64,    28,   204,    40,   225,   105,    28,    28,    40,
      40,   182,   130,   124,   162,   223,   215,   189,   175,     0,
      28,    28,    40,    40,   224,    16,   222,     0,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    16,     0,    63,
      22,    23,    17,     0,    24,    18,    19,    20,    21,     0,
      16,     0,    22,    23,     0,    17,    24,     0,    18,    19,
      20,    21,   131,    25,    26,    22,    23,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,    25,    26,
     114,   115,   116,   117,   118,   128,     0,   119,   120,     0,
     121,   122,   123,     0,     0,   114,   115,   116,   117,   118,
     133,     0,   119,   120,     0,   121,   122,   123,     0,     0,
     114,   115,   116,   117,   118,   143,     0,   119,   120,     0,
     121,   122,   123,     0,     0,   114,   115,   116,   117,   118,
     170,     0,   119,   120,     0,   121,   122,   123,     0,     0,
     114,   115,   116,   117,   118,   208,     0,   119,   120,     0,
     121,   122,   123,     0,     0,   114,   115,   116,   117,   118,
     210,     0,   119,   120,     0,   121,   122,   123,     0,     0,
     114,   115,   116,   117,   118,   220,     0,   119,   120,     0,
     121,   122,   123,     0,     0,   114,   115,   116,   117,   118,
       0,     0,   119,   120,   183,   121,   122,   123,     0,   114,
     115,   116,   117,   118,     0,     0,   119,   120,     0,   121,
     122,   123,   198,     0,     0,   114,   115,   116,   117,   118,
       0,     0,   119,   120,     0,   121,   122,   123,   114,   115,
     116,   117,   118,     0,     0,   119,   120,     0,   121,   122,
     123,   114,   115,   116,   117,   118,     0,     0,     0,   120,
       0,   121,   122,   123,   114,   115,   116,   117,   118,   114,
     115,   116,   117,   118,   121,   122,   123,     0,     0,   121,
       0,   123,     1,     2,     3,     4,     5,     6,     7,     8,
       1,     2,     3,     4,     5,     6,     0,     8
};

static const yytype_int16 yycheck[] =
{
       7,    12,    12,    12,    15,    92,    37,    53,    33,    11,
      36,     0,   127,   128,    40,    33,    17,    18,    50,    51,
      33,    17,    18,    55,    49,    50,    37,    11,    37,    61,
      41,    33,    34,    11,    11,    33,    49,    50,    33,    71,
      23,    24,    53,    45,    53,    52,    33,    49,    50,    33,
     165,    53,    11,    36,    35,    39,    33,    68,    89,    39,
      39,    45,    11,    11,    57,    49,    50,    39,    45,    53,
      39,    57,    49,    50,   161,    40,    53,    88,    89,    39,
      89,    39,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    32,   208,   126,   210,    46,    47,    48,    35,
     132,    39,    39,    11,    54,   220,    39,    39,    11,    11,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    34,
      40,    11,    33,    16,    11,   157,    19,    20,    21,    22,
      31,    31,    39,    26,    27,    39,    35,    30,    54,   171,
      23,    39,    12,    13,    14,    15,   177,    11,   180,    35,
      39,   183,   198,   199,    33,    33,    49,    50,    28,    29,
      33,    41,   193,    34,   196,    25,   177,   177,   177,    44,
      45,    46,    47,    48,   206,    34,    41,    40,    36,    54,
     211,   212,   193,   193,   193,    39,    68,   198,   199,   198,
     199,   167,    88,    78,   139,   214,   203,   172,   161,    -1,
     211,   212,   211,   212,   215,    11,   213,    -1,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    11,    -1,    25,
      26,    27,    16,    -1,    30,    19,    20,    21,    22,    -1,
      11,    -1,    26,    27,    -1,    16,    30,    -1,    19,    20,
      21,    22,    36,    49,    50,    26,    27,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    54,    55,    56,    -1,    -1,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    54,    55,    56,    -1,    -1,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    54,    55,    56,    -1,    -1,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      54,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    39,    54,    55,    56,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    -1,    54,
      55,    56,    41,    -1,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    44,    45,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    54,    55,    56,    44,    45,    46,    47,    48,    44,
      45,    46,    47,    48,    54,    55,    56,    -1,    -1,    54,
      -1,    56,     3,     4,     5,     6,     7,     8,     9,    10,
       3,     4,     5,     6,     7,     8,    -1,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    59,
      61,    62,    71,    61,     0,    63,    11,    16,    19,    20,
      21,    22,    26,    27,    30,    49,    50,    62,    70,    79,
      80,    82,    83,    84,    85,    89,    90,    91,    92,   106,
     109,    65,    11,    67,    68,    69,    70,    33,    49,    50,
      33,    33,    33,    35,    76,    33,    39,    39,    11,    11,
      11,    57,    39,    25,    92,    39,    67,    57,    40,    64,
      11,    33,    45,    49,    50,    53,    70,    72,    73,    74,
     109,   110,   111,    39,    39,    72,    72,    61,    81,    91,
      32,    72,    35,    39,    39,    72,    39,    66,    12,    13,
      14,    15,    28,    29,    75,    68,    70,    39,    49,    50,
      72,    11,    11,    11,    44,    45,    46,    47,    48,    51,
      52,    54,    55,    56,    75,    34,    40,    34,    34,    11,
      82,    36,    33,    34,    11,    69,   107,   108,    60,    93,
      94,    95,    39,    34,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    76,    76,    39,    72,    35,
      36,    40,    94,    31,    97,    17,    18,    77,    78,    72,
      34,    23,    86,    88,    39,   108,    11,    35,    98,    76,
      33,    18,    78,    39,    39,    72,    24,    36,    87,    88,
      33,    62,    92,    99,   100,    72,    33,    72,    41,    41,
      96,   103,   104,   105,    62,    92,    25,   101,    34,    72,
      34,    91,    91,    34,    40,    61,    72,   102,    36,    76,
      34,    76,    61,   104,    70,    39,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    63,    64,    62,    65,    66,    62,    67,    67,
      67,    67,    68,    69,    70,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    77,    77,    78,    78,
      79,    79,    80,    81,    81,    82,    83,    84,    85,    86,
      86,    86,    87,    88,    89,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    93,    95,    94,    96,    96,    97,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   105,   104,   106,   107,   107,   108,   108,   109,
     110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     5,     0,     0,     6,     3,     3,
       1,     1,     1,     3,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     2,     1,     0,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     6,     2,     0,
       7,     6,     5,     0,     1,     3,    10,     7,     7,     2,
       1,     2,     3,     4,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     3,     3,
       3,     3,     2,     1,     0,     3,     1,     0,     6,     4,
       2,     2,     1,     1,     1,     0,     3,     0,     1,     0,
       3,     1,     0,     3,     6,     1,     3,     1,     1,     4,
       1,     0,     3,     1
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
  case 5: /* type: INTEGER  */
#line 87 "parser.y"
               { (yyval.data_type) = INT_TYPE;   }
#line 1407 "parser.tab.c"
    break;

  case 6: /* type: FLOAT  */
#line 88 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1413 "parser.tab.c"
    break;

  case 7: /* type: DOUBLE  */
#line 89 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1419 "parser.tab.c"
    break;

  case 8: /* type: VOID  */
#line 90 "parser.y"
               { (yyval.data_type) = VOID_TYPE;   }
#line 1425 "parser.tab.c"
    break;

  case 9: /* type: BOOLEAN  */
#line 91 "parser.y"
               { (yyval.data_type) = BOOL_TYPE;   }
#line 1431 "parser.tab.c"
    break;

  case 10: /* type: CHAR  */
#line 92 "parser.y"
               { (yyval.data_type) = CHAR_TYPE;   }
#line 1437 "parser.tab.c"
    break;

  case 11: /* type: STR  */
#line 93 "parser.y"
               { (yyval.data_type) = STR_TYPE;   }
#line 1443 "parser.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 96 "parser.y"
                  {declare = 1; }
#line 1449 "parser.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 96 "parser.y"
                                        {declare = 0; }
#line 1455 "parser.tab.c"
    break;

  case 14: /* declaration: type $@1 names $@2 SEMICOLON  */
#line 97 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, false);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            // variable
            if(temp->names[i]->st_type == UNDEF){
                set_type(temp->names[i]->st_name, temp->data_type, UNDEF);
            }
            // pointer
            else if(temp->names[i]->st_type == POINTER_TYPE){
                set_type(temp->names[i]->st_name, POINTER_TYPE, temp->data_type);
            }
            // array
            else if(temp->names[i]->st_type == ARRAY_TYPE){
                set_type(temp->names[i]->st_name, ARRAY_TYPE, temp->data_type);
            }
        }
        ast_traversal((yyval.node)); /* just for testing */
    }
#line 1484 "parser.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 122 "parser.y"
             { declare = 1; }
#line 1490 "parser.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 122 "parser.y"
                                    { declare = 0; }
#line 1496 "parser.tab.c"
    break;

  case 17: /* declaration: CONST type $@3 names $@4 SEMICOLON  */
#line 123 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, true);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            // variable
            if(temp->names[i]->st_type == UNDEF){
                set_type(temp->names[i]->st_name, temp->data_type, UNDEF);
            }
            // pointer
            else if(temp->names[i]->st_type == POINTER_TYPE){
                set_type(temp->names[i]->st_name, POINTER_TYPE, temp->data_type);
            }
            // array
            else if(temp->names[i]->st_type == ARRAY_TYPE){
                set_type(temp->names[i]->st_name, ARRAY_TYPE, temp->data_type);
            }
        }
        ast_traversal((yyval.node)); // just for testing
    }
#line 1525 "parser.tab.c"
    break;

  case 18: /* names: names COMMA variable  */
#line 150 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1533 "parser.tab.c"
    break;

  case 19: /* names: names COMMA init  */
#line 154 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1541 "parser.tab.c"
    break;

  case 20: /* names: variable  */
#line 158 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1549 "parser.tab.c"
    break;

  case 21: /* names: init  */
#line 162 "parser.y"
        { 
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1557 "parser.tab.c"
    break;

  case 22: /* init: var_init  */
#line 167 "parser.y"
               { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1563 "parser.tab.c"
    break;

  case 23: /* var_init: IDENT ASSIGN_OP value  */
#line 170 "parser.y"
{ 
	AST_Node_Const *temp = (AST_Node_Const*) (yyval.symbol_table_item);
	(yyvsp[-2].symbol_table_item)->val = temp->val;
	(yyvsp[-2].symbol_table_item)->st_type = temp->const_type;
	(yyval.symbol_table_item) = (yyvsp[-2].symbol_table_item);
}
#line 1574 "parser.tab.c"
    break;

  case 24: /* variable: IDENT  */
#line 178 "parser.y"
                { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1580 "parser.tab.c"
    break;

  case 49: /* value: CONST_INT  */
#line 226 "parser.y"
                  { (yyval.node) = new_ast_const_node(INT_TYPE, (yyvsp[0].val));  }
#line 1586 "parser.tab.c"
    break;

  case 50: /* value: CONST_FLOAT  */
#line 227 "parser.y"
              { (yyval.node) = new_ast_const_node(REAL_TYPE, (yyvsp[0].val)); }
#line 1592 "parser.tab.c"
    break;

  case 51: /* value: CONST_CHAR  */
#line 228 "parser.y"
             { (yyval.node) = new_ast_const_node(CHAR_TYPE, (yyvsp[0].val)); }
#line 1598 "parser.tab.c"
    break;

  case 52: /* value: STRING_LITERAL  */
#line 229 "parser.y"
                 { (yyval.node) = new_ast_const_node(STR_TYPE, (yyvsp[0].val)); }
#line 1604 "parser.tab.c"
    break;

  case 53: /* value: TRUE_TOKEN  */
#line 230 "parser.y"
             { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1610 "parser.tab.c"
    break;

  case 54: /* value: FALSE_TOKEN  */
#line 232 "parser.y"
            { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1616 "parser.tab.c"
    break;

  case 94: /* $@5: %empty  */
#line 300 "parser.y"
          { incr_scope(); }
#line 1622 "parser.tab.c"
    break;

  case 95: /* function: $@5 function_head function_tail  */
#line 300 "parser.y"
                                                        { hide_scope(); }
#line 1628 "parser.tab.c"
    break;

  case 112: /* $@6: %empty  */
#line 316 "parser.y"
           { declare = 1; }
#line 1634 "parser.tab.c"
    break;

  case 113: /* parameter: $@6 type variable  */
#line 316 "parser.y"
                                          { declare = 0; }
#line 1640 "parser.tab.c"
    break;


#line 1644 "parser.tab.c"

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

#line 329 "parser.y"


void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

void add_to_names(ListNode *entry){
	// first entry
	if(nc == 0){
		nc = 1;
		names = (ListNode **) malloc( 1 * sizeof(ListNode *));
		names[0] = entry;
	}
	// general case
	else{
		nc++;
		names = (ListNode **) realloc(names, nc * sizeof(ListNode *));
		names[nc - 1] = entry;		
	}
}

int main (){
    
    // initialize symbol table
    init_symbol_table();

    // initialize revisit queue
	  queue = NULL;
    yyout = fopen("revisit_dump.out", "w");
    revisit_dump(yyout);
    fclose(yyout);

    // parsing
    int flag;
    flag = yyparse();
    if ( flag == 0 ){
      printf("/*--------------Your program is syntactically correct!-------*/\n");
    }
    else{
      printf("/*-------------------------Rejected!---------------------------*/\n");
      //printf("/* Unrecognized token %s in line %d: ",yytext,lineno);
    }
    fclose(yyin);

    yyout = fopen("symtab_dump.out", "w");
    dump_symboltable(yyout);
    fclose(yyout);

    if(queue != NULL){
		printf("Warning: Something has not been checked in the revisit queue!\n");
	  }

    // symbol table dump
    yyout = fopen("symtab_dump.out", "w");
    dump_symboltable(yyout);
    fclose(yyout);

    yyout = fopen("revisit_dump.out", "w");
    revisit_dump(yyout);
    fclose(yyout);
    // to test ast tree
    // Value val1, val2;
    // val1.ival = 0;
    // val2.ival = 1;
    // AST_Node *const_node1 = new_ast_const_node(INT_TYPE, val1);
    // AST_Node *const_node2 = new_ast_const_node(INT_TYPE, val2);
    // AST_Node *bool_node = new_ast_bool_node(OP_OR, const_node1, const_node2);
    // AST_Node *simple_node = new_ast_simple_node(0);
    // AST_Node *if_node = new_ast_if_node(bool_node, simple_node, NULL, 0, NULL);
    // ast_traversal(if_node);
	
	return flag;
}
