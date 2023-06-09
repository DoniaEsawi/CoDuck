/* token types */
#define UNDEF 0
#define INT_TYPE 1
#define REAL_TYPE 2
#define CHAR_TYPE 3
#define STR_TYPE 4
#define ARRAY_TYPE 5
#define POINTER_TYPE 6
#define FUNCTION_TYPE 7
#define VOID_TYPE 8
#define BOOL_TYPE 9
#define ENUM_TYPE 10

/* operator types */
#define NONE 0      // to check types only - assignment, parameter
#define ARITHM_OP 1 // ADDOP, MULOP, DIVOP (+, -, *, /)
#define INCR_OP 2   // INCR (++, --)
#define BOOL_OP 3   // OROP, ANDOP (||, &&)
#define NOTT_OP 4   // NOTOP (!)
#define RELL_OP 5   // RELOP (>, <, >=, <=)
#define EQUL_OP 6   // EQUOP (==, !=)

#define PARAM_CHECK 1  /* Check parameters of function call when functions gets declared */
#define ASSIGN_CHECK 2 /* Check assignment when function call part of the expression */
// Function Declarations
int get_result_type(int type_1, int type_2, int op_type, int lineno); /* type check and result type */
void type_error(int type_1, int type_2, int op_type, int lineno);     /* print type error */