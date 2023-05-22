bison -d ../parser/parser.y
flex ../lexer/lex.l
gcc -o compiler parser.tab.c lex.yy.c 
rm lex.yy.c parser.tab.c
.\compiler full_example.kak  symbol_table_full_example.out revisit_queue_full_example.out
