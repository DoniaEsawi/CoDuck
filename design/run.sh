cd parser
bison -d -v -r all parser.y  
cd ..
cd lexer
flex lex.l  
cd .. 
gcc -o compiler parser/parser.tab.c lexer/lex.yy.c -lfl -lm
./compiler <example> output