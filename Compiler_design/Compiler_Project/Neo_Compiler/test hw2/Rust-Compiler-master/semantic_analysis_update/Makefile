PROGRAM = pa3
CFILES = frontend.c ast.c env.c type.c ast_print.c symbol.c
HEADERS = ast.h frontend.h type.h ast_print.h symbol.h
YFILE = parser.y
LFILE = lexer.l

CC = gcc
CFLAGS = -std=gnu99 -g -Wall `pkg-config --cflags glib-2.0`
# Link against glib.
LDLIBS = `pkg-config --libs glib-2.0`
LEX = flex
YACC = bison

# Autogenerate headers as well as *.c files.
YFLAGS = --defines=$(YFILE:%.y=%.h) -o y.tab.c
LFLAGS = --header-file=$(LFILE:%.l=%.h)

# Make all headers a dependency to everything.
%.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(PROGRAM): $(YFILE:%.y=%.o) $(LFILE:%.l=%.o) $(CFILES:%.c=%.o)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

.PHONY: clean
clean:
	-rm -f $(YFILE:%.y=%.o) $(YFILE:%.y=%.c) $(YFILE:%.y=%.h)
	-rm -f $(LFILE:%.l=%.o) $(LFILE:%.l=%.c) $(LFILE:%.l=%.h)
	-rm -f $(CFILES:%.c=%.o)
	-rm -f $(PROGRAM)
	-rm -f y.output
