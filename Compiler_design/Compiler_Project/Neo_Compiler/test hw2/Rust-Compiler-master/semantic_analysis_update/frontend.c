#include <stdio.h>
#include <glib.h>
#include <assert.h>
#include <stdbool.h>
#include "lexer.h"
#include "parser.h"
#include "ast.h"
#include "type.h"
#include "env.h"
#include "ast_print.h"

static GList* crate;
static void annotate_exp(struct exp* exp, struct env* env);
static void annotate_stmt(struct stmt* stmt, struct env* env);


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

static void annotate_stmt(struct stmt* stmt, struct env* env)
{
	assert(stmt);
	switch(stmt->kind)
	{
		case STMT_LET:
		{
            annotate_exp(stmt->exp, env);
			if(type_is_mut(stmt->let.type))
				stmt->exp->type = type_mut(stmt->exp->type);	
			else
				stmt->exp->type = type_unit();
			break;
		}
		case STMT_RETURN:
		{
			annotate_exp(stmt->exp, env);
			struct type* rtype = env_lookup(env, symbol_return());
			if(!type_eq(rtype, stmt->exp->type))
			{
				stmt->exp->type = type_error();
			}
			break;
		}
		case STMT_EXP:
		{
			annotate_exp(stmt->exp, env);
			if(!type_eq(stmt->exp->type, type_error()))
				stmt->type = type_unit();
			else
				stmt->type = type_error();
			break;
		}
	}
}

static void annotate_exp(struct exp* exp, struct env* env)
{
	assert(exp);
	switch(exp->kind)
	{
		case EXP_BLOCK:
		{
			GList* stmts = exp->block.stmts;
			for(GList* p = stmts; p; p = p->next)
			{
				struct stmt* stmt = p->data;
				annotate_stmt(stmt, env);
				if(type_eq(stmt->type, type_error()))
				{
					exp->type = type_error();
				}
			}
			annotate_exp(exp->block.exp, env);
			if(!type_eq(exp->type, type_error()))
			{
				exp->type = type_copy(exp->block.exp->type);
			}
			break;
		}
		case EXP_U8:
		{
			exp->type = type_u8();	
			break;
		}
        case EXP_I32:
		{
			exp->type = type_i32();
			break;
		}
        case EXP_TRUE:
		{
			exp->type = type_bool();
			break;
		}
        case EXP_FALSE:
		{
			exp->type = type_bool();
			break;
		}
		case EXP_UNIT:
		{
			exp->type = type_unit();
			break;
		}
		case EXP_STR:
		{
			break;
		}
		case EXP_WHILE:
		{
			if(!type_eq(exp->loop_while.cond->type, type_bool()))
			{
				exp->type = type_error();
			}
			annotate_exp(exp->loop_while.block, env);
			
			if(type_eq(exp->loop_while.block->type, type_unit()))
				exp->type = type_unit();
			else
				exp->type = type_error();
			//must be an exp
			//compared using <, >, =, ||, &&
			//can be t/f
			//can't be 1
			//test 5
			break;
		}
	    case EXP_ARRAY:
		{
			GList* exps = exp->lit_array.exps;
			for(GList* p = exps; p; p = p->next)
			{
				struct exp* expA = p->data;
				struct exp* expB = p->next->data;
				annotate_exp(expA, env);
				annotate_exp(expB, env);
				if(!type_eq(expA->type, expB->type) || (type_eq(expA->type, type_error())))
					exp->type = type_error();
				else
					exp->type = type_copy(expA->type);
			}
			//Have to make sure all values in array are same type
			//Then it becomes array of that type
			break;
		}
		case EXP_ID:
		{
			exp->type = type_ok();
			break;
		}
        case EXP_FN_CALL:
		{
			if(env_contains(env, exp->fn_call.id) == false)
				exp->type = type_error();
			GList* params = exp->fn_call.exps;
			for(GList* p = params; p; p = p->next)
			{
			
			}
			//have to look in env
			//to see if call with equal number of parameters
			//line 18 & 19
			//of test 13
			break;
		}
		case EXP_LOOKUP:
		{
			if(env_contains(env, exp->lookup.id) == false)
				exp->type = type_error();
			annotate_exp(exp->lookup.exp, env);
			
			break;
		}
		/*
                case EXP_STRUCT
                case EXP_LOOKUP
                case EXP_INDEX
                case EXP_BOX_NEW
				
		*/
        case EXP_IF:
		{
			if(!type_eq(exp->if_else.cond->type, type_bool()))
			{
				exp->type = type_error();
			}
			annotate_exp(exp->if_else.block_true, env);
			annotate_exp(exp->if_else.block_false, env);
			if(type_eq(exp->if_else.block_true->type, type_unit()) || (type_eq(exp->if_else.block_false->type, type_unit())))
				exp->type = type_unit();
			else
				exp->type = type_error();		
			//Let statement blocks have to terminate w/ ';'(exp)
			//blocks can't have <, > comparisons
			//Not sure why line 9 fails
			//test 8
			break;
		}
		case EXP_LOOP:
		{
			annotate_exp(exp, env);
			if(type_eq(exp->exp->type, type_unit()))
				exp->type = type_unit();
			else
				exp->type = type_error();
			break;
		}
        case EXP_UNARY:
		{
			annotate_exp(exp->unary.exp, env);
			/*if(!type_eq(exp->type, type_error()) && (exp->unary.mut == true))
			{
				//exp->type = type_mut();
				exp->type = type_ok();
			}
			else if(!type_eq(exp->type, type_error()) && (exp->unary.mut == false))
			{
				exp->type = type_ok();
			}*/
			if(type_eq(exp->unary.exp->type, type_bool()))
				exp->type = type_bool();
			else
				exp->type = type_error();
			break;
		}
        case EXP_BINARY:
		{
			annotate_exp(exp->binary.left, env);
			annotate_exp(exp->binary.right, env);
			if(type_eq(exp->binary.left->type, exp->binary.right->type) && (exp_is_arith(exp) == true))
				exp->type = exp->binary.left->type;	
			else if (type_eq(exp->binary.left->type, exp->binary.right->type) && ((exp_is_compare(exp) == true) || (exp_is_cmp_assign(exp) == true) || (exp_is_eq(exp) == true) || (exp_is_bool(exp) == true)))
				exp->type = type_bool();
			else	
				exp->type = type_error();
			break;
		}
	}
}

static void annotate_item(struct item* item, struct env* env) {
      assert(item);

      switch (item->kind) {
            case ITEM_FN_DEF:
			{
				  struct env* lenv = env_copy(env);
				  struct type* rtype = item->fn_def.type->type;
				  env_insert(lenv, symbol_return(), rtype);
				  
				  GList* params = item->fn_def.type->params;
				  
				  for(GList* p = params; p; p = p->next)
				  {
					struct pair* param = p->data;
					env_insert(lenv, param->param.pat->bind.id, param->param.type);
				  }
				  
				  annotate_exp(item->fn_def.block, lenv);
				  
				  if(type_eq(item->fn_def.block->type, rtype))
					item->type = type_ok();
				  else
					item->type = type_error(); 
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
            
			crate_print(crate); // TODO (print pretty types)
            puts("Ok.");
      }

      crate_destroy(crate);
      yylex_destroy();
}
