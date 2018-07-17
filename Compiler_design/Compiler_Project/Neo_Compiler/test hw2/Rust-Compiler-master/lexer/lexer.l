%{

#include "lexer.h"

%}

%option noyywrap
%option nounput
%option noinput

%%

(b)("\'")[\x20-\x7F][\x20-\x7F]*("\'") { return LITCHAR;}
(b)("\"")[\x20-\x7F][\x20-\x7F]*("\"") { return LITSTR;}

"abstract"	{ return abstractK; }
"alignof"	{ return ALIGNOF; }
"as" 	 	{ return asK; }
"be" 	 	{ return beK; }
"box" 	 	{ return box; }
"break"		{ return breakK; }
"const"		{ return constK; }
"continue" 	{ return continueK; }
"crate" 	{ return crate; }
"do" 	 	{ return doK; }
"else" 	 	{ return elseK; }
"enum" 	 	{ return enumK; }
"extern" 	{ return externK; }
"final" 	{ return finalK; }
"fn" 	 	{ return fn; }
"for" 	 	{ return forK; }
"if" 	 	{ return ifK; }
"impl" 	 	{ return impl; }
"in" 	 	{ return in; }
"let" 	 	{ return let; }
"loop" 	 	{ return loop; }
"macro_rules" 	 { return macro_rules; }
"macro" 	{ return macro; }
"match" 	{ return match; }
"mod" 	 	{ return modK; }
"move" 	 	{ return move; }
"mut" 	 	{ return mut; }
"offsetof" 	{ return offsetof; }
"override" 	{ return override; }
"priv" 	 	{ return priv; }
"pub" 	 	{ return pub; }
"pure" 	 	{ return pure; }
"ref" 	 	{ return refK; }
"return" 	{ return returnK; }
"sizeof" 	{ return sizeofK; }
"static" 	{ return staticK; }
"self" 	 	{ return self; }
"struct" 	{ return structK; }
"super" 	{ return super; }
"trait" 	{ return trait; }
"typeof" 	{ return typeofK; }
"type" 	 	{ return type; }
"unsafe" 	{ return unsafe; }
"unsized" 	{ return unsized; }
"use" 	 	{ return use; }
"virtual" 	{ return virtual; }
"where" 	{ return whereK; }
"while" 	{ return whileK; }
"yield" 	{ return yield; }
"bool" 		{ return boolK; }
"u8"	 	{ return u8; }
"u16"	 	{ return u16; }
"u32"	 	{ return u32; }
"u64"	 	{ return u64; }
"i8"	 	{ return i8; }
"i16"	 	{ return i16; }
"i32"	 	{ return i32; }
"i64"	 	{ return i64; }
"f32"	 	{ return f32; }
"f64"	 	{ return f64; }
"usize" 	{ return usize; }
"isize" 	{ return isize; }
"char"	 	{ return charK; }
"str"	 	{ return str; }

"::"		{ return QUALIFIER;}
"->"		{ return ELEMENTSELECT;}
"=>"		{ return RARROW;}
"#!" 		{ return POUNDNOT;}
"#"		{ return POUND;}
"'"		{ return SINGLEQ;}
"\\"		{ return INTDIV; }
"\""		{ return DOUBELQ;}
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

"("		{ return LPAREN; }
")"		{ return RPAREN; }
"+"		{ return ADD; }
"-"		{ return SUB; }
"*"		{ return MUL; }
"/"		{ return DIV;}

"true"		{ return TRUE; }
"false"		{ return FALSE; }

[ \n\r\t]+ 	{ /* Eat up whitespace. */ }
"/*"((\*+[^/*])|([^*]))*\**"*/" { /* Eat up multi-line comments. */ }
\/\/[^\r\n]*	{ /* Eat up 1-line comments. */ }

([a-z]|[A-Z]|"_")["_"a-zA-Z0-9]*(["\""|"\["|"\]"|"\{"|"\}"|"\("|"\)"|"\-"|">"|"#"|"'"|"$"|","|"/"|"%"|"&"|"|"|"^"|"<"|"+"|"*"|"!"|":"|";"|"="|"~"|"."|"`"|"\\"|"@"]["\"""\[""\]""\{""\}""\(""\)""\-"">""#""'""$"",""/""%""&""|""^""<""+""\-""*""!""="":"";""~"".""`""\\""@""_"a-zA-Z0-9]*) { return IDERROR;}
[0-9]["_"0-9]*[a-z|A-Z|"\""|"\["|"\]"|"\{"|"\}"|"\("|"\)"|">"|"#"|"'"|"$"|","|"\-"|"/"|"%"|"&"|"|"|"^"|"<"|"+"|"*"|"!"|":"|"="|"~"|"."|"`"|"\\"|"@"]["\"""\[""\]""\{""\}""\(""\)"">""#""'""$"",""/""%""&""|""^""<""+""*""!""\-""="":"";""~"".""`""\\""@""_"a-zA-Z0-9]* { return DECERROR;}

("\""|"\["|"\]"|"\{"|"\}"|"\("|"\)"|">"|"#"|"'"|"$"|","|"/"|"%"|"&"|"|"|"^"|"<"|"+"|"*"|"!"|":"|";"|"="|"~"|"."|"`"|"\\"|"/"|"@")["\"""\[""\]""\{""\}""\(""\)"">""#""'""$"",""/""%""&""|""^""<""+""*""!""="":"";""~"".""`""\\""@""_"]*([0-9]|"_")["_"0-9]*["\"""\[""\]""\{""\}""\(""\)"">""#""'""$"",""/""%""&""|""^""<""+""-""*""!""="":"";""~"".""`""\\""@""_"a-zA-Z0-9]* { return DECERROR; }

[0-9]["_"0-9]* { return LITDEC; }

([a-z]|[A-Z]|"_")["_"a-zA-Z0-9]* { return ID;}

("\""|"\["|"\]"|"\{"|"\}"|"\("|"\)"|">"|"#"|"'"|"$"|","|"/"|"%"|"&"|"|"|"^"|"<"|"+"|"-"|"*"|"!"|":"|";"|"="|"~"|"."|"`"|"\\"|"/"|"@")["\"""\[""\]""\{""\}""\(""\)"">""#""'""$"",""/""%""&""|""^""<""+""\-""*""!""="":"";""~"".""`""\\""@""_"]*([a-z]|[A-Z]|"_")["\"""\[""\]""\{""\}""\(""\)"">""#""'""$"",""/""%""&""|""^""<""+""\-""*""!""="":"";""~"".""`""\\""@""_"a-zA-Z0-9]* { return IDERROR;}

.          	{ return UNKNOWN; }

%%
