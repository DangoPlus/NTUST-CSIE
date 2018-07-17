#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "ast.h"
#include "env.h"

/*variables for typecheck*/
int q = 0;
int i = 0;
int test = 0;
int test2 = 0;
int test3 = 0;
const char *enumStructDefs[1000];
const char *functDefs[1000];
/*-----------------------*/

static void print_indent(void);
static void print_head(const char* head);
static void print_leaf(const char* head);
static void print_rparen(void);

static bool symbol_is_valid(Symbol x);
static void symbol_print(Symbol id);

static struct item* item_new(int kind);
static void item_print(struct item* item);

static struct stmt* stmt_new(int kind);
static void stmt_print(struct stmt* stmt);

static struct pat* pat_new(int kind);
static void pat_print(struct pat* pat);

static struct exp* exp_new(int kind);
static const char* op_to_str(const char* op, bool unary, bool mut);
static void exp_print(struct exp* exp);

static struct type* type_new(int kind);
static void type_print(struct type* type);

static void pair_print(struct pair* pair);

#define INDENT "    "
static int indent_level;
static void print_indent(void) {
      puts("");
      for (int i = 0; i != indent_level; ++i) {
            printf(INDENT);
      }
}
static void print_head(const char* head) {
      print_indent();
      printf("(%s", head);
      ++indent_level;
}
static void print_leaf(const char* head) {
      print_indent();
      printf("(%s)", head);
}
static void print_rparen(void) {
      --indent_level;
      printf(")");
}

// *** Symbols ***

Symbol symbol_ctor(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_CTOR, q};
}
Symbol symbol_type(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_TYPE, q};
}
Symbol symbol_var(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_VAR, q};
}
Symbol symbol_field(char* id) {
      assert(id);
      GQuark q = g_quark_from_string(id);
      free(id);
      return (Symbol){SYMBOL_FIELD, q};
}
Symbol symbol_return(void) {
      GQuark q = g_quark_from_string("$return");
      return (Symbol){SYMBOL_VAR, q};
}
static bool symbol_is_valid(Symbol x) {
      return x.kind == SYMBOL_CTOR
            || x.kind == SYMBOL_TYPE
            || x.kind == SYMBOL_VAR
            || x.kind == SYMBOL_FIELD;
}
const char* symbol_to_str(Symbol x) {
      assert(symbol_is_valid(x));
      return g_quark_to_string(x.value);
}
static void symbol_print(Symbol id) {
      print_head("id");
      print_leaf(symbol_to_str(id));
      print_rparen();
}

// *** Crate ***

void crate_destroy(GList* items) {
      g_list_free_full(items, (GDestroyNotify)item_destroy);
}
void crate_print(GList* items) {
      indent_level = 0;
      print_head("crate");
      print_head("items");
      g_list_foreach(items, (GFunc)item_print, NULL);
      print_rparen();
      print_rparen();
      puts("");
}

// *** Items ***

static struct item* item_new(int kind) {
      struct item* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct item* item_fn_def(Symbol id, GList* params, struct type* ret, struct exp* block) {
      struct item* n = item_new(ITEM_FN_DEF);
      n->id = id;
      n->fn_def.params = params;
      n->fn_def.ret = ret;
      n->fn_def.block = block;
      return n;
}
struct item* item_enum_def(Symbol id, GList* ctors) {
      struct item* n = item_new(ITEM_ENUM_DEF);
      n->id = id;
      n->enum_def.ctors = ctors;
      return n;
}
struct item* item_struct_def(Symbol id, GList* fields) {
      struct item* n = item_new(ITEM_STRUCT_DEF);
      n->id = id;
      n->struct_def.fields = fields;
      return n;
}
void item_destroy(struct item* item) {
      if (!item) return;

      switch (item->kind) {
            case ITEM_FN_DEF:
                  g_list_free_full(item->fn_def.params, (GDestroyNotify)pair_destroy);
                  type_destroy(item->fn_def.ret);
                  exp_destroy(item->fn_def.block);
                  break;
            case ITEM_ENUM_DEF:
                  g_list_free_full(item->enum_def.ctors, (GDestroyNotify)pair_destroy);
                  break;
            case ITEM_STRUCT_DEF:
                  g_list_free_full(item->struct_def.fields, (GDestroyNotify)pair_destroy);
                  break;
      }

      free(item);
}

//intercept the output and do typecheck
static void item_print(struct item* item) {
      if (!item) return;

      switch (item->kind) {
            case ITEM_FN_DEF:
                  print_head("fn-def");
                  symbol_print(item->id);
                  
                  //check duplicate function names
            	  int j = 0;
        		  for (j = 0; j <= i; j++) {
                      if (functDefs[j] == symbol_to_str(item->id)) {
                        	printf("\nError, duplicate function names on '%s'\n", functDefs[j]);
				            exit(0);
		              }
                  }
                  
                  //check if main function exists
        		  functDefs[i] = symbol_to_str(item->id);
        		  if (strcmp(functDefs[i], "main") == 0)
                      test = 1;
        		  if ((strcmp(functDefs[i], "main") == 0) && ((item->fn_def.params)!= NULL))
		              test2 = 1;
        		  if ((strcmp(functDefs[i], "main") == 0) && ((item->fn_def.ret)!= NULL))
                      test3 = 1;
          		  i++;

                  if (item->fn_def.params) {
                        print_head("fn-params");
                        g_list_foreach(item->fn_def.params, (GFunc)pair_print, NULL);
                        print_rparen();
                  }
                  type_print(item->fn_def.ret);
                  exp_print(item->fn_def.block);
                  break;
            case ITEM_ENUM_DEF:
                  print_head("enum-def");
                  symbol_print(item->id);
                  
                  //check duplicate enum or struct names 
                  int a = 0;
                  for (a = 0; a <= q; a++) {
                      if (enumStructDefs[a] == symbol_to_str(item->id)){ 
                          printf("\nError, duplicate enum/struct names on '%s'\n", enumStructDefs[a]);
                          exit(0);
                      }
                  }
                  //get next value
        		  enumStructDefs[q] = symbol_to_str(item->id);
                  q++;

                  print_head("enum-ctor-defs");
                  g_list_foreach(item->enum_def.ctors, (GFunc)pair_print, NULL);
                  print_rparen();
                  break;
            case ITEM_STRUCT_DEF:
                  print_head("struct-def");
                  symbol_print(item->id);
                  
                  //check duplicate enum or struct names
                  int b = 0;
                  for (b = 0; b <= q; b++) { 
                      if (enumStructDefs[b] == symbol_to_str(item->id))	{ 
                          printf("\nError, duplicate enum/struct names on '%s'\n", enumStructDefs[b]);
             		  exit(0);
            		  }
                  }
                  //get next value
                  enumStructDefs[q] = symbol_to_str(item->id);
                  q++;
                  
                  print_head("field-defs");
                  g_list_foreach(item->struct_def.fields, (GFunc)pair_print, NULL);
                  print_rparen();
                  break;
      }
      print_rparen();
}

void item_print_pretty(struct item* item) {
      if (!item) return;

      switch (item->kind) {
            case ITEM_FN_DEF:
                  printf("fn-def");
                  break;
            case ITEM_ENUM_DEF:
                  printf("enum-def");
                  break;
            case ITEM_STRUCT_DEF:
                  printf("struct-def");
                  break;
      }
}

// *** Statements ***

static struct stmt* stmt_new(int kind) {
      struct stmt* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct stmt* stmt_let(struct pat* pat, struct type* type, struct exp* exp) {
      struct stmt* n = stmt_new(STMT_LET);
      n->let.pat = pat;
      n->let.type = type;
      n->let.exp = exp;
      return n;
}
struct stmt* stmt_return(struct exp* exp) {
      struct stmt* n = stmt_new(STMT_RETURN);
      n->exp = exp;
      return n;
}
struct stmt* stmt_exp(struct exp* exp) {
      struct stmt* n = stmt_new(STMT_EXP);
      n->exp = exp;
      return n;
}
void stmt_destroy(struct stmt* stmt) {
      if (!stmt) return;

      switch (stmt->kind) {
            case STMT_LET:
                  pat_destroy(stmt->let.pat);
                  type_destroy(stmt->let.type);
                  exp_destroy(stmt->let.exp);
                  break;

            case STMT_RETURN:
            case STMT_EXP:
                  exp_destroy(stmt->exp);
                  break;
      }

      free(stmt);
}
static void stmt_print(struct stmt* stmt) {
      if (!stmt) return;

      switch (stmt->kind) {
            case STMT_LET:
                  print_head("let");
                  pat_print(stmt->let.pat);
                  type_print(stmt->let.type);
                  exp_print(stmt->let.exp);
                  print_rparen();
                  break;
            case STMT_RETURN:
                  print_head("return");
                  exp_print(stmt->exp);
                  print_rparen();
                  break;
            case STMT_EXP:
                  exp_print(stmt->exp);
                  break;
      }
}

// *** Patterns ***

static struct pat* pat_new(int kind) {
      struct pat* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct pat* pat_wild(void) {
      static struct pat n = {.kind = PAT_WILD};
      return &n;
}
struct pat* pat_unit(void) {
      static struct pat n = {.kind = PAT_UNIT};
      return &n;
}
struct pat* pat_true(void) {
      static struct pat n = {.kind = PAT_TRUE};
      return &n;
}
struct pat* pat_false(void) {
      static struct pat n = {.kind = PAT_FALSE};
      return &n;
}
struct pat* pat_ref(struct pat* pat) {
      struct pat* n = pat_new(PAT_REF);
      n->pat = pat;
      return n;
}
struct pat* pat_id(bool ref, bool mut, Symbol id) {
      struct pat* n = pat_new(PAT_BIND);
      n->bind.id = id;
      n->bind.ref = ref;
      n->bind.mut = mut;
      return n;
}
struct pat* pat_array(GList* pats) {
      struct pat* n = pat_new(PAT_ARRAY);
      n->array.pats = pats;
      return n;
}
struct pat* pat_enum(Symbol eid, Symbol cid, GList* pats) {
      struct pat* n = pat_new(PAT_ENUM);
      n->ctor.eid = eid;
      n->ctor.cid = cid;
      n->ctor.pats = pats;
      return n;
}
struct pat* pat_struct(Symbol id, GList* fields) {
      struct pat* n = pat_new(PAT_STRUCT);
      n->strct.id = id;
      n->strct.fields = fields;
      return n;
}
struct pat* pat_i32(int num) {
      struct pat* n = pat_new(PAT_I32);
      n->num = num;
      return n;
}
struct pat* pat_u8(int num) {
      struct pat* n = pat_new(PAT_U8);
      n->num = num;
      return n;
}
struct pat* pat_str(char* str) {
      struct pat* n = pat_new(PAT_STR);
      n->str = str;
      return n;
}
void pat_destroy(struct pat* pat) {
      if (!pat) return;

      switch (pat->kind) {
            case PAT_WILD:
            case PAT_UNIT:
            case PAT_TRUE:
            case PAT_FALSE:
                  return;

            case PAT_REF:
                  pat_destroy(pat->pat);
                  break;
            case PAT_ARRAY:
                  g_list_free_full(pat->array.pats, (GDestroyNotify)pat_destroy);
                  break;
            case PAT_ENUM:
                  g_list_free_full(pat->ctor.pats, (GDestroyNotify)pat_destroy);
                  break;
            case PAT_STRUCT:
                  g_list_free_full(pat->strct.fields, (GDestroyNotify)pair_destroy);
                  break;
            case PAT_STR:
                  free(pat->str);
                  break;
      }
      free(pat);
}
static void pat_print(struct pat* pat) {
      if (!pat) return;

      switch (pat->kind) {
            case PAT_WILD:
                  print_head("pat-wild");
                  break;
            case PAT_UNIT:
                  print_head("pat-unit");
                  break;
            case PAT_TRUE:
                  print_head("pat-true");
                  break;
            case PAT_FALSE:
                  print_head("pat-false");
                  break;
            case PAT_STR:
                  print_head("pat-str");
                  break;
            case PAT_U8:
                  print_head("pat-lit");
                  print_leaf("lit-char");
                  break;
            case PAT_I32:
                  print_head("pat-lit");
                  print_leaf("lit-dec");
                  break;

            case PAT_REF:
                  print_head("pat-deref"); // TODO: rename?
                  pat_print(pat->pat);
                  break;

            case PAT_ARRAY:
                  print_head("pat-arr");
                  print_head("pat-arr-elems");
                  g_list_foreach(pat->array.pats, (GFunc)pat_print, NULL);
                  print_rparen();
                  break;
            case PAT_ENUM:
                  print_head("pat-enum");
                  print_head("enum-ctor");
                  symbol_print(pat->ctor.eid);
                  symbol_print(pat->ctor.cid);
                  print_rparen();
                  if (pat->ctor.pats) {
                        print_head("pat-enum-ctor-params");
                        g_list_foreach(pat->ctor.pats, (GFunc)pat_print, NULL);
                        print_rparen();
                  }
                  break;
            case PAT_STRUCT:
                  print_head("pat-struct");
                  symbol_print(pat->strct.id);
                  print_head("pat-fields");
                  g_list_foreach(pat->strct.fields, (GFunc)pair_print, NULL);
                  print_rparen();
                  break;
            case PAT_BIND:
                  if (pat->bind.mut && pat->bind.ref) print_head("pat-ref-mut-id");
                  else if (pat->bind.mut) print_head("pat-mut-id");
                  else if (pat->bind.ref) print_head("pat-ref-id");
                  else print_head("pat-id");
                  symbol_print(pat->bind.id);
                  break;
      }
      print_rparen();
}

// *** Expressions ***

static struct exp* exp_new(int kind) {
      struct exp* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct exp* exp_u8(int num) {
      struct exp* n = exp_new(EXP_U8);
      n->num = num;
      return n;
}
struct exp* exp_i32(int num) {
      struct exp* n = exp_new(EXP_I32);
      n->num = num;
      return n;
}
struct exp* exp_str(char* str) {
      struct exp* n = exp_new(EXP_STR);
      n->str = str;
      return n;
}
struct exp* exp_true(void) {
      static struct exp n = {.kind = EXP_TRUE};
      return &n;
}
struct exp* exp_false(void) {
      static struct exp n = {.kind = EXP_FALSE};
      return &n;
}
struct exp* exp_unit(void) {
      static struct exp n = {.kind = EXP_UNIT};
      return &n;
}
struct exp* exp_id(Symbol id) {
      struct exp* n = exp_new(EXP_ID);
      n->id = id;
      return n;
}
struct exp* exp_enum(Symbol eid, Symbol cid, GList* exps) {
      struct exp* n = exp_new(EXP_ENUM);
      n->lit_enum.eid = eid;
      n->lit_enum.cid = cid;
      n->lit_enum.exps = exps;
      return n;
}
struct exp* exp_struct(Symbol id, GList* fields) {
      struct exp* n = exp_new(EXP_STRUCT);
      n->lit_struct.id = id;
      n->lit_struct.fields = fields;
      return n;
}
struct exp* exp_array(GList* exps) {
      struct exp* n = exp_new(EXP_ARRAY);
      n->lit_array.exps = exps;
      return n;
}
struct exp* exp_lookup(struct exp* exp, Symbol id) {
      struct exp* n = exp_new(EXP_LOOKUP);
      n->lookup.exp = exp;
      n->lookup.id = id;
      return n;
}
struct exp* exp_index(struct exp* exp, struct exp* idx) {
      struct exp* n = exp_new(EXP_INDEX);
      n->index.exp = exp;
      n->index.idx = idx;
      return n;
}
struct exp* exp_fn_call(Symbol id, GList* exps) {
      struct exp* n = exp_new(EXP_FN_CALL);
      n->fn_call.id = id;
      n->fn_call.exps = exps;
      return n;
}
struct exp* exp_box_new(struct exp* exp) {
      struct exp* n = exp_new(EXP_BOX_NEW);
      n->exp = exp;
      return n;
}
struct exp* exp_match(struct exp* exp, GList* arms) {
      struct exp* n = exp_new(EXP_MATCH);
      n->match.exp = exp;
      n->match.arms = arms;
      return n;
}
struct exp* exp_if(struct exp* cond, struct exp* block_true, struct exp* block_false) {
      struct exp* n = exp_new(EXP_IF);
      n->if_else.cond = cond;
      n->if_else.block_true = block_true;
      n->if_else.block_false = block_false;
      return n;
}
struct exp* exp_while(struct exp* cond, struct exp* block) {
      struct exp* n = exp_new(EXP_WHILE);
      n->loop_while.cond = cond;
      n->loop_while.block = block;
      return n;
}
struct exp* exp_loop(struct exp* block) {
      struct exp* n = exp_new(EXP_LOOP);
      n->exp = block;
      return n;
}
struct exp* exp_block(GList* stmts, struct exp* exp) {
      struct exp* n = exp_new(EXP_BLOCK);
      n->block.stmts = stmts;
      n->block.exp = exp;
      return n;
}
struct exp* exp_unary(const char* op, struct exp* exp) {
      struct exp* n = exp_new(EXP_UNARY);
      n->unary.op = op;
      n->unary.exp = exp;
      return n;
}
struct exp* exp_addrof_mut(struct exp* exp) {
      struct exp* n = exp_new(EXP_UNARY);
      n->unary.op = "&";
      n->unary.mut = true;
      n->unary.exp = exp;
      return n;
}
struct exp* exp_binary(const char* op, struct exp* left, struct exp* right) {
      struct exp* n = exp_new(EXP_BINARY);
      n->binary.op = op;
      n->binary.left = left;
      n->binary.right = right;
      return n;
}
void exp_destroy(struct exp* exp) {
      if (!exp) return;

      switch (exp->kind) {
            case EXP_TRUE:
            case EXP_FALSE:
            case EXP_UNIT:
                  return;

            case EXP_STR:
                  free(exp->str);
                  break;
            case EXP_ENUM:
                  g_list_free_full(exp->lit_enum.exps, (GDestroyNotify)exp_destroy);
                  break;
            case EXP_STRUCT:
                  g_list_free_full(exp->lit_struct.fields, (GDestroyNotify)pair_destroy);
                  break;
            case EXP_ARRAY:
                  g_list_free_full(exp->lit_array.exps, (GDestroyNotify)exp_destroy);
                  break;
            case EXP_LOOKUP:
                  exp_destroy(exp->lookup.exp);
                  break;
            case EXP_INDEX:
                  exp_destroy(exp->index.exp);
                  exp_destroy(exp->index.idx);
                  break;
            case EXP_FN_CALL:
                  g_list_free_full(exp->fn_call.exps, (GDestroyNotify)exp_destroy);
                  break;
            case EXP_BOX_NEW:
                  exp_destroy(exp->exp);
                  break;
            case EXP_MATCH:
                  exp_destroy(exp->match.exp);
                  g_list_free_full(exp->match.arms, (GDestroyNotify)pair_destroy);
                  break;
            case EXP_IF:
                  exp_destroy(exp->if_else.cond);
                  exp_destroy(exp->if_else.block_true);
                  exp_destroy(exp->if_else.block_false);
                  break;
            case EXP_WHILE:
                  exp_destroy(exp->loop_while.cond);
                  exp_destroy(exp->loop_while.block);
                  break;
            case EXP_LOOP:
                  exp_destroy(exp->exp);
                  break;
            case EXP_BLOCK:
                  g_list_free_full(exp->block.stmts, (GDestroyNotify)stmt_destroy);
                  exp_destroy(exp->block.exp);
                  break;
            case EXP_UNARY:
                  exp_destroy(exp->unary.exp);
                  break;
            case EXP_BINARY:
                  exp_destroy(exp->binary.left);
                  exp_destroy(exp->binary.right);
                  break;
      }

      free(exp);
}
static const char* op_to_str(const char* op, bool unary, bool mut) {
      assert(op);
      if (!strcmp(op, "&")) return mut? "addr-of-mut" : "addr-of";
      if (!strcmp(op, "!")) return "not";
      if (!strcmp(op, "+")) return "add";
      if (!strcmp(op, "-")) return unary? "neg" : "sub";
      if (!strcmp(op, "*")) return unary? "deref" : "mul";
      if (!strcmp(op, "/")) return "div";
      if (!strcmp(op, "%")) return "rem";
      if (!strcmp(op, "=")) return "assign";
      if (!strcmp(op, "+=")) return "assign-add";
      if (!strcmp(op, "-=")) return "assign-sub";
      if (!strcmp(op, "*=")) return "assign-mul";
      if (!strcmp(op, "/=")) return "assign-div";
      if (!strcmp(op, "%=")) return "assign-rem";
      if (!strcmp(op, "&&")) return "and";
      if (!strcmp(op, "||")) return "or";
      if (!strcmp(op, "!=")) return "neq";
      if (!strcmp(op, "==")) return "eq";
      if (!strcmp(op, "<")) return "lt";
      if (!strcmp(op, "<=")) return "leq";
      if (!strcmp(op, ">")) return "gt";
      if (!strcmp(op, ">=")) return "geq";
      assert(false);
}
static void exp_print(struct exp* exp) {
      if (!exp) return;

      switch (exp->kind) {
            case EXP_UNIT:
                  print_leaf("unit");
                  break;
            case EXP_TRUE:
                  print_leaf("true");
                  break;
            case EXP_FALSE:
                  print_leaf("false");
                  break;
            case EXP_I32:
                  print_leaf("lit-dec");
                  break;
            case EXP_U8:
                  print_leaf("lit-char");
                  break;
            case EXP_STR:
                  print_leaf("lit-str");
                  break;
            case EXP_ID:
                  symbol_print(exp->id);
                  break;
            case EXP_ENUM:
                  print_head("enum");
                  print_head("enum-ctor");
                  symbol_print(exp->lit_enum.eid);
                  symbol_print(exp->lit_enum.cid);
                  print_rparen();
                  if (exp->lit_enum.exps) {
                        print_head("exprs");
                        g_list_foreach(exp->lit_enum.exps, (GFunc)exp_print, NULL);
                        print_rparen();
                  }
                  print_rparen();
                  break;
            case EXP_STRUCT:
                  print_head("struct");
                  symbol_print(exp->lit_struct.id);
                  print_head("field-inits");
                  g_list_foreach(exp->lit_struct.fields, (GFunc)pair_print, NULL);
                  print_rparen();
                  print_rparen();
                  break;
            case EXP_ARRAY:
                  print_head("arr");
                  print_head("exprs");
                  g_list_foreach(exp->lit_array.exps, (GFunc)exp_print, NULL);
                  print_rparen();
                  print_rparen();
                  break;
            case EXP_LOOKUP:
                  print_head("field-lookup");
                  exp_print(exp->lookup.exp);
                  symbol_print(exp->lookup.id);
                  print_rparen();
                  break;
            case EXP_INDEX:
                  print_head("arr-index");
                  exp_print(exp->index.exp);
                  exp_print(exp->index.idx);
                  print_rparen();
                  break;
            case EXP_FN_CALL:
                  print_head("fn-call");
                  symbol_print(exp->fn_call.id);
                  if (exp->fn_call.exps) {
                        print_head("exprs");
                        g_list_foreach(exp->fn_call.exps, (GFunc)exp_print, NULL);
                        print_rparen();
                  }
                  print_rparen();
                  break;
            case EXP_BOX_NEW:
                  print_head("box-new");
                  print_head("exprs");
                  exp_print(exp->exp);
                  print_rparen();
                  print_rparen();
                  break;
            case EXP_MATCH:
                  print_head("match");
                  exp_print(exp->match.exp);
                  print_head("match-arms");
                  g_list_foreach(exp->match.arms, (GFunc)pair_print, NULL);
                  print_rparen();
                  print_rparen();
                  break;
            case EXP_IF:
                  print_head("if");
                  exp_print(exp->if_else.cond);
                  exp_print(exp->if_else.block_true);
                  exp_print(exp->if_else.block_false);
                  print_rparen();
                  break;
            case EXP_WHILE:
                  print_head("while");
                  exp_print(exp->loop_while.cond);
                  exp_print(exp->loop_while.block);
                  print_rparen();
                  break;
            case EXP_LOOP:
                  print_head("loop");
                  exp_print(exp->exp);
                  print_rparen();
                  break;
            case EXP_BLOCK:
                  print_head("block");
                  g_list_foreach(exp->block.stmts, (GFunc)stmt_print, NULL);
                  exp_print(exp->block.exp);
                  print_rparen();
                  break;
            case EXP_UNARY:
                  print_head(op_to_str(exp->unary.op, true, exp->unary.mut));
                  exp_print(exp->unary.exp);
                  print_rparen();
                  break;
            case EXP_BINARY:
                  print_head(op_to_str(exp->binary.op, false, false));
                  exp_print(exp->binary.left);
                  exp_print(exp->binary.right);
                  print_rparen();
                  break;
      }
}

// *** Types ***

static struct type* type_new(int kind) {
      struct type* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct type* type_error(void) {
      static struct type n = {.kind = TYPE_ERROR};
      return &n;
}
struct type* type_ok(void) {
      static struct type n = {.kind = TYPE_OK};
      return &n;
}
struct type* type_unit(void) {
      static struct type n = {.kind = TYPE_UNIT};
      return &n;
}
struct type* type_i32(void) {
      static struct type n = {.kind = TYPE_I32};
      return &n;
}
struct type* type_u8(void) {
      static struct type n = {.kind = TYPE_U8};
      return &n;
}
struct type* type_bool(void) {
      static struct type n = {.kind = TYPE_BOOL};
      return &n;
}
struct type* type_div(void) {
      static struct type n = {.kind = TYPE_DIV};
      return &n;
}
struct type* type_ref(struct type* type) {
      struct type* n = type_new(TYPE_REF);
      n->type = type;
      return n;
}
struct type* type_ref_mut(struct type* type) {
      struct type* n = type_new(TYPE_REF_MUT);
      n->type = type;
      return n;
}
struct type* type_slice(struct type* type) {
      struct type* n = type_new(TYPE_SLICE);
      n->type = type;
      return n;
}
struct type* type_array(struct type* type, int length) {
      struct type* n = type_new(TYPE_ARRAY);
      n->type = type;
      n->length = length;
      return n;
}
struct type* type_box(struct type* type) {
      struct type* n = type_new(TYPE_BOX);
      n->type = type;
      return n;
}
struct type* type_id(Symbol id) {
      struct type* n = type_new(TYPE_ID);
      n->id = id;
      return n;
}
void type_destroy(struct type* type) {
      if (!type) return;

      switch (type->kind) {
            case TYPE_INVALID:
            case TYPE_ERROR:
            case TYPE_OK:
            case TYPE_UNIT:
            case TYPE_I32:
            case TYPE_U8:
            case TYPE_BOOL:
            case TYPE_DIV:
                  return;

            case TYPE_REF:
            case TYPE_REF_MUT:
            case TYPE_SLICE:
            case TYPE_ARRAY:
            case TYPE_BOX:
                  type_destroy(type->type);
      }

      free(type);
}
static void type_print(struct type* type) {
      if (!type) return;

      if (type->kind == TYPE_ERROR
            || type->kind == TYPE_OK
            || type->kind == TYPE_DIV)
            return;

      switch (type->kind) {
            case TYPE_UNIT:
                  print_leaf("type-unit");
                  break;
            case TYPE_I32:
                  print_leaf("type-i32");
                  break;
            case TYPE_U8:
                  print_leaf("type-u8");
                  break;
            case TYPE_BOOL:
                  print_leaf("type-bool");
                  break;
            case TYPE_REF:
                  print_head("type-ref");
                  type_print(type->type);
                  print_rparen();
                  break;
            case TYPE_REF_MUT:
                  print_head("type-ref-mut");
                  type_print(type->type);
                  print_rparen();
                  break;
            case TYPE_SLICE:
                  print_head("type-arr");
                  type_print(type->type);
                  print_rparen();
                  break;
            case TYPE_ARRAY:
                  print_head("type-arr");
                  type_print(type->type);
                  print_leaf("lit-dec");
                  print_rparen();
                  break;
            case TYPE_BOX:
                  print_head("type-box");
                  type_print(type->type);
                  print_rparen();
                  break;
            case TYPE_ID:
                  symbol_print(type->id);
                  break;
      }
}

// TODO
void type_print_pretty(struct type* type) {
      if (!type) return;

      switch (type->kind) {
            case TYPE_ERROR:
                  printf("ERROR!");
                  break;
            case TYPE_OK:
                  printf("ok!");
                  break;
            case TYPE_DIV:
                  printf("!");
                  break;
            case TYPE_UNIT:
                  printf("()");
                  break;
            case TYPE_I32:
                  printf("i32");
                  break;
            case TYPE_U8:
                  printf("u8");
                  break;
            case TYPE_BOOL:
                  printf("bool");
                  break;
            case TYPE_REF:
                  // TODO
                  printf("&");
                  break;
            case TYPE_REF_MUT:
                  // TODO
                  printf("&mut");
                  break;
            case TYPE_SLICE:
                  // TODO
                  printf("arr");
                  break;
            case TYPE_ARRAY:
                  // TODO
                  printf("arr");
                  break;
            case TYPE_BOX:
                  // TODO
                  printf("Box");
                  break;
            case TYPE_ID:
                  printf("%s", symbol_to_str(type->id));
                  break;
      }
}

// *** Pairs ***

static struct pair* pair(int kind) {
      struct pair* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      return n;
}
struct pair* field_def(Symbol id, struct type* type) {
      struct pair* n = pair(PAIR_FIELD_DEF);
      n->field_def.id = id;
      n->field_def.type = type;
      return n;
}
struct pair* ctor_def(Symbol id, GList* types) {
      struct pair* n = pair(PAIR_CTOR_DEF);
      n->ctor_def.id = id;
      n->ctor_def.types = types;
      return n;
}
struct pair* param(struct pat* pat, struct type* type) {
      struct pair* n = pair(PAIR_PARAM);
      n->param.pat = pat;
      n->param.type = type;
      return n;
}
struct pair* field_pat(Symbol id, struct pat* pat) {
      struct pair* n = pair(PAIR_FIELD_PAT);
      n->field_pat.id = id;
      n->field_pat.pat = pat;
      return n;
}
struct pair* field_init(Symbol id, struct exp* exp) {
      struct pair* n = pair(PAIR_FIELD_INIT);
      n->field_init.id = id;
      n->field_init.exp = exp;
      return n;
}
struct pair* match_arm(GList* pats, struct exp* block) {
      struct pair* n = pair(PAIR_MATCH_ARM);
      n->match_arm.pats = pats;
      n->match_arm.block = block;
      return n;
}
void pair_destroy(struct pair* pair) {
      if (!pair) return;
      switch (pair->kind) {
            case PAIR_FIELD_DEF:
                  type_destroy(pair->field_def.type);
                  break;
            case PAIR_CTOR_DEF:
                  g_list_free_full(pair->ctor_def.types, (GDestroyNotify)type_destroy);
                  break;
            case PAIR_PARAM:
                  pat_destroy(pair->param.pat);
                  type_destroy(pair->param.type);
                  break;
            case PAIR_FIELD_PAT:
                  pat_destroy(pair->field_pat.pat);
                  break;
            case PAIR_FIELD_INIT:
                  exp_destroy(pair->field_init.exp);
                  break;
            case PAIR_MATCH_ARM:
                  g_list_free_full(pair->match_arm.pats, (GDestroyNotify)pat_destroy);
                  exp_destroy(pair->match_arm.block);
                  break;
      }
      free(pair);
}
static void pair_print(struct pair* pair) {
      if (!pair) return;

      switch (pair->kind) {
            case PAIR_FIELD_DEF:
                  print_head("field-def");
                  symbol_print(pair->field_def.id);
                  type_print(pair->field_def.type);
                  print_rparen();
                  break;
            case PAIR_CTOR_DEF:
                  print_head("enum-ctor-def");
                  symbol_print(pair->ctor_def.id);
                  if (pair->ctor_def.types) {
                        print_head("enum-ctor-params");
                        g_list_foreach(pair->ctor_def.types, (GFunc)type_print, NULL);
                        print_rparen();
                  }
                  print_rparen();
                  break;
            case PAIR_PARAM:
                  print_head("fn-param");
                  pat_print(pair->param.pat);
                  type_print(pair->param.type);
                  print_rparen();
                  break;
            case PAIR_FIELD_PAT:
                  print_head("pat-field");
                  symbol_print(pair->field_pat.id);
                  pat_print(pair->field_pat.pat);
                  print_rparen();
                  break;
            case PAIR_FIELD_INIT:
                  print_head("field-init");
                  symbol_print(pair->field_init.id);
                  exp_print(pair->field_init.exp);
                  print_rparen();
                  break;
            case PAIR_MATCH_ARM:
                  print_head("match-arm");
                  print_head("pats");
                  g_list_foreach(pair->match_arm.pats, (GFunc)pat_print, NULL);
                  print_rparen();
                  exp_print(pair->match_arm.block);
                  print_rparen();
                  break;
      }
}

//check if main exists
void maincheck(void)
{
	if (test == 0)
	{
		printf("Error, no main function.\n");
		exit(0);
	}
	else if (test2 == 1)
	{
		printf("Error, invalid main. Main has no paramaters\n");
		exit(0);
	}
	else if (test3 == 1)
	{
		printf("Error, invalid main. Main has no type\n");
		exit(0);
	}
	else
		printf("Ok.\n");
/*
	int k = 0;
	int test = 0;
	const char *testing;
	for (k = 0; k <= i; k++)
	{
		testing = functDefs[k];
		if (strcmp(testing[k], "main") == 0)
			test = 1;
	}	
	if (test == 0)
	{
		printf("Error, no main function\n");
	}*/
}

