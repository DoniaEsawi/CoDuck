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
    INTEGER = 258,                 /* INTEGER  */
    FLOAT = 259,                   /* FLOAT  */
    DOUBLE = 260,                  /* DOUBLE  */
    VOID = 261,                    /* VOID  */
    BOOLEAN = 262,                 /* BOOLEAN  */
    CHAR = 263,                    /* CHAR  */
    CONST = 264,                   /* CONST  */
    STR = 265,                     /* STR  */
    IDENT = 266,                   /* IDENT  */
    CONST_INT = 267,               /* CONST_INT  */
    CONST_FLOAT = 268,             /* CONST_FLOAT  */
    CONST_CHAR = 269,              /* CONST_CHAR  */
    STRING_LITERAL = 270,          /* STRING_LITERAL  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    ELIF = 273,                    /* ELIF  */
    WHILE = 274,                   /* WHILE  */
    FOR = 275,                     /* FOR  */
    DO = 276,                      /* DO  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    DEFAULT = 279,                 /* DEFAULT  */
    RETURN = 280,                  /* RETURN  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    TRUE_TOKEN = 283,              /* TRUE_TOKEN  */
    FALSE_TOKEN = 284,             /* FALSE_TOKEN  */
    ENUM = 285,                    /* ENUM  */
    FUNC = 286,                    /* FUNC  */
    UNTIL = 287,                   /* UNTIL  */
    LEFT_PAREN = 288,              /* LEFT_PAREN  */
    RIGHT_PAREN = 289,             /* RIGHT_PAREN  */
    LEFT_CURLY_BRACKET = 290,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 291,     /* RIGHT_CURLY_BRACKET  */
    LEFT_SQ_BRACKET = 292,         /* LEFT_SQ_BRACKET  */
    RIGHT_SQ_BRACKET = 293,        /* RIGHT_SQ_BRACKET  */
    SEMICOLON = 294,               /* SEMICOLON  */
    COMMA = 295,                   /* COMMA  */
    COLON = 296,                   /* COLON  */
    QUESTION_MARK = 297,           /* QUESTION_MARK  */
    DOT = 298,                     /* DOT  */
    ADD_OP = 299,                  /* ADD_OP  */
    SUB_OP = 300,                  /* SUB_OP  */
    MUL_OP = 301,                  /* MUL_OP  */
    DIV_OP = 302,                  /* DIV_OP  */
    MOD_OP = 303,                  /* MOD_OP  */
    INC_OP = 304,                  /* INC_OP  */
    DEC_OP = 305,                  /* DEC_OP  */
    OR_OP = 306,                   /* OR_OP  */
    AND_OP = 307,                  /* AND_OP  */
    NOT_OP = 308,                  /* NOT_OP  */
    BIT_LOGIC_OP = 309,            /* BIT_LOGIC_OP  */
    EQ_OP = 310,                   /* EQ_OP  */
    REL_OP = 311,                  /* REL_OP  */
    ASSIGN_OP = 312,               /* ASSIGN_OP  */
    END = 313,                     /* END  */
    MINUS = 314                    /* MINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "parser.y"

  Value val;
  AST_Node* node;
  ListNode* symbol_table_item;  

  // for declaration
  int data_type;
  int const_type;

  // for arrays
  int array_size;

  // for paramaters
  Prameter par;


#line 140 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
