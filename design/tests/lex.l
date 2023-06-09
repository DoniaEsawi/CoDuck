/* flex will read only one input file */
%option noyywrap 
/* First Part: Declarations */
%{
    #include <assert.h>
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include"../symbol_table/symbol_table.h"
    #include "../semantics/semantics.h"
    #include "../ast/ast.h"
    #include"parser.tab.h"
    
    extern FILE *yyin;
    extern FILE *yyout;
    int yydebug = 0;
    int lineno = 1; /* for keeping track of the line number we are on,
                        this will be used later on in the symbol table 
                        as well as helping us debug.  */
    char* ret(char *token_type);
    void yyerror();
%}
/*********** start states ************/
/* for a multi line comment */
%x MULTILINE_COMMENT 
/* basic definitions */
alpha          [a-zA-Z]
digit          [0-9]
alphanum       [a-zA-Z0-9_]
/* all printable characters (from space to ~)*/
print          [ -~]  

/* identifier: mustTRUE start with letter, followed by any alpha, digit or underscore */
ident            {alpha}{alphanum}*
CONST_INT        -?([1-9]{digit}*)|"0"
CONST_FLOAT      -?([1-9]{digit}*|"0")"."{digit}*
CONST_CHAR        (\'{print}\')|(\'\\[nftrbv]\')|(\"{print}\")|(\"\\[nftrbv]\")
STRING_LITERAL   (\"{print}*\")|(\'{print}*\')


/***********************/
/* second part: Rules */
/**********************/

%%

"//".*          {
    // printf("Found single-line comment at line %d\n", lineno);
}


"/*"            {
    // printf("Found start of a multi-line comment at line %d\n", lineno); 
BEGIN(MULTILINE_COMMENT);}

<MULTILINE_COMMENT>\n {lineno++;}

<MULTILINE_COMMENT>"*"

<MULTILINE_COMMENT>[^*\n]+ 

<MULTILINE_COMMENT>"*/" {
    // printf("Found end of multi-line comment at line %d\n", lineno); 
    BEGIN(INITIAL);}

"const"|"CONST" {ret("CONST"); return CONST;}
"char"|"CHAR" {ret("CHAR"); return CHAR;}
"integer"|"INTEGER" {ret("INTEGER"); return INTEGER;}
"float"|"FLOAT" {ret("FLOAT"); return FLOAT;}
"double"|"DOUBLE" {ret("DOUBLE"); return DOUBLE;}
"string"|"STRING" {ret("STR"); return STR;}
"bool"|"BOOL" {ret("BOOLEAN"); return BOOLEAN;}
"void"|"VOID" {ret("VOID"); return VOID;}
"if"|"IF" {ret("IF"); return IF;}
"elif"|"ELIF" {ret("ELIF"); return ELIF;}
"else"|"ELSE" {ret("ELSE"); return ELSE;}
"switch"|"SWITCH" {ret("SWITCH"); return SWITCH;}
"case"|"CASE" {ret("CASE"); return CASE;}
"default"|"default" {ret("DEFAULT"); return DEFAULT;}
"for"|"FOR" {ret("FOR"); return FOR;}
"while"|"WHILE" {ret("WHILE");  return WHILE;}
"do"|"DO" {ret("DO"); return DO;}
"until"|"UNTIL" {ret("UNTIL"); return UNTIL;}
"continue"|"CONTINUE" {ret("CONTINUE"); return CONTINUE;}
"break"|"BREAK" {ret("BREAK"); return BREAK;}
"func"|"FUNC" {ret("FUNC"); return FUNC;}
"return"|"RETURN" {ret("RETURN"); return RETURN;}
"enum"|"ENUM" {ret("ENUM"); return ENUM;}
"true" {ret("TRUE_TOKEN"); 
yylval.val.ival = 1;
return TRUE_TOKEN;}
"false" {ret("FALSE_TOKE"); 
yylval.val.ival = 0;
return FALSE_TOKEN;}
"+" {ret("ADD_OP"); return ADD_OP;}
"-" {ret("SUB_OP"); return SUB_OP;}
"*" {ret("MUL_OP"); return MUL_OP;}
"/" {ret("DIV_OP"); return DIV_OP;}
"%" {ret("MOD_OP"); return MOD_OP;}
"++" {ret("INC_OP"); return INC_OP;}
"--" {ret("DEC_OP"); return DEC_OP;}
"or"|"OR"|"||" {ret("OR_OP"); return OR_OP;}
"and"|"AND"|"&&" {ret("AND_OP"); return AND_OP;}
"not"|"NOT"|"!" {ret("NOT_OP"); return NOT_OP;}
"=="		     { yylval.val.ival = EQUAL; ret("=="); return EQ_OP; }
"!="			 { yylval.val.ival = NOT_EQUAL; ret("!="); return EQ_OP; }
">"				 { yylval.val.ival = GREATER;  ret(">"); return REL_OP; }
"<"				 { yylval.val.ival = LESS;  ret("<"); return REL_OP; }
">="			 { yylval.val.ival = GREATER_EQUAL; ret(">="); return REL_OP; }
"<="			 { yylval.val.ival = LESS_EQUAL;  ret("<="); return REL_OP; }
"=" {ret("ASSIGN_OP"); return ASSIGN_OP;}
"(" {ret("LEFT_PAREN"); return LEFT_PAREN;}
")" {ret("RIGHT_PAREN"); return RIGHT_PAREN;}
"[" {ret("LEFT_SQ_BRACKET"); return LEFT_SQ_BRACKET;}
"]" {ret("RIGHT_SQ_BRACKET"); return RIGHT_SQ_BRACKET;}
"{" {ret("LEFT_CURLY_BRACKET"); return LEFT_CURLY_BRACKET;}
"}" {ret("RIGHT_CURLY_BRACKET"); return RIGHT_CURLY_BRACKET;}
"," {ret("COMMA"); return COMMA;}
"." {ret("DOT"); return DOT;}
":" {ret("COLON"); return COLON;}
";" {ret("SEMICOLON"); return SEMICOLON;}
"?" {ret("QUESTION_MARK"); return QUESTION_MARK;}
"END"|"end" {return END;}


{ident} {
    insert(yytext,lineno, strlen(yytext), UNDEF);
    yylval.symbol_table_item = lookup(yytext);
    ret("IDENT");
    return IDENT;
    
    }
{CONST_INT} {  
    yylval.val.ival = atoi(yytext); 
// yylval.val.fval = atof(yytext);
ret("CONST_INT"); return CONST_INT; }
{CONST_FLOAT} { yylval.val.fval = atof(yytext);
 yylval.val.ival = atoi(yytext); 
 ret("CONST_FLOAT"); return CONST_FLOAT; }
{CONST_CHAR} { yylval.val.cval = yytext[1]; 
printf("lexeeeer ");
printf("%c\n",yytext[1]);
// printf("%s\n",yytext[1]);
// printf("%s\n",yytext[2]);
ret("CONST_CHAR"); return CONST_CHAR; }
{STRING_LITERAL} { yylval.val.sval = malloc(yyleng * sizeof(char)); 
                   strcpy(yylval.val.sval, yytext); ret("STRING_LITERAL"); return STRING_LITERAL; }

"\n" {lineno++;}


[ \t\r\f]+ 

. { yyerror("Unknown character"); }


%%


char* ret(char *token_type)
{
    // printf("Found %s at line %d \n", token_type, lineno);
    //return token_type;
}

// void yyerror(char *s)
// {
//     fprintf(stderr, "%s in token %s at line %d \n", s, yytext ,lineno);
// }

// int main(int argc, char **argv)
// {
//     // initialize the symbol table
//     init_symbol_table();
   
//     if (argc > 1)
//     {
//         yyin = fopen(argv[1], "r");
//         yylex();
//         fclose(yyin);
//     }
//     else
//     {
//         yyin = stdin;
//         yylex();
//     }

//     //dump the symbol table
//     yyout = fopen("symtab_dump.out", "w");
// 	dump_symboltable(yyout);
// 	fclose(yyout);

//     return 0;
// }











