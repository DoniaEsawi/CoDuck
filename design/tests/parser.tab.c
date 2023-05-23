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
  AST_Node **cases;
    AST_Node *default_case;
    int case_count = 0;
    void add_case(AST_Node *case_node);
    // for functions
    AST_Node_Func_Decl *temp_function;
    void gencode(char* x);
    // void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
    // void gencode_math(ListNode* parent, ListNode* arg1, ListNode* arg2, const char* op);
    char * ICG[1000];
    int nextinstr = 0;
    int temp_var_number = 0;
    // define output file
    FILE *yyout;


#line 112 "parser.tab.c"

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
  YYSYMBOL_90_10 = 90,                     /* $@10  */
  YYSYMBOL_91_11 = 91,                     /* $@11  */
  YYSYMBOL_cases = 92,                     /* cases  */
  YYSYMBOL_default = 93,                   /* default  */
  YYSYMBOL_94_12 = 94,                     /* $@12  */
  YYSYMBOL_case = 95,                      /* case  */
  YYSYMBOL_96_13 = 96,                     /* $@13  */
  YYSYMBOL_statements = 97,                /* statements  */
  YYSYMBOL_statement = 98,                 /* statement  */
  YYSYMBOL_functions = 99,                 /* functions  */
  YYSYMBOL_function = 100,                 /* function  */
  YYSYMBOL_101_14 = 101,                   /* $@14  */
  YYSYMBOL_function_head = 102,            /* function_head  */
  YYSYMBOL_103_15 = 103,                   /* $@15  */
  YYSYMBOL_return_type = 104,              /* return_type  */
  YYSYMBOL_function_tail = 105,            /* function_tail  */
  YYSYMBOL_statements_optional = 106,      /* statements_optional  */
  YYSYMBOL_param_empty = 107,              /* param_empty  */
  YYSYMBOL_parameters = 108,               /* parameters  */
  YYSYMBOL_parameter = 109,                /* parameter  */
  YYSYMBOL_110_16 = 110,                   /* $@16  */
  YYSYMBOL_enum_statement = 111,           /* enum_statement  */
  YYSYMBOL_112_17 = 112,                   /* $@17  */
  YYSYMBOL_113_18 = 113,                   /* $@18  */
  YYSYMBOL_114_19 = 114,                   /* $@19  */
  YYSYMBOL_func_call = 115,                /* func_call  */
  YYSYMBOL_arguments = 116,                /* arguments  */
  YYSYMBOL_argument = 117                  /* argument  */
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
#define YYLAST   431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

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
       0,   120,   120,   121,   120,   128,   133,   138,   139,   140,
     141,   142,   143,   144,   147,   147,   147,   201,   202,   201,
     267,   285,   292,   306,   315,   317,   393,   394,   413,   421,
     425,   429,   433,   438,   442,   446,   450,   454,   458,   462,
     468,   475,   481,   487,   492,   520,   524,   563,   565,   566,
     567,   568,   569,   572,   572,   583,   593,   605,   611,   617,
     617,   633,   633,   647,   656,   720,   731,   743,   749,   755,
     749,   765,   769,   771,   773,   773,   791,   790,   813,   818,
     825,   830,   834,   838,   845,   850,   855,   860,   864,   869,
     873,   877,   881,   888,   895,   902,   914,   920,   927,   927,
     943,   943,   968,   974,   978,   983,  1015,  1020,  1025,  1030,
    1036,  1036,  1048,  1048,  1048,  1048,  1054,  1122,  1127,  1135,
    1140
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
  "$@10", "$@11", "cases", "default", "$@12", "case", "$@13", "statements",
  "statement", "functions", "function", "$@14", "function_head", "$@15",
  "return_type", "function_tail", "statements_optional", "param_empty",
  "parameters", "parameter", "$@16", "enum_statement", "$@17", "$@18",
  "$@19", "func_call", "arguments", "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,  -134,    26,  -134,   -14,  -134,  -134,     8,  -134,   256,
    -134,     5,    10,  -134,  -134,  -134,  -134,  -134,  -134,   421,
    -134,   -15,    23,    24,    29,    31,  -134,   240,    20,    25,
      56,    57,  -134,  -134,  -134,    12,  -134,  -134,    32,  -134,
    -134,  -134,   140,  -134,  -134,    42,    38,   140,  -134,    46,
    -134,   240,    40,    44,   240,   240,    74,  -134,    54,    62,
      -8,  -134,  -134,  -134,  -134,  -134,  -134,   240,     1,    86,
      87,   240,  -134,   156,  -134,  -134,  -134,  -134,    48,    65,
      94,   240,  -134,    49,  -134,    95,  -134,   140,    83,    91,
      89,  -134,   421,   115,   354,    96,    93,  -134,  -134,   -24,
     252,  -134,    97,   256,   105,   240,  -134,  -134,   267,  -134,
    -134,  -134,  -134,  -134,   240,   240,   240,   240,   240,   240,
     240,   240,   240,  -134,  -134,    85,   100,  -134,  -134,  -134,
     354,   113,   118,  -134,   421,  -134,    74,    85,  -134,  -134,
     240,    31,    31,   240,   221,   240,   282,  -134,     6,     6,
    -134,  -134,  -134,   127,   367,    45,   372,     1,    94,   116,
    -134,  -134,  -134,  -134,  -134,  -134,   119,   354,   136,  -134,
     341,  -134,   297,   122,  -134,  -134,  -134,  -134,    94,  -134,
     145,   147,   157,   130,  -134,   100,   143,    19,    31,  -134,
     -38,  -134,   158,   144,   240,   153,  -134,  -134,   159,   162,
     240,    27,  -134,   148,   312,   240,    31,    31,    76,   150,
    -134,  -134,  -134,  -134,    31,   327,  -134,  -134,  -134,  -134,
    -134,    31,   256,   256,  -134,   140,   140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,   100,     0,     2,     5,    97,    98,     0,     1,   112,
      96,     0,     0,     7,     8,     9,    10,    11,    12,     0,
      13,    26,     0,     0,     0,     0,    68,     0,     0,     0,
       0,     0,    14,    80,    27,     0,    81,    82,     0,    84,
      85,    86,     3,    79,    87,     0,     0,   105,    99,   110,
      17,   118,     0,     0,     0,     0,     0,    53,     0,     0,
      26,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,    44,     0,    45,    43,    90,    89,     0,     0,
       0,     0,    91,     0,    78,     0,    88,   104,     0,     0,
     106,   109,     0,     0,   120,     0,   117,    94,    95,     0,
       0,    26,     0,   112,     0,     0,    41,    42,     0,    46,
      39,    40,    35,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    26,    15,    23,    24,    22,
      64,     0,     0,   103,     0,   110,     0,     0,    18,   116,
       0,     0,     0,     0,   112,     0,     0,    38,    28,    29,
      30,    31,    32,    34,    33,    36,    37,     0,     0,     0,
       4,   113,   102,   101,   108,   111,     0,   119,    61,    63,
       0,    54,     0,     0,    25,    21,    20,    16,     0,    19,
       0,    58,     0,     0,    69,   114,     0,    58,     0,    62,
       0,    67,     0,     0,     0,     0,    60,    57,     0,     0,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
      70,    73,    71,   115,     0,     0,    65,    66,    76,    74,
      55,     0,   112,   112,    56,    77,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,  -134,  -134,   -16,  -134,  -134,  -134,  -134,
    -134,    14,   -88,  -134,   -76,    -9,    -6,   -61,  -133,  -134,
    -134,    11,  -134,  -134,  -134,  -134,   141,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,     4,  -134,   -45,   -41,  -134,
     202,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,    75,
    -134,  -134,  -134,  -134,  -134,    -3,  -134,  -134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    83,     3,    32,    33,    80,   159,    93,
     166,   126,   127,   128,    34,    72,    73,    74,    58,   103,
     187,   189,    36,   180,   181,    37,    38,    39,    40,    41,
      59,   192,   201,   211,   223,   202,   222,    42,    43,     4,
       5,    11,     6,     7,   163,    48,    88,    89,    90,    91,
      92,    44,    45,   178,   193,    75,    95,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    84,    87,    50,   129,   138,    46,   109,   168,   169,
     141,   198,   199,    61,    62,    63,    64,     1,    51,    12,
     114,   115,   116,   117,   118,    51,     8,   119,   120,    65,
      66,   121,   122,    35,    52,    53,   188,   195,    35,    46,
      47,   106,   107,    49,    46,    94,    84,    35,    99,   100,
     200,   209,   116,   117,   118,   197,    54,    55,   144,    76,
     165,   108,    56,   210,    77,   112,    57,    78,    79,    81,
     175,    82,    85,   216,   217,   130,   136,    86,    35,    97,
    -107,   220,   176,    98,    46,   101,   104,   123,   224,   114,
     115,   116,   117,   118,    35,   105,   174,   110,   111,   146,
      46,   122,   129,    84,   124,   125,   132,   131,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   218,   162,   133,
     114,   115,   116,   117,   118,   134,   137,   119,   120,   135,
     139,   121,   122,   140,   167,    35,   143,   170,   145,   172,
     158,    46,   157,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   160,   161,   -59,   177,    22,   184,   179,    23,
      24,    25,    26,   186,   188,    27,    28,    29,   190,   191,
    -112,   114,   115,   116,   117,   118,   194,   225,   226,   120,
     203,   200,   121,   122,    84,    84,   205,   213,   204,    30,
      31,   219,   185,   206,   208,   113,   207,   102,   196,   215,
     114,   115,   116,   117,   118,   212,    10,   119,   120,     0,
     164,   121,   122,    35,    35,     0,    35,    35,     0,    46,
      46,     0,    46,    46,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,    22,     0,     0,
      23,    24,    25,    26,     0,     0,    27,    28,    29,     0,
       0,    60,    61,    62,    63,    64,     0,   171,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    65,    66,
      30,    31,    22,    67,     0,    23,    24,    25,    26,     0,
       0,    27,    28,    29,     0,    68,   142,     0,     0,    69,
      70,     0,     0,    71,     0,     0,   114,   115,   116,   117,
     118,   147,     0,   119,   120,    30,    31,   121,   122,     0,
       0,   114,   115,   116,   117,   118,   173,     0,   119,   120,
       0,     0,   121,   122,     0,     0,   114,   115,   116,   117,
     118,   183,     0,   119,   120,     0,     0,   121,   122,     0,
       0,   114,   115,   116,   117,   118,   214,     0,   119,   120,
       0,     0,   121,   122,     0,     0,   114,   115,   116,   117,
     118,   221,     0,   119,   120,     0,     0,   121,   122,     0,
       0,   114,   115,   116,   117,   118,     0,     0,   119,   120,
     182,     0,   121,   122,     0,   114,   115,   116,   117,   118,
       0,     0,   119,   120,     0,     0,   121,   122,   114,   115,
     116,   117,   118,     0,     0,   119,   120,     0,     0,   121,
     122,   114,   115,   116,   117,   118,   114,   115,   116,   117,
     118,     0,   121,   122,    13,    14,    15,    16,    17,    18,
       0,    20
};

static const yytype_int16 yycheck[] =
{
       9,    42,    47,    19,    80,    93,     9,    68,   141,   142,
      34,    49,    50,    12,    13,    14,    15,    31,    33,    11,
      44,    45,    46,    47,    48,    33,     0,    51,    52,    28,
      29,    55,    56,    42,    49,    50,    17,    18,    47,    42,
      35,    49,    50,    33,    47,    51,    87,    56,    54,    55,
      23,    24,    46,    47,    48,   188,    33,    33,   103,    39,
     136,    67,    33,    36,    39,    71,    35,    11,    11,    57,
     158,    39,    30,   206,   207,    81,    92,    39,    87,    39,
      34,   214,   158,    39,    87,    11,    32,    39,   221,    44,
      45,    46,    47,    48,   103,    33,   157,    11,    11,   105,
     103,    56,   178,   144,    39,    11,    11,    58,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    41,   134,    36,
      44,    45,    46,    47,    48,    34,    11,    51,    52,    40,
      34,    55,    56,    40,   140,   144,    39,   143,    33,   145,
      40,   144,    57,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    39,    35,    18,    39,    16,    35,    39,    19,
      20,    21,    22,    18,    17,    25,    26,    27,    11,    39,
      30,    44,    45,    46,    47,    48,    33,   222,   223,    52,
      36,    23,    55,    56,   225,   226,    33,    39,   194,    49,
      50,    41,   178,    34,   200,    39,    34,    56,   187,   205,
      44,    45,    46,    47,    48,   201,     4,    51,    52,    -1,
     135,    55,    56,   222,   223,    -1,   225,   226,    -1,   222,
     223,    -1,   225,   226,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    25,    26,    27,    -1,
      -1,    11,    12,    13,    14,    15,    -1,    36,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    28,    29,
      49,    50,    16,    33,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    26,    27,    -1,    45,    34,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    -1,    44,    45,    46,    47,
      48,    34,    -1,    51,    52,    49,    50,    55,    56,    -1,
      -1,    44,    45,    46,    47,    48,    34,    -1,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    44,    45,    46,    47,
      48,    34,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      -1,    44,    45,    46,    47,    48,    34,    -1,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    44,    45,    46,    47,
      48,    34,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      39,    -1,    55,    56,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    44,    45,    46,    47,    48,    44,    45,    46,    47,
      48,    -1,    55,    56,     3,     4,     5,     6,     7,     8,
      -1,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    61,    64,    99,   100,   102,   103,     0,    62,
     100,   101,    11,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    16,    19,    20,    21,    22,    25,    26,    27,
      49,    50,    65,    66,    74,    75,    82,    85,    86,    87,
      88,    89,    97,    98,   111,   112,   115,    35,   105,    33,
      65,    33,    49,    50,    33,    33,    33,    35,    78,    90,
      11,    12,    13,    14,    15,    28,    29,    33,    45,    49,
      50,    53,    75,    76,    77,   115,    39,    39,    11,    11,
      67,    57,    39,    63,    98,    30,    39,    97,   106,   107,
     108,   109,   110,    69,    76,   116,   117,    39,    39,    76,
      76,    11,    86,    79,    32,    33,    49,    50,    76,    77,
      11,    11,    76,    39,    44,    45,    46,    47,    48,    51,
      52,    55,    56,    39,    39,    11,    71,    72,    73,    74,
      76,    58,    11,    36,    34,    40,    65,    11,    72,    34,
      40,    34,    34,    39,    97,    33,    76,    34,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    57,    40,    68,
      39,    35,    65,   104,   109,    74,    70,    76,    78,    78,
      76,    36,    76,    34,    77,    72,    74,    39,   113,    39,
      83,    84,    39,    34,    35,    71,    18,    80,    17,    81,
      11,    39,    91,   114,    33,    18,    81,    78,    49,    50,
      23,    92,    95,    36,    76,    33,    34,    34,    76,    24,
      36,    93,    95,    39,    34,    76,    78,    78,    41,    41,
      78,    34,    96,    94,    78,    97,    97
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
      82,    84,    82,    85,    86,    87,    87,    88,    90,    91,
      89,    92,    92,    92,    94,    93,    96,    95,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,   101,   100,
     103,   102,   104,   105,   106,   106,   107,   107,   108,   108,
     110,   109,   112,   113,   114,   111,   115,   116,   116,   117,
     117
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
       8,     0,     7,     5,     3,    10,    10,     7,     0,     0,
       9,     2,     1,     2,     0,     4,     0,     5,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     3,     3,     3,     3,     2,     1,     0,     3,
       0,     7,     1,     3,     1,     0,     1,     0,     3,     1,
       0,     3,     0,     0,     0,     9,     4,     1,     0,     3,
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
  case 2: /* $@1: %empty  */
#line 120 "parser.y"
                   { ast_traversal((yyvsp[0].node)); }
#line 1424 "parser.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 121 "parser.y"
           { ast_traversal((yyvsp[0].node)); }
#line 1430 "parser.tab.c"
    break;

  case 5: /* functions_optional: functions  */
#line 129 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1438 "parser.tab.c"
    break;

  case 6: /* functions_optional: %empty  */
#line 133 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 1446 "parser.tab.c"
    break;

  case 7: /* type: INTEGER  */
#line 138 "parser.y"
               { (yyval.data_type) = INT_TYPE;   }
#line 1452 "parser.tab.c"
    break;

  case 8: /* type: FLOAT  */
#line 139 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1458 "parser.tab.c"
    break;

  case 9: /* type: DOUBLE  */
#line 140 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1464 "parser.tab.c"
    break;

  case 10: /* type: VOID  */
#line 141 "parser.y"
               { (yyval.data_type) = VOID_TYPE;   }
#line 1470 "parser.tab.c"
    break;

  case 11: /* type: BOOLEAN  */
#line 142 "parser.y"
               { (yyval.data_type) = BOOL_TYPE;   }
#line 1476 "parser.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 143 "parser.y"
               { (yyval.data_type) = CHAR_TYPE;   }
#line 1482 "parser.tab.c"
    break;

  case 13: /* type: STR  */
#line 144 "parser.y"
               { (yyval.data_type) = STR_TYPE;   }
#line 1488 "parser.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 147 "parser.y"
                  {declare = 1; }
#line 1494 "parser.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 147 "parser.y"
                                        {declare = 0; }
#line 1500 "parser.tab.c"
    break;

  case 16: /* declaration: type $@3 names $@4 SEMICOLON  */
#line 148 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, 0);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            set_constant(temp->names[i]->name, 0);
            if(temp->names[i]->stype == UNDEF){
                set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
            }else{
               if (temp->data_type== INT_TYPE){
                if(temp->names[i]->stype !=INT_TYPE && temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
                }
               }
              else if (temp->data_type== REAL_TYPE){
                if(temp->names[i]->stype !=REAL_TYPE&&temp->names[i]->stype !=INT_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
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
#line 1557 "parser.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 201 "parser.y"
             { declare = 1; }
#line 1563 "parser.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 202 "parser.y"
    { 
      add_to_names((yyvsp[0].symbol_table_item)); declare = 0; 
      char* push = "push ";
      ListNode *entry = (ListNode*) (yyvsp[0].symbol_table_item);
      char* temp_name = entry->name;
      char* temp_str = (char*) malloc(strlen(push) + strlen(temp_name) + 1);
      strcpy(temp_str, push);
      strcat(temp_str, temp_name);
      gencode(temp_str);
    }
#line 1578 "parser.tab.c"
    break;

  case 19: /* declaration: CONST type $@5 init $@6 SEMICOLON  */
#line 212 "parser.y"
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
                set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
            }else{
               if (temp->data_type== INT_TYPE){
                if(temp->names[i]->stype !=INT_TYPE && temp->names[i]->stype !=BOOL_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
                }
               }
              else if (temp->data_type== REAL_TYPE){
                if(temp->names[i]->stype !=REAL_TYPE&&temp->names[i]->stype !=INT_TYPE){
                  printf("Error: type mismatch at line %d\n ", lineno);
                  exit(1);
                }else{
                  set_type(temp->names[i]->name, temp->data_type, UNDEF, yyout);
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
#line 1636 "parser.tab.c"
    break;

  case 20: /* names: names COMMA variable  */
#line 268 "parser.y"
        {
    if(ENUM_decl==0){
      declare = 0;
    }
    else{
      current_enum_val++;
    }
    
		add_to_names((yyvsp[0].symbol_table_item));
    ListNode *entry = (ListNode*) (yyvsp[0].symbol_table_item);
    char* temp_name = entry->name;
    char* push = "push ";
    char* temp_str = (char*) malloc(strlen(push) + strlen(temp_name) + 1);
    strcpy(temp_str, push);
    strcat(temp_str, temp_name);
    gencode(temp_str);
	}
#line 1658 "parser.tab.c"
    break;

  case 21: /* names: names COMMA init  */
#line 286 "parser.y"
        {
    if(ENUM_decl==1){
      current_enum_val++;
    }
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1669 "parser.tab.c"
    break;

  case 22: /* names: variable  */
#line 293 "parser.y"
        {
    if(ENUM_decl==1){
      current_enum_val++;
    }
		add_to_names((yyvsp[0].symbol_table_item));
    ListNode *entry = (ListNode*) (yyvsp[0].symbol_table_item);
    char* temp_name = entry->name;
    char* push = "push ";
    char* temp_str = (char*) malloc(strlen(push) + strlen(temp_name) + 1);
    strcpy(temp_str, push);
    strcat(temp_str, temp_name);
    gencode(temp_str);
	}
#line 1687 "parser.tab.c"
    break;

  case 23: /* names: init  */
#line 307 "parser.y"
        { 
    if(ENUM_decl==1){
      current_enum_val++;
    }
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1698 "parser.tab.c"
    break;

  case 24: /* init: var_init  */
#line 315 "parser.y"
               { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1704 "parser.tab.c"
    break;

  case 25: /* var_init: IDENT ASSIGN_OP value  */
#line 318 "parser.y"
{ 
	ListNode *entry = (ListNode*) (yyvsp[-2].symbol_table_item);
  char* temp_name = entry->name;
  char* push = "push ";
  char* temp_str1 = (char*) malloc(strlen(push) + strlen(temp_name) + 1);
  strcpy(temp_str1, push);
  strcat(temp_str1, temp_name);
  gencode(temp_str1);

	AST_Node_Const *temp = (AST_Node_Const*) (yyvsp[0].node);
  (yyvsp[-2].symbol_table_item)->val = temp->val;
	(yyvsp[-2].symbol_table_item)->stype = temp->const_type;
	(yyval.symbol_table_item) = (yyvsp[-2].symbol_table_item);

	ListNode *temp_ident = (ListNode*) (yyvsp[-2].symbol_table_item);
	ListNode *temp_value = (ListNode*) (yyvsp[0].node);
  char* store = "store ";
  char* temp_str ;
  switch(temp->const_type){
    case INT_TYPE:
      temp_str = (char*) malloc(strlen(store) + strlen(temp_ident->name) + sizeof(temp->val.ival));
      strcpy(temp_str, store);
      strcat(temp_str, temp_ident->name);
      char temp_val_str[20];
      sprintf(temp_val_str, "%d", temp->val.ival); 
      strcat(temp_str, " ");
      strcat(temp_str, temp_val_str);
      gencode(temp_str);
      break;
    case REAL_TYPE:
      temp_str = (char*) malloc(strlen(store) + strlen(temp_ident->name) + sizeof(temp->val.fval));
      strcpy(temp_str, store);
      strcat(temp_str, temp_ident->name);
      char temp_val_str1[20];
      sprintf(temp_val_str1, "%f", temp->val.fval); 
      strcat(temp_str, " ");
      strcat(temp_str, temp_val_str1);
      gencode(temp_str);
      break;
    case CHAR_TYPE:
      // temp_str = (char*) malloc(strlen(store) + strlen(temp_ident->name) + sizeof(temp->val.cval));
      // strcpy(temp_str, store);
      // strcat(temp_str, temp_ident->name);
      // strcat(temp_str, " ");
      // char temp_val_str2[20];
      // sprintf(temp_val_str2, "%c", temp->val.cval); 
      // strcat(temp_str, temp_val_str2);
      // gencode(temp_str);
      printf("blaaaaa %c\n", temp->val.cval);
      break;
    case STR_TYPE:
      // value = temp->val.sval;
      temp_str = (char*) malloc(strlen(store) + strlen(temp_ident->name) + strlen(temp->val.sval));
      strcpy(temp_str, store);
      strcat(temp_str, temp_ident->name);
      strcat(temp_str, " ");
      char temp_val_str3[2];
      sprintf(temp_val_str3, "%s", temp->val.sval); 
      strcat(temp_str, temp_val_str3);
      gencode(temp_str); 
      break;
    case BOOL_TYPE:
      temp_str = (char*) malloc(strlen(store) + strlen(temp_ident->name) + sizeof(temp->val.ival));
      strcpy(temp_str, store);
      strcat(temp_str, temp_ident->name);
      char temp_val_str4[20];
      sprintf(temp_val_str4, "%d", temp->val.ival); 
      strcat(temp_str, " ");
      strcat(temp_str, temp_val_str4);
      gencode(temp_str);
      break;
  }
}
#line 1782 "parser.tab.c"
    break;

  case 26: /* variable: IDENT  */
#line 393 "parser.y"
                { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1788 "parser.tab.c"
    break;

  case 27: /* var_ref: variable  */
#line 395 "parser.y"
        {
		(yyval.node) = new_ast_var_node((yyvsp[0].symbol_table_item)); /* no reference */
	}
#line 1796 "parser.tab.c"
    break;

  case 28: /* expression: expression ADD_OP expression  */
#line 414 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(ADD, (yyvsp[-2].node), (yyvsp[0].node));

      AST_Node_Arithm *temp = (AST_Node_Arithm*) (yyval.node);

      // gencode_math($$, temp->left, temp->right, "ADD");
}
#line 1808 "parser.tab.c"
    break;

  case 29: /* expression: expression SUB_OP expression  */
#line 422 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(SUB, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1816 "parser.tab.c"
    break;

  case 30: /* expression: expression MUL_OP expression  */
#line 426 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MUL, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1824 "parser.tab.c"
    break;

  case 31: /* expression: expression DIV_OP expression  */
#line 430 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(DIV, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1832 "parser.tab.c"
    break;

  case 32: /* expression: expression MOD_OP expression  */
#line 434 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MOD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1840 "parser.tab.c"
    break;

  case 33: /* expression: expression AND_OP expression  */
#line 439 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_AND, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1848 "parser.tab.c"
    break;

  case 34: /* expression: expression OR_OP expression  */
#line 443 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_OR, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1856 "parser.tab.c"
    break;

  case 35: /* expression: NOT_OP expression  */
#line 447 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_NOT, (yyvsp[0].node), NULL);
}
#line 1864 "parser.tab.c"
    break;

  case 36: /* expression: expression EQ_OP expression  */
#line 451 "parser.y"
{
	(yyval.node) = new_ast_equ_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1872 "parser.tab.c"
    break;

  case 37: /* expression: expression REL_OP expression  */
#line 455 "parser.y"
{
	(yyval.node) = new_ast_rel_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1880 "parser.tab.c"
    break;

  case 38: /* expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 459 "parser.y"
{
	(yyval.node) = (yyvsp[-1].node); /* just pass information */
}
#line 1888 "parser.tab.c"
    break;

  case 39: /* expression: INC_OP IDENT  */
#line 463 "parser.y"
{
    {
			(yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 0, 1);
    }
}
#line 1898 "parser.tab.c"
    break;

  case 40: /* expression: DEC_OP IDENT  */
#line 469 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 1, 1);
    }

}
#line 1909 "parser.tab.c"
    break;

  case 41: /* expression: IDENT INC_OP  */
#line 476 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 0);
    }
}
#line 1919 "parser.tab.c"
    break;

  case 42: /* expression: IDENT DEC_OP  */
#line 482 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 0);
    }
}
#line 1929 "parser.tab.c"
    break;

  case 43: /* expression: func_call  */
#line 488 "parser.y"
{
		        (yyval.node) = (yyvsp[0].node); /* just pass information */

	    }
#line 1938 "parser.tab.c"
    break;

  case 44: /* expression: var_ref  */
#line 493 "parser.y"
{ 
    // get the variable node
    AST_Node_VAR *temp = (AST_Node_VAR*) (yyvsp[0].node);
    // check if it's a char or string
    if( temp->entry->stype == STR_TYPE || temp->entry->stype == CHAR_TYPE){
      // get the value of the variable
      Value val = get_value(temp->entry->name);
      // check if it's a string and sval is NULL
      if(temp->entry->stype == STR_TYPE && temp->entry->val.sval == NULL){
        // error : variable used without being initialized
        fprintf(stderr, "Error: variable %s used without being initialized at line %d\n",
          temp->entry->name, lineno);
          exit(1);
      }
      else if (temp->entry->stype == CHAR_TYPE && temp->entry->val.cval == NULL){
        // error : variable used without being initialized
        fprintf(stderr, "Error: variable %s used without being initialized at line %d\n",
          temp->entry->name, lineno);
          exit(1);
      }
    }
    else{
      (yyval.node) = (yyvsp[0].node); /* just pass information */
    }
  
    (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 1970 "parser.tab.c"
    break;

  case 45: /* expression: value  */
#line 521 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node); /* no sign */
  }
#line 1978 "parser.tab.c"
    break;

  case 46: /* expression: SUB_OP value  */
#line 525 "parser.y"
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
#line 2015 "parser.tab.c"
    break;

  case 47: /* value: CONST_INT  */
#line 563 "parser.y"
                  { 
  (yyval.node) = new_ast_const_node(INT_TYPE, (yyvsp[0].val));  }
#line 2022 "parser.tab.c"
    break;

  case 48: /* value: CONST_FLOAT  */
#line 565 "parser.y"
              { (yyval.node) = new_ast_const_node(REAL_TYPE, (yyvsp[0].val)); }
#line 2028 "parser.tab.c"
    break;

  case 49: /* value: CONST_CHAR  */
#line 566 "parser.y"
             { (yyval.node) = new_ast_const_node(CHAR_TYPE, (yyvsp[0].val)); }
#line 2034 "parser.tab.c"
    break;

  case 50: /* value: STRING_LITERAL  */
#line 567 "parser.y"
                 { (yyval.node) = new_ast_const_node(STR_TYPE, (yyvsp[0].val)); }
#line 2040 "parser.tab.c"
    break;

  case 51: /* value: TRUE_TOKEN  */
#line 568 "parser.y"
             { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 2046 "parser.tab.c"
    break;

  case 52: /* value: FALSE_TOKEN  */
#line 569 "parser.y"
              { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 2052 "parser.tab.c"
    break;

  case 53: /* $@7: %empty  */
#line 572 "parser.y"
                         {
  // parent = 0;
  printf("Tail declared at line %d\n", lineno);
  incr_scope(lineno);}
#line 2061 "parser.tab.c"
    break;

  case 54: /* tail: LEFT_CURLY_BRACKET $@7 statements RIGHT_CURLY_BRACKET  */
#line 576 "parser.y"
{ 
      
    (yyval.node) = (yyvsp[-1].node); /* just pass information */
    hide_scope(yyout);
}
#line 2071 "parser.tab.c"
    break;

  case 55: /* else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 584 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 2085 "parser.tab.c"
    break;

  case 56: /* else_if: else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 594 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 2099 "parser.tab.c"
    break;

  case 57: /* else_part: ELSE tail  */
#line 606 "parser.y"
{
    /* else exists */
    (yyval.node) = (yyvsp[0].node);
}
#line 2108 "parser.tab.c"
    break;

  case 58: /* else_part: %empty  */
#line 611 "parser.y"
{
    /* no else */
    (yyval.node) = NULL;
}
#line 2117 "parser.tab.c"
    break;

  case 59: /* $@8: %empty  */
#line 617 "parser.y"
                                                        {

    int is_false=is_always_false((yyvsp[-2].node));
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }
    printf("is false %d\n", is_false);

}
#line 2131 "parser.tab.c"
    break;

  case 60: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail $@8 else_if else_part  */
#line 626 "parser.y"
  {
    (yyval.node) = new_ast_if_node((yyvsp[-5].node), (yyvsp[-3].node), elsifs, elseif_count, (yyvsp[0].node));
    elseif_count = 0;
    elsifs = NULL;
    printf("is false beforee \n");

  }
#line 2143 "parser.tab.c"
    break;

  case 61: /* $@9: %empty  */
#line 633 "parser.y"
                                            {
  int is_false=is_always_false((yyvsp[-2].node));

    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", parent);
    }

}
#line 2156 "parser.tab.c"
    break;

  case 62: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail $@9 else_part  */
#line 641 "parser.y"
{
    (yyval.node) = new_ast_if_node((yyvsp[-4].node), (yyvsp[-2].node), NULL, 0, (yyvsp[0].node));
    
}
#line 2165 "parser.tab.c"
    break;

  case 63: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail  */
#line 648 "parser.y"
{
    (yyval.node) = new_ast_while_node((yyvsp[-2].node), (yyvsp[0].node));
}
#line 2173 "parser.tab.c"
    break;

  case 64: /* assignment: var_ref ASSIGN_OP expression  */
#line 657 "parser.y"
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
    if (type1 == REAL_TYPE && type2 == INT_TYPE){
      temp2->val.fval = (float)temp2->val.ival;
    }
    set_value(temp->entry->name, temp2->val, yyout);
  }
}
#line 2239 "parser.tab.c"
    break;

  case 65: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT INC_OP RIGHT_PAREN tail  */
#line 721 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 0, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2254 "parser.tab.c"
    break;

  case 66: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT DEC_OP RIGHT_PAREN tail  */
#line 732 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 1, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2269 "parser.tab.c"
    break;

  case 67: /* do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 744 "parser.y"
{
    (yyval.node) = new_ast_do_node((yyvsp[-2].node), (yyvsp[-5].node));
}
#line 2277 "parser.tab.c"
    break;

  case 68: /* $@10: %empty  */
#line 749 "parser.y"
                         {
  // on the start of each switch, reset the cases and default
  cases = NULL;
  default_case = NULL;
  case_count = 0;
 }
#line 2288 "parser.tab.c"
    break;

  case 69: /* $@11: %empty  */
#line 755 "parser.y"
 {
  incr_scope(lineno);
 }
#line 2296 "parser.tab.c"
    break;

  case 70: /* switch_statement: SWITCH $@10 LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACKET $@11 cases RIGHT_CURLY_BRACKET  */
#line 759 "parser.y"
 {
    hide_scope(yyout);
    (yyval.node) = new_ast_switch_node((yyvsp[-5].node), cases, case_count, default_case);
 }
#line 2305 "parser.tab.c"
    break;

  case 71: /* cases: cases case  */
#line 766 "parser.y"
{
  add_case((yyvsp[0].node));
}
#line 2313 "parser.tab.c"
    break;

  case 72: /* cases: case  */
#line 769 "parser.y"
      {
  add_case((yyvsp[0].node));
}
#line 2321 "parser.tab.c"
    break;

  case 74: /* $@12: %empty  */
#line 773 "parser.y"
                       {
  incr_scope(lineno);
}
#line 2329 "parser.tab.c"
    break;

  case 75: /* default: DEFAULT COLON $@12 statements  */
#line 776 "parser.y"
{
  hide_scope(yyout);
    // get the statements node of the default
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[0].node);
    // get the statements count
    int count = temp->statement_count;
    // get the statements
    AST_Node **statements = temp->statements;

    // return the default node
    default_case =new_ast_default_node(statements, count);
}
#line 2346 "parser.tab.c"
    break;

  case 76: /* $@13: %empty  */
#line 791 "parser.y"
{ 
  incr_scope(lineno);}
#line 2353 "parser.tab.c"
    break;

  case 77: /* case: CASE expression COLON $@13 statements  */
#line 794 "parser.y"
{
  hide_scope(yyout);
    // get the statements node of the case
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[0].node);
    // get the statements count
    int count = temp->statement_count;
    // get the statements
    AST_Node **statements = temp->statements;

    // return the case node
    (yyval.node) = new_ast_case_node((yyvsp[-3].node), statements, count);
}
#line 2370 "parser.tab.c"
    break;

  case 78: /* statements: statements statement  */
#line 814 "parser.y"
  {
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[-1].node);
    (yyval.node) = new_statements_node(temp->statements, temp->statement_count, (yyvsp[0].node));
  }
#line 2379 "parser.tab.c"
    break;

  case 79: /* statements: statement  */
#line 819 "parser.y"
  {
    (yyval.node) = new_statements_node(NULL, 0, (yyvsp[0].node));
  }
#line 2387 "parser.tab.c"
    break;

  case 80: /* statement: declaration  */
#line 826 "parser.y"
{
  (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 2395 "parser.tab.c"
    break;

  case 81: /* statement: if_statement  */
#line 831 "parser.y"
{ 
		(yyval.node) = (yyvsp[0].node); /* just pass information */
	}
#line 2403 "parser.tab.c"
    break;

  case 82: /* statement: while_statement  */
#line 835 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2411 "parser.tab.c"
    break;

  case 83: /* statement: RETURN expression SEMICOLON  */
#line 839 "parser.y"
        {
          

          (yyval.node) = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
          temp_function->return_node = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
        }
#line 2422 "parser.tab.c"
    break;

  case 84: /* statement: for_statement  */
#line 846 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2430 "parser.tab.c"
    break;

  case 85: /* statement: do_statement  */
#line 851 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2438 "parser.tab.c"
    break;

  case 86: /* statement: switch_statement  */
#line 856 "parser.y"
        {
		(yyval.node) = (yyvsp[0].node); /* will do it later ! */
	    }
#line 2446 "parser.tab.c"
    break;

  case 87: /* statement: enum_statement  */
#line 861 "parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2454 "parser.tab.c"
    break;

  case 88: /* statement: func_call SEMICOLON  */
#line 865 "parser.y"
        {
		        (yyval.node) = (yyvsp[-1].node); /* just pass information */

	    }
#line 2463 "parser.tab.c"
    break;

  case 89: /* statement: CONTINUE SEMICOLON  */
#line 870 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(0);
        }
#line 2471 "parser.tab.c"
    break;

  case 90: /* statement: BREAK SEMICOLON  */
#line 874 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(1);
        }
#line 2479 "parser.tab.c"
    break;

  case 91: /* statement: assignment SEMICOLON  */
#line 878 "parser.y"
        {
		(yyval.node) = (yyvsp[-1].node); /* just pass information */
	    }
#line 2487 "parser.tab.c"
    break;

  case 92: /* statement: INC_OP IDENT SEMICOLON  */
#line 882 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 1);
            }

        }
#line 2498 "parser.tab.c"
    break;

  case 93: /* statement: DEC_OP IDENT SEMICOLON  */
#line 889 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 1);
            }

        }
#line 2509 "parser.tab.c"
    break;

  case 94: /* statement: IDENT INC_OP SEMICOLON  */
#line 896 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 0, 0);
            }

        }
#line 2520 "parser.tab.c"
    break;

  case 95: /* statement: IDENT DEC_OP SEMICOLON  */
#line 903 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 1, 0);
            }

        }
#line 2531 "parser.tab.c"
    break;

  case 96: /* functions: functions function  */
#line 915 "parser.y"
  {
    AST_Node_Func_Declarations *temp = (AST_Node_Func_Declarations*) (yyvsp[-1].node);
    (yyval.node) = new_func_declarations_node(temp->func_declarations, temp->func_declaration_count, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2541 "parser.tab.c"
    break;

  case 97: /* functions: function  */
#line 921 "parser.y"
  {
    (yyval.node) = new_func_declarations_node(NULL, 0, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2550 "parser.tab.c"
    break;

  case 98: /* $@14: %empty  */
#line 927 "parser.y"
                         { 
  printf("Function declared at line %d\n", lineno);
  incr_scope(lineno); }
#line 2558 "parser.tab.c"
    break;

  case 99: /* function: function_head $@14 function_tail  */
#line 930 "parser.y"
{ 
    /* perform revisit */
    printf("before");
	  revisit(temp_function->entry->name);
    printf("after");
    (yyval.node) = (AST_Node *) temp_function;
    
    
}
#line 2572 "parser.tab.c"
    break;

  case 100: /* $@15: %empty  */
#line 943 "parser.y"
                    { function_decl = 1; }
#line 2578 "parser.tab.c"
    break;

  case 101: /* function_head: FUNC $@15 IDENT LEFT_PAREN param_empty RIGHT_PAREN return_type  */
#line 944 "parser.y"
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
#line 2605 "parser.tab.c"
    break;

  case 102: /* return_type: type  */
#line 970 "parser.y"
        {
		(yyval.node) = new_ast_ret_type_node((yyvsp[0].data_type));
	}
#line 2613 "parser.tab.c"
    break;

  case 104: /* statements_optional: statements  */
#line 979 "parser.y"
  {
    temp_function->statements = (yyvsp[0].node);
  }
#line 2621 "parser.tab.c"
    break;

  case 105: /* statements_optional: %empty  */
#line 983 "parser.y"
  {
    temp_function->statements = NULL;
  }
#line 2629 "parser.tab.c"
    break;

  case 106: /* param_empty: parameters  */
#line 1016 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2637 "parser.tab.c"
    break;

  case 107: /* param_empty: %empty  */
#line 1020 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 2645 "parser.tab.c"
    break;

  case 108: /* parameters: parameters COMMA parameter  */
#line 1026 "parser.y"
  {
    AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) (yyvsp[-2].node);
    (yyval.node) = new_ast_decl_params_node(temp->parameters, temp->num_of_pars, (yyvsp[0].par));
  }
#line 2654 "parser.tab.c"
    break;

  case 109: /* parameters: parameter  */
#line 1031 "parser.y"
  {
    (yyval.node) = new_ast_decl_params_node(NULL, 0, (yyvsp[0].par));
  }
#line 2662 "parser.tab.c"
    break;

  case 110: /* $@16: %empty  */
#line 1036 "parser.y"
           { declare = 1; }
#line 2668 "parser.tab.c"
    break;

  case 111: /* parameter: $@16 type variable  */
#line 1037 "parser.y"
{ 
    declare = 0;
    // set type of symbol table entry	
    if((yyvsp[0].symbol_table_item)->stype == UNDEF){ /* "simple" type */
        set_type((yyvsp[0].symbol_table_item)->name, (yyvsp[-1].data_type), UNDEF, yyout);
    }
    (yyval.par) = def_param((yyvsp[-1].data_type), (yyvsp[0].symbol_table_item)->name, 0); //always pass by value
}
#line 2681 "parser.tab.c"
    break;

  case 112: /* $@17: %empty  */
#line 1048 "parser.y"
                {ENUM_decl= 1;}
#line 2687 "parser.tab.c"
    break;

  case 113: /* $@18: %empty  */
#line 1048 "parser.y"
                                                              {declare = 1; }
#line 2693 "parser.tab.c"
    break;

  case 114: /* $@19: %empty  */
#line 1048 "parser.y"
                                                                                    {ENUM_decl = 0; declare=0; current_enum_val=0;}
#line 2699 "parser.tab.c"
    break;

  case 116: /* func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN  */
#line 1055 "parser.y"
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
#line 2769 "parser.tab.c"
    break;

  case 117: /* arguments: argument  */
#line 1123 "parser.y"
{
  (yyval.node) = (yyvsp[0].node);
}
#line 2777 "parser.tab.c"
    break;

  case 118: /* arguments: %empty  */
#line 1127 "parser.y"
{
        AST_Node_Call_Params *temp = malloc (sizeof (AST_Node_Call_Params));
        temp->type = CALL_PARAMS;
        temp->params = NULL;
        temp->num_of_pars = 0;
        (yyval.node) = (AST_Node*)temp;
  }
#line 2789 "parser.tab.c"
    break;

  case 119: /* argument: argument COMMA expression  */
#line 1136 "parser.y"
{
  AST_Node_Call_Params *temp = (AST_Node_Call_Params*) (yyvsp[-2].node);
  (yyval.node) = new_ast_call_params_node(temp->params, temp->num_of_pars, (yyvsp[0].node));
}
#line 2798 "parser.tab.c"
    break;

  case 120: /* argument: expression  */
#line 1141 "parser.y"
{
  (yyval.node) = new_ast_call_params_node(NULL, 0, (yyvsp[0].node));
}
#line 2806 "parser.tab.c"
    break;


#line 2810 "parser.tab.c"

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

#line 1146 "parser.y"



void gencode(char* x)
{
	char* instruction;
  ICG[nextinstr] = (char*) malloc(strlen(x) * sizeof(char));
  // copy instruction
  strcpy(ICG[nextinstr], x);

  nextinstr++;
}


// void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
// {
// 	lhs->data_type = arg1->data_type;

// 	lhs->truelist = {nextinstr};
// 	lhs->falselist = {nextinstr + 1};

// 	std::string code;

// 	code = string("if ") + arg1->addr + op + arg2->addr + string(" goto _");
// 	gencode(code);

// 	code = string("goto _");
// 	gencode(code);
// }

// void gencode_math(Ast_Node* parent, Ast_Node* arg1, Ast_Node* arg2, const char* op)
// {
// 	// parent->name = "t" + to_string(temp_var_number);
//   strcpy(parent->name, 't');
//   strcpy(parent->name, to_string(temp_var_number));

//   // generate sting of instruction
//   char* expr = (char*) malloc(strlen(parent->name) + strlen(arg1->name) + strlen(arg2->name) + strlen(op) + 1);
//   strcpy(expr, parent->name);
//   strcat(expr, " = ");
//   strcat(expr, arg1->name);
//   strcat(expr, op);
//   strcat(expr, arg2->name);

// 	temp_var_number++;

// 	gencode(expr);
// }

void displayICG()
{
  // open file in c
  FILE *outfile;
  outfile = fopen("ICG.txt", "w");
	for(int i=0; i<nextinstr;i++)
  {
    fprintf(outfile, "%d: %s\n", i, ICG[i]);
  }
	fclose(outfile);
}


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
void add_case(AST_Node *case_node){
  // first entry
  if(case_count == 0){
    case_count = 1;
    cases = (AST_Node **) malloc(1 * sizeof(AST_Node));
    cases[0] = case_node;
  }
  // general case
  else{
    case_count++;
    cases = (AST_Node **) realloc(cases, case_count * sizeof(AST_Node));
    cases[case_count - 1] = case_node;
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

    displayICG();

    // revisit queue dump
    yyout = fopen(argv[3], "w");
    revisit_dump(yyout);
    fclose(yyout);
	
	return flag;
}
