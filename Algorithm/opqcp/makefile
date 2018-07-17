# Makefile for opqcp.

CFLAGS = -g

OFILES = opqcp.o symtab.o new.o
opqcp: $(OFILES)
	gcc -o opqcp $(CFLAGS) $(OFILES)

opqcp.o: misc.h symtab.h
symtab.o: misc.h symtab.h
new.o: misc.h
