#include "ast.h"
#include <stdlib.h>
#include <stdio.h>
#include <glib.h>
#include "parser.h"

//create an ast node that contains a "kind" field that stores the enumeration
GNode * create_node(int kind, void *val){
        struct ast * ast = malloc(sizeof(*ast));
        ast->kind = kind;
        switch(kind){
                case ID: 
                case STRING: ast->str = (char*)val;
                case CHAR: ast->ch = (char)val;
                case BOOL: ast->num = (int)val;
                default: break;
        }
    
        return g_node_new((void *)ast);
    
}

//traverse down the tree and print out results with node depth
void print(GNode *node) {
    
    struct ast * ast = (struct ast*)(node->data);
    int kind = ast->kind;
    
    guint indent = g_node_depth(node);
    int i;
    printf("\n");
    for ( i=1; i<indent; i++) 
        printf("    ");
        
    printf("(");
    switch (kind) {
        case CRATE: printf("crate"); break;
        case ITEM: break;
        case ITEMS: printf("itmes"); break;
        
        case FN_DEF: printf("fn-def"); break;
        case FN_PARAM: printf("fn-param"); break;
        case FN_PARAMS: printf("fn-params"); break;

        case FN_CALL: printf("fn-call"); break;
        case EMP_FN_CALL: break;
        case STRUCT_LIT: printf("struct"); break;
        case STRUCT_LIT_FIELDS: printf("field-inits"); break;
        case STRUCT_LIT_FIELD: printf("field-init"); break;
        case STRUCT_DEF: printf("struct-def"); break;
        case STRUCT_FIELDS: printf("field-defs"); break;
        case STRUCT_FIELD: printf("field-def"); break;
        case STRUCT_PAT: printf("pat-struct"); break;
        case ENUM_DEF: printf("enum-def"); break;
        case ENUM_FIELDS: printf("enum-ctor-defs"); break;
        case ENUM_FIELD: printf("enum-ctor-def"); break;
        case ENUM_PAT: printf("enum-pat"); break;
        case ENUM_CTOR: printf("enum-ctor"); break;
        case ENUM_CTOR_PARAMS: printf("pat-enum-ctor-params"); break;
        case ENUM_LIT: printf("enum"); break;
        case EXPRS: printf("exprs"); break;
        case ID: 
                printf("id\n"); 
                for (i=1; i<indent+1; i++) 
                        printf("    ");
                printf("(%s)", ast->str);
                break;
        case PAT_ID: printf("pat-id"); break;
        case PAT_MUT: printf("pat-mut-id"); break;
        case BLOCK: printf("block"); break;
        case I32: printf("type-i32"); break;
        case BOOL: printf("type-bool"); break;
        case LOOP: printf("loop"); break;
        case RET: printf("return"); break;
        case RET_EXP: printf("return"); break;
        case BOX_NEW: printf("box-new"); break;
        case BOX_NEW_EXP: printf("exprs"); break;
        case BOX: printf("type-box"); break;
        case LITDEC: printf("lit-dec"); break;
        case LITSTR: printf("lit-str"); break;
        case LITCHAR: printf("lit-char"); break;
        case TR: printf("true"); break;
        case FA: printf("false"); break;
        case LOOKUP: printf("field-lookup"); break;
        case LET: printf("let"); break;
        case ADD_: printf("add"); break;
        case SUB_: printf("sub"); break;
        case MUL_: printf("mul"); break;
        case DIV_: printf("div"); break;
        case AND_: printf("and"); break;
        case OR_: printf("or"); break;
        case EQU_: printf("eq"); break;
        case NEQU_: printf("neq"); break;
        case MINUS: printf("neg"); break;
        case LESS_: printf("lt"); break;
        case GREATER_: printf("gt"); break;
        case LESSEQU_: printf("leq"); break;
        case GREATEREQU_: printf("geq"); break;
        case REM_: printf("rem"); break;
        case NOT: printf("not"); break;
        case ADDRESS: printf("addr-of"); break;
        case ADDRESS_MUT: printf("addr-of-mut"); break;
        case DEREF_: printf("deref"); break;
        case DEREF_PAT: printf("pat-deref"); break;
        case PAT_REF: printf("pat-ref-id"); break;
        case PAT_REF_MUT: printf("pat-ref-mut-id"); break;
        case REF: printf("type-ref"); break;
        case ARR_TYPE: printf("type-arr"); break;
        case ARR_LIT: printf("arr"); break;
        case ARR_INDEX: printf("arr-index"); break;
        case ARR_PAT: printf("pat-arr"); break;
        case ARRAY_ELEMS: printf("pat-arr-elems"); break;
        case IF: printf("if"); break;
        case WHILE: printf("while"); break;
        case UNIT: printf("unit"); break;
        case UNIT_TYPE: printf("unit-type"); break;
        case UNIT_PAT: printf("pat-unit"); break;
        case PATS: printf("pats"); break;
        case PAT_LIT: printf("pat-lit"); break;
        case PAT_WILD: printf("pat-wild"); break;
        case PAT_FIELDS: printf("pat-fields"); break;
        case PAT_FIELD: printf("pat-field"); break;
        case MATCH: printf("match"); break;
        case MATCH_PARAMS: printf("match-arms"); break;
        case MATCH_PARAM: printf("match-arm"); break;
        default: printf("Error!\n"); break;
        }
        
        GNode* child = node->children;
        while(child){
                print(child);
                child = child->next;
        }
        printf(")");
}
