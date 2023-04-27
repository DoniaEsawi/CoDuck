/* flex will read only one input file */
%option noyywrap 



/* First Part: Declarations */
%{    
 
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include"../symbol_table/symbol_table.c"
/* #include"../parser/parser.tab.h" */
   extern FILE *yyin;
   extern FILE *yyout;
   int lineno = 1; /* for keeping track of the line number we are on,
                      this will be used later on in the symbol table 
                      as well as helping us debug.  */
   char* ret(char *token_type);
   /*void yyerror();*/

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

/* identifier: must start with letter, followed by any alpha, digit or underscore */
ident            {alpha}{alphanum}*
CONST_INT        -?([1-9]{digit}*)|"0"
CONST_FLOAT      -?([1-9]{digit}*|"0")"."{digit}*
CONST_CHAR        (\'{print}\')|(\'\\[nftrbv]\')|(\"{print}\")|(\"\\[nftrbv]\")
STRING_LITERAL   (\"({print})*\")|(\'({print})*\')




/***********************/
/* second part: Rules */
/**********************/


%%

"//".*          {printf("Found single-line comment at line %d\n", lineno);}


"/*"            {printf("Found start of a multi-line comment at line %d\n", lineno); BEGIN(MULTILINE_COMMENT);}

<MULTILINE_COMMENT>\n {lineno++;}

<MULTILINE_COMMENT>"*"

<MULTILINE_COMMENT>[^*\n]+ 

<MULTILINE_COMMENT>"*/" {printf("Found end of multi-line comment at line %d\n", lineno); BEGIN(INITIAL);}

"const"|"CONST" {ret("CONST");}

"char"|"CHAR" {ret("CHAR");}

"integer"|"INTEGER" {ret("INTEGER");}

"float"|"FLOAT" {ret("FLOAT");}

"double"|"DOUBLE" {ret("DOUBLE");}

"bool"|"BOOL" {ret("BOOLEAN");}

"void"|"VOID" {ret("VOID");}

"if"|"IF" {ret("IF");}

"elif"|"ELIF" {ret("ELIF");}

"else"|"ELSE" {ret("ELSE");}

"switch"|"SWITCH" {ret("SWITCH");}

"case"|"CASE" {ret("CASE");}

"default"|"default" {ret("DEFAULT");}

"for"|"FOR" {ret("FOR");}

"while"|"WHILE" {ret("WHILE");}

"do"|"DO" {ret("DO");}

"until"|"UNTIL" {ret("UNTIL");}

"continue"|"CONTINUE" {ret("CONTINUE");}

"break"|"BREAK" {ret("BREAK");}

"func"|"FUNC" {ret("FUNC");}

"return"|"RETURN" {ret("RETURN");}

"enum"|"ENUM" {ret("ENUM");}

"true" {ret("TRUE");}
"false" {ret("FALSE");}


"+" {ret("ADD_OP");}
"-" {ret("SUB_OP");}
"*" {ret("MUL_OP");}
"/" {ret("DIV_OP");}
"%" {ret("MOD_OP");}
"++" {ret("INC_OP");}
"--" {ret("DEC_OP");}
"or"|"OR"|"||" {ret("OR_OP");}
"and"|"AND"|"&&" {ret("AND_OP");}
"not"|"NOT"|"!" {ret("NOT_OP");}
"==" {ret("EQ_OP");}
"!=" {ret("NE_OP");}
"<" {ret("LT_OP");}
">" {ret("GT_OP");}
"<=" {ret("LE_OP");}
">=" {ret("GE_OP");}
"=" {ret("ASSIGN_OP");}
"|" {ret("BIT_OR_OP");}
"&" {ret("AND");}
"^" {ret("BIT_XOR_OP");}
"<<" {ret("BIT_LSHIFT_OP");}
">>" {ret("BIT_RSHIFT_OP");}
"~" {ret("BIT_NOT_OP");}


"(" {ret("LEFT_PAREN");}
")" {ret("RIGHT_PAREN");}

"[" {ret("LEFT_SQ_BRACKET");}
"]" {ret("RIGHT_SQ_BRACKET");}

"{" {ret("LEFT_CURLY_BRACKET");}
"}" {ret("RIGHT_CURLY_BRACKET");}

"," {ret("COMMA");}
"." {ret("DOT");}
":" {ret("COLON");}
";" {ret("SEMICOLON");}
"?" {ret("QUESTION_MARK");}


{ident} {
    // insert(yytext,lineno, strlen(yytext), UNDEF);
    ret("IDENT");
    
    }
{CONST_INT} { yylval.int_val = atoi(yytext); ret("CONST_INT"); }
{CONST_FLOAT} { yylval.double_val = atof(yytext); ret("CONST_FLOAT"); }
{CONST_CHAR} { yylval.char_val = yytext[0]; ret("CONST_CHAR"); }
{STRING_LITERAL} { yylval.str_val = malloc(yyleng * sizeof(char)); strcpy(yylval.str_val, yytext); ret("STRING_LITERAL"); }

"\n" {lineno++;}


[ \t\r\f]+ 



%%

// . { yyerror("Unknown character"); }

char* ret(char *token_type)
{
    printf("Found %s at line %d \n", token_type, lineno);
    return token_type;
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











