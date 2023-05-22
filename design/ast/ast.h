
/* ---------------------NODE TYPES-------------------------- */
typedef enum Node_Type
{
	BASIC_NODE, // no special usage (for roots only)
	// declarations
	DECLARATIONS, // declarations
	DECL_NODE,	// declaration
	CONST_NODE, // constant
	// statements
	IF_NODE,			 // if statement
	ELSIF_NODE,		 // else if branch  why there is no ELSE_NODE????????
	FOR_NODE,			 // for statement
	WHILE_NODE,		 // while statement
	DO_UNTIL_NODE, // do while statement
	ASSIGN_NODE,	 // assigment
	SIMPLE_NODE,	 // continue, break and "main" return statements
	INCR_NODE,		 // increment statement (non-expression one)
	// expressions
	ARITHM_NODE, // arithmetic expression
	BOOL_NODE,	 // boolean expression
	REL_NODE,		 // relational expression
	EQU_NODE,		 // equality expression
	VAR_NODE,		 // identifier in expression
	// functions
	FUNC_DECLS,   // function declarations
	FUNC_DECL,	 // function declaration
	RET_TYPE,     // function return type
  DECL_PARAMS,  // function parameters
	RETURN_NODE, // return statement of functions
	FUNC_CALL,		 // function call
  CALL_PARAMS,  // function call parameters

	// statements
	STATEMENTS, // statements
} Node_Type;

/* --------------------Node TYPES----------------------- */

typedef struct AST_Node_Statements
{
	enum Node_Type type; // node type

	// statements
	struct AST_Node **statements;
	int statement_count;

} AST_Node_Statements;
typedef struct AST_Node_VAR
{
	enum Node_Type type; // node type

	// symbol table entry
	ListNode *entry;

} AST_Node_VAR;

typedef enum Arithm_op
{
	ADD, // + operator
	SUB, // - operator
	MUL, // * operator
	DIV, // / operator
	MOD, // / operator
	INC, // ++ operator
	DEC, // -- operator
} Arithm_op;

typedef enum Bool_op
{
	OP_OR,	// || operator
	OP_AND, // && operator
	OP_NOT	// ! operator
} Bool_op;

typedef enum Rel_op
{
	GREATER,			 // > operator
	LESS,					 // < operator
	GREATER_EQUAL, // >= operator
	LESS_EQUAL		 // <= operator
} Rel_op;

typedef enum Equ_op
{
	EQUAL,		// == operator
	NOT_EQUAL // != operator
} Equ_op;

/* -------------------HELP STRUCTURES----------------------- */

/* -----------------------AST NODES------------------------- */

/* The basic node */
typedef struct AST_Node
{
	enum Node_Type type;		// node type
	struct AST_Node *left;	// left child
	struct AST_Node *right; // right child
} AST_Node;
typedef struct AST_Node_Decl_Params{
	enum Node_Type type; // node type

	// parameters
	Prameter *parameters;
	int num_of_pars;
}AST_Node_Decl_Params;
typedef struct AST_Node_Declarations{
    enum Node_Type type; // node type

    // declarations
    struct AST_Node **declarations;
    int declaration_count;
}AST_Node_Declarations;

typedef struct AST_Node_Func_Decl{
	enum Node_Type type; // node type

	// return type
	int ret_type;

	// symbol table entry
	ListNode *entry;

	// declarations, statements and return
	struct AST_Node *declarations;
	struct AST_Node *statements;
	struct AST_Node *return_node;
}AST_Node_Func_Decl;
typedef struct AST_Node_Func_Declarations{
    enum Node_Type type; // node type

    // declarations
    struct AST_Node **func_declarations;
    int func_declaration_count;
}AST_Node_Func_Declarations;
typedef struct AST_Node_Ret_Type{
	enum Node_Type type; // node type

	// return type
	int ret_type;

}AST_Node_Ret_Type;

/* Declarations */
typedef struct AST_Node_Decl
{
	enum Node_Type type; // node type

	// data type
	int data_type;

	// symbol table entries of the variables
	ListNode **names;

	// bool to indicate if this variable is constant
	int is_const;
	int names_count;
	// int names_count; use incase of array
} AST_Node_Decl;

typedef struct AST_Node_Const
{
	enum Node_Type type; // node type

	// data type
	int const_type;

	// constant value
	Value val;
} AST_Node_Const;

/* Statements */
typedef struct AST_Node_If
{
	enum Node_Type type; // node type

	// condition
	struct AST_Node *condition;

	// if branch
	struct AST_Node *if_branch;

	// else if branches
	struct AST_Node **elsif_branches;
	int elseif_count;

	// else branch
	struct AST_Node *else_branch;
} AST_Node_If;

typedef struct AST_Node_Elsif
{
	enum Node_Type type; // node type

	// condition
	struct AST_Node *condition;

	// branch
	struct AST_Node *elsif_branch;
} AST_Node_Elsif;

typedef struct AST_Node_For
{

	enum Node_Type type; // node type

	// initialization
	struct AST_Node *initialize;

	// condition
	struct AST_Node *condition;

	// incrementation
	struct AST_Node *increment;

	// branch
	struct AST_Node *for_branch;

	// loop counter
	ListNode *counter;
} AST_Node_For;

typedef struct AST_Node_While
{
	enum Node_Type type; // node type

	// condition
	struct AST_Node *condition;

	// branch
	struct AST_Node *while_branch;
} AST_Node_While;

typedef struct AST_Node_DO
{
	enum Node_Type type; // node type

	// condition
	struct AST_Node *condition;

	// branch
	struct AST_Node *do_branch;
} AST_Node_DO;

typedef struct AST_Node_Assign
{
	enum Node_Type type; // node type

	// symbol table entry
	ListNode *entry;

	// assignment value
	struct AST_Node *assign_val;
} AST_Node_Assign;

typedef struct AST_Node_Simple
{
	enum Node_Type type; // node type

	// continue, break or "main" return
	int statement_type;
} AST_Node_Simple;

typedef struct AST_Node_Incr
{
	enum Node_Type type; // node type

	// identifier
	ListNode *entry;

	// increment or decrement
	int incr_type; // 0: increment, 1: decrement

	// post- or prefix we have postfix only
	int pf_type; // 0: postfix, 1: prefix
} AST_Node_Incr;

typedef struct AST_Node_Func_Call
{
	enum Node_Type type; // node type

	// function identifier
	ListNode *entry;

	// call parameters
	AST_Node **params;
	int num_of_pars;

} AST_Node_Func_Call;

typedef struct AST_Node_Call_Params{
	enum Node_Type type; // node type

	// call parameters
	AST_Node **params;
	int num_of_pars;
}AST_Node_Call_Params;

/* Expressions */
typedef struct AST_Node_Arithm
{
	enum Node_Type type; // node type

	// operator
	enum Arithm_op op;
	// data type of result
	int data_type;
	
	struct AST_Node *left;	// left child
	struct AST_Node *right; // right child
} AST_Node_Arithm;

typedef struct AST_Node_Bool
{
	enum Node_Type type; // node type

	// operator
	enum Bool_op op;
	// data type of result
	int data_type;
	
	struct AST_Node *left;	// left child
	struct AST_Node *right; // right child
} AST_Node_Bool;

typedef struct AST_Node_Rel
{
	enum Node_Type type; // node type

	// operator
	enum Rel_op op;
  // data type of result
	int data_type;
	
	struct AST_Node *left;	// left child
	struct AST_Node *right; // right child
} AST_Node_Rel;

typedef struct AST_Node_Equ
{
	enum Node_Type type; // node type

	// operator
	enum Equ_op op;
	// data type of result
	int data_type;
	
	struct AST_Node *left;	// left child
	struct AST_Node *right; // right child
} AST_Node_Equ;

/* Functions */
// typedef struct AST_Node_Func_Decl
// {
// 	enum Node_Type type; // node type

// 	// return type
// 	int ret_type;

// 	// symbol table entry
// 	ListNode *entry;
// } AST_Node_Func_Decl;

typedef struct AST_Node_Return
{
	enum Node_Type type; // node type

	// return type
	int ret_type;

	// return value
	struct AST_Node *ret_val;
} AST_Node_Return;

/* ------------------AST NODE MANAGEMENT-------------------- */
/* The basic node */
AST_Node *new_ast_node(Node_Type type, AST_Node *left, AST_Node *right); // simple nodes
/* Declarations */
AST_Node *new_ast_decl_node(int data_type, ListNode **names, int names_count, int is_constant); // declaration
AST_Node *new_ast_const_node(int const_type, Value val);																				// constant
AST_Node *new_declarations_node(AST_Node **declarations, int declaration_count, AST_Node *declaration);
AST_Node *new_func_declarations_node(AST_Node **func_declarations, int func_declaration_count, AST_Node *func_declaration);

/* ... */
int expression_data_type(AST_Node *node);

/* Statements */
AST_Node *new_ast_if_node(AST_Node *condition, AST_Node *if_branch, AST_Node **elsif_branches,
													int elseif_count, AST_Node *else_branch);
													
AST_Node *new_ast_elsif_node(AST_Node *condition, AST_Node *elsif_branch);
AST_Node *new_ast_for_node(AST_Node *initialize, AST_Node *condition, AST_Node *increment, AST_Node *for_branch);
AST_Node *new_ast_while_node(AST_Node *condition, AST_Node *while_branch);
AST_Node *new_ast_do_node(AST_Node *condition, AST_Node *do_branch);
AST_Node *new_ast_assign_node(ListNode *entry, AST_Node *assign_val);
AST_Node *new_ast_simple_node(int statement_type); // continue, break or "main" return
AST_Node *new_ast_incr_node(ListNode *entry, int incr_type, int pf_type);
AST_Node *new_ast_func_call_node(ListNode *entry, AST_Node **params, int num_of_pars); // function call
void set_loop_counter(AST_Node *node);

/* Expressions */
AST_Node *new_ast_arithm_node(enum Arithm_op op, AST_Node *left, AST_Node *right);
AST_Node *new_ast_bool_node(enum Bool_op op, AST_Node *left, AST_Node *right);
AST_Node *new_ast_rel_node(enum Rel_op op, AST_Node *left, AST_Node *right);
AST_Node *new_ast_equ_node(enum Equ_op op, AST_Node *left, AST_Node *right);
AST_Node *new_ast_var_node(ListNode *entry);

/* Functions */
AST_Node *new_ast_func_decl_node(int ret_type, ListNode *entry); // function declaration
AST_Node *new_ast_return_node(int ret_type, AST_Node *ret_val);	 // function return
AST_Node *new_ast_ret_type_node(int ret_type); 
AST_Node *new_ast_decl_params_node(Prameter *parameters, int num_of_pars, Prameter param);

AST_Node *new_statements_node(AST_Node **statements, int statement_count, AST_Node *statement);
AST_Node *new_ast_call_params_node(AST_Node **params, int num_of_pars, AST_Node *param);

/* Tree Traversal */
void ast_print_node(AST_Node *node); // print information of node
void ast_traversal(AST_Node *node);	 // tree traversal (for testing right now)