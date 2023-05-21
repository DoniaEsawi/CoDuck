%{

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
%}


%union{
  Value val;
  AST_Node* node;
  ListNode* symbol_table_item;  

  // for declaration
  int data_type;
  int const_type;

  // for arrays
  int array_size;

}

%token<val> INTEGER FLOAT DOUBLE VOID BOOLEAN CHAR CONST STR
%token<symbol_table_item> IDENT
%token<val> CONST_INT
%token<val> CONST_FLOAT
%token<val> CONST_CHAR
%token<val> STRING_LITERAL
%token<val> IF ELSE ELIF WHILE FOR DO SWITCH CASE DEFAULT RETURN BREAK CONTINUE
%token<val> TRUE_TOKEN FALSE_TOKEN
%token<val> ENUM FUNC UNTIL
%token<val> LEFT_PAREN RIGHT_PAREN LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET LEFT_SQ_BRACKET RIGHT_SQ_BRACKET
%token<val> SEMICOLON COMMA COLON QUESTION_MARK DOT
%token<val> ADD_OP SUB_OP MUL_OP DIV_OP MOD_OP INC_OP DEC_OP
%token<val> OR_OP AND_OP NOT_OP BIT_LOGIC_OP
%token<val> EQ_OP REL_OP ASSIGN_OP


/* precedencies and associativities */
%left COMMA
%right ASSIGN_OP
%left OR_OP
%left AND_OP
%left EQ_OP
%left REL_OP
%left ADD_OP SUB_OP
%left MUL_OP DIV_OP MOD_OP
%right NOT_OP INC_OP DEC_OP 
%left BIT_LOGIC_OP
%left LEFT_PAREN RIGHT_PAREN LEFT_SQ_BRACKET RIGHT_SQ_BRACKET
// (non-terminal) definitions
%type <node> value
%type <symbol_table_item> init var_init
%type <node> program
%type <node> declarations declaration
%type <data_type> type
%type <symbol_table_item> variable
// %type <val> sign

%start program

/* expression priorities and rules */
%%

program: declarations statements RETURN SEMICOLON functions_optional; //TODO: SOLVE THE WARNING "type clash on default action: <node> != <> [-Wother]"

functions_optional: functions | /* empty */;
type: INTEGER  { $$ = INT_TYPE;   }
      | FLOAT  { $$ = REAL_TYPE;   }
      | DOUBLE { $$ = REAL_TYPE;   }
      | VOID   { $$ = VOID_TYPE;   } 
      | BOOLEAN{ $$ = BOOL_TYPE;   }  
      | CHAR   { $$ = CHAR_TYPE;   }
      | STR    { $$ = STR_TYPE;   } ;


declaration: type {declare = 1; } names {declare = 0; } SEMICOLON
    {
        int i;
        $$ = new_ast_decl_node($1, names, nc, 0);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) $$;

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
        ast_traversal($$); /* just for testing */
    }
  |
  CONST type { declare = 1; } names { declare = 0; } SEMICOLON
    {
        int i;
        $$ = new_ast_decl_node($2, names, nc, 1);
        nc = 0;

        AST_Node_Decl *temp = (AST_Node_Decl*) $$;

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
        ast_traversal($$); /* just for testing */
    }
;

names: names COMMA variable
	{
		add_to_names($3);
	}
	| names COMMA init
	{
		add_to_names($3);
	}
	| variable
	{
		add_to_names($1);
	}
	| init
	{ 
		add_to_names($1);
	}
;

init: var_init { $$ = $1; };

var_init:  IDENT ASSIGN_OP value
{ 
	AST_Node_Const *temp = (AST_Node_Const*) $$;
	$1->val = temp->val;
	$1->stype = temp->const_type;
	$$ = $1;
}
;

variable: IDENT { $$ = $1; };

/* bool x; const double x; const integer x = 5; */
declarations:  declarations declaration | declaration ;
/*----------------------------------------------------------------------------*/



expression: expression ADD_OP expression 
| expression SUB_OP expression
| expression MUL_OP expression
| expression DIV_OP expression
| expression MOD_OP expression
| expression BIT_LOGIC_OP expression
| expression AND_OP expression
| expression OR_OP expression
| expression EQ_OP expression
| expression REL_OP expression
| LEFT_PAREN expression RIGHT_PAREN
| unary_expression
| func_call
| variable
| sign value;
sign : SUB_OP | /* empty */;
unary_expression: INC_OP IDENT | DEC_OP IDENT | NOT_OP IDENT| IDENT INC_OP | IDENT DEC_OP;


value: CONST_INT  { $$ = new_ast_const_node(INT_TYPE, $1);  }
| CONST_FLOAT { $$ = new_ast_const_node(REAL_TYPE, $1); }
| CONST_CHAR { $$ = new_ast_const_node(CHAR_TYPE, $1); }
| STRING_LITERAL { $$ = new_ast_const_node(STR_TYPE, $1); }
| TRUE_TOKEN { $$ = new_ast_const_node(BOOL_TYPE, $1); }
| FALSE_TOKEN { $$ = new_ast_const_node(BOOL_TYPE, $1); }
;

tail: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET ;

else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail
        | else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail;

else_part: ELSE tail | /*empty*/ ;        

if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_if else_part |
              IF LEFT_PAREN expression RIGHT_PAREN tail else_part;

while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail ;

optional_type: /* empty */ | type;


assignment: variable ASSIGN_OP expression ;
for_statement: FOR LEFT_PAREN optional_type assignment SEMICOLON expression SEMICOLON expression RIGHT_PAREN tail ;

do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON ;

switch_statement: SWITCH LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACKET cases RIGHT_CURLY_BRACKET ;

cases: cases case | case |  cases default ;

default: DEFAULT COLON statements;

case: CASE expression COLON statements ;
break_statement: BREAK SEMICOLON ;

continue_statement: CONTINUE SEMICOLON ;


statements: statements statement
          | statement
          ;

statement: if_statement 
          | while_statement 
          | for_statement 
          | do_statement 
          | switch_statement 
          | enum_statement
          | func_call SEMICOLON
          | break_statement
          | continue_statement
          | assignment SEMICOLON
          | IDENT INC_OP SEMICOLON
          | IDENT DEC_OP SEMICOLON
          | INC_OP IDENT SEMICOLON
          | DEC_OP IDENT SEMICOLON
          ;

/* Function */

functions: functions function | function;

function: { incr_scope(); } function_head function_tail { hide_scope(); };

param_empty: parameters | /* empty */;

function_head: FUNC { declare = 1; } IDENT LEFT_PAREN param_empty RIGHT_PAREN type { declare = 0; };

function_tail: LEFT_CURLY_BRACKET declarations_statements_optional return_optional RIGHT_CURLY_BRACKET ; 
declarations_statements:declarations_statements statement|declarations_statements declaration| statement | declaration;
declarations_statements_optional: declarations_statements | /* empty */;

return_optional: RETURN return_val SEMICOLON | /* empty */;

return_val: expression | /*empty*/ ;

parameters:  parameters COMMA parameter | parameter ;

parameter: { declare = 1; } type variable { declare = 0; } ;


enum_statement : ENUM IDENT LEFT_CURLY_BRACKET enum_list RIGHT_CURLY_BRACKET SEMICOLON;

enum_list: one_val | enum_list COMMA one_val ;

one_val: IDENT | var_init ;

func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN;
arguments: argument | /*empty*/;
argument: argument COMMA expression | expression;

%%

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