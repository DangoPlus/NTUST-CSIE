#include <stdio.h>
#include <glib.h>
#include "lexer.h"
#include "parser.h"
#include "ast.h"

static GList* crate;

void parse_done(GList* items) {
      crate = items;
}

void yyerror(char const *s) {
      fprintf(stderr, "%s\n", s);
}

int main(int argc, char **argv) {
      if (!yyparse()) {
            crate_print(crate);
            crate_destroy(crate);
            yylex_destroy();
      }
      //add function to check if main exists
      maincheck();
}
