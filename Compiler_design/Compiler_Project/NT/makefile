proj2: y.tab.o lex.yy.o
	gcc -o proj3 y.tab.o lex.yy.o

lex.yy.o: y.tab.o
	lex scanner.l
	gcc -c -g lex.yy.c

y.tab.o:
	yacc -y -d neo_yacc.y
	gcc -c -g  y.tab.c

clean:
	rm -f *.o *.out lex.yy.c y.tab.c y.tab.h proj3 *.jasm *.class
