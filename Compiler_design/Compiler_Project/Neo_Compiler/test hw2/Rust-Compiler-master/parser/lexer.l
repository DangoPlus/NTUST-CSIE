%{

#include "parser.h"
#include <stdio.h>
#include <stdlib.h>

%}

%option noyywrap
%option nounput
%option noinput

%%

b'.{1,2}' { return LITCHAR; } // char literals
b\"([^\"]|"\\\"")+\" { return LITSTR; } // string literals

"//"(.+)[\n] { } // inline comments, Removed count++
"/*".+"*/"|"\""|' {  } // comments and quotes, removed position++ 


"abstract"	{ return ABSTRACT; }
"alignof"	{ return ALIGNOF; }
"as" 	 	{ return AS; }
"be" 	 	{ return BE; }
"box"|"Box" {return BOX;}
"break"		{ return BREAK; }
"const"		{ return CONST; }
"continue" 	{ return CONTINUE; }
"crate" {return CRATE;}
"do" 	 	{ return DO; }
"else" 	 	{ return ELSE; }
"enum" 	 	{ return ENUM; }
"extern" 	{ return EXTERN; }
"final" 	{ return FINAL; }
"fn" 	 	{ return FN; }
"for" 	 	{ return FOR; }
"if" 	 	{ return IF; }
"impl" 	 	{ return IMPL; }
"in" 	 	{ return IN; }
"let" 	 	{ return LET; }
"loop" 	 	{ return LOOP; }
"macro_rules" 	 { return MACRO_RULES; }
"macro" 	{ return MACRO; }
"match" 	{ return MATCH; }
"mod" 	 	{ return MOD; }
"move" 	 	{ return MOVE; }
"mut" 	 	{ return MUT; }
"new"           { return NEW; }
"offsetof" 	{ return OFFSETOF; }
"override" 	{ return OVERRIDE; }
"priv" 	 	{ return PRIV; }
"pub" 	 	{ return PUB; }
"pure" 	 	{ return PURE; }
"ref" 	 	{ return REF; }
"return" 	{ return RETURN; }
"sizeof" 	{ return SIZEOF; }
"static" 	{ return STATIC; }
"self" 	 	{ return SELF; }
"struct" 	{ return STRUCT; }
"super" 	{ return SUPER; }
"trait" 	{ return TRAIT; }
"typeof" 	{ return TYPEOF; }
"type" 	 	{ return TYPE; }
"unsafe" 	{ return UNSAFE; }
"unsized" 	{ return UNSIZED; }
"use" 	 	{ return USE; }
"virtual" 	{ return VIRTUAL; }
"where" 	{ return WHERE; }
"while"         { return WHILE;}
"yield" 	{ return YIELD; }

"bool" 		{ return BOOL; }
"u8"	 	{ return U8; }
"u16"	 	{ return U16; }
"u32"	 	{ return U32; }
"u64"	 	{ return U64; }
"i8"	 	{ return I8; }
"i16"	 	{ return I16; }
"i32"	 	{ return I32; }
"i64"	 	{ return I64; }
"f32"	 	{ return F32; }
"f64"	 	{ return F64; }
"usize" 	{ return USIZE; }
"isize" 	{ return ISIZE; }
"char"	 	{ return CHAR; }
"str"	 	{ return STR; }
":"             { return COLON; }
"::"		{ return QUALIFIER;}
"->"		{ return ELEMENTSELECT;}
"=>"		{ return RARROW;}
"#!" 		{ return POUNDNOT;}
"#"		{ return POUND;}
"$"		{ return DOLLAR;}				
"["		{ return LBRACK;}
"]"		{ return RBRACK;}
"{"		{ return LCBRACK;}
"}"		{ return RCBRACK;}
","		{ return COMMA;}
";"		{ return SEMICOLON;}

"/="     	{ return DIVEQU;}
"%="		{ return REMAINEQU;}
"%"		{ return REMAINDER;}
"&="		{ return ANDEQU;}
"&&"		{ return LOGICAND;}
"&"		{ return AND;}
"|="		{ return OREQU;}
"||"		{ return LOGICOR;}
"|"		{ return INCLUOR;} 
"^="		{ return EXCOREQU;}
"^"		{ return EXCLUSIVEOR;}
"<<="		{ return LOGICLEFTSHIFTEQU;}
"<<"		{ return LOGICLEFTSHIFT;}
">>="		{ return LOGICRIGHTSHIFTEQU;}
">>"		{ return LOGICRIGHTSHIFT;}
"<="		{ return LESSEQU;}
">="		{ return GREATEREQU;}
"<"		{ return LESS;}
">"		{ return GREATER;}
"+="		{ return ADDEQU;}
"-="		{ return SUBEQU;}
"*="		{ return MULEQU;}
"=="		{ return LOGICEQU;}
"=" 		{ return EQU;}
"!="		{ return NOTEQU;}
"!"             { return EXCL;}
"_" 		{return UNDER;}
"("		{ return LPAREN; }
")"		{ return RPAREN; }
"+"		{ return ADD; }
"-"		{ return SUB; }
"*"		{ return MUL; }
"/"		{ return DIV;}
"."		{ return DOT;}
".."            { return DDOT;}
"..."           { return TDOT;}

"true"		{ return T; }
"false"		{ return F; }





[a-zA-Z_]([_a-zA-Z0-9]+)? {  
                               int n = strlen(yytext);
                               yylval.str = (char*)malloc((n+1)*sizeof(char));
                               strcpy(yylval.str, yytext);
                               return ID;
                               } // Identifiers
[0-9]([0-9_]+)? { return LITDEC; }
[ \t\r\n] {  } // whitespace, removed position++
. { return UNKNOWN; } //removed position++


%%
