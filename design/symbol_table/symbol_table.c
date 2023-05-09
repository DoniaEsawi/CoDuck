#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "symbol_table.h"

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
        list = (ListNode *)malloc(sizeof(ListNode));

        strcpy(list->name, name);

        list->scope = current_scope;

        list->stype = type;

        list->lines = (Ref *)malloc(sizeof(Ref));

        list->lines->lineNo = lineno;

        list->lines->next = NULL;

        list->next = symbol_table[hashval];

        symbol_table[hashval] = list;

        printf("Inserted %s for the first time with linenumber %d!\n", name, lineno); // error checking
    }
    /* found in table */
    else{
        // just add line number
        if(declare == 0){
            /* find last reference */
            Ref *t = list->lines;
            while (t->next != NULL) t = t->next;

                /* add linenumber to reference list */
                t->next = (Ref*) malloc(sizeof(Ref));
                t->next->lineNo = lineno;
                t->next->next = NULL;
                printf("Found %s again at line %d!\n", name, lineno);
        }
        /* new entry */
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
