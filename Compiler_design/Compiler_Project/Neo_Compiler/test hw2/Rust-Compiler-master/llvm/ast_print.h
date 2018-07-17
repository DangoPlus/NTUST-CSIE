#ifndef RUSTC_AST_PRINT_H_
#define RUSTC_AST_PRINT_H_

#include <glib.h>
#include "ast.h"

void crate_print(const GList* items);
void exp_print(const stmt* exp);
void item_print_pretty(const struct item*);

/* Print out type in Rust syntax style. */
void type_print_pretty(const struct type*);

#endif
