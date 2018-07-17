#ifndef RUSTC_AST_H_
#define RUSTC_AST_H_

#include <glib.h>
#include <stdbool.h>
#include "symbol.h"
#include "type.h"

struct item;
struct stmt;
struct exp;
struct pat;
struct pair;

// *** Crate ***

void crate_destroy(GList* items);

// *** Items ***

enum {
      ITEM_INVALID,
      ITEM_FN_DEF,
      ITEM_ENUM_DEF,
      ITEM_STRUCT_DEF,
};

struct item {
      int kind;
      Symbol id;
      struct type* type;
      union {
            struct  {
                  struct type* type;
                  struct exp* block;
            } fn_def;
            struct {
                  GList* ctors;
            } enum_def;
            struct {
                  GList* fields;
            } struct_def;
      };
};

struct item* item_fn_def(Symbol id, GList* params, struct type* ret, struct exp* block);
struct item* item_enum_def(Symbol id, GList* ctors);
struct item* item_struct_def(Symbol id, GList* fields);
void item_destroy(struct item* item);

// Return given a struct def, return type corresponding to the parameter field
// id, type_error() otherwise.
struct type* item_get_field_type(struct item* struct_def, Symbol id);

// *** Statements ***

enum {
      STMT_INVALID,
      STMT_LET,
      STMT_RETURN,
      STMT_EXP,
};

struct stmt {
      int kind;
      struct type* type;
      union {
            struct exp* exp; // STMT_EXP, STMT_RETURN
            struct {
                  struct pat* pat;
                  struct type* type;
                  struct exp* exp;
            } let;
      };
};


struct stmt* stmt_let(struct pat* pat, struct type* type, struct exp* exp);
struct stmt* stmt_return(struct exp* exp);
struct stmt* stmt_exp(struct exp* exp);
void stmt_destroy(struct stmt* stmt);

// *** Patterns ***

enum {
      PAT_INVALID,
      PAT_WILD,
      PAT_UNIT,
      PAT_TRUE,
      PAT_FALSE,
      PAT_REF,
      PAT_BIND,
      PAT_ARRAY,
      PAT_ENUM,
      PAT_STRUCT,
      PAT_I32,
      PAT_U8,
      PAT_STR,
};

struct pat {
      int kind;

      union {
            struct pat* pat; // PAT_REF
            int num; // u8, i32
            char* str; // PAT_STR
            struct {
                  bool ref;
                  bool mut;
                  Symbol id;
            } bind;
            struct {
                  GList* pats;
            } array;
            struct {
                  Symbol eid;
                  Symbol cid;
                  GList* pats;
            } ctor;
            struct {
                  Symbol id;
                  GList* fields;
            } strct;
      };
};

struct pat* pat_wild(void);
struct pat* pat_unit(void);
struct pat* pat_true(void);
struct pat* pat_false(void);
struct pat* pat_ref(struct pat* pat);
struct pat* pat_id(bool ref, bool mut, Symbol id);
struct pat* pat_array(GList* pats);
struct pat* pat_enum(Symbol eid, Symbol cid, GList* pats);
struct pat* pat_struct(Symbol id, GList* fields);
struct pat* pat_i32(int num);
struct pat* pat_u8(int num);
struct pat* pat_str(char* str);
void pat_destroy(struct pat* pat);

// *** Expressions ***

enum {
      EXP_INVALID,
      EXP_U8,
      EXP_I32,
      EXP_TRUE,
      EXP_FALSE,
      EXP_STR,
      EXP_UNIT,
      EXP_ID,
      EXP_ENUM,
      EXP_STRUCT,
      EXP_LOOKUP,
      EXP_INDEX,
      EXP_FN_CALL,
      EXP_ARRAY,
      EXP_BOX_NEW,
      EXP_MATCH,
      EXP_IF,
      EXP_WHILE,
      EXP_LOOP,
      EXP_BLOCK,
      EXP_UNARY,
      EXP_BINARY,
};

struct exp {
      int kind;
      struct type* type;

      union {
            int num;
            char* str;
            Symbol id;
            struct exp* exp; // Box::new, loop, addrof
            struct {
                  Symbol eid;
                  Symbol cid;
                  GList* exps;
            } lit_enum;
            struct {
                  Symbol id;
                  GList* fields;
            } lit_struct;
            struct {
                  GList* exps;
            } lit_array;
            struct {
                  struct exp* exp;
                  Symbol id;
            } lookup;
            struct {
                  struct exp* exp;
                  struct exp* idx;
            } index;
            struct {
                  Symbol id;
                  GList* exps;
            } fn_call;
            struct {
                  struct exp* exp;
                  GList* arms;
            } match;
            struct {
                  struct exp* cond;
                  struct exp* block_true;
                  struct exp* block_false;
            } if_else;
            struct {
                  struct exp* cond;
                  struct exp* block;
            } loop_while;
            struct {
                  GList* stmts;
                  struct exp* exp;
            } block;
            struct {
                  const char* op;
                  bool mut;
                  struct exp* exp;
            } unary;
            struct {
                  const char* op;
                  struct exp* left;
                  struct exp* right;
            } binary;
      };
};

struct exp* exp_u8(int num);
struct exp* exp_i32(int num);
struct exp* exp_str(char* str);
struct exp* exp_true(void);
struct exp* exp_false(void);
struct exp* exp_unit(void);
struct exp* exp_id(Symbol id);
struct exp* exp_enum(Symbol eid, Symbol cid, GList* exps);
struct exp* exp_struct(Symbol id, GList* fields);
struct exp* exp_lookup(struct exp* exp, Symbol id);
struct exp* exp_index(struct exp* exp, struct exp* idx);
struct exp* exp_fn_call(Symbol id, GList* exps);
struct exp* exp_array(GList* exps);
struct exp* exp_box_new(struct exp* exp);
struct exp* exp_match(struct exp* exp, GList* arms);
struct exp* exp_if(struct exp* exp, struct exp* block_true, struct exp* block_false);
struct exp* exp_while(struct exp* exp, struct exp* block);
struct exp* exp_loop(struct exp* block);
struct exp* exp_block(GList* stmts, struct exp* exp);
struct exp* exp_unary(const char* op, struct exp* exp);
struct exp* exp_addrof_mut(struct exp* exp);
struct exp* exp_binary(const char* op, struct exp* left, struct exp* right);
void exp_destroy(struct exp* exp);

// Test for various classes of unary/binary expressions.
bool exp_is_addrof(struct exp*);          // &
bool exp_is_arith(struct exp*);           // +, -, *, /, %
bool exp_is_assign(struct exp*);          // =
bool exp_is_cmp_assign(struct exp*);      // +=, -=, *=, /=, %=
bool exp_is_compare(struct exp*);         // <=, >=, <, >
bool exp_is_eq(struct exp*);              // ==, !=
bool exp_is_bool(struct exp*);            // !, &&, ||

// *** Pairs ***

enum {
      PAIR_INVALID,
      PAIR_FIELD_DEF,
      PAIR_CTOR_DEF,
      PAIR_PARAM,
      PAIR_FIELD_PAT,
      PAIR_FIELD_INIT,
      PAIR_MATCH_ARM,
};

struct pair {
      int kind;
      union {
            struct {
                  Symbol id;
                  struct type* type;
            } field_def;
            struct {
                  Symbol id;
                  GList* types;
            } ctor_def;
            struct {
                  struct pat* pat;
                  struct type* type;
            } param;
            struct {
                  Symbol id;
                  struct pat* pat;
            } field_pat;
            struct {
                  Symbol id;
                  struct exp* exp;
            } field_init;
            struct {
                  GList* pats;
                  struct exp* block;
            } match_arm;
      };
};

struct pair* field_def(Symbol id, struct type* type);
struct pair* ctor_def(Symbol id, GList* types);
struct pair* param(struct pat* pat, struct type* type);
struct pair* field_pat(Symbol id, struct pat* pat);
struct pair* field_init(Symbol id, struct exp* exp);
struct pair* match_arm(GList* pats, struct exp* block);
void pair_destroy(struct pair* pair);

#endif
