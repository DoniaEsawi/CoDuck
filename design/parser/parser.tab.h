/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    BIT_LOGIC_OP = 309,
    EQ_OP = 310,
    REL_OP = 311,
    ASSIGN_OP = 312,
    MINUS = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "parser.y"

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


#line 133 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
