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


    #include "../semantics/semantics.c"
    #include"../symbol_table/symbol_table.c"
    #include "../ast/ast.h"
	  #include "../ast/ast.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    extern FILE *yyin;
    extern FILE *yyout;
    extern int lineno;
    extern int parent;
    extern int yylex();
    void yyerror();
    // for declaration
    void add_to_names(ListNode *entry);
	ListNode **names;
	int nc = 0;
    // for else ifs
	void add_elseif(AST_Node *elsif);
	AST_Node **elsifs;
	int elseif_count = 0;
    // for functions
    AST_Node_Func_Decl *temp_function;
    // define output file
    FILE *yyout;


#line 102 "parser.tab.c"

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
  YYSYMBOL_END = 58,                       /* END  */
  YYSYMBOL_MINUS = 59,                     /* MINUS  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_62_1 = 62,                      /* $@1  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_functions_optional = 64,        /* functions_optional  */
  YYSYMBOL_type = 65,                      /* type  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_67_3 = 67,                      /* $@3  */
  YYSYMBOL_68_4 = 68,                      /* $@4  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_names = 71,                     /* names  */
  YYSYMBOL_init = 72,                      /* init  */
  YYSYMBOL_var_init = 73,                  /* var_init  */
  YYSYMBOL_variable = 74,                  /* variable  */
  YYSYMBOL_var_ref = 75,                   /* var_ref  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_value = 77,                     /* value  */
  YYSYMBOL_tail = 78,                      /* tail  */
  YYSYMBOL_79_7 = 79,                      /* $@7  */
  YYSYMBOL_else_if = 80,                   /* else_if  */
  YYSYMBOL_else_part = 81,                 /* else_part  */
  YYSYMBOL_if_statement = 82,              /* if_statement  */
  YYSYMBOL_83_8 = 83,                      /* $@8  */
  YYSYMBOL_84_9 = 84,                      /* $@9  */
  YYSYMBOL_while_statement = 85,           /* while_statement  */
  YYSYMBOL_assignment = 86,                /* assignment  */
  YYSYMBOL_for_statement = 87,             /* for_statement  */
  YYSYMBOL_do_statement = 88,              /* do_statement  */
  YYSYMBOL_switch_statement = 89,          /* switch_statement  */
  YYSYMBOL_cases = 90,                     /* cases  */
  YYSYMBOL_default = 91,                   /* default  */
  YYSYMBOL_case = 92,                      /* case  */
  YYSYMBOL_statements = 93,                /* statements  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_functions = 95,                 /* functions  */
  YYSYMBOL_function = 96,                  /* function  */
  YYSYMBOL_97_10 = 97,                     /* $@10  */
  YYSYMBOL_function_head = 98,             /* function_head  */
  YYSYMBOL_99_11 = 99,                     /* $@11  */
  YYSYMBOL_return_type = 100,              /* return_type  */
  YYSYMBOL_function_tail = 101,            /* function_tail  */
  YYSYMBOL_statements_optional = 102,      /* statements_optional  */
  YYSYMBOL_param_empty = 103,              /* param_empty  */
  YYSYMBOL_parameters = 104,               /* parameters  */
  YYSYMBOL_parameter = 105,                /* parameter  */
  YYSYMBOL_106_12 = 106,                   /* $@12  */
  YYSYMBOL_enum_statement = 107,           /* enum_statement  */
  YYSYMBOL_enum_list = 108,                /* enum_list  */
  YYSYMBOL_one_val = 109,                  /* one_val  */
  YYSYMBOL_func_call = 110,                /* func_call  */
  YYSYMBOL_arguments = 111,                /* arguments  */
  YYSYMBOL_argument = 112                  /* argument  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   110,   109,   117,   122,   127,   128,   129,
     130,   131,   132,   133,   136,   136,   136,   190,   190,   190,
     246,   250,   254,   258,   264,   266,   275,   276,   295,   299,
     303,   307,   311,   316,   320,   324,   328,   332,   336,   340,
     346,   353,   359,   365,   370,   374,   378,   417,   419,   420,
     421,   422,   423,   426,   426,   437,   447,   459,   465,   471,
     471,   487,   487,   501,   510,   571,   582,   594,   600,   602,
     602,   602,   604,   606,   613,   618,   625,   630,   634,   638,
     645,   650,   655,   660,   664,   669,   673,   677,   681,   688,
     695,   702,   714,   720,   727,   727,   743,   743,   768,   774,
     778,   783,   815,   820,   825,   830,   836,   836,   848,   850,
     850,   852,   852,   854,   922,   927,   935,   940
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
  "END", "MINUS", "$accept", "program", "$@1", "$@2", "functions_optional",
  "type", "declaration", "$@3", "$@4", "$@5", "$@6", "names", "init",
  "var_init", "variable", "var_ref", "expression", "value", "tail", "$@7",
  "else_if", "else_part", "if_statement", "$@8", "$@9", "while_statement",
  "assignment", "for_statement", "do_statement", "switch_statement",
  "cases", "default", "case", "statements", "statement", "functions",
  "function", "$@10", "function_head", "$@11", "return_type",
  "function_tail", "statements_optional", "param_empty", "parameters",
  "parameter", "$@12", "enum_statement", "enum_list", "one_val",
  "func_call", "arguments", "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -131,    24,  -131,     4,  -131,  -131,    28,  -131,   208,
    -131,    11,    25,  -131,  -131,  -131,  -131,  -131,  -131,   397,
    -131,    -8,    33,    34,    35,    22,    46,   127,    44,    48,
      50,    78,    79,  -131,  -131,  -131,    42,  -131,  -131,    52,
    -131,  -131,  -131,   208,  -131,  -131,    53,   208,  -131,    67,
    -131,   127,    73,    74,   127,   127,   103,  -131,    83,   127,
      -6,  -131,  -131,  -131,  -131,  -131,  -131,   127,     3,   106,
     107,   127,  -131,   290,  -131,  -131,  -131,  -131,    89,    90,
      92,   121,   127,  -131,    70,  -131,  -131,   208,    97,   110,
      94,  -131,   397,   134,   330,   112,   108,  -131,  -131,   137,
     197,  -131,   113,   208,   114,   216,  -131,  -131,   231,  -131,
    -131,  -131,  -131,  -131,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   140,  -131,  -131,    96,   118,  -131,  -131,
    -131,   330,   115,  -131,   397,  -131,   103,    96,  -131,  -131,
     127,    22,    22,   127,   100,   127,   122,  -131,   -18,   -18,
    -131,  -131,  -131,   343,     8,   117,   150,    96,  -131,   -17,
    -131,     3,   121,   130,  -131,  -131,  -131,  -131,  -131,   131,
     330,   160,  -131,   304,  -131,   246,   156,   147,   140,  -131,
    -131,  -131,  -131,  -131,   169,   173,   180,   161,   127,    -3,
    -131,  -131,  -131,   166,    31,    22,  -131,     1,  -131,   317,
     164,  -131,  -131,  -131,   127,   187,  -131,  -131,   172,   188,
     208,   208,   261,   127,    22,    22,   208,   208,    22,   276,
    -131,  -131,  -131,    22,  -131
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    96,     0,     2,     5,    93,    94,     0,     1,     0,
      92,     0,     0,     7,     8,     9,    10,    11,    12,     0,
      13,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    76,    27,     0,    77,    78,     0,
      80,    81,    82,     3,    75,    83,     0,   101,    95,   106,
      17,   115,     0,     0,     0,     0,     0,    53,     0,     0,
      26,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,    44,     0,    45,    43,    86,    85,     0,     0,
       0,     0,     0,    87,     0,    74,    84,   100,     0,     0,
     102,   105,     0,     0,   117,     0,   114,    90,    91,     0,
       0,    26,     0,     0,     0,     0,    41,    42,     0,    46,
      39,    40,    35,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    26,    15,    23,    24,
      22,    64,     0,    99,     0,   106,     0,     0,    18,   113,
       0,     0,     0,     0,     0,     0,     0,    38,    28,    29,
      30,    31,    32,    34,    33,    36,    37,   111,   112,     0,
     109,     0,     0,     0,     4,    98,    97,   104,   107,     0,
     116,    61,    63,     0,    54,     0,     0,     0,     0,    25,
      21,    20,    16,    19,     0,    58,     0,     0,     0,     0,
      70,   108,   110,     0,    58,     0,    62,     0,    67,     0,
       0,    68,    71,    69,     0,     0,    60,    57,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    72,     0,     0,
      65,    66,    55,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,  -131,   -11,  -131,  -131,  -131,  -131,
    -131,  -131,   -80,  -116,   -76,    -9,   -45,   -64,  -130,  -131,
    -131,    27,  -131,  -131,  -131,  -131,   167,  -131,  -131,  -131,
    -131,  -131,    36,   -44,   -42,  -131,   222,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,   101,  -131,  -131,  -131,    54,
      -7,  -131,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    84,     3,    33,    34,    81,   163,    93,
     169,   127,   128,   129,    35,    72,    73,    74,    58,   103,
     194,   196,    37,   184,   185,    38,    39,    40,    41,    42,
     189,   202,   190,    43,    44,     4,     5,    11,     6,     7,
     166,    48,    88,    89,    90,    91,    92,    45,   159,   160,
      75,    95,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    85,    46,    87,   109,   130,    94,   158,    50,    99,
     100,   171,   172,   138,   105,    61,    62,    63,    64,   177,
     188,   200,   108,   178,     8,    51,   112,    51,   116,   117,
     118,    65,    66,   201,    36,     1,    46,   131,    36,    12,
      46,    52,    53,   106,   107,    85,    47,    36,   195,   205,
     208,   209,   114,   115,   116,   117,   118,    57,    49,   144,
     168,    78,   158,   121,   122,   207,    54,    55,    56,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    36,    59,
      46,   136,   180,    76,   220,   221,   181,    77,   222,    79,
      80,    83,    86,   224,    36,   170,    46,   179,   173,    82,
     175,  -103,    85,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    97,    98,   101,   104,    22,   110,   111,    23,
      24,    25,    26,   165,   123,    27,    28,    29,   132,   124,
      30,   125,   126,   133,   135,    36,   174,    46,    60,    61,
      62,    63,    64,   199,   134,   137,   139,   145,   140,    31,
      32,   157,   143,   161,   164,    65,    66,   176,   162,   212,
      67,   114,   115,   116,   117,   118,   216,   217,   219,   182,
     183,   141,    68,   122,    85,    85,    69,    70,   -59,   188,
      71,   114,   115,   116,   117,   118,   191,   193,   119,   120,
     195,   197,   121,   122,   114,   115,   116,   117,   118,   204,
     198,    36,    36,    46,    46,   211,   214,    36,    36,    46,
      46,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     213,   206,   215,   102,    22,   203,    10,    23,    24,    25,
      26,   142,   192,    27,    28,    29,   167,     0,    30,     0,
       0,   114,   115,   116,   117,   118,     0,     0,   119,   120,
     146,     0,   121,   122,     0,     0,     0,    31,    32,     0,
     114,   115,   116,   117,   118,   147,     0,   119,   120,     0,
       0,   121,   122,     0,     0,   114,   115,   116,   117,   118,
     187,     0,   119,   120,     0,     0,   121,   122,     0,     0,
     114,   115,   116,   117,   118,   218,     0,   119,   120,     0,
       0,   121,   122,     0,     0,   114,   115,   116,   117,   118,
     223,     0,   119,   120,     0,     0,   121,   122,     0,     0,
     114,   115,   116,   117,   118,     0,     0,   119,   120,   113,
       0,   121,   122,     0,   114,   115,   116,   117,   118,     0,
       0,   119,   120,   186,     0,   121,   122,     0,   114,   115,
     116,   117,   118,     0,     0,   119,   120,     0,   210,   121,
     122,   114,   115,   116,   117,   118,     0,     0,   119,   120,
       0,     0,   121,   122,   114,   115,   116,   117,   118,     0,
       0,   119,   120,     0,     0,   121,   122,   114,   115,   116,
     117,   118,     0,     0,     0,   120,     0,     0,   121,   122,
      13,    14,    15,    16,    17,    18,     0,    20
};

static const yytype_int16 yycheck[] =
{
       9,    43,     9,    47,    68,    81,    51,   123,    19,    54,
      55,   141,   142,    93,    59,    12,    13,    14,    15,    36,
      23,    24,    67,    40,     0,    33,    71,    33,    46,    47,
      48,    28,    29,    36,    43,    31,    43,    82,    47,    11,
      47,    49,    50,    49,    50,    87,    35,    56,    17,    18,
      49,    50,    44,    45,    46,    47,    48,    35,    33,   103,
     136,    11,   178,    55,    56,   195,    33,    33,    33,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    87,    33,
      87,    92,   162,    39,   214,   215,   162,    39,   218,    11,
      11,    39,    39,   223,   103,   140,   103,   161,   143,    57,
     145,    34,   144,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    39,    39,    11,    32,    16,    11,    11,    19,
      20,    21,    22,   134,    35,    25,    26,    27,    58,    39,
      30,    39,    11,    36,    40,   144,    36,   144,    11,    12,
      13,    14,    15,   188,    34,    11,    34,    33,    40,    49,
      50,    11,    39,    57,    39,    28,    29,    35,    40,   204,
      33,    44,    45,    46,    47,    48,   210,   211,   213,    39,
      39,    34,    45,    56,   216,   217,    49,    50,    18,    23,
      53,    44,    45,    46,    47,    48,    39,    18,    51,    52,
      17,    11,    55,    56,    44,    45,    46,    47,    48,    33,
      39,   210,   211,   210,   211,    41,    34,   216,   217,   216,
     217,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      33,   194,    34,    56,    16,   189,     4,    19,    20,    21,
      22,    34,   178,    25,    26,    27,   135,    -1,    30,    -1,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      34,    -1,    55,    56,    -1,    -1,    -1,    49,    50,    -1,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      44,    45,    46,    47,    48,    34,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    39,
      -1,    55,    56,    -1,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    39,    -1,    55,    56,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    41,    55,
      56,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      -1,    -1,    55,    56,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
       3,     4,     5,     6,     7,     8,    -1,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    61,    64,    95,    96,    98,    99,     0,    62,
      96,    97,    11,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    16,    19,    20,    21,    22,    25,    26,    27,
      30,    49,    50,    65,    66,    74,    75,    82,    85,    86,
      87,    88,    89,    93,    94,   107,   110,    35,   101,    33,
      65,    33,    49,    50,    33,    33,    33,    35,    78,    33,
      11,    12,    13,    14,    15,    28,    29,    33,    45,    49,
      50,    53,    75,    76,    77,   110,    39,    39,    11,    11,
      11,    67,    57,    39,    63,    94,    39,    93,   102,   103,
     104,   105,   106,    69,    76,   111,   112,    39,    39,    76,
      76,    11,    86,    79,    32,    76,    49,    50,    76,    77,
      11,    11,    76,    39,    44,    45,    46,    47,    48,    51,
      52,    55,    56,    35,    39,    39,    11,    71,    72,    73,
      74,    76,    58,    36,    34,    40,    65,    11,    72,    34,
      40,    34,    34,    39,    93,    33,    34,    34,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    11,    73,   108,
     109,    57,    40,    68,    39,    65,   100,   105,    74,    70,
      76,    78,    78,    76,    36,    76,    35,    36,    40,    77,
      72,    74,    39,    39,    83,    84,    39,    34,    23,    90,
      92,    39,   109,    18,    80,    17,    81,    11,    39,    76,
      24,    36,    91,    92,    33,    18,    81,    78,    49,    50,
      41,    41,    76,    33,    34,    34,    93,    93,    34,    76,
      78,    78,    78,    34,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    63,    61,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    67,    68,    66,    69,    70,    66,
      71,    71,    71,    71,    72,    73,    74,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    79,    78,    80,    80,    81,    81,    83,
      82,    84,    82,    85,    86,    87,    87,    88,    89,    90,
      90,    90,    91,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    97,    96,    99,    98,   100,   101,
     102,   102,   103,   103,   104,   104,   106,   105,   107,   108,
     108,   109,   109,   110,   111,   111,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     6,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     5,     0,     0,     6,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     2,
       2,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     6,     2,     0,     0,
       8,     0,     7,     5,     3,    10,    10,     7,     7,     2,
       1,     2,     3,     4,     2,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     2,     1,     0,     3,     0,     7,     1,     3,
       1,     0,     1,     0,     3,     1,     0,     3,     6,     1,
       3,     1,     1,     4,     1,     0,     3,     1
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
  case 2: /* $@1: %empty  */
#line 109 "parser.y"
                   { ast_traversal((yyvsp[0].node)); }
#line 1400 "parser.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 110 "parser.y"
           { ast_traversal((yyvsp[0].node)); }
#line 1406 "parser.tab.c"
    break;

  case 5: /* functions_optional: functions  */
#line 118 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1414 "parser.tab.c"
    break;

  case 6: /* functions_optional: %empty  */
#line 122 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 1422 "parser.tab.c"
    break;

  case 7: /* type: INTEGER  */
#line 127 "parser.y"
               { (yyval.data_type) = INT_TYPE;   }
#line 1428 "parser.tab.c"
    break;

  case 8: /* type: FLOAT  */
#line 128 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1434 "parser.tab.c"
    break;

  case 9: /* type: DOUBLE  */
#line 129 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1440 "parser.tab.c"
    break;

  case 10: /* type: VOID  */
#line 130 "parser.y"
               { (yyval.data_type) = VOID_TYPE;   }
#line 1446 "parser.tab.c"
    break;

  case 11: /* type: BOOLEAN  */
#line 131 "parser.y"
               { (yyval.data_type) = BOOL_TYPE;   }
#line 1452 "parser.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 132 "parser.y"
               { (yyval.data_type) = CHAR_TYPE;   }
#line 1458 "parser.tab.c"
    break;

  case 13: /* type: STR  */
#line 133 "parser.y"
               { (yyval.data_type) = STR_TYPE;   }
#line 1464 "parser.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 136 "parser.y"
                  {declare = 1; }
#line 1470 "parser.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 136 "parser.y"
                                        {declare = 0; }
#line 1476 "parser.tab.c"
    break;

  case 16: /* declaration: type $@3 names $@4 SEMICOLON  */
#line 137 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, 0);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            set_constant(temp->names[i]->name, 0);
            if(temp->names[i]->stype == UNDEF){
                set_type(temp->names[i]->name, temp->data_type, UNDEF);
            }else{
               if (temp->data_type== INT_TYPE){
                if(temp->names[i]->stype !=INT_TYPE && temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF);
                }
               }
              else if (temp->data_type== REAL_TYPE){
                if(temp->names[i]->stype !=REAL_TYPE&&temp->names[i]->stype !=INT_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF);
                }
                }
                else if (temp->data_type== CHAR_TYPE){
                if(temp->names[i]->stype !=CHAR_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                else if (temp->data_type== BOOL_TYPE){
                if(temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                else if (temp->data_type== STR_TYPE){
                if(temp->names[i]->stype !=STR_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                
            }
            
        }
    }
#line 1533 "parser.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 190 "parser.y"
             { declare = 1; }
#line 1539 "parser.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 190 "parser.y"
                                  { add_to_names((yyvsp[0].symbol_table_item)); declare = 0; }
#line 1545 "parser.tab.c"
    break;

  case 19: /* declaration: CONST type $@5 init $@6 SEMICOLON  */
#line 191 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, 1);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            // variable
            set_constant(temp->names[i]->name, 1);
            if(temp->names[i]->stype == UNDEF){
                set_type(temp->names[i]->name, temp->data_type, UNDEF);
            }else{
               if (temp->data_type== INT_TYPE){
                if(temp->names[i]->stype !=INT_TYPE && temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF);
                }
               }
              else if (temp->data_type== REAL_TYPE){
                if(temp->names[i]->stype !=REAL_TYPE&&temp->names[i]->stype !=INT_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF);
                }
                }
                else if (temp->data_type== CHAR_TYPE){
                if(temp->names[i]->stype !=CHAR_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                else if (temp->data_type== BOOL_TYPE){
                if(temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                else if (temp->data_type== STR_TYPE){
                if(temp->names[i]->stype !=STR_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }
                }
                
            }
            
        }
    }
#line 1603 "parser.tab.c"
    break;

  case 20: /* names: names COMMA variable  */
#line 247 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1611 "parser.tab.c"
    break;

  case 21: /* names: names COMMA init  */
#line 251 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1619 "parser.tab.c"
    break;

  case 22: /* names: variable  */
#line 255 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1627 "parser.tab.c"
    break;

  case 23: /* names: init  */
#line 259 "parser.y"
        { 
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1635 "parser.tab.c"
    break;

  case 24: /* init: var_init  */
#line 264 "parser.y"
               { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1641 "parser.tab.c"
    break;

  case 25: /* var_init: IDENT ASSIGN_OP value  */
#line 267 "parser.y"
{ 
	AST_Node_Const *temp = (AST_Node_Const*) (yyvsp[0].node);
  	(yyvsp[-2].symbol_table_item)->val = temp->val;
	(yyvsp[-2].symbol_table_item)->stype = temp->const_type;
	(yyval.symbol_table_item) = (yyvsp[-2].symbol_table_item);
}
#line 1652 "parser.tab.c"
    break;

  case 26: /* variable: IDENT  */
#line 275 "parser.y"
                { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1658 "parser.tab.c"
    break;

  case 27: /* var_ref: variable  */
#line 277 "parser.y"
        {
		(yyval.node) = new_ast_var_node((yyvsp[0].symbol_table_item)); /* no reference */
	}
#line 1666 "parser.tab.c"
    break;

  case 28: /* expression: expression ADD_OP expression  */
#line 296 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(ADD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1674 "parser.tab.c"
    break;

  case 29: /* expression: expression SUB_OP expression  */
#line 300 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(SUB, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1682 "parser.tab.c"
    break;

  case 30: /* expression: expression MUL_OP expression  */
#line 304 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MUL, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1690 "parser.tab.c"
    break;

  case 31: /* expression: expression DIV_OP expression  */
#line 308 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(DIV, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1698 "parser.tab.c"
    break;

  case 32: /* expression: expression MOD_OP expression  */
#line 312 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MOD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1706 "parser.tab.c"
    break;

  case 33: /* expression: expression AND_OP expression  */
#line 317 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_AND, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1714 "parser.tab.c"
    break;

  case 34: /* expression: expression OR_OP expression  */
#line 321 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_OR, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1722 "parser.tab.c"
    break;

  case 35: /* expression: NOT_OP expression  */
#line 325 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_NOT, (yyvsp[0].node), NULL);
}
#line 1730 "parser.tab.c"
    break;

  case 36: /* expression: expression EQ_OP expression  */
#line 329 "parser.y"
{
	(yyval.node) = new_ast_equ_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1738 "parser.tab.c"
    break;

  case 37: /* expression: expression REL_OP expression  */
#line 333 "parser.y"
{
	(yyval.node) = new_ast_rel_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1746 "parser.tab.c"
    break;

  case 38: /* expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 337 "parser.y"
{
	(yyval.node) = (yyvsp[-1].node); /* just pass information */
}
#line 1754 "parser.tab.c"
    break;

  case 39: /* expression: INC_OP IDENT  */
#line 341 "parser.y"
{
    {
			(yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 0, 1);
    }
}
#line 1764 "parser.tab.c"
    break;

  case 40: /* expression: DEC_OP IDENT  */
#line 347 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 1, 1);
    }

}
#line 1775 "parser.tab.c"
    break;

  case 41: /* expression: IDENT INC_OP  */
#line 354 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 0);
    }
}
#line 1785 "parser.tab.c"
    break;

  case 42: /* expression: IDENT DEC_OP  */
#line 360 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 0);
    }
}
#line 1795 "parser.tab.c"
    break;

  case 43: /* expression: func_call  */
#line 366 "parser.y"
{
		        (yyval.node) = (yyvsp[0].node); /* just pass information */

	    }
#line 1804 "parser.tab.c"
    break;

  case 44: /* expression: var_ref  */
#line 371 "parser.y"
{ 
    (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 1812 "parser.tab.c"
    break;

  case 45: /* expression: value  */
#line 375 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node); /* no sign */
  }
#line 1820 "parser.tab.c"
    break;

  case 46: /* expression: SUB_OP value  */
#line 379 "parser.y"
  {
    
      AST_Node_Const *temp = (AST_Node_Const*) (yyvsp[0].node);

      /* inverse value depending on the constant type */
      switch(temp->const_type){
        case INT_TYPE:
          temp->val.ival *= -1;
          break;
        case REAL_TYPE:
          temp->val.fval *= -1;
          break;
        case CHAR_TYPE:
          /* sign before char error */
          fprintf(stderr, "Error having sign before character constant!\n");
          exit(1);;
          break;
        case STR_TYPE:
            /* sign before string error */
            fprintf(stderr, "Error having sign before string constant!\n");
            exit(1);;
            break;
        case BOOL_TYPE:
            /* sign before bool error */
            fprintf(stderr, "Error having sign before bool constant!\n");
            exit(1);;
            break;
      }

      (yyval.node) = (AST_Node*) temp;
    
  }
#line 1857 "parser.tab.c"
    break;

  case 47: /* value: CONST_INT  */
#line 417 "parser.y"
                  { 
  (yyval.node) = new_ast_const_node(INT_TYPE, (yyvsp[0].val));  }
#line 1864 "parser.tab.c"
    break;

  case 48: /* value: CONST_FLOAT  */
#line 419 "parser.y"
              { (yyval.node) = new_ast_const_node(REAL_TYPE, (yyvsp[0].val)); }
#line 1870 "parser.tab.c"
    break;

  case 49: /* value: CONST_CHAR  */
#line 420 "parser.y"
             { (yyval.node) = new_ast_const_node(CHAR_TYPE, (yyvsp[0].val)); }
#line 1876 "parser.tab.c"
    break;

  case 50: /* value: STRING_LITERAL  */
#line 421 "parser.y"
                 { (yyval.node) = new_ast_const_node(STR_TYPE, (yyvsp[0].val)); }
#line 1882 "parser.tab.c"
    break;

  case 51: /* value: TRUE_TOKEN  */
#line 422 "parser.y"
             { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1888 "parser.tab.c"
    break;

  case 52: /* value: FALSE_TOKEN  */
#line 423 "parser.y"
              { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1894 "parser.tab.c"
    break;

  case 53: /* $@7: %empty  */
#line 426 "parser.y"
                         {
  // parent = 0;
  printf("Tail declared at line %d\n", lineno);
  incr_scope(lineno);}
#line 1903 "parser.tab.c"
    break;

  case 54: /* tail: LEFT_CURLY_BRACKET $@7 statements RIGHT_CURLY_BRACKET  */
#line 430 "parser.y"
{ 
      
    (yyval.node) = (yyvsp[-1].node); /* just pass information */
    hide_scope(yyout);
}
#line 1913 "parser.tab.c"
    break;

  case 55: /* else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 438 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 1927 "parser.tab.c"
    break;

  case 56: /* else_if: else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 448 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 1941 "parser.tab.c"
    break;

  case 57: /* else_part: ELSE tail  */
#line 460 "parser.y"
{
    /* else exists */
    (yyval.node) = (yyvsp[0].node);
}
#line 1950 "parser.tab.c"
    break;

  case 58: /* else_part: %empty  */
#line 465 "parser.y"
{
    /* no else */
    (yyval.node) = NULL;
}
#line 1959 "parser.tab.c"
    break;

  case 59: /* $@8: %empty  */
#line 471 "parser.y"
                                                        {

    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }
    printf("is false %d\n", is_false);

}
#line 1973 "parser.tab.c"
    break;

  case 60: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail $@8 else_if else_part  */
#line 480 "parser.y"
  {
    (yyval.node) = new_ast_if_node((yyvsp[-5].node), (yyvsp[-3].node), elsifs, elseif_count, (yyvsp[0].node));
    elseif_count = 0;
    elsifs = NULL;
    printf("is false beforee \n");

  }
#line 1985 "parser.tab.c"
    break;

  case 61: /* $@9: %empty  */
#line 487 "parser.y"
                                            {
  int is_false=is_always_false((yyvsp[-2].node));

    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 1998 "parser.tab.c"
    break;

  case 62: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail $@9 else_part  */
#line 495 "parser.y"
{
    (yyval.node) = new_ast_if_node((yyvsp[-4].node), (yyvsp[-2].node), NULL, 0, (yyvsp[0].node));
    
}
#line 2007 "parser.tab.c"
    break;

  case 63: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail  */
#line 502 "parser.y"
{
    (yyval.node) = new_ast_while_node((yyvsp[-2].node), (yyvsp[0].node));
}
#line 2015 "parser.tab.c"
    break;

  case 64: /* assignment: var_ref ASSIGN_OP expression  */
#line 511 "parser.y"
{
	AST_Node_VAR *temp = (AST_Node_VAR*) (yyvsp[-2].node);
	(yyval.node) = new_ast_assign_node(temp->entry, (yyvsp[0].node));
  /* find datatypes */
  int is_const = isConst(temp->entry->name);
  if(is_const == 1){
    fprintf(stderr, "Error: assignment to constant %s at line %d\n",
      temp->entry->name, lineno);
    exit(1);;
  }
  int type1 = get_type(temp->entry->name);

	int type2 = expression_data_type((yyvsp[0].node));
  /* the last function will give us information about revisits */
  /* contains revisit => add assignment-check to revisit queue */
  
  if(cont_revisit == 1){	
    /* search if entry exists */
    revisit_queue *q = search_queue(temp->entry->name);
		if(q == NULL){
			add_to_queue(temp->entry, temp->entry->name, ASSIGN_CHECK);
			q = search_queue(temp->entry->name);	
		}
    /* setup structures */
    if(q->num_of_assigns == 0){ /* first node */
			q->nodes = (void**) malloc(sizeof(void*));
      q->linenos = (int*)malloc(sizeof(int));
		}
    else{ /* general case */
			q->nodes = (void**) realloc(q->nodes, (q->num_of_assigns + 1) * sizeof(void*));
      q->linenos = (int*)realloc(q->linenos, (q->num_of_assigns + 1) * sizeof(int));
		}
    /* add info of assignment */
    q->nodes[q->num_of_assigns] = (void*) (yyvsp[0].node);
    q->linenos[q->num_of_assigns] = lineno;
    /* increment number of assignments */
		q->num_of_assigns++;
    /* reset revisit flag */
		cont_revisit = 0;

		printf("Assignment revisit for %s at line %d\n", temp->entry->name, lineno);
  }
  else{ /* no revisit */
		/* check assignment semantics */
		get_result_type(
			type1,       /*  variable datatype  */
			type2,       /* expression datatype */
			NONE  /* checking compatibility only (no operator) */
		  ,
			lineno
    );
	}
  if((yyvsp[0].node)->type==CONST_NODE)
  {
    AST_Node_Const *temp2 = (AST_Node_Const*) (yyvsp[0].node);
    set_value(temp->entry->name, temp2->val);
  }
}
#line 2078 "parser.tab.c"
    break;

  case 65: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT INC_OP RIGHT_PAREN tail  */
#line 572 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 0, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2093 "parser.tab.c"
    break;

  case 66: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT DEC_OP RIGHT_PAREN tail  */
#line 583 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 1, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2108 "parser.tab.c"
    break;

  case 67: /* do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 595 "parser.y"
{
    (yyval.node) = new_ast_do_node((yyvsp[-2].node), (yyvsp[-5].node));
}
#line 2116 "parser.tab.c"
    break;

  case 74: /* statements: statements statement  */
#line 614 "parser.y"
  {
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[-1].node);
    (yyval.node) = new_statements_node(temp->statements, temp->statement_count, (yyvsp[0].node));
  }
#line 2125 "parser.tab.c"
    break;

  case 75: /* statements: statement  */
#line 619 "parser.y"
  {
    (yyval.node) = new_statements_node(NULL, 0, (yyvsp[0].node));
  }
#line 2133 "parser.tab.c"
    break;

  case 76: /* statement: declaration  */
#line 626 "parser.y"
{
  (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 2141 "parser.tab.c"
    break;

  case 77: /* statement: if_statement  */
#line 631 "parser.y"
{ 
		(yyval.node) = (yyvsp[0].node); /* just pass information */
	}
#line 2149 "parser.tab.c"
    break;

  case 78: /* statement: while_statement  */
#line 635 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2157 "parser.tab.c"
    break;

  case 79: /* statement: RETURN expression SEMICOLON  */
#line 639 "parser.y"
        {
          

          (yyval.node) = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
          temp_function->return_node = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
        }
#line 2168 "parser.tab.c"
    break;

  case 80: /* statement: for_statement  */
#line 646 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2176 "parser.tab.c"
    break;

  case 81: /* statement: do_statement  */
#line 651 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2184 "parser.tab.c"
    break;

  case 82: /* statement: switch_statement  */
#line 656 "parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2192 "parser.tab.c"
    break;

  case 83: /* statement: enum_statement  */
#line 661 "parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2200 "parser.tab.c"
    break;

  case 84: /* statement: func_call SEMICOLON  */
#line 665 "parser.y"
        {
		        (yyval.node) = (yyvsp[-1].node); /* just pass information */

	    }
#line 2209 "parser.tab.c"
    break;

  case 85: /* statement: CONTINUE SEMICOLON  */
#line 670 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(0);
        }
#line 2217 "parser.tab.c"
    break;

  case 86: /* statement: BREAK SEMICOLON  */
#line 674 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(1);
        }
#line 2225 "parser.tab.c"
    break;

  case 87: /* statement: assignment SEMICOLON  */
#line 678 "parser.y"
        {
		(yyval.node) = (yyvsp[-1].node); /* just pass information */
	    }
#line 2233 "parser.tab.c"
    break;

  case 88: /* statement: INC_OP IDENT SEMICOLON  */
#line 682 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 1);
            }

        }
#line 2244 "parser.tab.c"
    break;

  case 89: /* statement: DEC_OP IDENT SEMICOLON  */
#line 689 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 1);
            }

        }
#line 2255 "parser.tab.c"
    break;

  case 90: /* statement: IDENT INC_OP SEMICOLON  */
#line 696 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 0, 0);
            }

        }
#line 2266 "parser.tab.c"
    break;

  case 91: /* statement: IDENT DEC_OP SEMICOLON  */
#line 703 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 1, 0);
            }

        }
#line 2277 "parser.tab.c"
    break;

  case 92: /* functions: functions function  */
#line 715 "parser.y"
  {
    AST_Node_Func_Declarations *temp = (AST_Node_Func_Declarations*) (yyvsp[-1].node);
    (yyval.node) = new_func_declarations_node(temp->func_declarations, temp->func_declaration_count, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2287 "parser.tab.c"
    break;

  case 93: /* functions: function  */
#line 721 "parser.y"
  {
    (yyval.node) = new_func_declarations_node(NULL, 0, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2296 "parser.tab.c"
    break;

  case 94: /* $@10: %empty  */
#line 727 "parser.y"
                         { 
  printf("Function declared at line %d\n", lineno);
  incr_scope(lineno); }
#line 2304 "parser.tab.c"
    break;

  case 95: /* function: function_head $@10 function_tail  */
#line 730 "parser.y"
{ 
    /* perform revisit */
    printf("before");
	  revisit(temp_function->entry->name);
    printf("after");
    (yyval.node) = (AST_Node *) temp_function;
    
    
}
#line 2318 "parser.tab.c"
    break;

  case 96: /* $@11: %empty  */
#line 743 "parser.y"
                    { function_decl = 1; }
#line 2324 "parser.tab.c"
    break;

  case 97: /* function_head: FUNC $@11 IDENT LEFT_PAREN param_empty RIGHT_PAREN return_type  */
#line 744 "parser.y"
  { 
    function_decl = 0;

    AST_Node_Ret_Type *temp = (AST_Node_Ret_Type *) (yyvsp[0].node);
    temp_function = (AST_Node_Func_Decl *)
    
    new_ast_func_decl_node(temp->ret_type, (yyvsp[-4].symbol_table_item));

    temp_function->entry->stype = FUNCTION_TYPE;
    temp_function->entry->inf_type = temp->ret_type;
    /////////////////////////
    if((yyvsp[-2].node) != NULL){
      AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) (yyvsp[-2].node);

      temp_function->entry->params = temp->parameters;
      temp_function->entry->num_of_params = temp->num_of_pars;
    }
    else{
      temp_function->entry->params = NULL;
      temp_function->entry->num_of_params = 0;
    }	
  }
#line 2351 "parser.tab.c"
    break;

  case 98: /* return_type: type  */
#line 770 "parser.y"
        {
		(yyval.node) = new_ast_ret_type_node((yyvsp[0].data_type));
	}
#line 2359 "parser.tab.c"
    break;

  case 100: /* statements_optional: statements  */
#line 779 "parser.y"
  {
    temp_function->statements = (yyvsp[0].node);
  }
#line 2367 "parser.tab.c"
    break;

  case 101: /* statements_optional: %empty  */
#line 783 "parser.y"
  {
    temp_function->statements = NULL;
  }
#line 2375 "parser.tab.c"
    break;

  case 102: /* param_empty: parameters  */
#line 816 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2383 "parser.tab.c"
    break;

  case 103: /* param_empty: %empty  */
#line 820 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 2391 "parser.tab.c"
    break;

  case 104: /* parameters: parameters COMMA parameter  */
#line 826 "parser.y"
  {
    AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) (yyvsp[-2].node);
    (yyval.node) = new_ast_decl_params_node(temp->parameters, temp->num_of_pars, (yyvsp[0].par));
  }
#line 2400 "parser.tab.c"
    break;

  case 105: /* parameters: parameter  */
#line 831 "parser.y"
  {
    (yyval.node) = new_ast_decl_params_node(NULL, 0, (yyvsp[0].par));
  }
#line 2408 "parser.tab.c"
    break;

  case 106: /* $@12: %empty  */
#line 836 "parser.y"
           { declare = 1; }
#line 2414 "parser.tab.c"
    break;

  case 107: /* parameter: $@12 type variable  */
#line 837 "parser.y"
{ 
    declare = 0;
    // set type of symbol table entry	
    if((yyvsp[0].symbol_table_item)->stype == UNDEF){ /* "simple" type */
        set_type((yyvsp[0].symbol_table_item)->name, (yyvsp[-1].data_type), UNDEF); 
    }
    (yyval.par) = def_param((yyvsp[-1].data_type), (yyvsp[0].symbol_table_item)->name, 0); //always pass by value
}
#line 2427 "parser.tab.c"
    break;

  case 113: /* func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN  */
#line 855 "parser.y"
{	
    AST_Node_Call_Params *temp = (AST_Node_Call_Params*) (yyvsp[-1].node);
    (yyval.node) = new_ast_func_call_node((yyvsp[-3].symbol_table_item), temp->params, temp->num_of_pars);
    /* add information to revisit queue entry (if one exists) */
    revisit_queue *q = search_queue((yyvsp[-3].symbol_table_item)->name);
    if(q != NULL){
		/* setup structures */
		if(q->num_of_calls == 0){ /* first call */
			q->par_types = (int**) malloc(sizeof(int*));
			q->num_of_pars = (int*) malloc(sizeof(int));
      q->linenos = (int*) malloc(sizeof(int));
      q->linenos[0] = lineno;
		}
		else{ /* general case */
			q->par_types = (int**) realloc(q->par_types,
				(q->num_of_calls + 1) * sizeof(int*));
			q->num_of_pars = (int*) realloc(q->num_of_pars,
				(q->num_of_calls + 1) * sizeof(int));
      q->linenos = (int*) realloc(q->linenos,
        (q->num_of_calls + 1) * sizeof(int));
      q->linenos[q->num_of_calls] = lineno;
		}

		/* add info of function call */
		q->num_of_pars[q->num_of_calls] = temp->num_of_pars;
		q->par_types[q->num_of_calls]
			= (int*) malloc(temp->num_of_pars * sizeof(int));
		/* get the types of the parameters */
		int i;
		for(i = 0; i < temp->num_of_pars; i++){
			/* get datatype of parameter-expression */
			q->par_types[q->num_of_calls][i]
				= expression_data_type(temp->params[i]);
		}

		/* increment number of calls */
		q->num_of_calls++;
	}
	else{
		/* function declared before call */
		if((yyvsp[-3].symbol_table_item)->stype == FUNCTION_TYPE){
			/* check number of parameters */
			if((yyvsp[-3].symbol_table_item)->num_of_params != temp->num_of_pars){
				fprintf(stderr,
				"Function call of %s has wrong num of parameters!\n",
				(yyvsp[-3].symbol_table_item)->name);
				exit(1);;
			}
			/* check if parameters are compatible */
			int i;
			for(i = 0; i < temp->num_of_pars; i++){
				/* type of parameter in function declaration */
				int type_1 = expression_data_type(temp->params[i]);

				/* type of parameter in function call*/
				int type_2 = (yyvsp[-3].symbol_table_item)->params[i].type;

				/* check compatibility for function call */
				get_result_type(type_1, type_2, NONE,
			lineno);
				/* error occurs automatically in the function */
			}
		}
	}
}
#line 2497 "parser.tab.c"
    break;

  case 114: /* arguments: argument  */
#line 923 "parser.y"
{
  (yyval.node) = (yyvsp[0].node);
}
#line 2505 "parser.tab.c"
    break;

  case 115: /* arguments: %empty  */
#line 927 "parser.y"
{
        AST_Node_Call_Params *temp = malloc (sizeof (AST_Node_Call_Params));
        temp->type = CALL_PARAMS;
        temp->params = NULL;
        temp->num_of_pars = 0;
        (yyval.node) = (AST_Node*)temp;
  }
#line 2517 "parser.tab.c"
    break;

  case 116: /* argument: argument COMMA expression  */
#line 936 "parser.y"
{
  AST_Node_Call_Params *temp = (AST_Node_Call_Params*) (yyvsp[-2].node);
  (yyval.node) = new_ast_call_params_node(temp->params, temp->num_of_pars, (yyvsp[0].node));
}
#line 2526 "parser.tab.c"
    break;

  case 117: /* argument: expression  */
#line 941 "parser.y"
{
  (yyval.node) = new_ast_call_params_node(NULL, 0, (yyvsp[0].node));
}
#line 2534 "parser.tab.c"
    break;


#line 2538 "parser.tab.c"

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

#line 946 "parser.y"


void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);;
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
void add_elseif(AST_Node *elsif){
  // first entry
  if(elseif_count == 0){
    elseif_count = 1;
    elsifs = (AST_Node **) malloc(1 * sizeof(AST_Node));
    elsifs[0] = elsif;
  }
  // general case
  else{
    elseif_count++;
    elsifs = (AST_Node **) realloc(elsifs, elseif_count * sizeof(AST_Node));
    elsifs[elseif_count - 1] = elsif;
  }
}
int main (int argc, char *argv[]){
    
    // initialize symbol table
    init_symbol_table();

    // initialize revisit queue
	  queue = NULL;

    // parsing
    int flag;
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");
    flag = yyparse();
    if ( flag == 0 ){
      printf("/*--------------Your program is syntactically correct!-------*/\n");
    }
    else{
      printf("/*-------------------------Rejected!---------------------------*/\n");
      //printf("/* Unrecognized token %s in line %d: ",yytext,lineno);
    }
    fclose(yyin);

    	/* remove print from revisit queue */
      revisit_queue *q = search_prev_queue("print");
      if(q == NULL){ /* special case: first entry */
        if(queue != NULL){ /* check if queue not empty */
          queue = queue->next;
        }
      }
      else{
        q->next = q->next->next;
      }
      
      /* perform the remaining checks (assignments) */
      if(queue != NULL){
          revisit_queue *cur;
          cur = queue;
          while(cur != NULL){
            if(cur->revisit_type == ASSIGN_CHECK){
              revisit(cur->st_name);
            }
            cur = cur->next;
          }
      }
      /* if still not empty -> Warning */
      if(queue != NULL){
        check_undeclared_variables();
        printf("Warning: Something has not been checked in the revisit queue!\n");
      }
      
    /* declare function type of "print" */
    func_declare("print", VOID_TYPE, 1, NULL);

    // symbol table dump
    // yyout = fopen(argv[2], "w");
    dump_symboltable(yyout);
    fclose(yyout);

    // revisit queue dump
    yyout = fopen(argv[3], "w");
    revisit_dump(yyout);
    fclose(yyout);
	
	return flag;
}
