/* length of the symbol table */
#define HASHTABLESIZE 500

/* max length of tokens */
#define MAXTOKENLEN 40

/* parameter passing method */
#define VALUE 1
#define REFERENCE 2

/* Types of values that we can have */
typedef union Value
{
    int ival;
    double fval;
    char cval;
    char *sval;
} Value;

// parameter node

typedef struct Prameter
{
    char name[MAXTOKENLEN];
    int type;
    int pass; // value or reference
    // int ival;               // initial value for int
    // double fval;            // initial value for float
    // char sval[MAXTOKENLEN]; // initial value for string
    Value val; // to store the value of the parameter
} Prameter;

// reference for each variable

typedef struct Ref
{
    // int type;
    int lineNo;
    struct Ref *next;
} Ref;

// list node

typedef struct ListNode
{
    char name[MAXTOKENLEN];
    // int lineno;
    int size_of_st;
    int scope;
    struct Ref *lines;
    // values
    Value val;
    // types
    int stype; // type of the symbol table

    //////Not used///////////////////////
    int inf_type; // type of the information (array), or return type of the function
    // for arrays
    int size_of_array;

    Value *vals;
    //////////////////////////////////////

    // for functions
    int num_of_params;
    Prameter *params;
    // for linked list
    struct ListNode *next; // pointer to next item in the list
} ListNode;

typedef struct revisit_queue
{
    // symbol table entry
    ListNode *entry;
    // name of identifier
    char *st_name;

    // type of revisit
    int revisit_type;

    // parameters of function calls
    int **par_types;
    int *num_of_pars;
    int num_of_calls;

    // next item in the queue
    struct revisit_queue *next;
} revisit_queue;

// symbol table

static ListNode **symbol_table;

// revisit queue
static revisit_queue *queue;

// functions

void init_symbol_table();

unsigned int hash(char *key); // hash function

void insert(char *name, int lineno, int length, int type);

ListNode *lookup(char *name);                  // search for a symbol in the symbol table
ListNode *lookup_scope(char *name, int scope); // search for a symbol in the symbol table in a specific scope

void hide(int scope);                // hide all symbols in the symbol table with the given scope
void increment_scope();              // increase the current scope
void dump_symboltable(FILE *output); // print the symbol table

// Function Declaration and Parameters
Prameter def_param(int par_type, char *param_name, int passing); // define parameter
int func_declare(char *name, int ret_type,
                 int num_of_pars, Prameter *parameters);
int func_param_check(char *name, int num_of_calls,
                     int **par_types, int *num_of_pars);

// Type Functions
void set_type(char *name, int st_type, int inf_type); // set the type of an entry (declaration)
int get_type(char *name);                             // get the type of an entry

// Revisit Queue Functions
void add_to_queue(ListNode *entry, char *name, int type); // add to queue
revisit_queue *search_queue(char *name);
revisit_queue *search_prev_queue(char *name);

int revisit(char *name);     // revisit entry by also removing it from queue
void revisit_dump(FILE *of); // dump file
