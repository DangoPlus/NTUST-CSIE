#include <glib.h>
#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "ast.h"
#include "codegen.h"
#include "symbol.h"

void print_llvm_type(struct type*);
void gen_item(struct item* item);
void gen_stmt(struct stmt* stmt);


void print_llvm_type(struct type* type){
	switch (type->kind) {
		case TYPE_UNIT: 
			printf("void");
			break;
		case TYPE_I32:
			printf("i32");
			break;
		case TYPE_U8:
			printf("u8");
			break;
		case TYPE_BOOL:
			printf("i1");
			break;
		case TYPE_ARRAY:
			printf("[%d x ", type->length);
			print_llvm_type(type->type);
			printf("]");
			break;
			//call print_llvm_type for the element type

}

void gen_crate(Glist* crate) {
	g_list_foreach(crate, (GFunc)gen_item, NULL);
}

#define UNIT 0
static int curr_reg = 1;

int gen_exp(struct exp* exp) {
	switch (exp->kind) {
		case EXP_BLOCK:
			//gen_stmt on the statements
			g_list_foreach(exp->block.stmts, (GFunc)gen_stmt, NULL);
			return gen_exp(exp->block.exp);
		break;
		case EXP_BINARY: {
			int left = gen_exp(exp->binary.left);
			int right = gen_exp(exp->binary.right);
			const char* op = "";
			if (!strcmp(exp->binary.op, "+")) op = "add";
			if (!strcmp(exp->binary.op, "-")) op = "sub";
			if (!strcmp(exp->binary.op, "*")) op = "mul";
			if (!strcmp(exp->binary.op, "/")) op = "div";
			int result = curr_reg++;
			printf("%%%d = %s i32 %%%d, %%%d\n", result, op, left, right); 
			return result;
		break;
		}
		case EXP_UNIT: { 
			return UNIT;
		break;
		}
		case EXP_ID: {
			int result = curr_reg++;
			printf("%%%d = load ", result);
			print_llvm_type(exp->type);
			printf("* %%%s\n", symbol_to_str(exp->id));
			return result;
		break;
		}
		default: {
			puts("unknown expression!\n");
			exp_print(exp);
			return UNIT;
	}
}

void gen_stmt(struct stmt* stmt){
	switch (stmt->kind) {
		case STMT_RETURN: {
			int r = gen_exp(stmt->exp);
			if (r) {
				printf("ret ");
				printf_llvm_type(stmt->exp->type)
				printf(" %%%d\n", r);
			}
			else {
				printf("ret void\n");
			}
		break;
		}
	}
}

void gen_item(struct item* item) {
	switch (item->kind) {
		case ITEM_FN_DEF: {
			printf("define ");
			print_llvm_type(item->fn_def.type);
			printf(" @%s(", symbol_to_str(item->id));
			
			for (GList* n = item->fn_def.type->type->params;
				n; n = n->next){
				struct pair* p = n->data;
				print_llvm_type(p->param.type);
				printf(" %%p.%s", symbol_to_str(p->param.paat->bind.id));
				if (n->next) printf(", ");
			}
			printf(") {");
			for (GList* n = item->fn_def.type->type->params;
				n; n = n->next){
				struct pair* p = n->data;
				printf(" %%%s = alloca ", symbol_to_str(p->param.pat->bind.id));
				print_llvm_type(p->param.type);
				printf("\nstore ");
				print_llvm_type(p->param.type);
				printf(" %%p.%s, ", symbol_to_str(p->param.pat->bind.id));
				print_llvm_type(p->param.type);
				printf(" %%%s\n", symbol_to_str(p->param.pat->bind.id));
			}
			// put parameters on stack
			gen_exp(item->block);
			printf("}\n");
			break;
		}
		case ITEM_STRUCT_DEF:{
			printf("%%S.%s = type {", symbol_to_str(item->id));
			//for each type, rust_to_llvm(type)
			//print comma
			printf("}\n");
			break;
		}	
		//case ITEM_ENUM_DEF:
	}
}


