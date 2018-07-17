project2: y.tab.o lex.yy.o
	gcc -o go_compiler y.tab.o lex.yy.o 

lex.yy.o: y.tab.o
	lex scanner.l 
	gcc -c -g lex.yy.c

y.tab.o: 
	bison -y -d yacl.y
	gcc -c -g  y.tab.c

clean:
	rm -f *.o *.out *.jasm lex.yy.c y.tab.c y.tab.h go_compiler *.class
