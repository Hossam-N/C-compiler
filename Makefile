CC=gcc

all: parser

parser: lex.yy.c yaccfile.tab.c
	$(CC) $(CFLAGS) -o parser lex.yy.c $(yacc).tab.c

lex.yy.c: $(lex)
	flex $(lex)

yaccfile.tab.c: $(yacc)
	bison -d $(yacc)

