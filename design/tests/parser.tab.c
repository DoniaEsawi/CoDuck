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
#line 1 "../parser/parser.y"


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

#line 99 "parser.tab.c"

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
  YYSYMBOL_MINUS = 58,                     /* MINUS  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_functions_optional = 63,        /* functions_optional  */
  YYSYMBOL_type = 64,                      /* type  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_66_3 = 66,                      /* $@3  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_69_6 = 69,                      /* $@6  */
  YYSYMBOL_names = 70,                     /* names  */
  YYSYMBOL_init = 71,                      /* init  */
  YYSYMBOL_var_init = 72,                  /* var_init  */
  YYSYMBOL_variable = 73,                  /* variable  */
  YYSYMBOL_var_ref = 74,                   /* var_ref  */
  YYSYMBOL_declarations = 75,              /* declarations  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_value = 77,                     /* value  */
  YYSYMBOL_tail = 78,                      /* tail  */
  YYSYMBOL_else_if = 79,                   /* else_if  */
  YYSYMBOL_else_part = 80,                 /* else_part  */
  YYSYMBOL_if_statement = 81,              /* if_statement  */
  YYSYMBOL_while_statement = 82,           /* while_statement  */
  YYSYMBOL_assignment = 83,                /* assignment  */
  YYSYMBOL_for_statement = 84,             /* for_statement  */
  YYSYMBOL_do_statement = 85,              /* do_statement  */
  YYSYMBOL_switch_statement = 86,          /* switch_statement  */
  YYSYMBOL_cases = 87,                     /* cases  */
  YYSYMBOL_default = 88,                   /* default  */
  YYSYMBOL_case = 89,                      /* case  */
  YYSYMBOL_statements = 90,                /* statements  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_functions = 92,                 /* functions  */
  YYSYMBOL_function = 93,                  /* function  */
  YYSYMBOL_94_7 = 94,                      /* $@7  */
  YYSYMBOL_function_head = 95,             /* function_head  */
  YYSYMBOL_96_8 = 96,                      /* $@8  */
  YYSYMBOL_return_type = 97,               /* return_type  */
  YYSYMBOL_function_tail = 98,             /* function_tail  */
  YYSYMBOL_statements_optional = 99,       /* statements_optional  */
  YYSYMBOL_declarations_optional = 100,    /* declarations_optional  */
  YYSYMBOL_return_optional = 101,          /* return_optional  */
  YYSYMBOL_param_empty = 102,              /* param_empty  */
  YYSYMBOL_parameters = 103,               /* parameters  */
  YYSYMBOL_parameter = 104,                /* parameter  */
  YYSYMBOL_105_9 = 105,                    /* $@9  */
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
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,    99,    98,   103,   108,   113,   114,   115,
     116,   117,   118,   119,   122,   122,   122,   140,   140,   140,
     166,   170,   174,   178,   184,   186,   195,   196,   201,   206,
     215,   219,   223,   227,   231,   236,   240,   244,   248,   252,
     256,   260,   266,   273,   279,   285,   290,   294,   298,   337,
     338,   339,   340,   341,   342,   345,   351,   356,   363,   369,
     375,   381,   387,   396,   444,   455,   467,   473,   475,   475,
     475,   477,   479,   486,   491,   497,   501,   506,   511,   516,
     521,   525,   530,   534,   538,   542,   549,   556,   563,   575,
     580,   586,   586,   598,   598,   622,   628,   666,   671,   676,
     681,   687,   692,   699,   704,   709,   714,   720,   720,   732,
     734,   734,   736,   736,   738,   801,   806,   814,   819
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
  "MINUS", "$accept", "program", "$@1", "$@2", "functions_optional",
  "type", "declaration", "$@3", "$@4", "$@5", "$@6", "names", "init",
  "var_init", "variable", "var_ref", "declarations", "expression", "value",
  "tail", "else_if", "else_part", "if_statement", "while_statement",
  "assignment", "for_statement", "do_statement", "switch_statement",
  "cases", "default", "case", "statements", "statement", "functions",
  "function", "$@7", "function_head", "$@8", "return_type",
  "function_tail", "statements_optional", "declarations_optional",
  "return_optional", "param_empty", "parameters", "parameter", "$@9",
  "enum_statement", "enum_list", "one_val", "func_call", "arguments",
  "argument", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-112)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     390,  -112,  -112,  -112,  -112,  -112,  -112,   398,  -112,    11,
    -112,  -112,   390,  -112,  -112,    12,   127,  -112,    12,   -28,
       5,  -112,  -112,  -112,   -16,    24,    27,    31,    32,    35,
      39,    41,    70,    72,    78,  -112,    33,  -112,  -112,    53,
    -112,  -112,  -112,   127,  -112,  -112,    55,     5,   108,    12,
      58,    13,    59,    64,    13,    13,    93,   127,    73,    13,
    -112,  -112,    74,    69,    79,    13,  -112,    92,  -112,  -112,
      85,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   -11,    13,   108,   114,   115,    13,  -112,   310,  -112,
    -112,    97,    87,  -112,  -112,   166,   181,  -112,    94,    80,
      99,   196,   123,  -112,  -112,   310,    96,  -112,  -112,  -112,
     211,  -112,  -112,  -112,  -112,    13,    13,    13,    13,    13,
      13,    13,    13,    13,  -112,    13,    32,    32,    13,  -112,
      13,   104,   -28,  -112,   -22,  -112,   119,  -112,     8,     8,
    -112,  -112,  -112,   323,   125,   336,    67,   310,     3,  -112,
     270,   226,   122,   112,   123,  -112,   119,  -112,   121,    32,
     126,    14,  -112,   144,   117,    13,    29,  -112,  -112,  -112,
    -112,  -112,   129,  -112,    13,   128,  -112,     0,  -112,   297,
     133,  -112,  -112,  -112,   147,   390,  -112,   241,    13,   132,
     134,   127,   127,   142,   390,   127,    32,   256,    32,    32,
     127,   127,   149,   127,   135,  -112,    32,  -112,  -112,   157,
     152,  -112,   398,    13,   160,  -112,   398,  -112,    93,   284,
    -112,  -112,  -112,  -112,  -112,  -112
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     7,     8,     9,    10,    11,    12,     0,    13,     0,
      14,    29,     2,    17,     1,     0,     0,    28,     0,    26,
      15,    23,    24,    22,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    75,    76,     0,
      77,    78,    79,     3,    74,    80,     0,    18,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    82,     0,     0,     0,     0,    84,     0,    73,    81,
       0,    49,    50,    51,    52,    53,    54,    25,    21,    20,
      16,    26,     0,     0,     0,     0,     0,    46,   118,    47,
      45,     0,   115,    87,    88,     0,     0,    26,     0,     0,
       0,     0,     0,    85,    86,    63,     0,    19,    43,    44,
       0,    48,    41,    42,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,    55,
       0,     0,   112,   113,     0,   110,     6,    40,    30,    31,
      32,    33,    34,    36,    35,    38,    39,   117,    59,    62,
       0,     0,     0,     0,     0,     4,     5,    90,     0,     0,
       0,    59,    61,     0,     0,     0,     0,    69,   109,   111,
      89,    93,     0,    58,     0,     0,    60,     0,    66,     0,
       0,    67,    70,    68,     0,   100,    92,     0,     0,     0,
       0,     0,     0,     0,    99,    98,     0,     0,     0,     0,
      72,    71,   107,    97,   102,    56,     0,    64,    65,     0,
     103,   106,     0,     0,     0,    57,     0,   107,     0,     0,
      96,    95,    94,   105,   108,   101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -112,  -112,  -112,    -7,   -10,  -112,  -112,  -112,
    -112,   175,   150,   -95,   -14,   -13,    16,   -46,   -36,  -111,
    -112,    37,  -112,  -112,   146,  -112,  -112,  -112,  -112,  -112,
      40,   -51,   -38,  -112,    47,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,    -9,  -112,  -112,  -112,    62,
      -6,  -112,  -112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    16,    67,   155,    10,    11,    15,    50,    18,
      70,    20,    21,    22,    35,    87,    12,    88,    89,    58,
     161,   162,    37,    38,    39,    40,    41,    42,   166,   182,
     167,    43,    44,   156,   157,   158,   172,   184,   222,   186,
     204,   195,   214,   209,   210,   211,   212,    45,   134,   135,
      90,    91,    92
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    23,    17,    36,    23,    68,    99,   133,    95,    96,
      46,    14,    77,   101,   153,   148,   149,    51,   154,   105,
     159,   160,    51,    19,    81,    71,    72,    73,    74,    48,
      36,   159,   175,    52,    53,    79,   110,    46,   108,   109,
     114,    75,    76,    36,    36,    49,    82,   111,   173,   189,
     190,    46,   165,   180,   117,   118,   119,    54,    83,   133,
      55,    68,    84,    85,    56,   181,    86,    57,    59,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    60,   147,
      61,    62,   150,    63,   151,   205,    36,   207,   208,    64,
      65,    24,    66,    46,    69,   215,    25,    80,    93,    26,
      27,    28,    29,    94,    97,   100,    30,    31,   103,   102,
      32,   115,   116,   117,   118,   119,   129,   106,   104,   179,
      71,    72,    73,    74,   107,   112,   113,   125,   187,    33,
      34,   124,   130,   128,   132,   136,    75,    76,    24,   152,
     200,   201,   197,    25,   203,   165,    26,    27,    28,    29,
     -91,   168,   171,    30,    31,   177,   178,    32,   193,   174,
     213,   188,    68,    68,   185,    68,   198,   219,   199,   115,
     116,   117,   118,   119,   192,   202,    33,    34,    36,    36,
     122,   123,    36,  -104,    17,    46,    46,    36,    36,    46,
      36,   216,   217,    47,    46,    46,   220,    46,   176,    78,
     126,   194,    98,   170,   224,   218,   183,     0,   223,   221,
     115,   116,   117,   118,   119,   127,   169,   120,   121,     0,
       0,   122,   123,     0,     0,   115,   116,   117,   118,   119,
     131,     0,   120,   121,     0,     0,   122,   123,     0,     0,
     115,   116,   117,   118,   119,   137,     0,   120,   121,     0,
       0,   122,   123,     0,     0,   115,   116,   117,   118,   119,
     164,     0,   120,   121,     0,     0,   122,   123,     0,     0,
     115,   116,   117,   118,   119,   196,     0,   120,   121,     0,
       0,   122,   123,     0,     0,   115,   116,   117,   118,   119,
     206,     0,   120,   121,     0,     0,   122,   123,     0,     0,
     115,   116,   117,   118,   119,     0,     0,   120,   121,   163,
       0,   122,   123,     0,   115,   116,   117,   118,   119,     0,
       0,   120,   121,   225,     0,   122,   123,     0,   115,   116,
     117,   118,   119,     0,     0,   120,   121,     0,   191,   122,
     123,   115,   116,   117,   118,   119,     0,     0,   120,   121,
       0,     0,   122,   123,   115,   116,   117,   118,   119,     0,
       0,   120,   121,     0,     0,   122,   123,   115,   116,   117,
     118,   119,     0,     0,     0,   121,     0,     0,   122,   123,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,   123,     1,     2,     3,     4,     5,     6,     7,
       8,     1,     2,     3,     4,     5,     6,     0,     8
};

static const yytype_int16 yycheck[] =
{
       7,    15,    12,    16,    18,    43,    57,   102,    54,    55,
      16,     0,    48,    59,    36,   126,   127,    33,    40,    65,
      17,    18,    33,    11,    11,    12,    13,    14,    15,    57,
      43,    17,    18,    49,    50,    49,    82,    43,    49,    50,
      86,    28,    29,    56,    57,    40,    33,    83,   159,    49,
      50,    57,    23,    24,    46,    47,    48,    33,    45,   154,
      33,    99,    49,    50,    33,    36,    53,    35,    33,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    39,   125,
      39,    11,   128,    11,   130,   196,    99,   198,   199,    11,
      57,    11,    39,    99,    39,   206,    16,    39,    39,    19,
      20,    21,    22,    39,    11,    32,    26,    27,    39,    35,
      30,    44,    45,    46,    47,    48,    36,    25,    39,   165,
      12,    13,    14,    15,    39,    11,    11,    40,   174,    49,
      50,    34,    33,    39,    11,    39,    28,    29,    11,    35,
     191,   192,   188,    16,   195,    23,    19,    20,    21,    22,
      31,    39,    31,    26,    27,    11,    39,    30,    11,    33,
      25,    33,   200,   201,    35,   203,    34,   213,    34,    44,
      45,    46,    47,    48,    41,    33,    49,    50,   191,   192,
      55,    56,   195,    34,   194,   191,   192,   200,   201,   195,
     203,    34,    40,    18,   200,   201,    36,   203,   161,    49,
      34,   185,    56,   156,   218,   212,   166,    -1,   217,   216,
      44,    45,    46,    47,    48,    34,   154,    51,    52,    -1,
      -1,    55,    56,    -1,    -1,    44,    45,    46,    47,    48,
      34,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
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
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,     3,     4,     5,     6,     7,     8,     9,
      10,     3,     4,     5,     6,     7,     8,    -1,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    60,
      64,    65,    75,    64,     0,    66,    61,    65,    68,    11,
      70,    71,    72,    73,    11,    16,    19,    20,    21,    22,
      26,    27,    30,    49,    50,    73,    74,    81,    82,    83,
      84,    85,    86,    90,    91,   106,   109,    70,    57,    40,
      67,    33,    49,    50,    33,    33,    33,    35,    78,    33,
      39,    39,    11,    11,    11,    57,    39,    62,    91,    39,
      69,    12,    13,    14,    15,    28,    29,    77,    71,    73,
      39,    11,    33,    45,    49,    50,    53,    74,    76,    77,
     109,   110,   111,    39,    39,    76,    76,    11,    83,    90,
      32,    76,    35,    39,    39,    76,    25,    39,    49,    50,
      76,    77,    11,    11,    76,    44,    45,    46,    47,    48,
      51,    52,    55,    56,    34,    40,    34,    34,    39,    36,
      33,    34,    11,    72,   107,   108,    39,    34,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    78,    78,
      76,    76,    35,    36,    40,    63,    92,    93,    94,    17,
      18,    79,    80,    39,    34,    23,    87,    89,    39,   108,
      93,    31,    95,    78,    33,    18,    80,    11,    39,    76,
      24,    36,    88,    89,    96,    35,    98,    76,    33,    49,
      50,    41,    41,    11,    75,   100,    34,    76,    34,    34,
      90,    90,    33,    90,    99,    78,    34,    78,    78,   102,
     103,   104,   105,    25,   101,    78,    34,    40,    64,    76,
      36,    64,    97,   104,    73,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    61,    62,    60,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    66,    67,    65,    68,    69,    65,
      70,    70,    70,    70,    71,    72,    73,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    79,    79,    80,    80,
      81,    81,    82,    83,    84,    84,    85,    86,    87,    87,
      87,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    94,    93,    96,    95,    97,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   105,   104,   106,
     107,   107,   108,   108,   109,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     5,     0,     0,     6,
       3,     3,     1,     1,     1,     3,     1,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     2,     2,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     6,     2,     0,
       7,     6,     5,     3,    10,    10,     7,     7,     2,     1,
       2,     3,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     2,
       1,     0,     3,     0,     7,     1,     5,     1,     0,     1,
       0,     3,     0,     1,     0,     3,     1,     0,     3,     6,
       1,     3,     1,     1,     4,     1,     0,     3,     1
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
#line 98 "../parser/parser.y"
                      { ast_traversal((yyvsp[0].node)); }
#line 1397 "parser.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 99 "../parser/parser.y"
           { ast_traversal((yyvsp[0].node)); }
#line 1403 "parser.tab.c"
    break;

  case 4: /* program: declarations $@1 statements $@2 RETURN SEMICOLON functions_optional  */
#line 100 "../parser/parser.y"
                                    { ast_traversal((yyvsp[0].node)); }
#line 1409 "parser.tab.c"
    break;

  case 5: /* functions_optional: functions  */
#line 104 "../parser/parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1417 "parser.tab.c"
    break;

  case 6: /* functions_optional: %empty  */
#line 108 "../parser/parser.y"
  {
    (yyval.node) = NULL;
  }
#line 1425 "parser.tab.c"
    break;

  case 7: /* type: INTEGER  */
#line 113 "../parser/parser.y"
               { (yyval.data_type) = INT_TYPE;   }
#line 1431 "parser.tab.c"
    break;

  case 8: /* type: FLOAT  */
#line 114 "../parser/parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1437 "parser.tab.c"
    break;

  case 9: /* type: DOUBLE  */
#line 115 "../parser/parser.y"
               { (yyval.data_type) = REAL_TYPE;   }
#line 1443 "parser.tab.c"
    break;

  case 10: /* type: VOID  */
#line 116 "../parser/parser.y"
               { (yyval.data_type) = VOID_TYPE;   }
#line 1449 "parser.tab.c"
    break;

  case 11: /* type: BOOLEAN  */
#line 117 "../parser/parser.y"
               { (yyval.data_type) = BOOL_TYPE;   }
#line 1455 "parser.tab.c"
    break;

  case 12: /* type: CHAR  */
#line 118 "../parser/parser.y"
               { (yyval.data_type) = CHAR_TYPE;   }
#line 1461 "parser.tab.c"
    break;

  case 13: /* type: STR  */
#line 119 "../parser/parser.y"
               { (yyval.data_type) = STR_TYPE;   }
#line 1467 "parser.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 122 "../parser/parser.y"
                  {declare = 1; }
#line 1473 "parser.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 122 "../parser/parser.y"
                                        {declare = 0; }
#line 1479 "parser.tab.c"
    break;

  case 16: /* declaration: type $@3 names $@4 SEMICOLON  */
#line 123 "../parser/parser.y"
    {
        int i;
        (yyval.node) = new_ast_decl_node((yyvsp[-4].data_type), names, nc, 0);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) (yyval.node);

        // declare types of the names
        for(i=0; i < temp->names_count; i++){
            // variable
            if(temp->names[i]->stype == UNDEF){
                set_type(temp->names[i]->name, temp->data_type, UNDEF);
            }
            
        }
    }
#line 1500 "parser.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 140 "../parser/parser.y"
             { declare = 1; }
#line 1506 "parser.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 140 "../parser/parser.y"
                                    { declare = 0; }
#line 1512 "parser.tab.c"
    break;

  case 19: /* declaration: CONST type $@5 names $@6 SEMICOLON  */
#line 141 "../parser/parser.y"
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
#line 1540 "parser.tab.c"
    break;

  case 20: /* names: names COMMA variable  */
#line 167 "../parser/parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1548 "parser.tab.c"
    break;

  case 21: /* names: names COMMA init  */
#line 171 "../parser/parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1556 "parser.tab.c"
    break;

  case 22: /* names: variable  */
#line 175 "../parser/parser.y"
        {
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1564 "parser.tab.c"
    break;

  case 23: /* names: init  */
#line 179 "../parser/parser.y"
        { 
		add_to_names((yyvsp[0].symbol_table_item));
	}
#line 1572 "parser.tab.c"
    break;

  case 24: /* init: var_init  */
#line 184 "../parser/parser.y"
               { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1578 "parser.tab.c"
    break;

  case 25: /* var_init: IDENT ASSIGN_OP value  */
#line 187 "../parser/parser.y"
{ 
	AST_Node_Const *temp = (AST_Node_Const*) (yyval.symbol_table_item);
	(yyvsp[-2].symbol_table_item)->val = temp->val;
	(yyvsp[-2].symbol_table_item)->stype = temp->const_type;
	(yyval.symbol_table_item) = (yyvsp[-2].symbol_table_item);
}
#line 1589 "parser.tab.c"
    break;

  case 26: /* variable: IDENT  */
#line 195 "../parser/parser.y"
                { (yyval.symbol_table_item) = (yyvsp[0].symbol_table_item); }
#line 1595 "parser.tab.c"
    break;

  case 27: /* var_ref: variable  */
#line 197 "../parser/parser.y"
        {
		(yyval.node) = new_ast_var_node((yyvsp[0].symbol_table_item)); /* no reference */
	}
#line 1603 "parser.tab.c"
    break;

  case 28: /* declarations: declarations declaration  */
#line 202 "../parser/parser.y"
  {
    AST_Node_Declarations *temp = (AST_Node_Declarations*) (yyvsp[-1].node);
    (yyval.node) = new_declarations_node(temp->declarations, temp->declaration_count, (yyvsp[0].node));
  }
#line 1612 "parser.tab.c"
    break;

  case 29: /* declarations: declaration  */
#line 207 "../parser/parser.y"
  {
    (yyval.node) = new_declarations_node(NULL, 0, (yyvsp[0].node));
  }
#line 1620 "parser.tab.c"
    break;

  case 30: /* expression: expression ADD_OP expression  */
#line 216 "../parser/parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(ADD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1628 "parser.tab.c"
    break;

  case 31: /* expression: expression SUB_OP expression  */
#line 220 "../parser/parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(SUB, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1636 "parser.tab.c"
    break;

  case 32: /* expression: expression MUL_OP expression  */
#line 224 "../parser/parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MUL, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1644 "parser.tab.c"
    break;

  case 33: /* expression: expression DIV_OP expression  */
#line 228 "../parser/parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(DIV, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1652 "parser.tab.c"
    break;

  case 34: /* expression: expression MOD_OP expression  */
#line 232 "../parser/parser.y"
{ 
	    (yyval.node) = new_ast_arithm_node(MOD, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1660 "parser.tab.c"
    break;

  case 35: /* expression: expression AND_OP expression  */
#line 237 "../parser/parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_AND, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1668 "parser.tab.c"
    break;

  case 36: /* expression: expression OR_OP expression  */
#line 241 "../parser/parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_OR, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1676 "parser.tab.c"
    break;

  case 37: /* expression: NOT_OP expression  */
#line 245 "../parser/parser.y"
{
    (yyval.node) = new_ast_bool_node(OP_NOT, (yyvsp[0].node), NULL);
}
#line 1684 "parser.tab.c"
    break;

  case 38: /* expression: expression EQ_OP expression  */
#line 249 "../parser/parser.y"
{
	(yyval.node) = new_ast_equ_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1692 "parser.tab.c"
    break;

  case 39: /* expression: expression REL_OP expression  */
#line 253 "../parser/parser.y"
{
	(yyval.node) = new_ast_rel_node((yyvsp[-1].val).ival, (yyvsp[-2].node), (yyvsp[0].node));
}
#line 1700 "parser.tab.c"
    break;

  case 40: /* expression: LEFT_PAREN expression RIGHT_PAREN  */
#line 257 "../parser/parser.y"
{
	(yyval.node) = (yyvsp[-1].node); /* just pass information */
}
#line 1708 "parser.tab.c"
    break;

  case 41: /* expression: INC_OP IDENT  */
#line 261 "../parser/parser.y"
{
    {
			(yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 0, 1);
    }
}
#line 1718 "parser.tab.c"
    break;

  case 42: /* expression: DEC_OP IDENT  */
#line 267 "../parser/parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[0].symbol_table_item), 1, 1);
    }

}
#line 1729 "parser.tab.c"
    break;

  case 43: /* expression: IDENT INC_OP  */
#line 274 "../parser/parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 0);
    }
}
#line 1739 "parser.tab.c"
    break;

  case 44: /* expression: IDENT DEC_OP  */
#line 280 "../parser/parser.y"
{
    {
            (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 0);
    }
}
#line 1749 "parser.tab.c"
    break;

  case 45: /* expression: func_call  */
#line 286 "../parser/parser.y"
{
		        (yyval.node) = (yyvsp[0].node); /* just pass information */

	    }
#line 1758 "parser.tab.c"
    break;

  case 46: /* expression: var_ref  */
#line 291 "../parser/parser.y"
{ 
    (yyval.node) = (yyvsp[0].node); /* just pass information */
}
#line 1766 "parser.tab.c"
    break;

  case 47: /* expression: value  */
#line 295 "../parser/parser.y"
  {
    (yyval.node) = (yyvsp[0].node); /* no sign */
  }
#line 1774 "parser.tab.c"
    break;

  case 48: /* expression: SUB_OP value  */
#line 299 "../parser/parser.y"
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
          exit(1);
          break;
        case STR_TYPE:
            /* sign before string error */
            fprintf(stderr, "Error having sign before string constant!\n");
            exit(1);
            break;
        case BOOL_TYPE:
            /* sign before bool error */
            fprintf(stderr, "Error having sign before bool constant!\n");
            exit(1);
            break;
      }

      (yyval.node) = (AST_Node*) temp;
    
  }
#line 1811 "parser.tab.c"
    break;

  case 49: /* value: CONST_INT  */
#line 337 "../parser/parser.y"
                  { (yyval.node) = new_ast_const_node(INT_TYPE, (yyvsp[0].val));  }
#line 1817 "parser.tab.c"
    break;

  case 50: /* value: CONST_FLOAT  */
#line 338 "../parser/parser.y"
              { (yyval.node) = new_ast_const_node(REAL_TYPE, (yyvsp[0].val)); }
#line 1823 "parser.tab.c"
    break;

  case 51: /* value: CONST_CHAR  */
#line 339 "../parser/parser.y"
             { (yyval.node) = new_ast_const_node(CHAR_TYPE, (yyvsp[0].val)); }
#line 1829 "parser.tab.c"
    break;

  case 52: /* value: STRING_LITERAL  */
#line 340 "../parser/parser.y"
                 { (yyval.node) = new_ast_const_node(STR_TYPE, (yyvsp[0].val)); }
#line 1835 "parser.tab.c"
    break;

  case 53: /* value: TRUE_TOKEN  */
#line 341 "../parser/parser.y"
             { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1841 "parser.tab.c"
    break;

  case 54: /* value: FALSE_TOKEN  */
#line 342 "../parser/parser.y"
              { (yyval.node) = new_ast_const_node(BOOL_TYPE, (yyvsp[0].val)); }
#line 1847 "parser.tab.c"
    break;

  case 55: /* tail: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET  */
#line 346 "../parser/parser.y"
{ 
    (yyval.node) = (yyvsp[-1].node); /* just pass information */
}
#line 1855 "parser.tab.c"
    break;

  case 56: /* else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 352 "../parser/parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
}
#line 1864 "parser.tab.c"
    break;

  case 57: /* else_if: else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail  */
#line 357 "../parser/parser.y"
{
    AST_Node *temp = new_ast_elsif_node((yyvsp[-2].node), (yyvsp[0].node));
    add_elseif(temp);
}
#line 1873 "parser.tab.c"
    break;

  case 58: /* else_part: ELSE tail  */
#line 364 "../parser/parser.y"
{
    /* else exists */
    (yyval.node) = (yyvsp[0].node);
}
#line 1882 "parser.tab.c"
    break;

  case 59: /* else_part: %empty  */
#line 369 "../parser/parser.y"
{
    /* no else */
    (yyval.node) = NULL;
}
#line 1891 "parser.tab.c"
    break;

  case 60: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_if else_part  */
#line 376 "../parser/parser.y"
  {
    (yyval.node) = new_ast_if_node((yyvsp[-4].node), (yyvsp[-2].node), elsifs, elseif_count, (yyvsp[0].node));
    elseif_count = 0;
    elsifs = NULL;
  }
#line 1901 "parser.tab.c"
    break;

  case 61: /* if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_part  */
#line 382 "../parser/parser.y"
{
    (yyval.node) = new_ast_if_node((yyvsp[-3].node), (yyvsp[-1].node), NULL, 0, (yyvsp[0].node));
}
#line 1909 "parser.tab.c"
    break;

  case 62: /* while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail  */
#line 388 "../parser/parser.y"
{
    (yyval.node) = new_ast_while_node((yyvsp[-2].node), (yyvsp[0].node));
}
#line 1917 "parser.tab.c"
    break;

  case 63: /* assignment: var_ref ASSIGN_OP expression  */
#line 397 "../parser/parser.y"
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
}
#line 1967 "parser.tab.c"
    break;

  case 64: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT INC_OP RIGHT_PAREN tail  */
#line 445 "../parser/parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 0, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 1982 "parser.tab.c"
    break;

  case 65: /* for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT DEC_OP RIGHT_PAREN tail  */
#line 456 "../parser/parser.y"
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node((yyvsp[-3].symbol_table_item), 1, 0);
    

    (yyval.node) = new_ast_for_node((yyvsp[-7].node), (yyvsp[-5].node), incr_node, (yyvsp[0].node));
    set_loop_counter((yyval.node));
}
#line 1997 "parser.tab.c"
    break;

  case 66: /* do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON  */
#line 468 "../parser/parser.y"
{
    (yyval.node) = new_ast_do_node((yyvsp[-2].node), (yyvsp[-5].node));
}
#line 2005 "parser.tab.c"
    break;

  case 73: /* statements: statements statement  */
#line 487 "../parser/parser.y"
  {
    AST_Node_Statements *temp = (AST_Node_Statements*) (yyvsp[-1].node);
    (yyval.node) = new_statements_node(temp->statements, temp->statement_count, (yyvsp[0].node));
  }
#line 2014 "parser.tab.c"
    break;

  case 74: /* statements: statement  */
#line 492 "../parser/parser.y"
  {
    (yyval.node) = new_statements_node(NULL, 0, (yyvsp[0].node));
  }
#line 2022 "parser.tab.c"
    break;

  case 75: /* statement: if_statement  */
#line 498 "../parser/parser.y"
{ 
		(yyval.node) = (yyvsp[0].node); /* just pass information */
	}
#line 2030 "parser.tab.c"
    break;

  case 76: /* statement: while_statement  */
#line 502 "../parser/parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2038 "parser.tab.c"
    break;

  case 77: /* statement: for_statement  */
#line 507 "../parser/parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2046 "parser.tab.c"
    break;

  case 78: /* statement: do_statement  */
#line 512 "../parser/parser.y"
        { 
        (yyval.node) = (yyvsp[0].node); /* just pass information */
        }
#line 2054 "parser.tab.c"
    break;

  case 79: /* statement: switch_statement  */
#line 517 "../parser/parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2062 "parser.tab.c"
    break;

  case 80: /* statement: enum_statement  */
#line 522 "../parser/parser.y"
        {
		(yyval.node) = NULL; /* will do it later ! */
	    }
#line 2070 "parser.tab.c"
    break;

  case 81: /* statement: func_call SEMICOLON  */
#line 526 "../parser/parser.y"
        {
		        (yyval.node) = (yyvsp[-1].node); /* just pass information */

	    }
#line 2079 "parser.tab.c"
    break;

  case 82: /* statement: CONTINUE SEMICOLON  */
#line 531 "../parser/parser.y"
        { 
                (yyval.node) = new_ast_simple_node(0);
        }
#line 2087 "parser.tab.c"
    break;

  case 83: /* statement: BREAK SEMICOLON  */
#line 535 "../parser/parser.y"
        { 
                (yyval.node) = new_ast_simple_node(1);
        }
#line 2095 "parser.tab.c"
    break;

  case 84: /* statement: assignment SEMICOLON  */
#line 539 "../parser/parser.y"
        {
		(yyval.node) = (yyvsp[-1].node); /* just pass information */
	    }
#line 2103 "parser.tab.c"
    break;

  case 85: /* statement: INC_OP IDENT SEMICOLON  */
#line 543 "../parser/parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 0, 1);
            }

        }
#line 2114 "parser.tab.c"
    break;

  case 86: /* statement: DEC_OP IDENT SEMICOLON  */
#line 550 "../parser/parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-1].symbol_table_item), 1, 1);
            }

        }
#line 2125 "parser.tab.c"
    break;

  case 87: /* statement: IDENT INC_OP SEMICOLON  */
#line 557 "../parser/parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 0, 0);
            }

        }
#line 2136 "parser.tab.c"
    break;

  case 88: /* statement: IDENT DEC_OP SEMICOLON  */
#line 564 "../parser/parser.y"
        {
            {
                    (yyval.node) = new_ast_incr_node((yyvsp[-2].symbol_table_item), 1, 0);
            }

        }
#line 2147 "parser.tab.c"
    break;

  case 89: /* functions: functions function  */
#line 576 "../parser/parser.y"
  {
    AST_Node_Func_Declarations *temp = (AST_Node_Func_Declarations*) (yyvsp[-1].node);
    (yyval.node) = new_func_declarations_node(temp->func_declarations, temp->func_declaration_count, (yyvsp[0].node));
  }
#line 2156 "parser.tab.c"
    break;

  case 90: /* functions: function  */
#line 581 "../parser/parser.y"
  {
    (yyval.node) = new_func_declarations_node(NULL, 0, (yyvsp[0].node));
  }
#line 2164 "parser.tab.c"
    break;

  case 91: /* $@7: %empty  */
#line 586 "../parser/parser.y"
          { incr_scope(); }
#line 2170 "parser.tab.c"
    break;

  case 92: /* function: $@7 function_head function_tail  */
#line 587 "../parser/parser.y"
{ 
    /* perform revisit */
	  revisit(temp_function->entry->name);
    hide_scope();
    (yyval.node) = (AST_Node *) temp_function;
    
}
#line 2182 "parser.tab.c"
    break;

  case 93: /* $@8: %empty  */
#line 598 "../parser/parser.y"
                    { function_decl = 1; }
#line 2188 "parser.tab.c"
    break;

  case 94: /* function_head: FUNC $@8 IDENT LEFT_PAREN param_empty RIGHT_PAREN return_type  */
#line 599 "../parser/parser.y"
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
#line 2214 "parser.tab.c"
    break;

  case 95: /* return_type: type  */
#line 624 "../parser/parser.y"
        {
		(yyval.node) = new_ast_ret_type_node((yyvsp[0].data_type));
	}
#line 2222 "parser.tab.c"
    break;

  case 97: /* statements_optional: statements  */
#line 667 "../parser/parser.y"
  {
    temp_function->statements = (yyvsp[0].node);
  }
#line 2230 "parser.tab.c"
    break;

  case 98: /* statements_optional: %empty  */
#line 671 "../parser/parser.y"
  {
    temp_function->statements = NULL;
  }
#line 2238 "parser.tab.c"
    break;

  case 99: /* declarations_optional: declarations  */
#line 677 "../parser/parser.y"
  {
    temp_function->declarations = (yyvsp[0].node);
  }
#line 2246 "parser.tab.c"
    break;

  case 100: /* declarations_optional: %empty  */
#line 681 "../parser/parser.y"
  {
    temp_function->declarations = NULL;
  }
#line 2254 "parser.tab.c"
    break;

  case 101: /* return_optional: RETURN expression SEMICOLON  */
#line 688 "../parser/parser.y"
  {
    temp_function->return_node = new_ast_return_node(temp_function->ret_type, (yyvsp[-1].node));
  }
#line 2262 "parser.tab.c"
    break;

  case 102: /* return_optional: %empty  */
#line 692 "../parser/parser.y"
  {
    temp_function->return_node = NULL;
  }
#line 2270 "parser.tab.c"
    break;

  case 103: /* param_empty: parameters  */
#line 700 "../parser/parser.y"
  {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2278 "parser.tab.c"
    break;

  case 104: /* param_empty: %empty  */
#line 704 "../parser/parser.y"
  {
    (yyval.node) = NULL;
  }
#line 2286 "parser.tab.c"
    break;

  case 105: /* parameters: parameters COMMA parameter  */
#line 710 "../parser/parser.y"
  {
    AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) (yyvsp[-2].node);
    (yyval.node) = new_ast_decl_params_node(temp->parameters, temp->num_of_pars, (yyvsp[0].par));
  }
#line 2295 "parser.tab.c"
    break;

  case 106: /* parameters: parameter  */
#line 715 "../parser/parser.y"
  {
    (yyval.node) = new_ast_decl_params_node(NULL, 0, (yyvsp[0].par));
  }
#line 2303 "parser.tab.c"
    break;

  case 107: /* $@9: %empty  */
#line 720 "../parser/parser.y"
           { declare = 1; }
#line 2309 "parser.tab.c"
    break;

  case 108: /* parameter: $@9 type variable  */
#line 721 "../parser/parser.y"
{ 
    declare = 0;
    // set type of symbol table entry	
    if((yyvsp[0].symbol_table_item)->stype == UNDEF){ /* "simple" type */
        set_type((yyvsp[0].symbol_table_item)->name, (yyvsp[-1].data_type), UNDEF); 
    }
    (yyval.par) = def_param((yyvsp[-1].data_type), (yyvsp[0].symbol_table_item)->name, 0); //always pass by value
}
#line 2322 "parser.tab.c"
    break;

  case 114: /* func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN  */
#line 739 "../parser/parser.y"
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
		}
		else{ /* general case */
			q->par_types = (int**) realloc(q->par_types,
				(q->num_of_calls + 1) * sizeof(int*));
			q->num_of_pars = (int*) realloc(q->num_of_pars,
				(q->num_of_calls + 1) * sizeof(int));
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
				exit(1);
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
#line 2387 "parser.tab.c"
    break;

  case 115: /* arguments: argument  */
#line 802 "../parser/parser.y"
{
  (yyval.node) = (yyvsp[0].node);
}
#line 2395 "parser.tab.c"
    break;

  case 116: /* arguments: %empty  */
#line 806 "../parser/parser.y"
{
        AST_Node_Call_Params *temp = malloc (sizeof (AST_Node_Call_Params));
        temp->type = CALL_PARAMS;
        temp->params = NULL;
        temp->num_of_pars = 0;
        (yyval.node) = (AST_Node*)temp;
  }
#line 2407 "parser.tab.c"
    break;

  case 117: /* argument: argument COMMA expression  */
#line 815 "../parser/parser.y"
{
  AST_Node_Call_Params *temp = (AST_Node_Call_Params*) (yyvsp[-2].node);
  (yyval.node) = new_ast_call_params_node(temp->params, temp->num_of_pars, (yyvsp[0].node));
}
#line 2416 "parser.tab.c"
    break;

  case 118: /* argument: expression  */
#line 820 "../parser/parser.y"
{
  (yyval.node) = new_ast_call_params_node(NULL, 0, (yyvsp[0].node));
}
#line 2424 "parser.tab.c"
    break;


#line 2428 "parser.tab.c"

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

#line 825 "../parser/parser.y"


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
        printf("Warning: Something has not been checked in the revisit queue!\n");
      }
      
    /* declare function type of "print" */
    func_declare("print", VOID_TYPE, 1, NULL);

    // symbol table dump
    yyout = fopen(argv[2], "w");
    dump_symboltable(yyout);
    fclose(yyout);

    // revisit queue dump
    yyout = fopen(argv[3], "w");
    revisit_dump(yyout);
    fclose(yyout);
	
	return flag;
}
