#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "ast.h"
#include "type.h"

static struct item* item_new(int kind);

static struct stmt* stmt_new(int kind);

static struct pat* pat_new(int kind);

static struct exp* exp_new(int kind);

// *** Crate ***

void crate_destroy(GList* items) {
      g_list_free_full(items, (GDestroyNotify)item_destroy);
}

// *** Items ***

static struct item* item_new(int kind) {
      struct item* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      n->type = type_invalid();
      return n;
}
struct item* item_fn_def(Symbol id, GList* params, struct type* ret, struct exp* block) {
      struct item* n = item_new(ITEM_FN_DEF);
      n->id = id;
      n->fn_def.type = type_fn(params, ret);
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

      type_destroy(item->type);

      switch (item->kind) {
            case ITEM_FN_DEF:
                  type_destroy(item->fn_def.type);
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

struct type* item_get_field_type(struct item* struct_def, Symbol id) {
      assert(id.kind == SYMBOL_FIELD);

      if (!struct_def) return type_error();
      for (GList* f = struct_def->struct_def.fields; f; f = f->next) {
            struct pair* field_def = f->data;
            if (id.value == field_def->field_def.id.value)
                  return field_def->field_def.type;
      }
      return type_error();
}

// *** Statements ***

static struct stmt* stmt_new(int kind) {
      struct stmt* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      n->type = type_invalid();
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

      type_destroy(stmt->type);

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

// *** Expressions ***

static struct exp* exp_new(int kind) {
      struct exp* n = calloc(1, sizeof(*n));
      assert(n);
      n->kind = kind;
      n->type = type_invalid();
      return n;
}
struct exp* exp_u8(int num) {
      struct exp* n = exp_new(EXP_U8);
      n->num = num;
      n->type = type_u8();
      return n;
}
struct exp* exp_i32(int num) {
      struct exp* n = exp_new(EXP_I32);
      n->num = num;
      n->type = type_i32();
      return n;
}
struct exp* exp_str(char* str) {
      struct exp* n = exp_new(EXP_STR);
      n->str = str;
      n->type = type_ref(type_slice(type_u8()));
      return n;
}
struct exp* exp_true(void) {
      static struct exp n = {.kind = EXP_TRUE};
      n.type = type_bool();
      return &n;
}
struct exp* exp_false(void) {
      static struct exp n = {.kind = EXP_FALSE};
      n.type = type_bool();
      return &n;
}
struct exp* exp_unit(void) {
      static struct exp n = {.kind = EXP_UNIT};
      n.type = type_unit();
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

      type_destroy(exp->type);

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

bool exp_is_addrof(struct exp* exp) {
      return exp && (
            !strcmp(exp->unary.op, "&")
      );
}

bool exp_is_arith(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "+")
            || !strcmp(exp->binary.op, "-")
            || !strcmp(exp->binary.op, "*")
            || !strcmp(exp->binary.op, "/")
            || !strcmp(exp->binary.op, "%")
      );
}

bool exp_is_assign(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "=")
      );
}

bool exp_is_cmp_assign(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "+=")
            || !strcmp(exp->binary.op, "-=")
            || !strcmp(exp->binary.op, "*=")
            || !strcmp(exp->binary.op, "/=")
            || !strcmp(exp->binary.op, "%=")
      );
}

bool exp_is_compare(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "<=")
            || !strcmp(exp->binary.op, ">=")
            || !strcmp(exp->binary.op, "<")
            || !strcmp(exp->binary.op, ">")
      );
}

bool exp_is_eq(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "==")
            || !strcmp(exp->binary.op, "!=")
      );
}

bool exp_is_bool(struct exp* exp) {
      return exp && (
            !strcmp(exp->binary.op, "&&")
            || !strcmp(exp->binary.op, "||")
            || !strcmp(exp->unary.op, "!")
      );
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

