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
    // for else ifs
    void add_elseif(AST_Node *elsif);
    AST_Node **elsifs;
    int elseif_count = 0;
    // for functions
    AST_Node_Func_Decl *temp_function;
    void gencode(char* x);
    void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
    void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
    char * ICG[1000];
    int nextinstr = 0;
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

  // for paramaters
  Prameter par;

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
%token<val> END
// %type <val> sign


/* precedencies and associativities */
%left COMMA
%right ASSIGN_OP
%left OR_OP
%left AND_OP
%left EQ_OP
%left REL_OP
%left ADD_OP SUB_OP
%left MUL_OP DIV_OP MOD_OP
%right NOT_OP INC_OP DEC_OP MINUS
%left BIT_LOGIC_OP
%left LEFT_PAREN RIGHT_PAREN LEFT_SQ_BRACKET RIGHT_SQ_BRACKET
// (non-terminal) definitions
%type <node> value
%type <symbol_table_item> init var_init
%type <node> program
%type <node> declarations declaration
%type <data_type> type
%type <symbol_table_item> variable
%type <node> expression var_ref
%type <node> statement assignment
%type <node> statements tail
%type <node> if_statement else_if else_part
%type <node> for_statement while_statement do_statement
%type <node> functions_optional functions function
%type <node> param_empty parameters
%type <par>  parameter
%type <node> return_type
%type <node> func_call arguments argument
%type <node> return_statement
%start program

/* expression priorities and rules */
%%

program: declarations { ast_traversal($1); } 
statements { ast_traversal($3); }
END SEMICOLON
functions_optional { ast_traversal($7); }; 

functions_optional:
functions
  {
    $$ = $1;
  }
| /* empty */
  {
    $$ = NULL;
  }
;

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
                //  generate a string of "push" then the name
                char* push = "push ";
                char* temp_name = temp->names[i]->name;
                char* temp_str = (char*) malloc(strlen(push) + strlen(temp_name) + 1);
                strcpy(temp_str, push);
                strcat(temp_str, temp_name);
                gencode(temp_str);
            }
            
        }
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
var_ref: variable
	{
		$$ = new_ast_var_node($1); /* no reference */
	}
/* bool x; const double x; const integer x = 5; */
declarations:  declarations declaration   
  {
    AST_Node_Declarations *temp = (AST_Node_Declarations*) $1;
    $$ = new_declarations_node(temp->declarations, temp->declaration_count, $2);
  }
  | declaration
  {
    $$ = new_declarations_node(NULL, 0, $1);
  }
  ;
/*----------------------------------------------------------------------------*/



expression: expression ADD_OP expression 
{ 
	    $$ = new_ast_arithm_node(ADD, $1, $3);
}
| expression SUB_OP expression
{ 
	    $$ = new_ast_arithm_node(SUB, $1, $3);
}
| expression MUL_OP expression
{ 
	    $$ = new_ast_arithm_node(MUL, $1, $3);
}
| expression DIV_OP expression
{ 
	    $$ = new_ast_arithm_node(DIV, $1, $3);
}
| expression MOD_OP expression
{ 
	    $$ = new_ast_arithm_node(MOD, $1, $3);
}
/* | expression BIT_LOGIC_OP expression */
| expression AND_OP expression
{
    $$ = new_ast_bool_node(OP_AND, $1, $3);
} 
| expression OR_OP expression
{
    $$ = new_ast_bool_node(OP_OR, $1, $3);
}   
| NOT_OP expression
{
    $$ = new_ast_bool_node(OP_NOT, $2, NULL);
}
| expression EQ_OP expression
{
	$$ = new_ast_equ_node($2.ival, $1, $3);
}
| expression REL_OP expression
{
	$$ = new_ast_rel_node($2.ival, $1, $3);
}
| LEFT_PAREN expression RIGHT_PAREN
{
	$$ = $2; /* just pass information */
}
| INC_OP IDENT 
{
    {
			$$ = new_ast_incr_node($2, 0, 1);
    }
}
| DEC_OP IDENT 
{
    {
            $$ = new_ast_incr_node($2, 1, 1);
    }

}
| IDENT INC_OP
{
    {
            $$ = new_ast_incr_node($1, 0, 0);
    }
}
| IDENT DEC_OP
{
    {
            $$ = new_ast_incr_node($1, 1, 0);
    }
}
| func_call
{
		        $$ = $1; /* just pass information */

	    }
| var_ref 
{ 
    $$ = $1; /* just pass information */
}
  | value
  {
    $$ = $1; /* no sign */
  }
  | SUB_OP value %prec MINUS
  {
    
      AST_Node_Const *temp = (AST_Node_Const*) $2;

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

      $$ = (AST_Node*) temp;
    
  }

;




value: CONST_INT  { $$ = new_ast_const_node(INT_TYPE, $1);  }
| CONST_FLOAT { $$ = new_ast_const_node(REAL_TYPE, $1); }
| CONST_CHAR { $$ = new_ast_const_node(CHAR_TYPE, $1); }
| STRING_LITERAL { $$ = new_ast_const_node(STR_TYPE, $1); }
| TRUE_TOKEN { $$ = new_ast_const_node(BOOL_TYPE, $1); }
| FALSE_TOKEN { $$ = new_ast_const_node(BOOL_TYPE, $1); }
;

tail: LEFT_CURLY_BRACKET statements RIGHT_CURLY_BRACKET 
{ 
    $$ = $2; /* just pass information */
}
;

else_if: ELIF LEFT_PAREN expression RIGHT_PAREN tail
{
    AST_Node *temp = new_ast_elsif_node($3, $5);
    add_elseif(temp);
    int is_false=is_always_false($3);
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", lineno);
    }
}
        | else_if ELIF LEFT_PAREN expression RIGHT_PAREN tail
{
    AST_Node *temp = new_ast_elsif_node($4, $6);
    add_elseif(temp);
    int is_false=is_always_false($4);
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", lineno);
    }
}
;

else_part: ELSE tail 
{
    /* else exists */
    $$ = $2;
}
| /*empty*/ 
{
    /* no else */
    $$ = NULL;
}
;        

if_statement: IF LEFT_PAREN expression RIGHT_PAREN tail else_if else_part 
  {
    $$ = new_ast_if_node($3, $5, elsifs, elseif_count, $7);
    elseif_count = 0;
    elsifs = NULL;
    printf("is false beforee \n");

    int is_false=is_always_false($3);
    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", lineno);
    }
    printf("is false %d\n", is_false);
  }
| IF LEFT_PAREN expression RIGHT_PAREN tail else_part
{
    $$ = new_ast_if_node($3, $5, NULL, 0, $6);
    printf("is false beforee \n");
    int is_false=is_always_false($3);
    printf("is false after \n");

    if(is_false==1){
      printf("Warning: if statement is always false at line %d\n", lineno);
    }
    printf("is false %d\n", is_false);

}
;

while_statement: WHILE LEFT_PAREN expression RIGHT_PAREN tail 
{
    $$ = new_ast_while_node($3, $5);
}
;

// optional_type: /* empty */ | type;


assignment: var_ref ASSIGN_OP expression 
{
	AST_Node_VAR *temp = (AST_Node_VAR*) $1;
	$$ = new_ast_assign_node(temp->entry, $3);
  /* find datatypes */
  int type1 = get_type(temp->entry->name);
	int type2 = expression_data_type($3);
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
    q->nodes[q->num_of_assigns] = (void*) $3;
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
;
// optional_declaration: declaration | assignment SEMICOLON| var_ref SEMICOLON;
for_statement: FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT INC_OP RIGHT_PAREN tail 
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node($7, 0, 0);
    

    $$ = new_ast_for_node($3, $5, incr_node, $10);
    set_loop_counter($$);
}
| FOR LEFT_PAREN assignment SEMICOLON expression SEMICOLON IDENT DEC_OP RIGHT_PAREN tail 
{	
    /* create increment node*/
    AST_Node *incr_node;
   
    incr_node = new_ast_incr_node($7, 1, 0);
    

    $$ = new_ast_for_node($3, $5, incr_node, $10);
    set_loop_counter($$);
}
;
do_statement: DO tail UNTIL LEFT_PAREN expression RIGHT_PAREN SEMICOLON 
{
    $$ = new_ast_do_node($5, $2);
}
;

switch_statement: SWITCH LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACKET cases RIGHT_CURLY_BRACKET ;

cases: cases case | case |  cases default ;

default: DEFAULT COLON statements;

case: CASE expression COLON statements ;
/* break_statement: BREAK SEMICOLON ;

continue_statement: CONTINUE SEMICOLON ;
 */

statements:   
statements statement
  {
    AST_Node_Statements *temp = (AST_Node_Statements*) $1;
    $$ = new_statements_node(temp->statements, temp->statement_count, $2);
  }
  | statement
  {
    $$ = new_statements_node(NULL, 0, $1);
  }
;

statement: if_statement 
{ 
		$$ = $1; /* just pass information */
	}
        | while_statement
        { 
        $$ = $1; /* just pass information */
        }
        | return_statement
        {
          $$ = $1; /* just pass information */
        }
        | for_statement 
        { 
        $$ = $1; /* just pass information */
        }

        | do_statement 
        { 
        $$ = $1; /* just pass information */
        }

        | switch_statement 
        {
		$$ = NULL; /* will do it later ! */
	    }

        | enum_statement
        {
		$$ = NULL; /* will do it later ! */
	    }
        | func_call SEMICOLON
        {
		        $$ = $1; /* just pass information */

	    }
        | CONTINUE SEMICOLON
        { 
                $$ = new_ast_simple_node(0);
        }
        | BREAK SEMICOLON
        { 
                $$ = new_ast_simple_node(1);
        }
        | assignment SEMICOLON
        {
		$$ = $1; /* just pass information */
	    }
        | INC_OP IDENT SEMICOLON
        {
            {
                    $$ = new_ast_incr_node($2, 0, 1);
            }

        }
        | DEC_OP IDENT SEMICOLON
        {
            {
                    $$ = new_ast_incr_node($2, 1, 1);
            }

        }
        | IDENT INC_OP SEMICOLON
        {
            {
                    $$ = new_ast_incr_node($1, 0, 0);
            }

        }
        | IDENT DEC_OP SEMICOLON
        {
            {
                    $$ = new_ast_incr_node($1, 1, 0);
            }

        }
          ;

/* Function */

functions:
  functions function
  {
    AST_Node_Func_Declarations *temp = (AST_Node_Func_Declarations*) $1;
    $$ = new_func_declarations_node(temp->func_declarations, temp->func_declaration_count, $2);
  }
  | function
  {
    $$ = new_func_declarations_node(NULL, 0, $1);
  }
;

function: { incr_scope(); } function_head function_tail 
{ 
    /* perform revisit */
	  revisit(temp_function->entry->name);
    // hide_scope();
    $$ = (AST_Node *) temp_function;
    
} 
;



function_head: FUNC { function_decl = 1; } IDENT LEFT_PAREN param_empty RIGHT_PAREN return_type
  { 
    function_decl = 0;

    AST_Node_Ret_Type *temp = (AST_Node_Ret_Type *) $7;
    temp_function = (AST_Node_Func_Decl *)
    new_ast_func_decl_node(temp->ret_type, $3);

    temp_function->entry->stype = FUNCTION_TYPE;
    temp_function->entry->inf_type = temp->ret_type;
    /////////////////////////
    if($5 != NULL){
      AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) $5;

      temp_function->entry->params = temp->parameters;
      temp_function->entry->num_of_params = temp->num_of_pars;
    }
    else{
      temp_function->entry->params = NULL;
      temp_function->entry->num_of_params = 0;
    }	
  }
;

return_type: type 

	{
		$$ = new_ast_ret_type_node($1);
	}
;
function_tail: LEFT_CURLY_BRACKET declarations_optional statements_optional  RIGHT_CURLY_BRACKET ; 
/* general_statement: statement{
    // set the function statements to the statement if it is not set yet
    if(temp_function->statements == NULL){
        temp_function->statements = $1;
    }
    // if it is set, add the statement to the end of the statements
    else{
        AST_Node_Statements *temp = (AST_Node_Statements*) temp_function->statements;
        temp_function->statements = new_statements_node(temp->statements, temp->statement_count, $1);
    }
    
} | declaration
    {
        // set the function declarations to the declaration if it is not set yet
        if(temp_function->declarations == NULL){
            temp_function->declarations = $1;
        }
        // if it is set, add the declaration to the end of the declarations
        else{
            AST_Node_Declarations *temp = (AST_Node_Declarations*) temp_function->declarations;
            temp_function->declarations = new_declarations_node(temp->declarations, temp->declaration_count, $1);
        }
    }
;
general_statements_optional: general_statements_optional general_statement
{
    // just pass information
    $$ = $1;
}
 | 
 {
    $$ = NULL;
 }
 ;
 */

statements_optional: 
  statements
  {
    temp_function->statements = $1;
  } 
  | /* empty */
  {
    temp_function->statements = NULL;
  }

declarations_optional: 
  declarations 
  {
    temp_function->declarations = $1;
  }
  | /* empty */
  {
    temp_function->declarations = NULL;
  }
;
return_statement:
RETURN expression SEMICOLON
  {
    temp_function->return_node = new_ast_return_node(temp_function->ret_type, $2);
  }
/* return_optional: 
  return_statement
  | 
  {
    temp_function->return_node = NULL;
  }
  ; */

// return_val: expression | /*empty*/ ;
param_empty: 
 parameters
  {
    $$ = $1;
  }
  | /* empty */
  {
    $$ = NULL;
  }
;
parameters: 
  parameters COMMA parameter
  {
    AST_Node_Decl_Params *temp = (AST_Node_Decl_Params *) $1;
    $$ = new_ast_decl_params_node(temp->parameters, temp->num_of_pars, $3);
  }
  | parameter
  {
    $$ = new_ast_decl_params_node(NULL, 0, $1);
  }
;

parameter: { declare = 1; } type variable
{ 
    declare = 0;
    // set type of symbol table entry	
    if($3->stype == UNDEF){ /* "simple" type */
        set_type($3->name, $2, UNDEF); 
    }
    $$ = def_param($2, $3->name, 0); //always pass by value
}
;


enum_statement : ENUM IDENT LEFT_CURLY_BRACKET enum_list RIGHT_CURLY_BRACKET SEMICOLON;

enum_list: one_val | enum_list COMMA one_val ;

one_val: IDENT | var_init ;

func_call: IDENT LEFT_PAREN arguments RIGHT_PAREN
{	
    AST_Node_Call_Params *temp = (AST_Node_Call_Params*) $3;
    $$ = new_ast_func_call_node($1, temp->params, temp->num_of_pars);
    /* add information to revisit queue entry (if one exists) */
    revisit_queue *q = search_queue($1->name);
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
		if($1->stype == FUNCTION_TYPE){
			/* check number of parameters */
			if($1->num_of_params != temp->num_of_pars){
				fprintf(stderr,
				"Function call of %s has wrong num of parameters!\n",
				$1->name);
				exit(1);
			}
			/* check if parameters are compatible */
			int i;
			for(i = 0; i < temp->num_of_pars; i++){
				/* type of parameter in function declaration */
				int type_1 = expression_data_type(temp->params[i]);

				/* type of parameter in function call*/
				int type_2 = $1->params[i].type;

				/* check compatibility for function call */
				get_result_type(type_1, type_2, NONE,
			lineno);
				/* error occurs automatically in the function */
			}
		}
	}
}
;
;
arguments: argument 
{
  $$ = $1;
}
| /*empty*/
{
        AST_Node_Call_Params *temp = malloc (sizeof (AST_Node_Call_Params));
        temp->type = CALL_PARAMS;
        temp->params = NULL;
        temp->num_of_pars = 0;
        $$ = (AST_Node*)temp;
  }
;
argument: argument COMMA expression 
{
  AST_Node_Call_Params *temp = (AST_Node_Call_Params*) $1;
  $$ = new_ast_call_params_node(temp->params, temp->num_of_pars, $3);
}
| expression
{
  $$ = new_ast_call_params_node(NULL, 0, $1);
}	
;

%%


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

// void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
// {
// 	lhs->addr = "t" + to_string(temp_var_number);
// 	std::string expr = lhs->addr + string(" = ") + arg1->addr + op + arg2->addr;
// 	lhs->code = arg1->code + arg2->code + expr;

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
  exit(1);
}

void add_to_names(ListNode *entry)
{
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

void add_elseif(AST_Node *elsif)
{
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

    displayICG();

    // revisit queue dump
    yyout = fopen(argv[3], "w");
    revisit_dump(yyout);
    fclose(yyout);
	
	return flag;
}