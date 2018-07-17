%{
#include <stdio.h>
#include <glib.h>
#include "ast.h"

void yyerror(char const* msg);
int yylex(void);

%}

%code requires {
#include <glib.h>
#include "ast.h"
}

%union {
      int num;
      char* str;
      char ch;
      int booll;
      GList* list;
      GNode* node;
}

//important: node names
%type<node> program crate items item funct struct enum block fn_params fn_param    
            stmts stmt type enum_ctor_defs enum_ctor_def if while loop box_new
            let array_index assign match exp exps fn-call lit field_lookup
            pat struct_field_defs struct_field_def ctor-types
            pats match-params match-param name_bind deref array_pat
            enum_pat struct_pat prim_lit comp_lit field
            enum_lit struct_lit id_bind id_binds array_lit assign_type add sub mul div
            rem equal not-equal or and enum_exp minus less greater less-equ greater-equ
            not address address-mut deref-pat pat-fields pat-field enum-ctors array_elems
            

//important: tokens to call from lexer.l
%token<num> LITDEC
%token<str> ID
%token<str> LITSTR
%token<ch> LITCHAR
%token<booll> T F

%token  ABSTRACT ALIGNOF AS BE BOX BREAK CONST CONTINUE CRATE DO ELSE EXTERN FINAL FN FOR IF 
        IMPL IN LET LOOP MACRO_RULES MACRO MATCH MOD MOVE MUT NEW OFFSETOF OVERRIDE PRIV PUB
        PURE REF RETURN SIZEOF STATIC SELF STRUCT SUPER TRAIT TYPEOF TYPE UNSAFE UNSIZED USE VIRTUAL WHERE WHILE YIELD
        BOOL U8 U16 U32 U64 I8 I16 I32 I64 F32 F64 USIZE ISIZE CHAR STR COLON QUALIFIER ELEMENTSELECT RARROW POUNDNOT POUND 
        DOLLAR LBRACK RBRACK LCBRACK RCBRACK COMMA SEMICOLON DIVEQU REMAINEQU REMAINDER ANDEQU LOGICAND AND 
        OREQU LOGICOR INCLUOR EXCOREQU EXCLUSIVEOR LOGICLEFTSHIFTEQU LOGICLEFTSHIFT LOGICRIGHTSHIFTEQU LOGICRIGHTSHIFT
        LESSEQU GREATEREQU LESS GREATER ADDEQU SUBEQU MULEQU LOGICEQU EQU NOTEQU EXCL LPAREN RPAREN ADD SUB MUL DIV DDOT TDOT
        UNKNOWN ENUM STRING DOT NOT
        UNDER

//precedence from low to high
%left COMMA
%right EQU ADDEQU SUBEQU MULEQU DIVEQU REMAINEQU
%left LOGICOR
%left LOGICAND 
%left LOGICEQU NOTEQU
%left LESS GREATER LESSEQU GREATEREQU
%left ADD SUB 
%left MUL DIV REM 
%right NOT EXCL AND
%left DOT


%define parse.error verbose


%%

//use g_node_prepend to build the ast:
//GNode* g_node_prepend(GNode* parent, GNode* node);

program: crate {
        print($1);
        $$ = $1;
        return 0;
        };
    
crate: items {
        GNode * n = create_node(CRATE, NULL);
        g_node_prepend(n, $1);
        $$ = n;
       };

items: item items {
       g_node_prepend($2, $1);
       $$ = $2;
       }
     | item {
       GNode * n = create_node(ITEMS, NULL);
       g_node_prepend(n, $1);
       $$ = n;
       };


item: funct {$$ = $1;}
    | enum {$$ = $1;}
    | struct {$$ = $1;};

funct: FN ID LPAREN fn_params RPAREN block {
       GNode * n = create_node(FN_DEF, NULL);
       g_node_prepend(n, $6);
       g_node_prepend(n, $4);
       g_node_prepend(n, create_node(ID, $2));
       $$ = n;
       }
     | FN ID LPAREN fn_params RPAREN ELEMENTSELECT type block {
       GNode * n = create_node(FN_DEF, NULL);
       g_node_prepend(n, $8);
	     g_node_prepend(n, $7);
	     g_node_prepend(n, $4);
	     g_node_prepend(n, create_node(ID, $2));
	     $$ = n;
       }
     | FN ID LPAREN fn_params RPAREN ELEMENTSELECT EXCL block {
       GNode * n = create_node(FN_DEF, NULL);
       g_node_prepend(n, $8);
 	     g_node_prepend(n, $4);
	     g_node_prepend(n, create_node(ID, $2));
       $$ = n;
       }
     | FN ID LPAREN RPAREN block {
       GNode * n = create_node(FN_DEF, NULL);
       g_node_prepend(n, $5);
       g_node_prepend(n, create_node(ID, $2));
       $$ = n;
       }
     | FN ID LPAREN RPAREN ELEMENTSELECT type block {
     	 GNode * n = create_node(FN_DEF, NULL);
	     g_node_prepend(n, $7);
	     g_node_prepend(n, $6);
	     g_node_prepend(n, create_node(ID, $2));
	     $$ = n;
       }
     | FN ID LPAREN RPAREN ELEMENTSELECT EXCL block {
       GNode * n = create_node(FN_DEF, NULL);
       g_node_prepend(n, $7);
       g_node_prepend(n, create_node(ID, $2));
       $$ = n;
       }; 

block: LCBRACK RCBRACK {
       GNode * n = create_node(BLOCK, NULL);
       $$ = n;
       }
     | LCBRACK stmts RCBRACK {$$ = $2;};

stmts: stmt stmts { g_node_prepend($2, $1); $$ = $2; }
     | stmt { 
       GNode * n = create_node(BLOCK, NULL);
       g_node_prepend(n, $1);
       $$ = n;
       }
     | exp {
       GNode * n = create_node(BLOCK, NULL);
       g_node_prepend(n, $1);
       $$ = n;
       };

stmt: exp SEMICOLON { $$ = $1; }
    | let SEMICOLON { $$ = $1; }
    | RETURN exp SEMICOLON { 
      GNode * n = create_node(RET_EXP, NULL);
      g_node_prepend(n, $2);
      $$ = n;
      }
    | RETURN SEMICOLON {
      GNode * n = create_node(RET, NULL);
      $$ = n;
      };

fn_params: fn_param COMMA fn_params {
           g_node_prepend($3, $1);
           $$ = $3;        
           }
	       | fn_param {
           GNode * n = create_node(FN_PARAMS, NULL);
           g_node_prepend(n, $1);
           $$ = n;
           };

fn_param: pat COLON type {
          GNode * n = create_node(FN_PARAM, NULL);
          g_node_prepend(n, $3);
          g_node_prepend(n, $1);
          $$ = n;
          };

enum: ENUM ID LCBRACK enum_ctor_defs RCBRACK {
      GNode * n = create_node(ENUM_DEF, NULL);
      g_node_prepend(n, $4);
      g_node_prepend(n, create_node(ID, $2));
      $$ = n;
      };

enum_ctor_defs: enum_ctor_def COMMA enum_ctor_defs {
                g_node_prepend($3, $1);
                $$ = $3;
                }
              | enum_ctor_def {
                GNode * n = create_node(ENUM_FIELDS, NULL);
                g_node_prepend(n, $1);
                $$ = n;
                };

enum_ctor_def: ID {
               GNode * n = create_node(ENUM_FIELD, NULL);
               g_node_prepend(n, create_node(ID, $1));
               $$ = n;
               }
             | ID LPAREN ctor-types RPAREN {
               GNode * n = create_node(ENUM_FIELD, NULL);
               g_node_prepend(n, $3);
               g_node_prepend(n, create_node(ID, $1));
               $$ = n;
               };

ctor-types: type COMMA ctor-types {
            g_node_prepend($3, $1);
            $$ = $3;
            }
          | type {
            GNode * n = create_node(ENUM_FIELD_TYPES, NULL);
            g_node_prepend(n, $1);
            $$ = n;
            };

struct: STRUCT ID LCBRACK struct_field_defs RCBRACK {
        GNode * n = create_node(STRUCT_DEF, NULL);
        g_node_prepend(n, $4);
        g_node_prepend(n, create_node(ID, $2));
        $$ = n; 
        };

struct_field_defs: struct_field_def COMMA struct_field_defs {
                   g_node_prepend($3, $1);
                   $$ = $3;
                   }
                 | struct_field_def {
                   GNode * n = create_node(STRUCT_FIELDS, NULL);
                   g_node_prepend(n, $1);
                   $$ = n;
                   };

struct_field_def: ID COLON type {
                  GNode * n = create_node(STRUCT_FIELD, NULL);
                  g_node_prepend(n, $3);
                  g_node_prepend(n, create_node(ID, $1));
                  $$ = n;
                  };

type:  BOOL {$$ = create_node(BOOL, NULL);}
     | BOOL SEMICOLON type{
       GNode * n = create_node(BOOL, NULL);
       g_node_prepend(n, $3);
       $$ = n; 
       }
     | AND type{
       GNode * n = create_node(REF, NULL);
       g_node_prepend(n, $2);
       $$ = n;
       }
     | AND MUT type {
       GNode * n = create_node(REF_MUT, NULL);
       g_node_prepend(n, $3);
       $$ = n; 
       }
     | BOX LESS type GREATER {
       GNode * n = create_node(BOX, NULL);
       g_node_prepend(n, $3);
       $$ = n;
       }
     | ID {$$ = create_node(ID, $1);}
     | LITDEC { $$ = create_node(LITDEC, NULL);}
     | I32 {$$ = create_node(I32, NULL);}
     | I32 SEMICOLON type{
       GNode * n = create_node(I32, NULL);
       g_node_prepend(n, $3);
       $$ = n; 
       }
     | type SEMICOLON LITDEC {
       GNode * n = create_node(LITDEC, NULL);
       g_node_prepend(n, $1);
       $$ = n;
       }
     | U8 {$$ = create_node(U8, NULL);}
     | LPAREN RPAREN {$$ = create_node(UNIT_TYPE, NULL);}
     | LBRACK type RBRACK {
       GNode * n = create_node(ARR_TYPE, NULL);
       g_node_prepend(n, $2);
       $$ = n;
       };

box_new: BOX QUALIFIER NEW LPAREN exp RPAREN {
         GNode * n1 = create_node(BOX_NEW, NULL);
         GNode * n2 = create_node(BOX_NEW_EXP, NULL);
         g_node_prepend(n2, $5);
         g_node_prepend(n1, n2);
         $$ = n1;
         };

let: LET pat {
     GNode * n = create_node(LET, NULL);
     g_node_prepend(n, $2);
     $$ = n;
     }
   | LET pat COLON type {
     GNode * n = create_node(LET, NULL);
     g_node_prepend(n, $4);
     g_node_prepend(n, $2);
     $$ = n;
     }
   | LET pat COLON type EQU exp {
     GNode * n = create_node(LET, NULL);
     g_node_prepend(n, $6);
     g_node_prepend(n, $4);
     g_node_prepend(n, $2);
     $$ = n; 
     }
   | LET pat EQU exp {
     GNode * n = create_node(LET, NULL);
     g_node_prepend(n, $4);
     g_node_prepend(n, $2);
     $$ = n; 
     };

pat: prim_lit {
     GNode * n = create_node(PAT_LIT, NULL);
     g_node_prepend(n, $1);
     $$ = n;
     }
   | name_bind {$$ = $1;}
   | LPAREN RPAREN {$$ = create_node(UNIT_PAT, NULL);}
   | deref-pat {$$ = $1;}
   | array_pat {$$ = $1;}
   | enum_pat {$$ = $1;}
   | struct_pat {$$ = $1;}
   | SUB LITDEC {
     GNode * n = create_node(PAT_LIT, NULL);
     g_node_prepend(n, create_node(LITDEC, NULL));
     $$ = n;
     }
   | UNDER { $$ = create_node(PAT_WILD, NULL);};

deref-pat: AND pat {
           GNode * n = create_node(DEREF_PAT, NULL);
           g_node_prepend(n, $2);
           $$ = n;
           }

name_bind: ID {
           GNode * n = create_node(PAT_ID, NULL);
           g_node_prepend(n, create_node(ID, $1));
           $$ = n;
           }
         | REF ID {
           GNode * n = create_node(PAT_REF, NULL);
           g_node_prepend(n, create_node(ID, $2));
           $$ = n; 
           }
         | REF MUT ID {
           GNode * n = create_node(PAT_REF_MUT, NULL);
           g_node_prepend(n, create_node(ID, $3)); 
           $$ = n; 
           }
         | MUT ID {
           GNode * n = create_node(PAT_MUT, NULL);
           g_node_prepend(n, create_node(ID, $2));
           $$ = n;     
           };

address: AND exp {
         GNode * n = create_node(ADDRESS, NULL);
         g_node_prepend(n, $2);
         $$ = n; 
         };

address-mut: AND MUT exp {
             GNode * n = create_node(ADDRESS_MUT, NULL);
             g_node_prepend(n, $3);
             $$ = n; 
             };

deref: MUL exp {
       GNode * n = create_node(DEREF_, NULL);
       g_node_prepend(n, $2);
       $$ = n; 
       };

array_pat: LBRACK array_elems RBRACK {
           GNode * n = create_node(ARR_PAT, NULL);
           g_node_prepend(n, $2);
           $$ = n; 
           };

array_elems: pat COMMA array_elems {
             g_node_prepend($3, $1);
             $$ = $3;
             }
           | pat {
             GNode * n = create_node(ARRAY_ELEMS, NULL);
             g_node_prepend(n, $1);
             $$ = n;
             };

enum_pat: ID QUALIFIER ID {
          GNode * n1 = create_node(ENUM_PAT, NULL);
          GNode * n2 = create_node(ENUM_CTOR, NULL);
          g_node_prepend(n1, n2);
          g_node_prepend(n2, create_node(ID,$3));
          g_node_prepend(n2, create_node(ID,$1));
          $$ = n1; 
          }
        | ID QUALIFIER ID LPAREN enum-ctors RPAREN {
          GNode * n1 = create_node(ENUM_PAT, NULL);
          GNode * n2 = create_node(ENUM_CTOR, NULL);
          g_node_prepend(n1, $5);
          g_node_prepend(n1, n2);
          g_node_prepend(n2, create_node(ID,$3));
          g_node_prepend(n2, create_node(ID,$1));
          $$ = n1; 
          };

enum-ctors: pat COMMA enum-ctors {
            g_node_prepend($3, $1);
            $$ = $3;
            }
          | pat {
            GNode * n = create_node(ENUM_CTOR_PARAMS, NULL);
            g_node_prepend(n, $1);
            $$ = n;
            };

struct_pat: ID LCBRACK pat-fields RCBRACK {
            GNode * n = create_node(STRUCT_PAT, NULL);
            g_node_prepend(n, $3);
            g_node_prepend(n, create_node(ID, $1));
            $$ = n;
            };

pat-fields: pat-field COMMA pat-fields {
            g_node_prepend($3, $1);
            $$ = $3;
            }
          | pat-field {
            GNode * n = create_node(PAT_FIELDS, NULL);
            g_node_prepend(n, $1);
            $$ = n;
            };

pat-field: ID COLON pat {
           GNode * n = create_node(PAT_FIELD, NULL);
           g_node_prepend(n, $3);
           g_node_prepend(n, create_node(ID, $1));
           $$ = n;
           };

exps: exp COMMA exps {
      g_node_prepend($3, $1);
      $$ = $3;
      }
    | exp {
      GNode * n = create_node(FN_CALL, NULL);
      g_node_prepend(n, $1);
      $$ = n;
      };


match: MATCH LPAREN exp RPAREN LCBRACK match-params RCBRACK {
       GNode * n = create_node(MATCH, NULL);
       g_node_prepend(n, $6);
       g_node_prepend(n, $3);
       $$ = n;
       };

match-params: match-param COMMA match-params {
              g_node_prepend($3, $1);
              $$ = $3;
              }
            | match-param {
              GNode * n = create_node(MATCH_PARAMS, NULL);
              g_node_prepend(n, $1);
              $$ = n;
              };

match-param: pats RARROW block {
             GNode * n = create_node(MATCH_PARAM, NULL);
             g_node_prepend(n, $3);
             g_node_prepend(n, $1);
             $$ = n;
             };

pats: pat INCLUOR pats {
      g_node_prepend($3, $1);
      $$ = $3;
      }
    | pat {
      GNode * n = create_node(PATS, NULL);
      g_node_prepend(n, $1);
      $$ = n;
      }

exp: ID { $$ = create_node(ID, $1); }
   | lit {$$ = $1;}
   | field_lookup {$$ = $1;}
   | array_index {$$ = $1;}
   | assign {$$ = $1;}
   | while {$$ = $1;}
   | loop {$$ = $1;}
   | if {$$ = $1;}
   | match {$$ = $1;}
   | fn-call {$$ = $1;}
   | box_new {$$ = $1;}
   | LPAREN exp RPAREN {$$ = $2;}
   | LPAREN RPAREN {$$ = create_node(UNIT, NULL);}
   | add { $$ = $1;}
   | sub { $$ = $1;}
   | mul { $$ = $1;}
   | div { $$ = $1;}
   | or { $$ = $1;}
   | and { $$ = $1;}
   | equal { $$ = $1;}
   | not-equal { $$ = $1;}
   | minus { $$ = $1;}
   | less  { $$ = $1;}
   | greater  { $$ = $1;}
   | less-equ  { $$ = $1;}
   | greater-equ  { $$ = $1;}
   | rem { $$ = $1;}
   | not { $$ = $1;}
   | address { $$ = $1;}
   | address-mut { $$ = $1;}
   | deref { $$ = $1;};

add: exp ADD exp {
     GNode * n = create_node(ADD_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

sub: exp SUB exp {
     GNode * n = create_node(SUB_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

mul: exp MUL exp {
     GNode * n = create_node(MUL_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

div: exp DIV exp {
     GNode * n = create_node(DIV_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

or: exp LOGICOR exp {
    GNode * n = create_node(OR_, NULL);
    g_node_prepend(n, $3);
    g_node_prepend(n, $1);
    $$ = n;
    };

and: exp LOGICAND exp {
     GNode * n = create_node(AND_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

equal: exp LOGICEQU exp {
       GNode * n = create_node(EQU_, NULL);
       g_node_prepend(n, $3);
       g_node_prepend(n, $1);
       $$ = n;
       };

not-equal: exp NOTEQU exp {
           GNode * n = create_node(NEQU_, NULL);
           g_node_prepend(n, $3);
           g_node_prepend(n, $1);
           $$ = n;
           };

minus: SUB exp {
       GNode * n = create_node(MINUS, NULL);
       g_node_prepend(n, $2);
       $$ = n;
       };

less: exp LESS exp {
      GNode * n = create_node(LESS_, NULL);
      g_node_prepend(n, $3);
      g_node_prepend(n, $1);
      $$ = n;
      };

greater: exp GREATER exp {
         GNode * n = create_node(GREATER_, NULL);
         g_node_prepend(n, $3);
         g_node_prepend(n, $1);
         $$ = n;
         };

less-equ: exp LESSEQU exp {
          GNode * n = create_node(LESSEQU_, NULL);
          g_node_prepend(n, $3);
          g_node_prepend(n, $1);
          $$ = n;
          };

greater-equ: exp GREATEREQU exp {
             GNode * n = create_node(GREATEREQU_, NULL);
             g_node_prepend(n, $3);
             g_node_prepend(n, $1);
             $$ = n;
             };

rem: exp REMAINDER exp {
     GNode * n = create_node(REM_, NULL);
     g_node_prepend(n, $3);
     g_node_prepend(n, $1);
     $$ = n;
     };

not: EXCL exp {
     GNode * n = create_node(NOT, NULL);
     g_node_prepend(n, $2);
     $$ = n;
     };

while: WHILE LPAREN exp RPAREN block {
       GNode * n = create_node(WHILE, NULL);
       g_node_prepend(n, $5);
       g_node_prepend(n, $3);
       $$ = n;
       };

loop: LOOP block {
      GNode * n = create_node(LOOP, NULL);
      g_node_prepend(n, $2);
      $$ = n;
      };

if: IF LPAREN exp RPAREN block ELSE block  {
    GNode * n = create_node(IF, NULL);
    g_node_prepend(n, $7);      
    g_node_prepend(n, $5);
    g_node_prepend(n, $3);
    $$ = n;
    }
  | IF LPAREN exp RPAREN block {
    GNode * n = create_node(IF, NULL);
    g_node_prepend(n, $5);
    g_node_prepend(n, $3);
    $$ = n;
    };

lit: prim_lit {$$ = $1;} | comp_lit {$$ = $1;}

prim_lit: T {$$ = create_node(TR, NULL);}
        | F {$$ = create_node(FA, NULL);}
        | LITCHAR {$$ = create_node(LITCHAR, NULL);}
        | LITSTR {$$ = create_node(LITSTR, NULL);}
        | LITDEC {$$ = create_node(LITDEC, NULL);};

field_lookup: field DOT field {
              GNode * n = create_node(LOOKUP, NULL);
              g_node_prepend(n, $3);
              g_node_prepend(n, $1);
              $$ = n;
              };

field: ID {$$ = create_node(ID, $1);}
     | field_lookup {$$ = $1;}
     | array_index {$$ = $1;}
     | fn-call {$$ = $1;};

array_index: ID LBRACK exp RBRACK {
             GNode * n = create_node(ARR_INDEX, NULL);
             g_node_prepend(n, $3);
             g_node_prepend(n, create_node(ID, $1));
             $$ = n;   
             }
           | fn-call LBRACK exp RBRACK {
             GNode * n = create_node(ARR_INDEX, NULL);
             g_node_prepend(n, $3);
             g_node_prepend(n, $1);
             $$ = n;   
             }
           | array_index LBRACK exp RBRACK {
             GNode * n = create_node(ARR_INDEX, NULL);
             g_node_prepend(n, $3);
             g_node_prepend(n, $1);
             $$ = n;   
             };

fn-call:  ID LPAREN exps RPAREN {
          GNode * n = create_node(FN_CALL, NULL);
          g_node_prepend(n, $3);
          g_node_prepend(n, create_node(ID, $1));      
          $$ = n;
          }
        | ID LPAREN RPAREN {
          GNode * n1 = create_node(FN_CALL, NULL);
          GNode * n2 = create_node(ID, $1);
          g_node_prepend(n1, create_node(EMP_FN_CALL, NULL));
          g_node_prepend(n1, n2);
          $$ = n1;
          };


assign: ID assign_type exp {
        g_node_prepend($2, $3);
        g_node_prepend($2, create_node(ID, $1));      
        $$ = $2;
        }
      | field_lookup assign_type exp {
        g_node_prepend($2, $3);
        g_node_prepend($2, $1);
        $$ = $2;
        }
      | array_index assign_type exp {
        g_node_prepend($2, $3);
        g_node_prepend($2, $1);
        $$ = $2;
        };

assign_type: SUBEQU {create_node(ASSIGN_SUB, NULL);}
        	 | ADDEQU {create_node(ASSIGN_ADD, NULL);}
        	 | MULEQU {create_node(ASSIGN_MUL, NULL);}
        	 | DIVEQU {create_node(ASSIGN_DIV, NULL);}
        	 | REMAINEQU {create_node(ASSIGN_REM, NULL);}
           | EQU {create_node(ASSIGN_EQU, NULL);};

comp_lit: enum_lit {$$ = $1;}
        | struct_lit {$$ = $1;}
        | array_lit {$$ = $1;};

enum_lit: ID QUALIFIER ID {
          GNode * n1 = create_node(ENUM_LIT, NULL);
          GNode * n2 = create_node(ENUM_CTOR, NULL);
          g_node_prepend(n1, n2);
          g_node_prepend(n2, create_node(ID, $3));
          g_node_prepend(n2, create_node(ID, $1));
          $$ = n1;
          }
        | ID QUALIFIER ID LPAREN enum_exp RPAREN {
          GNode * n1 = create_node(ENUM_LIT, NULL);
          GNode * n2 = create_node(ENUM_CTOR, NULL);
          g_node_prepend(n1, $5);
          g_node_prepend(n1, n2);
          g_node_prepend(n2, create_node(ID, $3));
          g_node_prepend(n2, create_node(ID, $1));
          $$ = n1;
          };

enum_exp: exp COMMA enum_exp {
          g_node_prepend($3, $1);
          $$ = $3;
          }
        | exp {
          GNode * n = create_node(EXPRS, NULL);
          g_node_prepend(n, $1);
          $$ = n;
          };

struct_lit: ID LCBRACK id_binds RCBRACK {
            GNode * n = create_node(STRUCT_LIT, NULL);
            g_node_prepend(n, $3);
            g_node_prepend(n, create_node(ID, $1));      
            $$ = n;
            };

id_binds: id_bind COMMA id_binds {
          g_node_prepend($3, $1);
          $$ = $3;
          }
        | id_bind {
          GNode * n = create_node(STRUCT_LIT_FIELDS, NULL);
          g_node_prepend(n, $1);
          $$ = n; 
          };

id_bind: ID COLON exp {
         GNode * n = create_node(STRUCT_LIT_FIELD, NULL);
         g_node_prepend(n, $3);
         g_node_prepend(n, create_node(ID, $1));
         $$ = n;
         };

array_lit: LBRACK enum_exp RBRACK{
           GNode * n = create_node(ARR_LIT, NULL);
           g_node_prepend(n, $2);
           $$ = n;
           };

//I.e., a list of enum constructor defs is either a single constructor
//or a single constructor followed by a list of constructor defs.

%%

void yyerror(char const* msg) {
      fprintf(stderr, "Error: %s\n", msg);
}
