%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include"../symbol_table/symbol_table.c"
    extern FILE *yyin;
    extern int lineno;
    extern int yylex();
    void yyerror();
%}


%union {
char char_val;
int int_val;
double double_val;
char* str_val;
ListNode* ident_val;
}

%token<int_val> INTEGER FLOAT DOUBLE VOID BOOLEAN CHAR CONST
%token<ident_val> IDENT
%token<int_val> CONST_INT
%token<double_val> CONST_FLOAT
%token<char_val> CONST_CHAR
%token<str_val> STRING_LITERAL
%token<int_val> IF ELSE ELIF WHILE FOR DO SWITCH CASE DEFAULT RETURN BREAK CONTINUE
%token<int_val> TRUE FALSE
%token<int_val> ENUM FUNC UNTIL
%token<int_val> LEFT_PAREN RIGHT_PAREN LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET LEFT_SQ_BRACKET RIGHT_SQ_BRACKET
%token<int_val> SEMICOLON COMMA COLON QUESTION_MARK DOT
%token<int_val> ADD_OP SUB_OP MUL_OP DIV_OP MOD_OP INC_OP DEC_OP
%token<int_val> OR_OP AND_OP NOT_OP BIT_OR_OP AND BIT_XOR_OP BIT_NOT_OP BIT_LSHIFT_OP BIT_RSHIFT_OP
%token<int_val> EQ_OP NE_OP GT_OP LT_OP GE_OP LE_OP ASSIGN_OP
%%

%start program;


/* expression priorities and rules */

program: program function | function | /*empty*/ ;

type: INTEGER |  FLOAT | DOUBLE | VOID | BOOLEAN  | CHAR ;

beforedecl: /*empty*/ | CONST ;

/* bool x; | const double x; | const integer x = 5; */
declaration: beforedecl type IDENT SEMICOLON | beforedecl type IDENT ASSIGN_OP expression SEMICOLON ;

/* bool x; const double x; const integer x = 5; */
declarations: declaration | declarations declaration ;

tail: statements | LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET ;

tail_inloop: statements_inloop | LEFT_CURLY_BRACKET statements_inloop RIGHT_CURLY_BRACKET ;

bool_expression: relExp
                | TRUE 
                | FALSE;


assign: IDENT ASSIGN_OP expression

expression: assign | IDENT INC_OP | IDENT DEC_OP | simpleExp ;
simpleExp: simpleExp OR_OP andExp | andExp ;
andExp: andExp AND_OP  | bitRelExp ;
bitRelExp: bitRelExp BIT_OR_OP relExp | bitRelExp AND relExp | bitRelExp BIT_XOR_OP relExp | relExp ;

op: EQ_OP | NE_OP | GT_OP | LT_OP | LE_OP | GE_OP | OR_OP | AND_OP;
relExp: relExp op bitshiftExp 
        | bitshiftExp ;

bitshiftExp: bitshiftExp BIT_LSHIFT_OP sumExp | bitshiftExp BIT_RSHIFT_OP sumExp | sumExp ;

pls_min: ADD_OP | SUB_OP;
mul_div: MUL_OP | DIV_OP | MOD_OP;
sumExp: sumExp pls_min mulExp | mulExp ;
mulExp: mulExp mul_div unaryExp | unaryExp ;

unaryExp: INC_OP IDENT | DEC_OP IDENT | NOT_OP IDENT |  IDENT | value | LEFT_PAREN expression RIGHT_PAREN ;


value: CONST_INT | CONST_FLOAT | CONST_CHAR | STRING_LITERAL ;


else_if: /*empty*/  
        | ELIF LEFT_PAREN bool_expression RIGHT_PAREN tail
        | else_if ELIF LEFT_PAREN bool_expression RIGHT_PAREN tail;

else: /*empty*/ | ELSE tail ;        

if_statement: IF LEFT_PAREN bool_expression RIGHT_PAREN tail else_if else;

while_statement: WHILE LEFT_PAREN bool_expression RIGHT_PAREN tail_inloop ;

for_statement: FOR LEFT_PAREN assign SEMICOLON bool_expression SEMICOLON expression RIGHT_PAREN tail_inloop ;

do_statement: DO tail_inloop WHILE LEFT_PAREN bool_expression RIGHT_PAREN SEMICOLON ;

switch_statement: SWITCH LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACKET cases RIGHT_CURLY_BRACKET ;

cases: case | cases case | cases default ;

default: DEFAULT COLON statements BREAK SEMICOLON ;

case: CASE expression COLON statements BREAK SEMICOLON ;

return_val: /*empty*/ | expression ;
return_statement: RETURN return_val SEMICOLON ;

break_statement: BREAK SEMICOLON ;

continue_statement: CONTINUE SEMICOLON ;

expression_statement: expression SEMICOLON ;

statements: statement | statements statement ;

statement: if_statement 
          | while_statement 
          | for_statement 
          | do_statement 
          | switch_statement 
          | return_statement 
          | expression_statement
          | declarations
          | enum 
          | func_call ;

statement_inloop: statement | break_statement | continue_statement ;   
statements_inloop: statement_inloop | statements_inloop statement_inloop ;       


function: FUNC IDENT LEFT_PAREN parameters RIGHT_PAREN type LEFT_CURLY_BRACKET tail return_statement RIGHT_CURLY_BRACKET;

parameters: /*empty*/ | parameter | parameters COMMA parameter ;
parameter: type IDENT ;

enum : ENUM IDENT LEFT_CURLY_BRACKET enum_list RIGHT_CURLY_BRACKET ;

enum_list: one_val | enum_list COMMA one_val ;

one_val: IDENT | IDENT ASSIGN_OP value ;

func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN | IDENT ASSIGN_OP IDENT LEFT_PAREN arguments RIGHT_PAREN ;
arguments: /*empty*/ | argument | arguments COMMA argument ;
argument: expression ;




%%

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