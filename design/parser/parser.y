%{
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
%token<val> OR_OP AND_OP NOT_OP BIT_OR_OP AND BIT_XOR_OP BIT_NOT_OP BIT_LSHIFT_OP BIT_RSHIFT_OP
%token<val> EQ_OP NE_OP GT_OP LT_OP GE_OP LE_OP ASSIGN_OP

%type <node> program
%type <node> declarations declaration
%type <data_type> type
%type <symbol_table_item> variable
%type <array_size> array

%start program

/* expression priorities and rules */
%%

program: program function | program global | functions | globals ;
// program: program function | functions | {printf("  %s\n", "ENTER declartions");} declarations | statements;
// program: declarations statements functions;

globals: globals global | global;
global: declarations | enum_statement;


type: INTEGER  { $$ = INT_TYPE;   }
      | FLOAT  { $$ = REAL_TYPE;   }
      | DOUBLE { $$ = REAL_TYPE;   }
      | VOID   { $$ = VOID_TYPE;   } 
      | BOOLEAN{ $$ = BOOL_TYPE;   }  
      | CHAR   { $$ = CHAR_TYPE;   }
      | STR    { $$ = STR_TYPE;   } ;

beforedecl: CONST | /*empty*/;
/*----------------------------------------------------------------------------*/
/* bool x; | const double x; | const integer x = 5; */
declaration: beforedecl type IDENT SEMICOLON 
	{
		int i;
		$$ = new_ast_decl_node($1, IDENT);
		nc = 0;
		
		AST_Node_Decl *temp = (AST_Node_Decl*) $$;
		
		// declare types of the names
		for(i=0; i < temp->names_count; i++){
			// variable
			if(temp->names[i]->stype == UNDEF){
				set_type(temp->names[i]->name, temp->data_type, UNDEF);
      }

      // array
			else if(temp->names[i]->stype == ARRAY_TYPE){
				set_type(temp->names[i]->name, ARRAY_TYPE, temp->data_type);
			}
    }
		ast_traversal($$); /* just for testing */
	}

  | beforedecl type IDENT ASSIGN_OP expression SEMICOLON
  	{
		int i;
		$$ = new_ast_decl_node($1, IDENT, nc);
		nc = 0;
		
		AST_Node_Decl *temp = (AST_Node_Decl*) $$;
		
		// declare types of the names
		for(i=0; i < temp->names_count; i++){
			// variable
			if(temp->names[i]->stype == UNDEF){
				set_type(temp->names[i]->name, temp->data_type, UNDEF);
      }

      // array
			else if(temp->names[i]->stype == ARRAY_TYPE){
				set_type(temp->names[i]->name, ARRAY_TYPE, temp->data_type);
			}
    }
		ast_traversal($$); /* just for testing */
	}
;

/* bool x; const double x; const integer x = 5; */
declarations:{ declare = 1; } declaration { declare = 0; }|  declarations declaration ;
/*----------------------------------------------------------------------------*/
tail: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET ;

tail_inloop: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET ;

bool_expression: relExp
                | TRUE_TOKEN 
                | FALSE_TOKEN;


assign: IDENT ASSIGN_OP expression;

expression: assign | IDENT INC_OP | IDENT DEC_OP | simpleExp | IDENT | bool_expression ;
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


value: CONST_INT {printf("%d\n", yylval.int_val);} | CONST_FLOAT {printf("%lf\n", yylval.double_val);} |
       CONST_CHAR | STRING_LITERAL;


else_if: ELIF LEFT_PAREN bool_expression RIGHT_PAREN tail
        | else_if ELIF LEFT_PAREN bool_expression RIGHT_PAREN tail | /*empty*/;

else_part: ELSE tail | /*empty*/ ;        

if_statement: IF LEFT_PAREN bool_expression RIGHT_PAREN tail else_if else_part;

while_statement: WHILE LEFT_PAREN bool_expression RIGHT_PAREN tail_inloop ;

optional_type: /* empty */ | type;

for_statement: FOR LEFT_PAREN optional_type assign SEMICOLON bool_expression SEMICOLON expression RIGHT_PAREN tail_inloop ;

do_statement: DO tail_inloop UNTIL LEFT_PAREN bool_expression RIGHT_PAREN SEMICOLON ;

switch_statement: SWITCH LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACKET cases RIGHT_CURLY_BRACKET ;

cases: case | cases case | cases default ;

default: DEFAULT COLON statements;

case: CASE expression COLON statements BREAK SEMICOLON ;

return_val: expression | /*empty*/ ;
return_statement: RETURN return_val SEMICOLON ;

break_statement: BREAK SEMICOLON ;

continue_statement: CONTINUE SEMICOLON ;

expression_statement: expression SEMICOLON ;

statements:  /*empty*/
          | statement
          | statements statement;

statement: if_statement 
          | while_statement 
          | for_statement 
          | do_statement 
          | switch_statement 
          | return_statement 
          | expression_statement
          | declarations
          | enum_statement
          | func_call
          | break_statement
          | continue_statement;

// statement_inloop: statement | /* empty */;   
// statements_inloop: statement_inloop | statements_inloop statement_inloop ;       

/* Function */

functions: functions function | function;

function: { incr_scope(); } function_head function_tail { hide_scope(); };

param_empty: parameters | /* empty */;

function_head: FUNC IDENT LEFT_PAREN param_empty RIGHT_PAREN type ;

function_tail: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET;

/* function: FUNC IDENT LEFT_PAREN parameters RIGHT_PAREN type LEFT_CURLY_BRACKET statements return_statement RIGHT_CURLY_BRACKET; */

parameters:  parameter | parameters COMMA parameter | /*empty*/ ;
parameter: { declare = 1; } type IDENT { declare = 0; } ;


enum_statement : ENUM IDENT LEFT_CURLY_BRACKET enum_list RIGHT_CURLY_BRACKET SEMICOLON;

enum_list: one_val | enum_list COMMA one_val ;

one_val: IDENT | IDENT ASSIGN_OP value ;

func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN  SEMICOLON| IDENT ASSIGN_OP IDENT LEFT_PAREN arguments RIGHT_PAREN SEMICOLON;
arguments: argument | arguments COMMA argument | /*empty*/;
argument: expression ;

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