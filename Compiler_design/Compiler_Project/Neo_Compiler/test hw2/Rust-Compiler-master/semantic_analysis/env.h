#ifndef RUSTC_ENV_H_
#define RUSTC_ENV_H_

#include <glib.h>
#include <stdbool.h>
#include "ast.h"

struct env {
      GHashTable* vars;
      GHashTable* types;
};

struct env* env(void);
// Copies the hash table but not the types/items stored in the hash table.
struct env* env_copy(struct env*);

bool env_contains(struct env*, Symbol);

// Associates a symbol with the parameter type or item. Doesn't own the type
// or item -- they don't get freed by destroy().
void env_insert(struct env*, Symbol, struct type*);
void env_insert_def(struct env*, Symbol, struct item*);

// Returns data associated with the parameter symbol.
struct type* env_lookup(struct env*, Symbol);
struct item* env_lookup_def(struct env*, Symbol);

void env_print(struct env*);

// Doesn't free the types and items themselves.
void env_destroy(struct env* env);

#endif
