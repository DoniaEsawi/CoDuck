bison -d parser.y
flex lex.l
gcc -o compiler parser.tab.c lex.yy.c -lfl -lm
rm lex.yy.c parser.tab.c
./compiler example_no_func.kak  symbol_table_full_example.out revisit_queue_full_example.out
