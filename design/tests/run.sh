bison -d -v -r all ../parser/parser.y
flex ../lexer/lex.l
gcc -o compiler parser.tab.c lex.yy.c -lfl -lm
rm lex.yy.c parser.tab.c
./compiler full_example.kak  symbol_table_full_example.out revisit_queue_full_example.out
