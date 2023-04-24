/* length of the symbol table */
#define HASHTABLESIZE 401

/* max length of tokens */
#define MAXTOKENLEN 40

/* token types */

#define UNDEF 0
#define INT 1
#define REAL 2 // float
#define STRING 3
#define BOOL 4
#define ARRAY 5
#define FUNC 6

/* parameter passing method */
#define VALUE 1
#define REFERENCE 2

/* current scope */

int current_scope = 0;

// parameter node

typedef struct Prameter
{
    char name[MAXTOKENLEN];
    int type;
    int pass;               // value or reference
    int ival;               // initial value for int
    double fval;            // initial value for float
    char sval[MAXTOKENLEN]; // initial value for string
} Prameter;

// reference for each variable

typedef struct Ref
{
    int type;
    int lineNo;
    struct Ref *next;
} Ref;

// list node

typedef struct ListNode
{
    char name[MAXTOKENLEN];
    int lineno;
    int size_of_st;
    int scope;
    struct Ref *lines;
    // values
    int ival;
    double fval;
    char *sval;
    // types
    int stype;    // type of the symbol table
    int inf_type; // type of the information (array), or return type of the function
    // for arrays
    int size_of_array;
    int *array_ival;
    double *array_fval;
    char **array_sval;
    // for functions
    int num_of_params;
    struct Prameter *params;
    // for linked list
    struct ListNode *next; // pointer to next item in the list
} ListNode;

// symbol table

static ListNode **symbol_table;

// functions

void init_symbol_table();

unsigned int hash(char *key); // hash function

void insert(char *name, int lineno, int length, int type);

ListNode *lookup(char *name);                  // search for a symbol in the symbol table
ListNode *lookup_scope(char *name, int scope); // search for a symbol in the symbol table in a specific scope

void hide(int scope);    // hide all symbols in the symbol table with the given scope
void increment_scope();  // increase the current scope
void dump_symboltable(FILE *output); // print the symbol table
