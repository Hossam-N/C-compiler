
compiler:
	flex lexFileOmar.l 
	bison -vd parser.y
	gcc lex.yy.c parser.tab.c -o compiler 


