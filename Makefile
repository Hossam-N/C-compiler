
compiler:
	flex lexFileOmar.l 
	bison -vd parser.y
	g++ lex.yy.c parser.tab.c ast.cpp -o compiler 


