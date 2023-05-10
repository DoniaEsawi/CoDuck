#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "symbol_table.h"
#include "../semantics/semantics.h"

/* current scope */

int current_scope = 0;
int declare = 0; // 1: declaring, 0: not

void init_symbol_table()
{
    symbol_table = malloc(sizeof(ListNode *) * HASHTABLESIZE);
    for (int i = 0; i < HASHTABLESIZE; i++)
    {
        symbol_table[i] = NULL;
    }
    printf("initialized symbol table \n");
}

unsigned int hash(char *key)
{
    unsigned int hashval = 0;
	for(;*key!='\0';key++) hashval += *key;
	hashval += key[0] % 11 + (key[0] << 3) - key[0];
    return hashval % HASHTABLESIZE;
}

void insert(char *name, int lineno, int length, int type)
{
    // get the hash value of the token
    unsigned int hashval = hash(name);
    printf("hash value is %d \n", hashval);
    // get the list at the hash value
    ListNode *list = symbol_table[hashval];
    while (list != NULL && (strcmp(name, list->name) != 0)) // go to the end of the list
    {
        printf("name on list: %s, name given: %s\n", list->name, name);

        list = list->next;
    }

    if (list == NULL) // if the list is empty
    {
        /* check if we are really declaring */
		if(declare == 1){
			/* set up entry */
			list = (ListNode *)malloc(sizeof(ListNode));
            strcpy(list->name, name);
            list->scope = current_scope;
            list->stype = type;
            list->lines = (Ref *)malloc(sizeof(Ref));
            list->lines->lineNo = lineno;
            list->lines->next = NULL;
            list->next = symbol_table[hashval];
            symbol_table[hashval] = list;
            //printf("Inserted %s for the first time with linenumber %d!\n", name, lineno); 
		}
		else{
			/* add it to check it again later  as function call */
			list = (ListNode *)malloc(sizeof(ListNode));
			strcpy(list->name, name);
			list->stype = type;
			list->scope = current_scope;
			list->lines = (Ref*) malloc(sizeof(Ref));
			list->lines->lineNo = lineno;
			list->lines->next = NULL;
			list->next = symbol_table[hashval];
			symbol_table[hashval] = list;
			
			/* Adding identifier to the revisit queue! */
            printf("** %s added to queue with linenumber %d!\n", name, lineno); 
			add_to_queue(list->name, PARAM_CHECK);
		}
    }
    /* found in table */
    else{
        // just add line number
        if(declare == 0){  // here we refrance for Identifier
            /* find last reference */
            Ref *t = list->lines;
            while (t->next != NULL) t = t->next;

            /* add linenumber to reference list */
            t->next = (Ref*) malloc(sizeof(Ref));
            t->next->lineNo = lineno;
            t->next->next = NULL;
            printf("Found %s again at line %d!\n", name, lineno);
        }
        /* new entry */ //identification for same variable for the scond time
        else{
            /* same scope - multiple declaration error! */
            if(list->scope == current_scope){
                fprintf(stderr, "Error: A multiple declaration of variable %s at line %d\n", name, lineno);
                exit(1);
            }
            /* other scope - create new entry */
            else{
                /* set up entry */
                list = (ListNode *)malloc(sizeof(ListNode));
                strcpy(list->name, name);
                list->scope = current_scope;
                list->stype = type;
                list->lines = (Ref *)malloc(sizeof(Ref));
                list->lines->lineNo = lineno;
                list->lines->next = NULL;
                list->next = symbol_table[hashval];
                symbol_table[hashval] = list;
                printf("Inserted %s for a new scope with linenumber %d!\n", name, lineno);
            }	
        }		
    }
}

ListNode *lookup(char *name)
{
    // get the hash value of the token
    unsigned int hashval = hash(name);
    // get the list at the hash value
    ListNode *list = symbol_table[hashval];

    while (list != NULL && (strcmp(name, list->name) != 0)) // go to the end of the list
    {
        list = list->next;
    }

    return list; // if NULL , the token is not in the list
}

void set_type(char *name, int stype, int inf_type){
	/* lookup entry */
	ListNode *l = lookup(name);

	/* set "main" type */
	l->stype = stype;

	/* if array, pointer or function */
	if(inf_type != UNDEF){
		l->inf_type = inf_type;
	}	
}

int get_type(char *name){
	/* lookup entry */
	ListNode *l = lookup(name);

	/* if "simple" type */
	if(l->stype == INT_TYPE || l->stype == REAL_TYPE || l->stype == CHAR_TYPE){
		return l->stype;
	}
	/* if array, pointer or function */
	else{
		return l->inf_type;
	}
}

ListNode *lookup_scope(char *name, int scope)
{
    // get the hash value of the token
    unsigned int hashval = hash(name);
    // get the list at the hash value
    ListNode *list = symbol_table[hashval];

    while (list != NULL && (strcmp(name, list->name) != 0) && list->scope != scope)
    {
        list = list->next;
    }

    return list; // if NULL , the token is not in the list
}

void hide_scope(){ /* hide the current scope */
    ListNode *list;
    int i;
    printf("Hiding scope \'%d\':\n", current_scope);
    /* for all the lists */
    for (i = 0; i < HASHTABLESIZE; i++){
        if(symbol_table[i] != NULL){
            list = symbol_table[i];
            /* Find the first item that is from another scope */
            while(list != NULL && list->scope == current_scope){
                printf("Hiding %s..\n", list->name);
                list = list->next;
            }
            /* Set the list equal to that item */
            symbol_table[i] = list;
        }
    }
    current_scope--;
}

void incr_scope()
{ /* go to next scope */
    current_scope++;
}

Prameter def_param(int par_type, char *param_name, int pass){
    Prameter param; /* Parameter struct */

    /* set the information */
    param.type = par_type;
    strcpy(param.name, param_name);
    param.pass = pass;

    /* return the structure */
    return param;
}

int func_declare(char *name, int ret_type, int num_of_params, Prameter *params){
    /* lookup entry */
    ListNode *l = lookup(name);

    /* if type is not defined yet */
    if(l->stype != UNDEF){
        /* entry is of function type */
        l->stype = FUNCTION_TYPE;

        /* return type is ret_type */
        l->inf_type = ret_type;

        /* parameter stuff */
        l->num_of_params = num_of_params;
        l->params = params;

        return 0; /* success */
    }
    /* already declared error */
    else{
        fprintf(stderr, "Function %s already declared!\n", name);
        exit(1);
    }
}

int func_param_check(char *name, int num_of_params, Prameter *parameters){
    int i, type_1, type_2;

    /* lookup entry */
    ListNode *l = lookup(name);

    /* check number of parameters */
    if(l->num_of_params != num_of_params){
        fprintf(stderr, "Function call of %s has wrong num of parameters!\n", name);
        exit(1);
    }

    /* check if parameters are compatible */
    for(i = 0; i < num_of_params; i++){
        /* type of parameter in function declaration */
        type_1 = l->params[i].type; 

        /* type of parameter in function call*/
        type_2 = parameters[i].type; 

        /* check compatibility for function call */
        get_result_type(type_1, type_2, NONE);
        /* error occurs automatically in the function */
    }

    return 0; /* success */
}

void dump_symboltable(FILE *output)
{
    fprintf(output, "------------------------ ------------ ------------------\n");
    fprintf(output, "Name                     Type         Line Number       \n");
    fprintf(output, "------------------------ ------------ ------------------\n");
    for (int i = 0; i < HASHTABLESIZE; i++)
    {
        ListNode *list = symbol_table[i];
        while (list != NULL)
        {
            fprintf(output, "%-24s %-12s ", list->name, list->stype == 0 ? "UNDEF" : list->stype == 1 ? "INT"
                                                                                 : list->stype == 2   ? "REAL"
                                                                                 : list->stype == 3   ? "STRING"
                                                                                 : list->stype == 4   ? "BOOL"
                                                                                 : list->stype == 5   ? "ARRAY"
                                                                                                      : "FUNCTION");
            Ref *temp = list->lines;
            while (temp != NULL)
            {

                fprintf(output, "%-6d ", temp->lineNo);

                i++;
                temp = temp->next;
            }
            fprintf(output, "\n");
            list = list->next;
        }
    }
}


// Revisit Queue Functions

void add_to_queue(char *name, int type){ /* add to queue */
	revisit_queue *q;
	
	/* queue is empty */
	if(queue == NULL){
		/* set up entry */
		q = (revisit_queue*) malloc(sizeof(revisit_queue));
		q->st_name = name;
		q->revisit_type = type;
		q->next = NULL;
		
		/* q "becomes" the queue */
		queue = q;
	}
	/* queue not empty */
	else{
		/* find last element */
		q = queue;
		while(q->next != NULL) q = q->next;
		
		/* add element to the end */
		q->next = (revisit_queue*) malloc(sizeof(revisit_queue));
		q->next->st_name = name;
		q->next->revisit_type = type;
		q->next->next = NULL;
	}		
}

// This function will be called when functions get declared, to take care of function calls that has not been checked yet!

int revisit(char *name){ /* revisit entry by also removing it from queue */
	revisit_queue *q;
	
	/* special case - first entry */
	if( strcmp(queue->st_name, name) == 0 ){
		
		/* revisit entry depending on the type */
		switch(queue->revisit_type){
			case PARAM_CHECK:
				/* TO DO: run parameter check */
				break;
			/* ... */
		}
		
		/* remove entry by setting queue to "next" */
		queue = queue->next;
		// the function is called before declaration
		return 0; // success
	}
	
	/* search for the entry that points to it */
	q = queue;
	while( strcmp(q->next->st_name, name) != 0 ) q = q->next;
	
	/* check if entry was not found */
	if(q == NULL){
        // the function not called before declaration
		return 1;  // not found 
	}
	
	/* revisit entry depending on the type */
	switch(q->next->revisit_type){
		case PARAM_CHECK:
			/* TO DO: run parameter check */
			break;
		/* ... */
	}
	
	/* remove entry by making the previous entry point at */
	/* the "next" of the entry that we want to remove  */
	q->next = q->next->next;	
	
	return 0; // success
}

void revisit_dump(FILE *of){
	int i;
	revisit_queue *q;
	q = queue;
	
	fprintf(of,"------------ -------------\n");
	fprintf(of,"Identifier   Revisit Type\n");
	fprintf(of,"------------ -------------\n");
  	while(q != NULL){
  		fprintf(of, "%-13s", q->st_name);
  		if(q->revisit_type == PARAM_CHECK){
  			fprintf(of,"%s","Parameter Check");
		}
		// more later on
		fprintf(of, "\n");
  		q = q->next;	
	}
}