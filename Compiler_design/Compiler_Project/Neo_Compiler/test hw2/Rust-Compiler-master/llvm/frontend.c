#include <stdio.h>
#include <glib.h>
#include <assert.h>
#include "lexer.h"
#include "parser.h"
#include "ast.h"
#include "type.h"
#include "env.h"
#include "ast_print.h"
#include "codegen.h"

static void annotate_stmt(struct stmt* stmt, struct env* env);

static GList* crate;

void parse_done(GList* items) {
      crate = items;
}

void yyerror(char const* s) {
      fprintf(stderr, "%s\n", s);
}

static struct env* build_env(GList* crate) {
      struct env* env = env_new();

      for (GList* i = g_list_first(crate); i; i = i->next) {
            assert(i->data);
            struct item* item = i->data;

            switch (item->kind) {
                  case ITEM_FN_DEF: {
                        if (env_contains(env, item->id)) {
                              printf("Error: duplicate definition of function `%s`.\n", symbol_to_str(item->id));
                              exit(1);
                        }
                        env_insert(env, item->id, item->fn_def.type);
                        env_insert_def(env, item->id, item);

                        GHashTable* params = g_hash_table_new(NULL, NULL);
                        for (GList* j = g_list_first(item->fn_def.type->params); j; j = j->next) {
                              assert(j->data);
                              struct pair* pair = j->data;
                              assert(pair->kind == PAIR_PARAM);

                              assert(pair->param.pat->kind == PAT_BIND);

                              if (g_hash_table_lookup(params, GINT_TO_POINTER(pair->param.pat->bind.id.value))) {
                                    printf("Error: identifier `%s` is bound more than once in the parameter list for the function `%s`.\n", symbol_to_str(pair->param.pat->bind.id), symbol_to_str(item->id));
                                    exit(1);
                              }
                              g_hash_table_insert(params, GINT_TO_POINTER(pair->param.pat->bind.id.value), GINT_TO_POINTER(true));
                        }
                        g_hash_table_destroy(params);

                        break;
                  }
                  case ITEM_ENUM_DEF: {
                        if (env_contains(env, item->id)) {
                              printf("Error: duplicate definition of struct or enum `%s`.\n", symbol_to_str(item->id));
                              exit(1);
                        }
                        env_insert_def(env, item->id, item);

                        GHashTable* ctors = g_hash_table_new(NULL, NULL);
                        for (GList* j = g_list_first(item->enum_def.ctors); j; j = j->next) {
                              assert(j->data);
                              struct pair* pair = j->data;
                              assert(pair->kind == PAIR_CTOR_DEF);

                              if (g_hash_table_lookup(ctors, GINT_TO_POINTER(pair->ctor_def.id.value))) {
                                    printf("Error: duplicate definition of the constructor `%s` for the enum `%s`.\n", symbol_to_str(pair->ctor_def.id), symbol_to_str(item->id));
                                    exit(1);
                              }
                              g_hash_table_insert(ctors, GINT_TO_POINTER(pair->ctor_def.id.value), GINT_TO_POINTER(true));
                        }
                        g_hash_table_destroy(ctors);

                        break;
                  }
                  case ITEM_STRUCT_DEF: {
                        if (env_contains(env, item->id)) {
                              printf("Error: duplicate definition of struct or enum `%s`.\n", symbol_to_str(item->id));
                              exit(1);
                        }
                        env_insert_def(env, item->id, item);

                        GHashTable* fields = g_hash_table_new(NULL, NULL);
                        for (GList* j = g_list_first(item->struct_def.fields); j; j = j->next) {
                              assert(j->data);
                              struct pair* pair = j->data;
                              assert(pair->kind == PAIR_FIELD_DEF);

                              if (g_hash_table_lookup(fields, GINT_TO_POINTER(pair->field_def.id.value))) {
                                    printf("Error: duplicate declaration of the field `%s` of the struct `%s`.\n", symbol_to_str(pair->field_def.id), symbol_to_str(item->id));
                                    exit(1);
                              }
                              g_hash_table_insert(fields, GINT_TO_POINTER(pair->field_def.id.value), GINT_TO_POINTER(true));
                        }
                        g_hash_table_destroy(fields);

                        break;
                  }
            }
      }

      return env;
}

static void check_main(struct env* env) {
      struct type* main_decl = env_lookup(env, symbol_main());

      if (main_decl->kind == TYPE_FN) {
            if (main_decl->params // it has params...
            || (main_decl->type && main_decl->type->kind != TYPE_UNIT)) { // ...or a non-unit return type.
                  printf("Error: main function has the wrong type.\n");
                  exit(1);
            }
      } else {
            printf("Error: main function not found.\n");
            exit(1);
      }
}

static void annotate_exp(struct exp* exp, struct env* env) {
      assert(exp);
      switch (exp->kind) {
            case EXP_ID: {
                  exp->type = type_copy(env_lookup(env, exp->id));
                  break;
            }
            case EXP_ENUM: {
                  // TODO
                  break;
            }
            case EXP_STRUCT: {
                  struct item* def = env_lookup_def(env, exp->lit_struct.id);

                  for (GList* p = exp->lit_struct.fields; p; p = p->next) {
                        struct pair* field_init = p->data;
                        assert(field_init);

                        annotate_exp(field_init->field_init.exp, env);
                        struct type* def_type = item_get_field_type(def, field_init->field_init.id);

                        if (field_init->field_init.exp->type == type_error()
                                    || !type_eq(def_type, field_init->field_init.exp->type)) {
                              exp->type = type_error();
                        }
                  }

                  if (exp->type != type_error()) {
                        exp->type = type_id(exp->lit_struct.id);
                  }
                  break;
            }
            case EXP_ARRAY: {
                  struct type* ele_type = type_invalid();
                  int length = 0;
                  for (GList* i = exp->lit_array.exps; i; i = i->next) {
                        struct exp* ele = i->data;
                        annotate_exp(ele, env);
                        if (ele_type == type_invalid()) {
                              ele_type = type_copy(ele->type);
                        }
                        if (!type_eq(ele_type, ele->type)) {
                              ele_type = type_error();
                        }
                        ++length;
                  }
                  if (ele_type == type_error()) exp->type = type_error();
                  else exp->type = type_array(ele_type, length);
                  break;
            }
            case EXP_LOOKUP: {
                  annotate_exp(exp->lookup.exp, env);
                  if (type_is_id(exp->lookup.exp->type)) {
                        struct item* def = env_lookup_def(env, type_get_id(exp->lookup.exp->type));
                        if (def) {
                              if (type_is_mut(exp->lookup.exp->type)) {
                                    exp->type = type_mut(type_copy(item_get_field_type(def, exp->lookup.id)));
                              } else exp->type = type_copy(item_get_field_type(def, exp->lookup.id));
                        } else exp->type = type_error();
                  } else exp->type = type_error();
                  break;
            }
            case EXP_INDEX: {
                  annotate_exp(exp->index.exp, env);
                  annotate_exp(exp->index.idx, env);
                  if (type_is_array(exp->index.exp->type) && type_is_i32(exp->index.idx->type)) {
                        if (type_is_mut(exp->index.exp->type)) {
                              exp->type = type_mut(type_copy(type_get_elem(exp->index.exp->type)));
                        } else exp->type = type_copy(type_get_elem(exp->index.exp->type));
                  } else exp->type = type_error();
                  break;
            }
            case EXP_FN_CALL: {
                  struct type* fn_type = env_lookup(env, exp->fn_call.id);
                  GList *p, *a;
                  for (p = fn_type->params, a = exp->fn_call.exps; p && a; p = p->next, a = a->next) {
                        struct pair* param = p->data;
                        struct exp* arg = a->data;
                        annotate_exp(arg, env);
                        if (!type_eq(param->param.type, arg->type))
                              exp->type = type_error();
                  }

                  // If the lengths are different...
                  if (p || a) exp->type = type_error();
                  // If we haven't already set our type to error, then our type
                  // must be the function return type.
                  else if (exp->type == type_invalid())
                        exp->type = type_copy(fn_type->type);
                  break;
            }
            case EXP_BOX_NEW: {
                  annotate_exp(exp->exp, env);
                  if (exp->exp->type == type_error())
                        exp->type = type_error();
                  else exp->type = type_box(type_copy(exp->exp->type));
                  break;
            }
            case EXP_IF: {
                  annotate_exp(exp->if_else.cond, env);
                  annotate_exp(exp->if_else.block_true, env);
                  if (exp->if_else.block_false) {
                        annotate_exp(exp->if_else.block_false, env);
                        if (type_is_bool(exp->if_else.cond->type)
                                    && type_eq(exp->if_else.block_true->type, exp->if_else.block_false->type)) {
                              exp->type = type_copy(exp->if_else.block_true->type);
                        } else exp->type = type_error();
                  } else if (type_is_bool(exp->if_else.cond->type)) {
                        exp->type = type_copy(exp->if_else.block_true->type);
                  } else exp->type = type_error();
                  break;
            }
            case EXP_WHILE: {
                  annotate_exp(exp->loop_while.cond, env);
                  annotate_exp(exp->loop_while.block, env);
                  if (type_is_unit(exp->loop_while.block->type)
                              && type_is_bool(exp->loop_while.cond->type)) {
                        exp->type = type_unit();
                  } else exp->type = type_error();
                  break;
            }
            case EXP_LOOP: {
                  annotate_exp(exp->exp, env);
                  if (type_is_unit(exp->exp->type)) {
                        exp->type = type_unit();
                  } else exp->type = type_error();
                  break;
            }
            case EXP_BLOCK: {
                  struct env* lenv = env_copy(env);
                  bool err = false;
                  for (GList* n = exp->block.stmts; n; n = n->next) {
                        struct stmt* stmt = n->data;
                        annotate_stmt(stmt, lenv);
                        err = err || stmt->type == type_error();
                  }
                  annotate_exp(exp->block.exp, lenv);
                  env_destroy(lenv);
                  if (err) exp->type = type_error();
                  else exp->type = type_copy(exp->block.exp->type);
                  break;
            }
            case EXP_BINARY: {
                  annotate_exp(exp->binary.left, env);
                  annotate_exp(exp->binary.right, env);

                  exp->type = type_error();

                  if (exp_is_arith(exp)
                              && type_is_i32(exp->binary.left->type)
                              && type_is_i32(exp->binary.right->type)) {
                        exp->type = type_i32();
                  }

                  if (exp_is_assign(exp)
                              && type_eq(exp->binary.left->type, exp->binary.right->type)
                              && type_is_mut(exp->binary.left->type)
                              && exp->binary.left->type != type_error()
                              && exp->binary.right->type != type_error()) {
                        exp->type = type_unit();
                  }

                  if (exp_is_cmp_assign(exp)
                              && type_is_i32(exp->binary.left->type)
                              && type_is_i32(exp->binary.right->type)
                              && type_is_mut(exp->binary.left->type)) {
                        exp->type = type_unit();
                  }

                  if (exp_is_compare(exp)
                              && type_is_i32(exp->binary.left->type)
                              && type_is_i32(exp->binary.right->type)) {
                        exp->type = type_bool();
                  }

                  if (exp_is_eq(exp)
                              && type_eq(exp->binary.left->type, exp->binary.right->type)
                              && exp->binary.left->type != type_error()
                              && exp->binary.right->type != type_error()) {
                        exp->type = type_bool();
                  }

                  if (exp_is_bool(exp)
                              && type_is_bool(exp->binary.left->type)
                              && type_is_bool(exp->binary.right->type)) {
                        exp->type = type_bool();
                  }

                  break;
            }
            case EXP_UNARY: {
                  annotate_exp(exp->unary.exp, env);

                  exp->type = type_error();

                  if (exp_is_addrof(exp)
                              && exp->unary.exp->type != type_error()) {
                        if (exp->unary.mut)
                              exp->type = type_ref(type_mut(type_copy(exp->unary.exp->type)));
                        else exp->type = type_ref(type_copy(exp->unary.exp->type));
                  }

                  if (exp_is_bool(exp)
                              && type_is_bool(exp->unary.exp->type)) {
                        exp->type = type_bool();
                  }

                  // Actually, the deref op (i.e., *x).
                  if (exp_is_arith(exp) && (
                                    type_is_ref(exp->unary.exp->type)
                                    || type_is_box(exp->unary.exp->type))) {
                        exp->type = type_copy(type_get_elem(exp->unary.exp->type));
                  }

                  break;
            }
      }
}

static void annotate_stmt(struct stmt* stmt, struct env* env) {
      assert(stmt);

      switch (stmt->kind) {
            case STMT_LET: {
                  if (stmt->let.exp) {
                        annotate_exp(stmt->let.exp, env);
                        if ((stmt->let.type && !type_eq(stmt->let.exp->type, stmt->let.type))
                                    || stmt->let.exp->type == type_error()) {
                              stmt->type = type_error();
                        } else {
                              // TODO (leak)
                              if (stmt->let.pat->bind.mut) {
                                    env_insert(env, stmt->let.pat->bind.id, type_mut(stmt->let.exp->type));
                              } else env_insert(env, stmt->let.pat->bind.id, stmt->let.exp->type);
                              stmt->type = type_unit();
                        }
                  } else if (stmt->let.type) {
                        // TODO (leak)
                        if (stmt->let.pat->bind.mut) {
                              env_insert(env, stmt->let.pat->bind.id, type_mut(stmt->let.type));
                        } else env_insert(env, stmt->let.pat->bind.id, stmt->let.type);
                        stmt->type = type_unit();
                  }
                  break;
            }

            case STMT_RETURN: {
                  annotate_exp(stmt->exp, env);
                  struct type* expected = env_lookup(env, symbol_return());
                  if (expected->kind == stmt->exp->type->kind) {
                        stmt->type = type_unit();
                  } else stmt->type = type_error();
                  break;
            }

            case STMT_EXP: {
                  annotate_exp(stmt->exp, env);
                  if (stmt->exp->type == type_error()) {
                        stmt->type = type_error();
                  } else stmt->type = type_unit();
                  break;
            }
      }

}

static void annotate_item(struct item* item, struct env* env) {
      assert(item);

      switch (item->kind) {
            case ITEM_FN_DEF: {
                  struct env* lenv = env_copy(env);
                  env_insert(lenv, symbol_return(), item->fn_def.type->type);
                  for (GList* p = item->fn_def.type->params; p; p = p->next) {
                        struct pair* param = p->data;
                        env_insert(lenv, param->param.pat->bind.id, param->param.type);
                  }
                  annotate_exp(item->fn_def.block, lenv);
                  env_destroy(lenv);

                  if (type_eq(item->fn_def.block->type, item->fn_def.type->type)
                              || type_is_unit(item->fn_def.block->type)) {
                        item->type = type_ok();
                  } else item->type = type_error();
                  break;
            }

            case ITEM_ENUM_DEF:
                  item->type = type_ok(); // nothing to check.
                  break;
            case ITEM_STRUCT_DEF:
                  item->type = type_ok(); // nothing to check.
                  break;
      }
}

static void annotate_crate(GList* crate, struct env* env) {
      g_list_foreach(crate, (GFunc)annotate_item, env);
}

int main(int argc, char** argv) {
      if (!yyparse()) {
            struct env* genv = build_env(crate);

            check_main(genv);

            annotate_crate(crate, genv);

            //crate_print(crate);
			gen_crate(crate);
      }

      crate_destroy(crate);

      yylex_destroy();
}
