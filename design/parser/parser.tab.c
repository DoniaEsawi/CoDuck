/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

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

#line 82 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    FLOAT = 259,
    DOUBLE = 260,
    VOID = 261,
    BOOLEAN = 262,
    CHAR = 263,
    CONST = 264,
    STR = 265,
    IDENT = 266,
    CONST_INT = 267,
    CONST_FLOAT = 268,
    CONST_CHAR = 269,
    STRING_LITERAL = 270,
    IF = 271,
    ELSE = 272,
    ELIF = 273,
    WHILE = 274,
    FOR = 275,
    DO = 276,
    SWITCH = 277,
    CASE = 278,
    DEFAULT = 279,
    RETURN = 280,
    BREAK = 281,
    CONTINUE = 282,
    TRUE_TOKEN = 283,
    FALSE_TOKEN = 284,
    ENUM = 285,
    FUNC = 286,
    UNTIL = 287,
    LEFT_PAREN = 288,
    RIGHT_PAREN = 289,
    LEFT_CURLY_BRACKET = 290,
    RIGHT_CURLY_BRACKET = 291,
    LEFT_SQ_BRACKET = 292,
    RIGHT_SQ_BRACKET = 293,
    SEMICOLON = 294,
    COMMA = 295,
    COLON = 296,
    QUESTION_MARK = 297,
    DOT = 298,
    ADD_OP = 299,
    SUB_OP = 300,
    MUL_OP = 301,
    DIV_OP = 302,
    MOD_OP = 303,
    INC_OP = 304,
    DEC_OP = 305,
    OR_OP = 306,
    AND_OP = 307,
    NOT_OP = 308,
    BIT_OR_OP = 309,
    AND = 310,
    BIT_XOR_OP = 311,
    BIT_NOT_OP = 312,
    BIT_LSHIFT_OP = 313,
    BIT_RSHIFT_OP = 314,
    EQ_OP = 315,
    NE_OP = 316,
    GT_OP = 317,
    LT_OP = 318,
    GE_OP = 319,
    LE_OP = 320,
    ASSIGN_OP = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "parser.y" /* yacc.c:355  */

  char char_val;
  int int_val;
  double double_val;
  char* str_val;
  ListNode* symbol_table_item;

#line 197 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    46,    46,    46,    50,    50,    51,    51,
      54,    54,    54,    54,    54,    54,    54,    56,    56,    59,
      60,    63,    63,    63,    65,    67,    69,    70,    71,    74,
      76,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    79,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    83,    85,    85,    85,    87,    87,    88,
      88,    88,    89,    89,    90,    90,    92,    92,    92,    92,
      92,    92,    95,    95,    96,    96,    99,   100,   100,   102,
     102,   104,   106,   108,   108,   110,   112,   114,   116,   116,
     116,   118,   120,   122,   122,   123,   125,   127,   129,   131,
     132,   133,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   153,   153,   155,   155,   157,   157,
     159,   161,   165,   165,   165,   166,   166,   169,   171,   171,
     173,   173,   175,   175,   176,   176,   176,   177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "DOUBLE", "VOID",
  "BOOLEAN", "CHAR", "CONST", "STR", "IDENT", "CONST_INT", "CONST_FLOAT",
  "CONST_CHAR", "STRING_LITERAL", "IF", "ELSE", "ELIF", "WHILE", "FOR",
  "DO", "SWITCH", "CASE", "DEFAULT", "RETURN", "BREAK", "CONTINUE",
  "TRUE_TOKEN", "FALSE_TOKEN", "ENUM", "FUNC", "UNTIL", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "LEFT_SQ_BRACKET", "RIGHT_SQ_BRACKET", "SEMICOLON", "COMMA", "COLON",
  "QUESTION_MARK", "DOT", "ADD_OP", "SUB_OP", "MUL_OP", "DIV_OP", "MOD_OP",
  "INC_OP", "DEC_OP", "OR_OP", "AND_OP", "NOT_OP", "BIT_OR_OP", "AND",
  "BIT_XOR_OP", "BIT_NOT_OP", "BIT_LSHIFT_OP", "BIT_RSHIFT_OP", "EQ_OP",
  "NE_OP", "GT_OP", "LT_OP", "GE_OP", "LE_OP", "ASSIGN_OP", "$accept",
  "program", "globals", "global", "type", "beforedecl", "declaration",
  "declarations", "$@1", "tail", "tail_inloop", "bool_expression",
  "assign", "expression", "simpleExp", "andExp", "bitRelExp", "op",
  "relExp", "bitshiftExp", "pls_min", "mul_div", "sumExp", "mulExp",
  "unaryExp", "value", "else_if", "else_part", "if_statement",
  "while_statement", "optional_type", "for_statement", "do_statement",
  "switch_statement", "cases", "default", "case", "return_val",
  "return_statement", "break_statement", "continue_statement",
  "expression_statement", "statements", "statement", "functions",
  "function", "$@2", "param_empty", "function_head", "function_tail",
  "parameters", "parameter", "$@3", "enum_statement", "enum_list",
  "one_val", "func_call", "arguments", "argument", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -177

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-177)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,     8,    12,    -3,  -177,    20,    20,  -177,  -177,     9,
    -177,    16,  -177,  -177,  -177,  -177,  -177,   306,  -177,  -177,
    -177,    60,    41,    98,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   116,    97,   229,  -177,    68,    23,  -177,   -28,    15,
     -25,  -177,  -177,  -177,  -177,   107,   118,   127,   139,   142,
     424,   114,   138,  -177,  -177,   424,   167,   169,   170,   263,
    -177,  -177,   148,   137,   151,    58,    81,    29,    71,    73,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   272,  -177,  -177,  -177,    86,   150,    98,  -177,   424,
     156,   154,  -177,   306,   424,  -177,  -177,   430,   453,   453,
     306,   229,   159,   424,    -4,  -177,   184,  -177,  -177,   161,
    -177,  -177,  -177,  -177,   171,  -177,   171,   171,   171,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,   171,   171,   171,
    -177,  -177,   171,  -177,  -177,  -177,   171,  -177,  -177,  -177,
    -177,  -177,   193,   306,  -177,   214,  -177,    50,  -177,   -16,
    -177,  -177,   199,   166,   200,  -177,   226,   315,   205,   212,
     424,  -177,  -177,   151,   166,   166,   166,   166,    29,    71,
      71,    73,  -177,  -177,  -177,  -177,  -177,   208,   424,   424,
     217,   139,   187,   221,  -177,   453,   228,  -177,  -177,    51,
     229,   243,  -177,   453,   230,   251,   236,   358,   244,   121,
     237,   241,   424,    -8,  -177,  -177,  -177,   453,   217,   248,
    -177,   424,  -177,   249,   254,  -177,  -177,  -177,   255,  -177,
     453,   262,    53,   143,   217,   269,   139,   401,   186,  -177,
     217,  -177,   265,  -177,    34
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      21,     0,    21,     5,     7,     8,    18,     4,   115,     0,
       9,     0,     1,     3,     2,     6,    17,     0,    23,    22,
     114,     0,     0,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    21,   117,   130,     0,   128,     0,   125,
      69,    72,    73,    74,    75,     0,     0,     0,     0,     0,
      94,     0,     0,    27,    28,     0,     0,     0,     0,   109,
      35,    30,     0,    33,    37,    39,    26,    53,    56,    63,
      65,    70,   102,   103,   104,   105,   106,   107,   112,   113,
     108,    21,   100,   110,   111,     0,     0,     0,    19,     0,
       0,   118,   122,     0,   136,    31,    32,     0,     0,     0,
      83,    21,     0,     0,    69,    93,     0,    96,    97,     0,
      66,    67,    68,    98,     0,    38,     0,     0,     0,    50,
      51,    44,    45,    46,    47,    49,    48,     0,     0,     0,
      57,    58,     0,    59,    60,    61,     0,   121,   101,   131,
     127,   129,     0,     0,   125,     0,   137,     0,   134,    69,
      29,    69,     0,    26,     0,    84,     0,    21,     0,     0,
       0,    95,    71,    36,    43,    40,    41,    42,    52,    54,
      55,    62,    64,    20,   120,   123,   126,     0,     0,   136,
       0,     0,     0,     0,    25,     0,     0,   132,   135,     0,
      21,    78,    82,     0,     0,     0,     0,    21,     0,    80,
       0,     0,     0,     0,    88,   133,    24,     0,     0,     0,
      81,     0,    86,     0,     0,    87,    90,    89,     0,    79,
       0,     0,    21,    21,     0,     0,     0,    21,    21,    76,
       0,    85,     0,    77,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,   120,   -87,  -177,   300,    92,  -177,  -176,
    -174,   -89,   162,   -50,  -177,   201,  -177,  -177,   -96,   180,
    -177,  -177,    21,   185,   183,   235,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,   129,  -177,  -177,  -177,
    -177,  -177,   -97,   -80,  -177,    24,  -177,  -177,  -177,  -177,
    -177,   179,  -177,   105,  -177,   246,  -177,   145,   160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    31,    17,    18,    59,     6,   191,
     102,    60,    61,    62,    63,    64,    65,   127,    66,    67,
     132,   136,    68,    69,    70,    71,   199,   210,    72,    73,
     156,    74,    75,    76,   203,   216,   204,   106,    77,    78,
      79,    80,    81,    82,     7,     8,     9,    90,    22,    34,
      91,    92,    93,    83,    36,    37,    84,   147,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   138,   153,   153,   157,   109,   145,   192,    94,   152,
     154,    88,    12,   155,   -34,   202,   214,   179,   164,    11,
     165,   166,   167,   -34,    95,    96,    14,     1,   215,    16,
     -34,    20,   219,    95,    96,   -34,   -34,   -34,    89,   142,
      21,    97,     1,  -116,   146,    95,    96,   150,   229,  -119,
     160,    23,   231,   159,   233,  -124,   174,   -92,   -92,    86,
       1,  -116,   160,    87,    40,    41,    42,    43,    44,    45,
     -92,    32,    46,    47,    48,    49,    33,   138,    50,    51,
      52,    53,    54,     1,   177,   196,    55,   128,   129,   153,
     178,   178,     5,   197,     5,     5,   194,   153,    41,    42,
      43,    44,    56,    57,   200,    10,    58,    10,    10,    35,
     150,   153,   116,   117,   118,   130,   131,   138,   218,   133,
     134,   135,    13,    15,   153,   227,   228,    38,   146,   146,
      39,   225,   119,   120,    85,   -43,   -43,   -43,   208,   209,
      98,   121,   122,   123,   124,   125,   126,   138,   138,   169,
     170,    99,   213,   107,    40,    41,    42,    43,    44,    45,
     100,   221,    46,    47,    48,    49,   -99,   -99,    50,    51,
      52,    53,    54,     1,   101,   103,    55,   108,   110,   -99,
     111,   112,   151,    41,    42,    43,    44,   113,   114,   140,
     143,   158,    56,    57,   144,   162,    58,    40,    41,    42,
      43,    44,    45,   115,    55,    46,    47,    48,    49,   -91,
     -91,    50,    51,    52,    53,    54,     1,   119,   120,    55,
      56,    57,   -91,   161,    58,   176,   121,   122,   123,   124,
     125,   126,   173,   180,   181,    56,    57,   182,   185,    58,
      40,    41,    42,    43,    44,    45,   186,   187,    46,    47,
      48,    49,   190,   160,    50,    51,    52,    53,    54,     1,
     193,   198,    55,   195,   201,   -99,   -18,   -18,   -18,   -18,
     -18,   -18,    16,   -18,   202,   205,   211,   207,    56,    57,
     212,   220,    58,    40,    41,    42,    43,    44,    45,   224,
     222,    46,    47,    48,    49,   223,   226,    50,    51,    52,
      53,    54,     1,   230,   234,    55,    19,   168,   137,    24,
      25,    26,    27,    28,    29,   163,    30,   171,   183,   172,
     139,    56,    57,   175,   189,    58,    40,    41,    42,    43,
      44,    45,   217,   141,    46,    47,    48,    49,   188,     0,
      50,    51,    52,    53,    54,     1,     0,     0,    55,     0,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,     0,    58,    40,
      41,    42,    43,    44,    45,     0,     0,    46,    47,    48,
      49,     0,     0,    50,    51,    52,    53,    54,     1,     0,
       0,    55,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
       0,    58,    40,    41,    42,    43,    44,    45,     0,     0,
      46,    47,    48,    49,     0,     0,    50,   232,    52,    53,
      54,     1,     0,     0,    55,   104,    41,    42,    43,    44,
       0,   149,    41,    42,    43,    44,     0,     0,     0,     0,
      56,    57,    53,    54,    58,     0,     0,    55,    53,    54,
       0,     0,     0,    55,   151,    41,    42,    43,    44,     0,
       0,     0,     0,    56,    57,     0,     0,    58,     0,    56,
      57,    53,    54,    58,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,     0,    58
};

static const yytype_int16 yycheck[] =
{
      50,    81,    98,    99,   101,    55,    93,   181,    33,    98,
      99,    39,     0,   100,    39,    23,    24,    33,   114,    11,
     116,   117,   118,    39,    49,    50,     2,    30,    36,     9,
      34,     7,   208,    49,    50,    39,    40,    41,    66,    89,
      31,    66,    30,    31,    94,    49,    50,    97,   224,    34,
      66,    35,   226,   103,   230,    40,   143,    23,    24,    36,
      30,    31,    66,    40,    11,    12,    13,    14,    15,    16,
      36,    11,    19,    20,    21,    22,    35,   157,    25,    26,
      27,    28,    29,    30,    34,    34,    33,    58,    59,   185,
      40,    40,     0,   190,     2,     3,   185,   193,    12,    13,
      14,    15,    49,    50,   193,     0,    53,     2,     3,    11,
     160,   207,    54,    55,    56,    44,    45,   197,   207,    46,
      47,    48,     2,     3,   220,   222,   223,    11,   178,   179,
      33,   220,    51,    52,    66,    54,    55,    56,    17,    18,
      33,    60,    61,    62,    63,    64,    65,   227,   228,   128,
     129,    33,   202,    39,    11,    12,    13,    14,    15,    16,
      33,   211,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    35,    33,    33,    39,    11,    36,
      11,    11,    11,    12,    13,    14,    15,    39,    51,    39,
      34,    32,    49,    50,    40,    34,    53,    11,    12,    13,
      14,    15,    16,    52,    33,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    51,    52,    33,
      49,    50,    36,    39,    53,    11,    60,    61,    62,    63,
      64,    65,    39,    34,    34,    49,    50,    11,    33,    53,
      11,    12,    13,    14,    15,    16,    34,    39,    19,    20,
      21,    22,    35,    66,    25,    26,    27,    28,    29,    30,
      39,    18,    33,    35,    34,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    23,    39,    39,    33,    49,    50,
      39,    33,    53,    11,    12,    13,    14,    15,    16,    34,
      41,    19,    20,    21,    22,    41,    34,    25,    26,    27,
      28,    29,    30,    34,    39,    33,     6,   127,    36,     3,
       4,     5,     6,     7,     8,   114,    10,   132,   156,   136,
      85,    49,    50,   144,   179,    53,    11,    12,    13,    14,
      15,    16,   203,    87,    19,    20,    21,    22,   178,    -1,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    11,    12,    13,    14,    15,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      49,    50,    28,    29,    53,    -1,    -1,    33,    28,    29,
      -1,    -1,    -1,    33,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    49,
      50,    28,    29,    53,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    68,    69,    70,    74,    75,   111,   112,   113,
     120,    11,     0,    70,   112,    70,     9,    72,    73,    73,
     112,    31,   115,    35,     3,     4,     5,     6,     7,     8,
      10,    71,    11,    35,   116,    11,   121,   122,    11,    33,
      11,    12,    13,    14,    15,    16,    19,    20,    21,    22,
      25,    26,    27,    28,    29,    33,    49,    50,    53,    74,
      78,    79,    80,    81,    82,    83,    85,    86,    89,    90,
      91,    92,    95,    96,    98,    99,   100,   105,   106,   107,
     108,   109,   110,   120,   123,    66,    36,    40,    39,    66,
     114,   117,   118,   119,    33,    49,    50,    66,    33,    33,
      33,    35,    77,    33,    11,    80,   104,    39,    39,    80,
      11,    11,    11,    39,    51,    52,    54,    55,    56,    51,
      52,    60,    61,    62,    63,    64,    65,    84,    58,    59,
      44,    45,    87,    46,    47,    48,    88,    36,   110,    92,
      39,   122,    80,    34,    40,    71,    80,   124,   125,    11,
      80,    11,    78,    85,    78,    71,    97,   109,    32,    80,
      66,    39,    34,    82,    85,    85,    85,    85,    86,    89,
      89,    90,    91,    39,    71,   118,    11,    34,    40,    33,
      34,    34,    11,    79,    36,    33,    34,    39,   125,   124,
      35,    76,    77,    39,    78,    35,    34,   109,    18,    93,
      78,    34,    23,   101,   103,    39,    36,    33,    17,    18,
      94,    39,    39,    80,    24,    36,   102,   103,    78,    76,
      33,    80,    41,    41,    34,    78,    34,   109,   109,    76,
      34,    77,    26,    76,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    73,
      73,    75,    74,    74,    76,    77,    78,    78,    78,    79,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    95,    96,    97,    97,    98,    99,   100,   101,   101,
     101,   102,   103,   104,   104,   105,   106,   107,   108,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   113,   112,   114,   114,
     115,   116,   117,   117,   117,   119,   118,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       6,     0,     2,     2,     3,     3,     1,     1,     1,     3,
       1,     2,     2,     1,     1,     1,     3,     1,     2,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     2,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     5,     6,     0,     2,
       0,     7,     5,     0,     1,    10,     7,     7,     1,     2,
       2,     3,     6,     1,     0,     3,     2,     2,     2,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     3,     1,     0,
       6,     3,     1,     3,     0,     0,     3,     6,     1,     3,
       1,     3,     5,     7,     1,     3,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 21:
#line 63 "parser.y" /* yacc.c:1646  */
    { declare = 1; }
#line 1531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 63 "parser.y" /* yacc.c:1646  */
    { declare = 0; }
#line 1537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%d\n", yylval.int_val);}
#line 1543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%lf\n", yylval.double_val);}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 155 "parser.y" /* yacc.c:1646  */
    { incr_scope(); }
#line 1555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 155 "parser.y" /* yacc.c:1646  */
    { hide_scope(); }
#line 1561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 166 "parser.y" /* yacc.c:1646  */
    { declare = 1; }
#line 1567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 166 "parser.y" /* yacc.c:1646  */
    { declare = 0; }
#line 1573 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1577 "parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 179 "parser.y" /* yacc.c:1906  */


void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
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

    Value val1, val2;
    val1.ival = 0;
    val2.ival = 1;
    AST_Node *const_node1 = new_ast_const_node(INT_TYPE, val1);
    AST_Node *const_node2 = new_ast_const_node(INT_TYPE, val2);
    AST_Node *bool_node = new_ast_bool_node(OP_OR, const_node1, const_node2);
    AST_Node *simple_node = new_ast_simple_node(0);
    AST_Node *if_node = new_ast_if_node(bool_node, simple_node, NULL, 0, NULL);
    ast_traversal(if_node);
	
	return flag;
}
