#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <glib.h>
#include "env.h"
#include "ast.h"

// This is the information stored in the environment for every symbol.
struct record {
      struct type* type;
      struct item* def;
};

static struct record* record(struct type* type, struct item* def);
static void insert_into(int key, struct record* value, GHashTable* ht);
static void record_destroy(int key, struct record* rec);
static void print_entry(int, struct record*, int);

static struct record* record(struct type* type, struct item* def) {
      struct record* rec = malloc(sizeof(*rec));
      rec->type = type;
      rec->def = def;
      return rec;
}

struct env* env(void) {
      struct env* env = malloc(sizeof(*env));
      env->types = g_hash_table_new(NULL, NULL);
      env->vars = g_hash_table_new(NULL, NULL);
      return env;
}

static void insert_into(int key, struct record* value, GHashTable* ht) {
      g_hash_table_insert(ht, GINT_TO_POINTER(key), value);
}

struct env* env_copy(struct env* old) {
      struct env* new = env();

      g_hash_table_foreach(old->types, (GHFunc)insert_into, new->types);
      g_hash_table_foreach(old->vars, (GHFunc)insert_into, new->vars);

      return new;
}

struct type* env_lookup(struct env* env, Symbol symbol) {
      assert(env);

      struct record* rec = NULL;
      switch (symbol.kind) {
            case SYMBOL_TYPE:
                  rec = (struct record*)g_hash_table_lookup(env->types, GINT_TO_POINTER(symbol.value));
                  break;
            case SYMBOL_VAR:
                  rec = (struct record*)g_hash_table_lookup(env->vars, GINT_TO_POINTER(symbol.value));
                  break;
      }

      if (!rec) return type_error();
      return rec->type;
}

struct item* env_lookup_def(struct env* env, Symbol symbol) {
      assert(env);
      assert(env->types);
      assert(symbol.kind == SYMBOL_TYPE);

      struct record* rec = (struct record*)g_hash_table_lookup(env->types, GINT_TO_POINTER(symbol.value));

      if (!rec) return NULL;
      return rec->def;
}

void env_insert(struct env* env, Symbol symbol, struct type* type) {
      assert(env);
      assert(symbol.kind == SYMBOL_TYPE || symbol.kind == SYMBOL_VAR);

      struct record* rec = record(type, NULL);
      switch (symbol.kind) {
            case SYMBOL_TYPE:
                  assert(env->types);
                  insert_into(symbol.value, rec, env->types);
                  break;
            case SYMBOL_VAR:
                  assert(env->vars);
                  insert_into(symbol.value, rec, env->vars);
                  break;
      }
}

void env_insert_def(struct env* env, Symbol symbol, struct item* def) {
      assert(env);
      assert(symbol.kind == SYMBOL_TYPE || symbol.kind == SYMBOL_VAR);

      struct record* rec = record(NULL, def);
      switch (symbol.kind) {
            case SYMBOL_TYPE:
                  assert(env->types);
                  insert_into(symbol.value, rec, env->types);
                  break;
            case SYMBOL_VAR:
                  assert(env->vars);
                  insert_into(symbol.value, rec, env->vars);
                  break;
      }
}

bool env_contains(struct env* env, Symbol symbol) {
      assert(env);
      assert(symbol.kind == SYMBOL_TYPE || symbol.kind == SYMBOL_VAR);
      switch (symbol.kind) {
            case SYMBOL_TYPE:
                  assert(env->types);
                  return g_hash_table_lookup(env->types, GINT_TO_POINTER(symbol.value)) != NULL;
            case SYMBOL_VAR:
                  assert(env->vars);
                  return g_hash_table_lookup(env->vars, GINT_TO_POINTER(symbol.value)) != NULL;
      }
      return false;
}

static void print_entry(int symbol_value, struct record* rec, int symbol_kind) {
      assert(rec);
      Symbol symbol;
      symbol.kind = symbol_kind;
      symbol.value = symbol_value;

      switch (symbol_kind) {
            case SYMBOL_TYPE:
                  printf("type(%s)", symbol_to_str(symbol));
                  break;
            case SYMBOL_VAR:
                  printf("var(%s)", symbol_to_str(symbol));
                  break;
      }
      printf(" |-> { ");
      if (rec->type) {
            type_print_pretty(rec->type);
            if (rec->def) printf(", ");
      }
      if (rec->def) {
            item_print_pretty(rec->def);
      }
      puts(" }");
}

void env_print(struct env* env) {
      assert(env);
      g_hash_table_foreach(env->types, (GHFunc)print_entry, GINT_TO_POINTER(SYMBOL_TYPE));
      g_hash_table_foreach(env->vars, (GHFunc)print_entry, GINT_TO_POINTER(SYMBOL_VAR));
}

static void record_destroy(int key, struct record* rec) {
      assert(rec);
      free(rec);
}

void env_destroy(struct env* env) {
      if (!env) return;

      g_hash_table_foreach(env->types, (GHFunc)record_destroy, NULL);
      g_hash_table_destroy(env->types);

      g_hash_table_foreach(env->vars, (GHFunc)record_destroy, NULL);
      g_hash_table_destroy(env->vars);

      free(env);
}

