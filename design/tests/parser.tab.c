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
  YYSYMBOL_while_statement = 83,           /* while_statement  */
  YYSYMBOL_assignment = 84,                /* assignment  */
  YYSYMBOL_for_statement = 85,             /* for_statement  */
  YYSYMBOL_do_statement = 86,              /* do_statement  */
  YYSYMBOL_switch_statement = 87,          /* switch_statement  */
  YYSYMBOL_cases = 88,                     /* cases  */
  YYSYMBOL_default = 89,                   /* default  */
  YYSYMBOL_case = 90,                      /* case  */
  YYSYMBOL_statements = 91,                /* statements  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_functions = 93,                 /* functions  */
  YYSYMBOL_function = 94,                  /* function  */
  YYSYMBOL_95_8 = 95,                      /* $@8  */
  YYSYMBOL_function_head = 96,             /* function_head  */
  YYSYMBOL_97_9 = 97,                      /* $@9  */
  YYSYMBOL_return_type = 98,               /* return_type  */
  YYSYMBOL_function_tail = 99,             /* function_tail  */
  YYSYMBOL_statements_optional = 100,      /* statements_optional  */
  YYSYMBOL_param_empty = 101,              /* param_empty  */
  YYSYMBOL_parameters = 102,               /* parameters  */
  YYSYMBOL_parameter = 103,                /* parameter  */
  YYSYMBOL_104_10 = 104,                   /* $@10  */
  YYSYMBOL_enum_statement = 105,           /* enum_statement  */
  YYSYMBOL_enum_list = 106,                /* enum_list  */
  YYSYMBOL_one_val = 107,                  /* one_val  */
  YYSYMBOL_func_call = 108,                /* func_call  */
  YYSYMBOL_arguments = 109,                /* arguments  */
  YYSYMBOL_argument = 110                  /* argument  */
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
#define YYLAST   424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

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
     130,   131,   132,   133,   136,   136,   136,   196,   196,   196,
     222,   226,   230,   234,   240,   242,   253,   254,   273,   277,
     281,   285,   289,   294,   298,   302,   306,   310,   314,   318,
     324,   331,   337,   343,   348,   352,   356,   395,   397,   398,
     399,   400,   401,   404,   404,   415,   420,   427,   433,   439,
     445,   451,   460,   514,   525,   537,   543,   545,   545,   545,
     547,   549,   556,   561,   568,   573,   577,   581,   588,   593,
     598,   603,   607,   612,   616,   620,   624,   631,   638,   645,
     657,   663,   670,   670,   686,   686,   711,   717,   721,   726,
     758,   763,   768,   773,   779,   779,   791,   793,   793,   795,
     795,   797,   865,   870,   878,   883
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
  "else_if", "else_part", "if_statement", "while_statement", "assignment",
  "for_statement", "do_statement", "switch_statement", "cases", "default",
  "case", "statements", "statement", "functions", "function", "$@8",
  "function_head", "$@9", "return_type", "function_tail",
  "statements_optional", "param_empty", "parameters", "parameter", "$@10",
  "enum_statement", "enum_list", "one_val", "func_call", "arguments",
  "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,  -128,    16,  -128,   -20,  -128,  -128,    26,  -128,   207,
    -128,    11,   -15,  -128,  -128,  -128,  -128,  -128,  -128,   414,
    -128,   -18,     6,    15,    24,    23,    29,   143,    22,    27,
      54,    65,    66,  -128,  -128,  -128,    25,  -128,  -128,    42,
    -128,  -128,  -128,   207,  -128,  -128,    44,   207,  -128,    55,
    -128,   143,    49,    51,   143,   143,    82,  -128,    67,   143,
       0,  -128,  -128,  -128,  -128,  -128,  -128,   143,    13,    87,
      89,   143,  -128,   289,  -128,  -128,  -128,  -128,    68,    76,
      77,    93,   143,  -128,    47,  -128,  -128,   207,    81,    84,
      80,  -128,   414,    93,   329,    92,    91,  -128,  -128,   134,
     196,  -128,    88,   207,   102,   215,  -128,  -128,   230,  -128,
    -128,  -128,  -128,  -128,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   121,  -128,  -128,    83,    97,  -128,  -128,
    -128,   329,   110,  -128,   414,  -128,    82,    97,  -128,   143,
      23,    23,   143,   103,   143,   106,  -128,     7,     7,  -128,
    -128,  -128,   342,   355,   360,    99,    83,  -128,   -17,  -128,
      13,    93,   111,  -128,  -128,  -128,  -128,  -128,   112,   329,
       4,  -128,   303,  -128,   245,   115,   122,   121,  -128,  -128,
    -128,  -128,  -128,    23,   127,    12,  -128,   151,   124,   143,
      28,  -128,  -128,  -128,  -128,   143,   131,  -128,    -6,  -128,
     316,   126,  -128,  -128,  -128,   260,   143,   135,   136,   207,
     207,    23,   275,    23,    23,   207,   207,  -128,    23,  -128,
    -128,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    94,     0,     2,     5,    91,    92,     0,     1,     0,
      90,     0,     0,     7,     8,     9,    10,    11,    12,     0,
      13,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    74,    27,     0,    75,    76,     0,
      78,    79,    80,     3,    73,    81,     0,    99,    93,   104,
      17,   113,     0,     0,     0,     0,     0,    53,     0,     0,
      26,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,    44,     0,    45,    43,    84,    83,     0,     0,
       0,     0,     0,    85,     0,    72,    82,    98,     0,     0,
     100,   103,     0,     0,   115,     0,   112,    88,    89,     0,
       0,    26,     0,     0,     0,     0,    41,    42,     0,    46,
      39,    40,    35,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    26,    15,    23,    24,
      22,    62,     0,    97,     0,   104,     0,    18,   111,     0,
       0,     0,     0,     0,     0,     0,    38,    28,    29,    30,
      31,    32,    34,    33,    36,    37,   109,   110,     0,   107,
       0,     0,     0,     4,    96,    95,   102,   105,     0,   114,
      58,    61,     0,    54,     0,     0,     0,     0,    25,    21,
      20,    16,    19,     0,     0,    58,    60,     0,     0,     0,
       0,    68,   106,   108,    57,     0,     0,    59,     0,    65,
       0,     0,    66,    69,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    70,    55,     0,    63,
      64,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,  -128,  -128,   -13,  -128,  -128,  -128,  -128,
    -128,    90,    14,  -114,   -76,    -9,   -47,   -58,  -127,  -128,
    -128,    -8,  -128,  -128,   128,  -128,  -128,  -128,  -128,  -128,
      -3,   -44,   -42,  -128,   187,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,    59,  -128,  -128,  -128,    18,    -7,  -128,
    -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    84,     3,    33,    34,    81,   162,    93,
     168,   127,   128,   129,    35,    72,    73,    74,    58,   103,
     185,   186,    37,    38,    39,    40,    41,    42,   190,   203,
     191,    43,    44,     4,     5,    11,     6,     7,   165,    48,
      88,    89,    90,    91,    92,    45,   158,   159,    75,    95,
      96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    85,    46,    87,    94,   130,    50,    99,   100,   157,
     109,     1,   105,   170,   171,    51,     8,   130,    49,   176,
     108,   183,   184,   177,   112,    61,    62,    63,    64,   183,
     196,    52,    53,    51,    36,   131,    46,    12,    36,    54,
      46,    65,    66,   207,   208,    85,    47,    36,    55,   106,
     107,   189,   201,   116,   117,   118,   194,    56,    57,   143,
     167,    76,    59,   157,   202,    78,    77,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    79,    80,    36,   136,
      46,    83,    82,    86,   217,   180,   219,   220,    97,  -101,
      98,   221,   169,   101,    36,   172,    46,   174,   110,   104,
     111,    85,   178,   123,   126,   132,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   124,   125,   133,   134,    22,
     135,   164,    23,    24,    25,    26,   138,   142,    27,    28,
      29,   139,   156,    30,    36,   144,    46,   161,   189,   173,
     160,   175,   200,   114,   115,   116,   117,   118,   205,   163,
     181,   182,    31,    32,    60,    61,    62,    63,    64,   212,
     195,   192,   198,   199,   206,   215,   216,   210,   140,   213,
     214,    65,    66,    85,    85,   179,    67,   197,   114,   115,
     116,   117,   118,   137,   102,   119,   120,   204,    68,   121,
     122,    10,    69,    70,   166,   193,    71,     0,     0,     0,
      36,    36,    46,    46,     0,     0,    36,    36,    46,    46,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,    22,     0,     0,    23,    24,    25,    26,
     141,     0,    27,    28,    29,     0,     0,    30,     0,     0,
     114,   115,   116,   117,   118,     0,     0,   119,   120,   145,
       0,   121,   122,     0,     0,     0,    31,    32,     0,   114,
     115,   116,   117,   118,   146,     0,   119,   120,     0,     0,
     121,   122,     0,     0,   114,   115,   116,   117,   118,   188,
       0,   119,   120,     0,     0,   121,   122,     0,     0,   114,
     115,   116,   117,   118,   211,     0,   119,   120,     0,     0,
     121,   122,     0,     0,   114,   115,   116,   117,   118,   218,
       0,   119,   120,     0,     0,   121,   122,     0,     0,   114,
     115,   116,   117,   118,     0,     0,   119,   120,   113,     0,
     121,   122,     0,   114,   115,   116,   117,   118,     0,     0,
     119,   120,   187,     0,   121,   122,     0,   114,   115,   116,
     117,   118,     0,     0,   119,   120,     0,   209,   121,   122,
     114,   115,   116,   117,   118,     0,     0,   119,   120,     0,
       0,   121,   122,   114,   115,   116,   117,   118,     0,     0,
     119,   120,     0,     0,   121,   122,   114,   115,   116,   117,
     118,     0,     0,     0,   120,     0,     0,   121,   122,   114,
     115,   116,   117,   118,   114,   115,   116,   117,   118,     0,
     121,   122,     0,     0,     0,     0,   122,    13,    14,    15,
      16,    17,    18,     0,    20
};

static const yytype_int16 yycheck[] =
{
       9,    43,     9,    47,    51,    81,    19,    54,    55,   123,
      68,    31,    59,   140,   141,    33,     0,    93,    33,    36,
      67,    17,    18,    40,    71,    12,    13,    14,    15,    17,
      18,    49,    50,    33,    43,    82,    43,    11,    47,    33,
      47,    28,    29,    49,    50,    87,    35,    56,    33,    49,
      50,    23,    24,    46,    47,    48,   183,    33,    35,   103,
     136,    39,    33,   177,    36,    11,    39,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    11,    11,    87,    92,
      87,    39,    57,    39,   211,   161,   213,   214,    39,    34,
      39,   218,   139,    11,   103,   142,   103,   144,    11,    32,
      11,   143,   160,    35,    11,    58,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    39,    39,    36,    34,    16,
      40,   134,    19,    20,    21,    22,    34,    39,    25,    26,
      27,    40,    11,    30,   143,    33,   143,    40,    23,    36,
      57,    35,   189,    44,    45,    46,    47,    48,   195,    39,
      39,    39,    49,    50,    11,    12,    13,    14,    15,   206,
      33,    39,    11,    39,    33,   209,   210,    41,    34,    34,
      34,    28,    29,   215,   216,   161,    33,   185,    44,    45,
      46,    47,    48,    93,    56,    51,    52,   190,    45,    55,
      56,     4,    49,    50,   135,   177,    53,    -1,    -1,    -1,
     209,   210,   209,   210,    -1,    -1,   215,   216,   215,   216,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      34,    -1,    25,    26,    27,    -1,    -1,    30,    -1,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    34,
      -1,    55,    56,    -1,    -1,    -1,    49,    50,    -1,    44,
      45,    46,    47,    48,    34,    -1,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    44,    45,    46,    47,    48,    34,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    44,
      45,    46,    47,    48,    34,    -1,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    44,    45,    46,    47,    48,    34,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    39,    -1,
      55,    56,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    39,    -1,    55,    56,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    51,    52,    -1,    41,    55,    56,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    -1,    -1,    55,    56,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    44,
      45,    46,    47,    48,    44,    45,    46,    47,    48,    -1,
      55,    56,    -1,    -1,    -1,    -1,    56,     3,     4,     5,
       6,     7,     8,    -1,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    61,    64,    93,    94,    96,    97,     0,    62,
      94,    95,    11,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    16,    19,    20,    21,    22,    25,    26,    27,
      30,    49,    50,    65,    66,    74,    75,    82,    83,    84,
      85,    86,    87,    91,    92,   105,   108,    35,    99,    33,
      65,    33,    49,    50,    33,    33,    33,    35,    78,    33,
      11,    12,    13,    14,    15,    28,    29,    33,    45,    49,
      50,    53,    75,    76,    77,   108,    39,    39,    11,    11,
      11,    67,    57,    39,    63,    92,    39,    91,   100,   101,
     102,   103,   104,    69,    76,   109,   110,    39,    39,    76,
      76,    11,    84,    79,    32,    76,    49,    50,    76,    77,
      11,    11,    76,    39,    44,    45,    46,    47,    48,    51,
      52,    55,    56,    35,    39,    39,    11,    71,    72,    73,
      74,    76,    58,    36,    34,    40,    65,    71,    34,    40,
      34,    34,    39,    91,    33,    34,    34,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    11,    73,   106,   107,
      57,    40,    68,    39,    65,    98,   103,    74,    70,    76,
      78,    78,    76,    36,    76,    35,    36,    40,    77,    72,
      74,    39,    39,    17,    18,    80,    81,    39,    34,    23,
      88,    90,    39,   107,    78,    33,    18,    81,    11,    39,
      76,    24,    36,    89,    90,    76,    33,    49,    50,    41,
      41,    34,    76,    34,    34,    91,    91,    78,    34,    78,
      78,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    62,    63,    61,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    67,    68,    66,    69,    70,    66,
      71,    71,    71,    71,    72,    73,    74,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    79,    78,    80,    80,    81,    81,    82,
      82,    83,    84,    85,    85,    86,    87,    88,    88,    88,
      89,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    95,    94,    97,    96,    98,    99,   100,   100,
     101,   101,   102,   102,   104,   103,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     6,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     5,     0,     0,     6,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     2,
       2,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     0,     4,     5,     6,     2,     0,     7,
       6,     5,     3,    10,    10,     7,     7,     2,     1,     2,
       3,     4,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     3,     3,     3,
       2,     1,     0,     3,     0,     7,     1,     3,     1,     0,
       1,     0,     3,     1,     0,     3,     6,     1,     3,     1,
       1,     4,     1,     0,     3,     1
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
#line 1402 "parser.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 110 "parser.y"
           { ast_traversal((yyvsp[0].node)); }
#line 1408 "parser.tab.c"
    break;

  case 5: /* functions_optional: functions  */
#line 118 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1416 "parser.tab.c"
    break;

  case 6: /* functions_optional: %empty  */
#line 122 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 1424 "parser.tab.c"
    break;

  case 7: /* type: INTEGER  */
#line 127 "parser.y"
               { (yyval.data_type) = INT_TYPE;   }
#line 1430 "parser.tab.c"
    break;

  case 8: /* type: FLOAT  */
#line 128 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1436 "parser.tab.c"
    break;

  case 9: /* type: DOUBLE  */
#line 129 "parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1442 "parser.tab.c"
    break;

  case 10: /* type: VOID  */
#line 130 "parser.y"
               { (yyval.data_type) = VOID_TYPE;   }
#line 1448 "parser.tab.c"
    break;

  case 11: /* type: BOOLEAN  */
#line 131 "parser.y"
               { (yyval.data_type) = BOOL_TYPE;   }
#line 1454 "parser.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 132 "parser.y"
               { (yyval.data_type) = CHAR_TYPE;   }
#line 1460 "parser.tab.c"
    break;

  case 13: /* type: STR  */
#line 133 "parser.y"
               { (yyval.data_type) = STR_TYPE;   }
#line 1466 "parser.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 136 "parser.y"
                  {declare = 1; }
#line 1472 "parser.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 136 "parser.y"
                                        {declare = 0; }
#line 1478 "parser.tab.c"
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
            // variable
            printf("name is %s\n", temp->names[i]->name);
            printf("temp data type is %d\n", temp->data_type);
            printf("node type is %d\n", (yyvsp[-4].data_type));
            printf("temp stype is %d\n", temp->names[i]->stype);
            
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
#line 1541 "parser.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 196 "parser.y"
             { declare = 1; }
#line 1547 "parser.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 196 "parser.y"
                                    { declare = 0; }
#line 1553 "parser.tab.c"
    break;

  case 19: /* declaration: CONST type $@5 names $@6 SEMICOLON  */
#line 197 "parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, 1);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            // variable
            if(temp->names[i]->stype == UNDEF){
                set_type(temp->names[i]->name, temp->data_type, UNDEF);
            }
            // pointer
            else if(temp->names[i]->stype == POINTER_TYPE){
                set_type(temp->names[i]->name, POINTER_TYPE, temp->data_type);
            }
            // array
            else if(temp->names[i]->stype == ARRAY_TYPE){
                set_type(temp->names[i]->name, ARRAY_TYPE, temp->data_type);
            }
        }
    }
#line 1581 "parser.tab.c"
    break;

  case 20: /* names: names COMMA variable  */
#line 223 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1589 "parser.tab.c"
    break;

  case 21: /* names: names COMMA init  */
#line 227 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1597 "parser.tab.c"
    break;

  case 22: /* names: variable  */
#line 231 "parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1605 "parser.tab.c"
    break;

  case 23: /* names: init  */
#line 235 "parser.y"
        { 
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1613 "parser.tab.c"
    break;

  case 24: /* init: var_init  */
#line 240 "parser.y"
               { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1619 "parser.tab.c"
    break;

  case 25: /* var_init: IDENT ASSIGN_OP value  */
#line 243 "parser.y"
{ 
	AST_Node_Const *temp = (AST_Node_Const*) (yyvsp[0].node);
  
  printf("temp values is %d", temp->val);
	(yyvsp[-2].symbol_table_item)->val = temp->val;
	(yyvsp[-2].symbol_table_item)->stype = temp->const_type;
	(yyval.symbol_table_item) = (yyvsp[-2].symbol_table_item);
}
#line 1632 "parser.tab.c"
    break;

  case 26: /* variable: IDENT  */
#line 253 "parser.y"
                { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1638 "parser.tab.c"
    break;

  case 27: /* var_ref: variable  */
#line 255 "parser.y"
        {
		(yyval.node) = new_ast_var_node((yyvsp[0].symbol_table_item)); /* no reference */
	}
#line 1646 "parser.tab.c"
    break;

  case 28: /* expression: expression ADD_OP expression  */
#line 274 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(ADD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1654 "parser.tab.c"
    break;

  case 29: /* expression: expression SUB_OP expression  */
#line 278 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(SUB, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1662 "parser.tab.c"
    break;

  case 30: /* expression: expression MUL_OP expression  */
#line 282 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MUL, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1670 "parser.tab.c"
    break;

  case 31: /* expression: expression DIV_OP expression  */
#line 286 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(DIV, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1678 "parser.tab.c"
    break;

  case 32: /* expression: expression MOD_OP expression  */
#line 290 "parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MOD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1686 "parser.tab.c"
    break;

  case 33: /* expression: expression AND_OP expression  */
#line 295 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_AND, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1694 "parser.tab.c"
    break;

  case 34: /* expression: expression OR_OP expression  */
#line 299 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_OR, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1702 "parser.tab.c"
    break;

  case 35: /* expression: NOT_OP expression  */
#line 303 "parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_NOT, (yyvsp[0].node), NULL);
}
#line 1710 "parser.tab.c"
    break;

  case 36: /* expression: expression EQ_OP expression  */
#line 307 "parser.y"
{
	(yyval.node) = new_ast_equ_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1718 "parser.tab.c"
    break;

  case 37: /* expression: expression REL_OP expression  */
#line 311 "parser.y"
{
	(yyval.node) = new_ast_rel_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1726 "parser.tab.c"
    break;

  case 38: /* expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 315 "parser.y"
{
	(yyval.node) = (yyvsp[-1].node); /* just pass information */
}
#line 1734 "parser.tab.c"
    break;

  case 39: /* expression: INC_OP IDENT  */
#line 319 "parser.y"
{
    {
			(yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 0, 1);
    }
}
#line 1744 "parser.tab.c"
    break;

  case 40: /* expression: DEC_OP IDENT  */
#line 325 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 1, 1);
    }

}
#line 1755 "parser.tab.c"
    break;

  case 41: /* expression: IDENT INC_OP  */
#line 332 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 0);
    }
}
#line 1765 "parser.tab.c"
    break;

  case 42: /* expression: IDENT DEC_OP  */
#line 338 "parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 0);
    }
}
#line 1775 "parser.tab.c"
    break;

  case 43: /* expression: func_call  */
#line 344 "parser.y"
{
		        (yyval.node) = (yyvsp[0].node); /* just pass information */

	    }
#line 1784 "parser.tab.c"
    break;

  case 44: /* expression: var_ref  */
#line 349 "parser.y"
{ 
    (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 1792 "parser.tab.c"
    break;

  case 45: /* expression: value  */
#line 353 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node); /* no sign */
  }
#line 1800 "parser.tab.c"
    break;

  case 46: /* expression: SUB_OP value  */
#line 357 "parser.y"
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
#line 1837 "parser.tab.c"
    break;

  case 47: /* value: CONST_INT  */
#line 395 "parser.y"
                  { 
  (yyval.node) = new_ast_const_node(INT_TYPE, (yyvsp[0].val));  }
#line 1844 "parser.tab.c"
    break;

  case 48: /* value: CONST_FLOAT  */
#line 397 "parser.y"
              { (yyval.node) = new_ast_const_node(REAL_TYPE, (yyvsp[0].val)); }
#line 1850 "parser.tab.c"
    break;

  case 49: /* value: CONST_CHAR  */
#line 398 "parser.y"
             { (yyval.node) = new_ast_const_node(CHAR_TYPE, (yyvsp[0].val)); }
#line 1856 "parser.tab.c"
    break;

  case 50: /* value: STRING_LITERAL  */
#line 399 "parser.y"
                 { (yyval.node) = new_ast_const_node(STR_TYPE, (yyvsp[0].val)); }
#line 1862 "parser.tab.c"
    break;

  case 51: /* value: TRUE_TOKEN  */
#line 400 "parser.y"
             { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1868 "parser.tab.c"
    break;

  case 52: /* value: FALSE_TOKEN  */
#line 401 "parser.y"
              { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1874 "parser.tab.c"
    break;

  case 53: /* $@7: %empty  */
#line 404 "parser.y"
                         {
  // parent = 0;
  printf("Tail declared at line %d\n", lineno);
  incr_scope(lineno);}
#line 1883 "parser.tab.c"
    break;

  case 54: /* tail: LEFT_CURLY_BRACKET $@7 statements RIGHT_CURLY_BRACKET  */
#line 408 "parser.y"
{ 
      
    (yyval.node) = (yyvsp[-1].node); /* just pass information */
    hide_scope(yyout);
}
#line 1893 "parser.tab.c"
    break;

  case 55: /* else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 416 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
}
#line 1902 "parser.tab.c"
    break;

  case 56: /* else_if: else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 421 "parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
}
#line 1911 "parser.tab.c"
    break;

  case 57: /* else_part: ELSE tail  */
#line 428 "parser.y"
{
    /* else exists */
    (yyval.node) = (yyvsp[0].node);
}
#line 1920 "parser.tab.c"
    break;

  case 58: /* else_part: %empty  */
#line 433 "parser.y"
{
    /* no else */
    (yyval.node) = NULL;
}
#line 1929 "parser.tab.c"
    break;

  case 59: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_if else_part  */
#line 440 "parser.y"
  {
    (yyval.node) = new_ast_if_node((yyvsp[-4].node), (yyvsp[-2].node), elsifs, elseif_count, (yyvsp[0].node));
    elseif_count = 0;
    elsifs = NULL;
  }
#line 1939 "parser.tab.c"
    break;

  case 60: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_part  */
#line 446 "parser.y"
{
    (yyval.node) = new_ast_if_node((yyvsp[-3].node), (yyvsp[-1].node), NULL, 0, (yyvsp[0].node));
}
#line 1947 "parser.tab.c"
    break;

  case 61: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail  */
#line 452 "parser.y"
{
    (yyval.node) = new_ast_while_node((yyvsp[-2].node), (yyvsp[0].node));
}
#line 1955 "parser.tab.c"
    break;

  case 62: /* assignment: var_ref ASSIGN_OP expression  */
#line 461 "parser.y"
{
	AST_Node_VAR *temp = (AST_Node_VAR*) (yyvsp[-2].node);
	(yyval.node) = new_ast_assign_node(temp->entry, (yyvsp[0].node));
  /* find datatypes */
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
#line 2011 "parser.tab.c"
    break;

  case 63: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT INC_OP RIGHT_PAREN tail  */
#line 515 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 0, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2026 "parser.tab.c"
    break;

  case 64: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT DEC_OP RIGHT_PAREN tail  */
#line 526 "parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 1, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 2041 "parser.tab.c"
    break;

  case 65: /* do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 538 "parser.y"
{
    (yyval.node) = new_ast_do_node((yyvsp[-2].node), (yyvsp[-5].node));
}
#line 2049 "parser.tab.c"
    break;

  case 72: /* statements: statements statement  */
#line 557 "parser.y"
  {
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[-1].node);
    (yyval.node) = new_statements_node(temp->statements, temp->statement_count, (yyvsp[0].node));
  }
#line 2058 "parser.tab.c"
    break;

  case 73: /* statements: statement  */
#line 562 "parser.y"
  {
    (yyval.node) = new_statements_node(NULL, 0, (yyvsp[0].node));
  }
#line 2066 "parser.tab.c"
    break;

  case 74: /* statement: declaration  */
#line 569 "parser.y"
{
  (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 2074 "parser.tab.c"
    break;

  case 75: /* statement: if_statement  */
#line 574 "parser.y"
{ 
		(yyval.node) = (yyvsp[0].node); /* just pass information */
	}
#line 2082 "parser.tab.c"
    break;

  case 76: /* statement: while_statement  */
#line 578 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2090 "parser.tab.c"
    break;

  case 77: /* statement: RETURN expression SEMICOLON  */
#line 582 "parser.y"
        {
          

          (yyval.node) = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
          temp_function->return_node = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
        }
#line 2101 "parser.tab.c"
    break;

  case 78: /* statement: for_statement  */
#line 589 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2109 "parser.tab.c"
    break;

  case 79: /* statement: do_statement  */
#line 594 "parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2117 "parser.tab.c"
    break;

  case 80: /* statement: switch_statement  */
#line 599 "parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2125 "parser.tab.c"
    break;

  case 81: /* statement: enum_statement  */
#line 604 "parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2133 "parser.tab.c"
    break;

  case 82: /* statement: func_call SEMICOLON  */
#line 608 "parser.y"
        {
		        (yyval.node) = (yyvsp[-1].node); /* just pass information */

	    }
#line 2142 "parser.tab.c"
    break;

  case 83: /* statement: CONTINUE SEMICOLON  */
#line 613 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(0);
        }
#line 2150 "parser.tab.c"
    break;

  case 84: /* statement: BREAK SEMICOLON  */
#line 617 "parser.y"
        { 
                (yyval.node) = new_ast_simple_node(1);
        }
#line 2158 "parser.tab.c"
    break;

  case 85: /* statement: assignment SEMICOLON  */
#line 621 "parser.y"
        {
		(yyval.node) = (yyvsp[-1].node); /* just pass information */
	    }
#line 2166 "parser.tab.c"
    break;

  case 86: /* statement: INC_OP IDENT SEMICOLON  */
#line 625 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 1);
            }

        }
#line 2177 "parser.tab.c"
    break;

  case 87: /* statement: DEC_OP IDENT SEMICOLON  */
#line 632 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 1);
            }

        }
#line 2188 "parser.tab.c"
    break;

  case 88: /* statement: IDENT INC_OP SEMICOLON  */
#line 639 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 0, 0);
            }

        }
#line 2199 "parser.tab.c"
    break;

  case 89: /* statement: IDENT DEC_OP SEMICOLON  */
#line 646 "parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 1, 0);
            }

        }
#line 2210 "parser.tab.c"
    break;

  case 90: /* functions: functions function  */
#line 658 "parser.y"
  {
    AST_Node_Func_Declarations *temp = (AST_Node_Func_Declarations*) (yyvsp[-1].node);
    (yyval.node) = new_func_declarations_node(temp->func_declarations, temp->func_declaration_count, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2220 "parser.tab.c"
    break;

  case 91: /* functions: function  */
#line 664 "parser.y"
  {
    (yyval.node) = new_func_declarations_node(NULL, 0, (yyvsp[0].node));
    hide_scope(yyout);
  }
#line 2229 "parser.tab.c"
    break;

  case 92: /* $@8: %empty  */
#line 670 "parser.y"
                         { 
  printf("Function declared at line %d\n", lineno);
  incr_scope(lineno); }
#line 2237 "parser.tab.c"
    break;

  case 93: /* function: function_head $@8 function_tail  */
#line 673 "parser.y"
{ 
    /* perform revisit */
    printf("before");
	  revisit(temp_function->entry->name);
    printf("after");
    (yyval.node) = (AST_Node *) temp_function;
    
    
}
#line 2251 "parser.tab.c"
    break;

  case 94: /* $@9: %empty  */
#line 686 "parser.y"
                    { function_decl = 1; }
#line 2257 "parser.tab.c"
    break;

  case 95: /* function_head: FUNC $@9 IDENT LEFT_PAREN param_empty RIGHT_PAREN return_type  */
#line 687 "parser.y"
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
#line 2284 "parser.tab.c"
    break;

  case 96: /* return_type: type  */
#line 713 "parser.y"
        {
		(yyval.node) = new_ast_ret_type_node((yyvsp[0].data_type));
	}
#line 2292 "parser.tab.c"
    break;

  case 98: /* statements_optional: statements  */
#line 722 "parser.y"
  {
    temp_function->statements = (yyvsp[0].node);
  }
#line 2300 "parser.tab.c"
    break;

  case 99: /* statements_optional: %empty  */
#line 726 "parser.y"
  {
    temp_function->statements = NULL;
  }
#line 2308 "parser.tab.c"
    break;

  case 100: /* param_empty: parameters  */
#line 759 "parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2316 "parser.tab.c"
    break;

  case 101: /* param_empty: %empty  */
#line 763 "parser.y"
  {
    (yyval.node) = NULL;
  }
#line 2324 "parser.tab.c"
    break;

  case 102: /* parameters: parameters COMMA parameter  */
#line 769 "parser.y"
  {
    AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) (yyvsp[-2].node);
    (yyval.node) = new_ast_decl_params_node(temp->parameters, temp->num_of_pars, (yyvsp[0].par));
  }
#line 2333 "parser.tab.c"
    break;

  case 103: /* parameters: parameter  */
#line 774 "parser.y"
  {
    (yyval.node) = new_ast_decl_params_node(NULL, 0, (yyvsp[0].par));
  }
#line 2341 "parser.tab.c"
    break;

  case 104: /* $@10: %empty  */
#line 779 "parser.y"
           { declare = 1; }
#line 2347 "parser.tab.c"
    break;

  case 105: /* parameter: $@10 type variable  */
#line 780 "parser.y"
{ 
    declare = 0;
    // set type of symbol table entry	
    if((yyvsp[0].symbol_table_item)->stype == UNDEF){ /* "simple" type */
        set_type((yyvsp[0].symbol_table_item)->name, (yyvsp[-1].data_type), UNDEF); 
    }
    (yyval.par) = def_param((yyvsp[-1].data_type), (yyvsp[0].symbol_table_item)->name, 0); //always pass by value
}
#line 2360 "parser.tab.c"
    break;

  case 111: /* func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN  */
#line 798 "parser.y"
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
#line 2430 "parser.tab.c"
    break;

  case 112: /* arguments: argument  */
#line 866 "parser.y"
{
  (yyval.node) = (yyvsp[0].node);
}
#line 2438 "parser.tab.c"
    break;

  case 113: /* arguments: %empty  */
#line 870 "parser.y"
{
        AST_Node_Call_Params *temp = malloc (sizeof (AST_Node_Call_Params));
        temp->type = CALL_PARAMS;
        temp->params = NULL;
        temp->num_of_pars = 0;
        (yyval.node) = (AST_Node*)temp;
  }
#line 2450 "parser.tab.c"
    break;

  case 114: /* argument: argument COMMA expression  */
#line 879 "parser.y"
{
  AST_Node_Call_Params *temp = (AST_Node_Call_Params*) (yyvsp[-2].node);
  (yyval.node) = new_ast_call_params_node(temp->params, temp->num_of_pars, (yyvsp[0].node));
}
#line 2459 "parser.tab.c"
    break;

  case 115: /* argument: expression  */
#line 884 "parser.y"
{
  (yyval.node) = new_ast_call_params_node(NULL, 0, (yyvsp[0].node));
}
#line 2467 "parser.tab.c"
    break;


#line 2471 "parser.tab.c"

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

#line 889 "parser.y"


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
