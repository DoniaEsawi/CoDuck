#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "symbol_table.h"

/* current scope */

int current_scope = 0;

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
    for (int i = 0; i < strlen(key); i++)
    {
        hashval += key[i] * pow(37, i); // this hash function is used by java
    }

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
    else // if the token is already in the list, add the line number
    {
        // printf("here\n");
        list->scope = current_scope;
        Ref *temp = list->lines;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = (Ref *)malloc(sizeof(Ref));
        temp->next->lineNo = lineno;
        temp->next->next = NULL;
        printf("found %s again in line number %d!\n", name, lineno); // error checking
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

void hide_scope()
{
    if (current_scope > 0)
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
