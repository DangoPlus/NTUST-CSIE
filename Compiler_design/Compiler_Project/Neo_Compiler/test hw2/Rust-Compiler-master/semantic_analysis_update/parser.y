%code top {

#include <glib.h>
#include "ast.h"
#include "frontend.h"

extern int yylex(void);

}

%code requires {

#include <glib.h>
#include "ast.h"
#include "type.h"

}

%union {
      char* str;
      int num;

      GList* list;

      struct exp* exp;
      struct item* item;
      struct stmt* stmt;
      struct pat* pat;
      struct type* type;

      struct pair* pair;
}

%expect 0
%define parse.error verbose

%token T_UNKNOWN
%token T_LEQ "<="
%token T_EQEQ "=="
%token T_NEQ "!="
%token T_GEQ ">="
%token T_ANDAND "&&"
%token T_OROR "||"
%token T_MINUSEQ "-="
%token T_PLUSEQ "+="
%token T_MULEQ "*="
%token T_DIVEQ "/="
%token T_MODEQ "%="
%token T_COLONCOLON "::"
%token T_MINUSGT "->"
%token T_EQGT "=>"
%token T_IF "if"
%token T_ELSE "else"
%token T_ENUM "enum"
%token T_FN "fn"
%token T_LET "let"
%token T_MATCH "match"
%token T_MUT "mut"
%token T_REF "ref"
%token T_RETURN "return"
%token T_STRUCT "struct"
%token T_TRUE "true"
%token T_FALSE "false"
%token T_WHILE "while"
%token T_LOOP "loop"
%token T_NEW "new"
%token T_BOX "Box"
%token T_I32 "i32"
%token T_U8 "u8"
%token T_BOOL "bool"
%token <num> T_LIT_U8 T_LIT_I32
%token <str> T_LIT_STR T_ID

%type <list> crate items field_defs ctor_defs types params pats
             pat_fields stmts exps field_inits arms pats_or
%type <item> item
%type <pair> field_def param pat_field field_init arm ctor_def
%type <pat> pat
%type <type> type
%type <stmt> stmt
%type <exp> exp single_exp block

%left '=' "-=" "+=" "*=" "/=" "%="
%left "||"
%left "&&"
%left ">=" "<=" '>' '<'
%left "!=" "=="
%left '-' '+'
%left '*' '/' '%'
%precedence '{' '[' '.'
%precedence UNARY

%%

crate : items                                    { parse_done($1); }

items : item                                     { $$ = g_list_append(NULL, $1); }
      | items item                               { $$ = g_list_append($1, $2); }

item  : "fn" T_ID '(' params ')' "->" type block { $$ = item_fn_def(symbol_var($2), $4, $7, $8); }
      | "fn" T_ID '(' params ')' "->" '!' block  { $$ = item_fn_def(symbol_var($2), $4, type_div(), $8); }
      | "fn" T_ID '(' params ')' block           { $$ = item_fn_def(symbol_var($2), $4, type_unit(), $6); }
      | "fn" T_ID '(' ')' "->" type block        { $$ = item_fn_def(symbol_var($2), NULL, $6, $7); }
      | "fn" T_ID '(' ')' "->" '!' block         { $$ = item_fn_def(symbol_var($2), NULL, type_div(), $7); }
      | "fn" T_ID '(' ')' block                  { $$ = item_fn_def(symbol_var($2), NULL, type_unit(), $5); }
      | "enum" T_ID '{' ctor_defs '}'            { $$ = item_enum_def(symbol_type($2), $4); }
      | "struct" T_ID '{' field_defs '}'         { $$ = item_struct_def(symbol_type($2), $4); }

field_defs
      : field_def                                { $$ = g_list_append(NULL, $1); }
      | field_defs ',' field_def                 { $$ = g_list_append($1, $3); }

field_def
      : T_ID ':' type                            { $$ = field_def(symbol_field($1), $3); }

ctor_defs
      : ctor_def                                 { $$ = g_list_append(NULL, $1); }
      | ctor_defs ',' ctor_def                   { $$ = g_list_append($1, $3); }

ctor_def
      : T_ID                                     { $$ = ctor_def(symbol_ctor($1), NULL); }
      | T_ID '(' types ')'                       { $$ = ctor_def(symbol_ctor($1), $3); }

types : type                                     { $$ = g_list_append(NULL, $1); }
      | types ',' type                           { $$ = g_list_append($1, $3); }

params: param                                    { $$ = g_list_append(NULL, $1); }
      | params ',' param                         { $$ = g_list_append($1, $3); }

param : pat ':' type                             { $$ = param($1, $3); }

pat   : '_'                                      { $$ = pat_wild(); }
      | '&' pat                                  { $$ = pat_ref($2); }
      | '(' ')'                                  { $$ = pat_unit(); }
      | '[' pats ']'                             { $$ = pat_array($2); }
      | T_ID '{' pat_fields '}'                  { $$ = pat_struct(symbol_type($1), $3); }
      | T_ID "::" T_ID                           { $$ = pat_enum(symbol_type($1), symbol_ctor($3), NULL); }
      | T_ID "::" T_ID '(' pats ')'              { $$ = pat_enum(symbol_type($1), symbol_ctor($3), $5); }
      | T_ID                                     { $$ = pat_id(0, 0, symbol_var($1)); }
      | "ref" T_ID                               { $$ = pat_id(1, 0, symbol_var($2)); }
      | "ref" "mut" T_ID                         { $$ = pat_id(1, 1, symbol_var($3)); }
      | "mut" T_ID                               { $$ = pat_id(0, 1, symbol_var($2)); }
      | "true"                                   { $$ = pat_true(); }
      | "false"                                  { $$ = pat_false(); }
      | T_LIT_U8                                 { $$ = pat_u8($1); }
      | T_LIT_I32                                { $$ = pat_i32($1); }
      | T_LIT_STR                                { $$ = pat_str($1); }
      | '-' T_LIT_I32                            { $$ = pat_i32(-$2); }

pats
      : pat                                      { $$ = g_list_append(NULL, $1); }
      | pats ',' pat                             { $$ = g_list_append($1, $3); }

pats_or
      : pat                                      { $$ = g_list_append(NULL, $1); }
      | pats_or '|' pat                          { $$ = g_list_append($1, $3); }

pat_field
      : T_ID ':' pat                             { $$ = field_pat(symbol_field($1), $3); }

pat_fields
      : pat_field                                { $$ = g_list_append(NULL, $1); }
      | pat_fields ',' pat_field                 { $$ = g_list_append($1, $3); }

type  : T_ID                                     { $$ = type_id(symbol_type($1)); }
      | '&' type                                 { $$ = type_ref($2); }
      | '&' "mut" type                           { $$ = type_ref_mut($3); }
      | '[' type ']'                             { $$ = type_slice($2); }
      | '[' type ';' T_LIT_I32 ']'               { $$ = type_array($2, $4); }
      | '(' ')'                                  { $$ = type_unit(); }
      | "i32"                                    { $$ = type_i32(); }
      | "u8"                                     { $$ = type_u8(); }
      | "bool"                                   { $$ = type_bool(); }
      | "Box" '<' type '>'                       { $$ = type_box($3); }

block : '{' '}'                                  { $$ = exp_block(NULL, exp_unit()); }
      | '{' stmts '}'                            { $$ = exp_block($2, exp_unit()); }
      | '{' stmts exp '}'                        { $$ = exp_block($2, $3); }
      | '{' exp '}'                              { $$ = exp_block(NULL, $2); }

stmts : stmt                                     { $$ = g_list_append(NULL, $1); }
      | stmts stmt                               { $$ = g_list_append($1, $2); }

stmt  : "let" pat ':' type '=' exp ';'           { $$ = stmt_let($2, $4, $6); }
      | "let" pat '=' exp ';'                    { $$ = stmt_let($2, NULL, $4); }
      | "let" pat ':' type ';'                   { $$ = stmt_let($2, $4, NULL); }
      | "return" ';'                             { $$ = stmt_return(exp_unit()); }
      | "return" exp ';'                         { $$ = stmt_return($2); }
      | exp ';'                                  { $$ = stmt_exp($1); }

exps  : exp                                      { $$ = g_list_append(NULL, $1); }
      | exps ',' exp                             { $$ = g_list_append($1, $3); }

single_exp
      : T_LIT_U8                                 { $$ = exp_u8($1); }
      | T_LIT_I32                                { $$ = exp_i32($1); }
      | "true"                                   { $$ = exp_true(); }
      | "false"                                  { $$ = exp_false(); }
      | T_LIT_STR                                { $$ = exp_str($1); }
      | T_ID                                     { $$ = exp_id(symbol_var($1)); }
      | T_ID "::" T_ID                           { $$ = exp_enum(symbol_type($1), symbol_ctor($3), NULL); }
      | T_ID "::" T_ID '(' exps ')'              { $$ = exp_enum(symbol_type($1), symbol_ctor($3), $5); }
      | T_ID '{' field_inits '}'                 { $$ = exp_struct(symbol_type($1), $3); }
      | exp '.' T_ID                             { $$ = exp_lookup($1, symbol_field($3)); }
      | exp '[' exp ']'                          { $$ = exp_index($1, $3); }
      | T_ID '(' ')'                             { $$ = exp_fn_call(symbol_var($1), NULL); }
      | T_ID '(' exps ')'                        { $$ = exp_fn_call(symbol_var($1), $3); }
      | '[' exps ']'                             { $$ = exp_array($2); }
      | '(' ')'                                  { $$ = exp_unit(); }
      | '(' exp ')'                              { $$ = $2; }
      | "Box" "::" "new" '(' exp ')'             { $$ = exp_box_new($5); }
      | "match" '(' exp ')' '{' arms '}'         { $$ = exp_match($3, $6); }
      | "if" '(' exp ')' block                   { $$ = exp_if($3, $5, NULL); }
      | "if" '(' exp ')' block "else" block      { $$ = exp_if($3, $5, $7); }
      | "while" '(' exp ')' block                { $$ = exp_while($3, $5); }
      | "loop" block                             { $$ = exp_loop($2); }
      | block

exp   : single_exp
      | %prec UNARY '-' exp                      { $$ = exp_unary("-", $2); }
      | %prec UNARY '!' exp                      { $$ = exp_unary("!", $2); }
      | %prec UNARY '*' exp                      { $$ = exp_unary("*", $2); }
      | %prec UNARY '&' exp                      { $$ = exp_unary("&", $2); }
      | %prec UNARY '&' "mut" exp                { $$ = exp_addrof_mut($3); }
      | exp '=' exp                              { $$ = exp_binary("=", $1, $3); }
      | exp "-=" exp                             { $$ = exp_binary("-=", $1, $3); }
      | exp "+=" exp                             { $$ = exp_binary("+=", $1, $3); }
      | exp "*=" exp                             { $$ = exp_binary("*=", $1, $3); }
      | exp "/=" exp                             { $$ = exp_binary("/=", $1, $3); }
      | exp "%=" exp                             { $$ = exp_binary("%=", $1, $3); }
      | exp "||" exp                             { $$ = exp_binary("||", $1, $3); }
      | exp "&&" exp                             { $$ = exp_binary("&&", $1, $3); }
      | exp "==" exp                             { $$ = exp_binary("==", $1, $3); }
      | exp "!=" exp                             { $$ = exp_binary("!=", $1, $3); }
      | exp '<' exp                              { $$ = exp_binary("<", $1, $3); }
      | exp '>' exp                              { $$ = exp_binary(">", $1, $3); }
      | exp "<=" exp                             { $$ = exp_binary("<=", $1, $3); }
      | exp ">=" exp                             { $$ = exp_binary(">=", $1, $3); }
      | exp '+' exp                              { $$ = exp_binary("+", $1, $3); }
      | exp '-' exp                              { $$ = exp_binary("-", $1, $3); }
      | exp '*' exp                              { $$ = exp_binary("*", $1, $3); }
      | exp '/' exp                              { $$ = exp_binary("/", $1, $3); }
      | exp '%' exp                              { $$ = exp_binary("%", $1, $3); }

field_inits
      : field_init                               { $$ = g_list_append(NULL, $1); }
      | field_inits ',' field_init               { $$ = g_list_append($1, $3); }

field_init
      : T_ID ':' exp                             { $$ = field_init(symbol_field($1), $3); }

arms  : arm                                      { $$ = g_list_append(NULL, $1); }
      | arms ',' arm                             { $$ = g_list_append($1, $3); }

arm   : pats_or "=>" block                       { $$ = match_arm($1, $3); }
