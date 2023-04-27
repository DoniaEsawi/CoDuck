/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    INTEGER = 259,                 /* INTEGER  */
    FLOAT = 260,                   /* FLOAT  */
    DOUBLE = 261,                  /* DOUBLE  */
    VOID = 262,                    /* VOID  */
    BOOLEAN = 263,                 /* BOOLEAN  */
    CHAR = 264,                    /* CHAR  */
    CONST = 265,                   /* CONST  */
    CONST_INT = 266,               /* CONST_INT  */
    CONST_FLOAT = 267,             /* CONST_FLOAT  */
    CONST_CHAR = 268,              /* CONST_CHAR  */
    STRING_LITERAL = 269,          /* STRING_LITERAL  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    ELIF = 272,                    /* ELIF  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    SWITCH = 276,                  /* SWITCH  */
    CASE = 277,                    /* CASE  */
    DEFAULT = 278,                 /* DEFAULT  */
    RETURN = 279,                  /* RETURN  */
    BREAK = 280,                   /* BREAK  */
    CONTINUE = 281,                /* CONTINUE  */
    TRUE = 282,                    /* TRUE  */
    FALSE = 283,                   /* FALSE  */
    ENUM = 284,                    /* ENUM  */
    FUNC = 285,                    /* FUNC  */
    UNTIL = 286,                   /* UNTIL  */
    LEFT_PAREN = 287,              /* LEFT_PAREN  */
    RIGHT_PAREN = 288,             /* RIGHT_PAREN  */
    LEFT_CURLY_BRACKET = 289,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 290,     /* RIGHT_CURLY_BRACKET  */
    LEFT_SQ_BRACKET = 291,         /* LEFT_SQ_BRACKET  */
    RIGHT_SQ_BRACKET = 292,        /* RIGHT_SQ_BRACKET  */
    SEMICOLON = 293,               /* SEMICOLON  */
    COMMA = 294,                   /* COMMA  */
    COLON = 295,                   /* COLON  */
    QUESTION_MARK = 296,           /* QUESTION_MARK  */
    DOT = 297,                     /* DOT  */
    ADD_OP = 298,                  /* ADD_OP  */
    SUB_OP = 299,                  /* SUB_OP  */
    MUL_OP = 300,                  /* MUL_OP  */
    DIV_OP = 301,                  /* DIV_OP  */
    MOD_OP = 302,                  /* MOD_OP  */
    INC_OP = 303,                  /* INC_OP  */
    DEC_OP = 304,                  /* DEC_OP  */
    OR_OP = 305,                   /* OR_OP  */
    AND_OP = 306,                  /* AND_OP  */
    NOT_OP = 307,                  /* NOT_OP  */
    BIT_OR_OP = 308,               /* BIT_OR_OP  */
    AND = 309,                     /* AND  */
    BIT_XOR_OP = 310,              /* BIT_XOR_OP  */
    BIT_NOT_OP = 311,              /* BIT_NOT_OP  */
    BIT_LSHIFT_OP = 312,           /* BIT_LSHIFT_OP  */
    BIT_RSHIFT_OP = 313,           /* BIT_RSHIFT_OP  */
    EQ_OP = 314,                   /* EQ_OP  */
    NE_OP = 315,                   /* NE_OP  */
    GT_OP = 316,                   /* GT_OP  */
    LT_OP = 317,                   /* LT_OP  */
    GE_OP = 318,                   /* GE_OP  */
    LE_OP = 319,                   /* LE_OP  */
    ASSIGN_OP = 320                /* ASSIGN_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
