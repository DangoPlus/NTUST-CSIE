#ifndef RUSTC_SYMBOL_H_
#define RUSTC_SYMBOL_H_

#include <glib.h>

// *** Symbols ***

enum {
      SYMBOL_INVALID,
      SYMBOL_CTOR,
      SYMBOL_TYPE,
      SYMBOL_VAR,
      SYMBOL_FIELD,
};

struct symbol {
      int kind;
      GQuark value;
};

typedef struct symbol Symbol;

// These functions translate a string into a symbol unique to that string. The
// resulting symbol can be quickly compared for equality and the like and it
// also carries around its namespace (i.e., whether it's a struct field,
// enum constructor name, type name, or variable name).
//
// They take ownership of the string argument (i.e., they free it). Don't call
// with static strings.
Symbol symbol_ctor(char*);
Symbol symbol_type(char*);
Symbol symbol_var(char*);
Symbol symbol_field(char*);

// Special symbol for storing the function return type.
Symbol symbol_return(void);
// Special symbol for main.
Symbol symbol_main(void);

// Translates a symbol to the original string used to create it. The resulting
// string shouldn't be messed with.
const char* symbol_to_str(Symbol);

#endif
