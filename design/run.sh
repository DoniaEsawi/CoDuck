cd parser
bison -d parser.y  
cd ..
cd lexer
flex lex.l  
cd .. 
gcc -o compiler parser/parser.tab.c lexer/lex.yy.c -lm
./compiler example