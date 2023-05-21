bison -d ../parser/parser.y
flex ../lexer/lex.l
gcc -o compiler parser.tab.c lex.yy.c 
rm lex.yy.c parser.tab.c
.\compiler full_example.kak
