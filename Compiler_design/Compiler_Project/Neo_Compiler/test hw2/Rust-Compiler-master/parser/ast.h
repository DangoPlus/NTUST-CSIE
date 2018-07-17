#ifndef AST_H_
#define AST_H_

#include <glib.h>

/*This file contains the enumeration for ast.c and parser.y*/

enum {
        AST_INVALID,
        AST_ADD,
        AST_SUB,
        AST_MUL,
        AST_DIV,
        AST_NUM,
        AST_NEG,
        AST_MOD,
        AST_OR,
        AST_AND,
        AST_EQ,
        AST_LT,
        AST_GT,
        AST_LTE,
        AST_GTE,
        ITEM,
        ITEMS,
        FN_DEF,
        FN_PARAM,
        FN_PARAMS,
        BLOCK,
        ENUM_DEF,
        ENUM_FIELD,
        ENUM_FIELDS,
        ENUM_FIELD_TYPES,
        ENUM_PAT,
        ENUM_LIT,
        ENUM_CTOR,
        ENUM_CTOR_PARAMS,
        EXPRS,
        STRUCT_LIT,
        STRUCT_DEF,
        STRUCT_FIELDS,
        STRUCT_FIELD,
        STRUCT_LIT_FIELDS,
        STRUCT_LIT_FIELD,
        STRUCT_PAT,
        RETURN_EXP,
        LET_TYPE,
        LET_ASSIGN,
        LET_TYPE_ASSIGN,
        ARR_INDEX,
        ARRAY_ELEMS,
        FN_CALL,
        EMP_FN_CALL,
        REF_MUT,
        UNIT,
        UNIT_TYPE,
        UNIT_PAT,
        ARR_PAT,
        ARR_TYPE,
        ARR_LIT,
        PATS,
        PAT_LIT,
        BOX_NEW,
        BOX_NEW_EXP,
        MATCH_PARAM,
        MATCH_PARAMS,
        PAT_REF,
        PAT_REF_MUT,
        PAT_MUT,
        PAT_ID,
        PAT_WILD,
        PAT,
        TR,
        FA,
        RET,
        RET_EXP,
        ASSIGN_SUB, 
        ASSIGN_ADD,
        ASSIGN_MUL,
        ASSIGN_DIV, 
        ASSIGN_REM, 
        ASSIGN_EQU,
        LOOKUP,
        ADD_,
        SUB_,
        MUL_,
        DIV_,
        REM_,
        EQU_,
        NEQU_,
        OR_,
        AND_,
        MINUS,
        LESS_,
        GREATER_,
        LESSEQU_,
        GREATEREQU_,
        ADDRESS,
        ADDRESS_MUT,
        DEREF_,
        DEREF_PAT,
        PAT_FIELD,
        PAT_FIELDS

};

struct ast {
      int kind;
      union {
            int num;
            char* str;
            char ch;
      };
};

GNode * create_node(int, void*);

void print(GNode *);

#endif
