#ifndef _EXPORTS_H
#define _EXPORTS_H

#include <colm/colm.h>
#include <colm/tree.h>
#include <colm/colmex.h>
#include <string>

struct _notoken;
struct ptr;
struct str;
struct il;
struct any;
struct DEF;
struct REDEF;
struct LEX;
struct END;
struct TOKEN;
struct RL;
struct IGNORE;
struct PRINT;
struct PRINTS;
struct PARSE;
struct REDUCE;
struct READ_REDUCE;
struct PARSE_TREE;
struct PARSE_STOP;
struct CONS;
struct MATCH;
struct REQUIRE;
struct SEND;
struct SEND_TREE;
struct NAMESPACE;
struct REDUCTION;
struct FOR;
struct IF;
struct YIELD;
struct WHILE;
struct ELSIF;
struct ELSE;
struct IN;
struct PARSER;
struct LIST;
struct LIST_EL;
struct MAP;
struct MAP_EL;
struct PTR;
struct ITER;
struct REF;
struct EXPORT;
struct RETURN;
struct BREAK;
struct REJECT;
struct REDUCEFIRST;
struct ALIAS;
struct COMMIT;
struct NEW;
struct PREEOF;
struct GLOBAL;
struct EOS;
struct CAST;
struct SWITCH;
struct CASE;
struct DEFAULT;
struct INT;
struct BOOL;
struct VOID;
struct MAKE_TOKEN;
struct MAKE_TREE;
struct TYPEID;
struct LITERAL;
struct CONTEXT;
struct STRUCT;
struct NI;
struct NIL;
struct TRUE;
struct FALSE;
struct LEFT;
struct RIGHT;
struct NONASSOC;
struct INCLUDE;
struct id;
struct number;
struct backtick_lit;
struct DQ;
struct SQ;
struct TILDE;
struct SQOPEN;
struct SQCLOSE;
struct BAR;
struct FSLASH;
struct COLON;
struct DOUBLE_COLON;
struct DOT;
struct ARROW;
struct POPEN;
struct PCLOSE;
struct COPEN;
struct CCLOSE;
struct STAR;
struct QUESTION;
struct EQUALS;
struct EQ_EQ;
struct BANG_EQ;
struct COMMA;
struct LT;
struct GT;
struct LT_EQ;
struct GT_EQ;
struct BANG;
struct DOLLAR;
struct CARET;
struct AT;
struct PERCENT;
struct PLUS;
struct MINUS;
struct AMP_AMP;
struct BAR_BAR;
struct DOT_DOT_DOT;
struct LT_LT;
struct LARROW;
struct _ignore_00d9;
struct _ignore_00db;
struct LIT_DQ;
struct LIT_DQ_NL;
struct LIT_SQOPEN;
struct LIT_SQCLOSE;
struct lit_dq_data;
struct CONS_SQ;
struct CONS_SQ_NL;
struct sq_cons_data;
struct TILDE_NL;
struct tilde_data;
struct lex_id;
struct lex_uint;
struct lex_hex;
struct lex_lit;
struct LEX_DOT;
struct LEX_BAR;
struct LEX_AMP;
struct LEX_DASH;
struct LEX_POPEN;
struct LEX_PCLOSE;
struct LEX_STAR;
struct LEX_STARSTAR;
struct LEX_QUESTION;
struct LEX_PLUS;
struct LEX_CARET;
struct LEX_DOTDOT;
struct LEX_SQOPEN_POS;
struct LEX_SQOPEN_NEG;
struct LEX_FSLASH;
struct LEX_DASHDASH;
struct LEX_COLON_GT;
struct LEX_COLON_GTGT;
struct LEX_LT_COLON;
struct _ignore_011f;
struct _ignore_0121;
struct RE_DASH;
struct RE_CHAR;
struct RE_SQCLOSE;
struct RED_OPEN;
struct RED_CLOSE;
struct red_id;
struct red_comment;
struct red_ws;
struct red_lit;
struct RED_LHS;
struct RED_RHS_REF;
struct RED_RHS_LOC;
struct RED_TREE_REF;
struct RED_RHS_NREF;
struct RED_RHS_NLOC;
struct RED_TREE_NREF;
struct red_any;
struct start;
struct root_item;
struct _include;
struct precedence_def;
struct pred_type;
struct pred_token_list;
struct pred_token;
struct pre_eof_def;
struct alias_def;
struct struct_item;
struct export_def;
struct global_def;
struct iter_def;
struct reference_type_ref;
struct param_var_def_seq;
struct param_var_def_list;
struct param_var_def;
struct opt_export;
struct function_def;
struct in_host_def;
struct struct_var_def;
struct struct_key;
struct struct_def;
struct literal_keyword;
struct literal_def;
struct literal_list;
struct literal_item;
struct no_ignore_left;
struct no_ignore_right;
struct reduction_def;
struct red_nonterm;
struct red_action;
struct host_item;
struct reduction_item;
struct namespace_def;
struct namespace_item;
struct obj_var_list;
struct opt_reduce_first;
struct cfl_def;
struct cfl_redef;
struct region_def;
struct rl_def;
struct opt_lex_expr;
struct token_def;
struct ic_def;
struct opt_translate;
struct opt_id;
struct ignore_def;
struct prod_sublist;
struct prod_el;
struct opt_prod_el_name;
struct prod_el_list;
struct opt_commit;
struct opt_prod_name;
struct prod;
struct opt_reduce;
struct prod_list;
struct case_clause;
struct default_clause;
struct case_clause_list;
struct bare_tok;
struct statement;
struct elsif_list;
struct elsif_clause;
struct optional_else;
struct call_arg_seq;
struct call_arg_list;
struct iter_call;
struct block_or_single;
struct require_pattern;
struct opt_require_stmt;
struct lang_stmt_list;
struct opt_def_init;
struct var_def;
struct print_stmt;
struct expr_stmt;
struct code_expr;
struct code_relational;
struct code_additive;
struct code_multiplicitive;
struct code_unary;
struct opt_eos;
struct code_factor;
struct type_ref;
struct region_qual;
struct opt_repeat;
struct opt_capture;
struct opt_field_init;
struct field_init;
struct stmt_or_factor;
struct opt_label;
struct dq_lit_term;
struct sq_lit_term;
struct opt_tilde_data;
struct pattern_el_lel;
struct pattern_el;
struct litpat_el;
struct pattern_top_el;
struct pattern_list;
struct pattern;
struct E1;
struct E2;
struct E3;
struct E4;
struct cons_el;
struct lit_cons_el;
struct cons_top_el;
struct cons_list;
struct constructor;
struct accum_el;
struct lit_accum_el;
struct accum_top_el;
struct accum_list;
struct accumulate;
struct string_el;
struct lit_string_el;
struct string_top_el;
struct string_list;
struct string;
struct var_ref;
struct qual;
struct lex_expr;
struct opt_lex_dot;
struct lex_term;
struct lex_factor_rep;
struct lex_factor_neg;
struct lex_range_lit;
struct lex_num;
struct lex_factor;
struct reg_or_data;
struct reg_or_char;
struct _ign_0xa00181510;
struct _ign_0xa0012f6d0;
struct _ign_0xa0012f910;
struct _ign_0xa002148b0;
struct _ign_0xa00215890;
struct _ign_0xa00222b30;
struct _ign_0xa00244580;
struct __0xa0012f770_DEF_PAT_1;
struct __0xa00212c10_DEF_PAT_2;
struct __0xa00214950_DEF_PAT_3;
struct __0xa00222bd0_DEF_PAT_4;
struct __0xa00244620_DEF_PAT_5;
struct _lrepeat_root_item;
struct _lrepeat_sq_cons_data;
struct _lrepeat_struct_item;
struct _lrepeat_reduction_item;
struct _lrepeat_host_item;
struct _lrepeat_namespace_item;
struct _lrepeat_var_def;
struct _lrepeat_statement;
struct _lrepeat_field_init;
struct _lrepeat_litpat_el;
struct _lrepeat_pattern_el;
struct _lrepeat_lit_cons_el;
struct _lrepeat_cons_el;
struct _lrepeat_lit_accum_el;
struct _lrepeat_accum_el;
struct _lrepeat_lit_string_el;
struct _lrepeat_string_el;
struct _T_any;
struct _T_start;
struct _T_root_item;
struct _T__include;
struct _T_precedence_def;
struct _T_pred_type;
struct _T_pred_token_list;
struct _T_pred_token;
struct _T_pre_eof_def;
struct _T_alias_def;
struct _T_struct_item;
struct _T_export_def;
struct _T_global_def;
struct _T_iter_def;
struct _T_reference_type_ref;
struct _T_param_var_def_seq;
struct _T_param_var_def_list;
struct _T_param_var_def;
struct _T_opt_export;
struct _T_function_def;
struct _T_in_host_def;
struct _T_struct_var_def;
struct _T_struct_key;
struct _T_struct_def;
struct _T_literal_keyword;
struct _T_literal_def;
struct _T_literal_list;
struct _T_literal_item;
struct _T_no_ignore_left;
struct _T_no_ignore_right;
struct _T_reduction_def;
struct _T_red_nonterm;
struct _T_red_action;
struct _T_host_item;
struct _T_reduction_item;
struct _T_namespace_def;
struct _T_namespace_item;
struct _T_obj_var_list;
struct _T_opt_reduce_first;
struct _T_cfl_def;
struct _T_cfl_redef;
struct _T_region_def;
struct _T_rl_def;
struct _T_opt_lex_expr;
struct _T_token_def;
struct _T_ic_def;
struct _T_opt_translate;
struct _T_opt_id;
struct _T_ignore_def;
struct _T_prod_sublist;
struct _T_prod_el;
struct _T_opt_prod_el_name;
struct _T_prod_el_list;
struct _T_opt_commit;
struct _T_opt_prod_name;
struct _T_prod;
struct _T_opt_reduce;
struct _T_prod_list;
struct _T_case_clause;
struct _T_default_clause;
struct _T_case_clause_list;
struct _T_bare_tok;
struct _T_statement;
struct _T_elsif_list;
struct _T_elsif_clause;
struct _T_optional_else;
struct _T_call_arg_seq;
struct _T_call_arg_list;
struct _T_iter_call;
struct _T_block_or_single;
struct _T_require_pattern;
struct _T_opt_require_stmt;
struct _T_lang_stmt_list;
struct _T_opt_def_init;
struct _T_var_def;
struct _T_print_stmt;
struct _T_expr_stmt;
struct _T_code_expr;
struct _T_code_relational;
struct _T_code_additive;
struct _T_code_multiplicitive;
struct _T_code_unary;
struct _T_opt_eos;
struct _T_code_factor;
struct _T_type_ref;
struct _T_region_qual;
struct _T_opt_repeat;
struct _T_opt_capture;
struct _T_opt_field_init;
struct _T_field_init;
struct _T_stmt_or_factor;
struct _T_opt_label;
struct _T_dq_lit_term;
struct _T_sq_lit_term;
struct _T_opt_tilde_data;
struct _T_pattern_el_lel;
struct _T_pattern_el;
struct _T_litpat_el;
struct _T_pattern_top_el;
struct _T_pattern_list;
struct _T_pattern;
struct _T_E1;
struct _T_E2;
struct _T_E3;
struct _T_E4;
struct _T_cons_el;
struct _T_lit_cons_el;
struct _T_cons_top_el;
struct _T_cons_list;
struct _T_constructor;
struct _T_accum_el;
struct _T_lit_accum_el;
struct _T_accum_top_el;
struct _T_accum_list;
struct _T_accumulate;
struct _T_string_el;
struct _T_lit_string_el;
struct _T_string_top_el;
struct _T_string_list;
struct _T_string;
struct _T_var_ref;
struct _T_qual;
struct _T_lex_expr;
struct _T_opt_lex_dot;
struct _T_lex_term;
struct _T_lex_factor_rep;
struct _T_lex_factor_neg;
struct _T_lex_range_lit;
struct _T_lex_num;
struct _T_lex_factor;
struct _T_reg_or_data;
struct _T_reg_or_char;
struct _T__lrepeat_root_item;
struct _T__lrepeat_sq_cons_data;
struct _T__lrepeat_struct_item;
struct _T__lrepeat_reduction_item;
struct _T__lrepeat_host_item;
struct _T__lrepeat_namespace_item;
struct _T__lrepeat_var_def;
struct _T__lrepeat_statement;
struct _T__lrepeat_field_init;
struct _T__lrepeat_litpat_el;
struct _T__lrepeat_pattern_el;
struct _T__lrepeat_lit_cons_el;
struct _T__lrepeat_cons_el;
struct _T__lrepeat_lit_accum_el;
struct _T__lrepeat_accum_el;
struct _T__lrepeat_lit_string_el;
struct _T__lrepeat_string_el;
struct _root;
struct _notoken
	: public ExportTree
{
	static const int ID = 802;
	_notoken( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ptr
	: public ExportTree
{
	static const int ID = 1;
	ptr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct str
	: public ExportTree
{
	static const int ID = 2;
	str( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct il
	: public ExportTree
{
	static const int ID = 3;
	il( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct any
	: public ExportTree
{
	static const int ID = 803;
	any( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DEF
	: public ExportTree
{
	static const int ID = 4;
	DEF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REDEF
	: public ExportTree
{
	static const int ID = 5;
	REDEF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX
	: public ExportTree
{
	static const int ID = 6;
	LEX( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct END
	: public ExportTree
{
	static const int ID = 7;
	END( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct TOKEN
	: public ExportTree
{
	static const int ID = 8;
	TOKEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RL
	: public ExportTree
{
	static const int ID = 9;
	RL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct IGNORE
	: public ExportTree
{
	static const int ID = 10;
	IGNORE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PRINT
	: public ExportTree
{
	static const int ID = 11;
	PRINT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PRINTS
	: public ExportTree
{
	static const int ID = 12;
	PRINTS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PARSE
	: public ExportTree
{
	static const int ID = 13;
	PARSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REDUCE
	: public ExportTree
{
	static const int ID = 14;
	REDUCE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct READ_REDUCE
	: public ExportTree
{
	static const int ID = 15;
	READ_REDUCE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PARSE_TREE
	: public ExportTree
{
	static const int ID = 16;
	PARSE_TREE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PARSE_STOP
	: public ExportTree
{
	static const int ID = 17;
	PARSE_STOP( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CONS
	: public ExportTree
{
	static const int ID = 18;
	CONS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MATCH
	: public ExportTree
{
	static const int ID = 19;
	MATCH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REQUIRE
	: public ExportTree
{
	static const int ID = 20;
	REQUIRE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SEND
	: public ExportTree
{
	static const int ID = 21;
	SEND( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SEND_TREE
	: public ExportTree
{
	static const int ID = 22;
	SEND_TREE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NAMESPACE
	: public ExportTree
{
	static const int ID = 23;
	NAMESPACE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REDUCTION
	: public ExportTree
{
	static const int ID = 24;
	REDUCTION( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct FOR
	: public ExportTree
{
	static const int ID = 25;
	FOR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct IF
	: public ExportTree
{
	static const int ID = 26;
	IF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct YIELD
	: public ExportTree
{
	static const int ID = 27;
	YIELD( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct WHILE
	: public ExportTree
{
	static const int ID = 28;
	WHILE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ELSIF
	: public ExportTree
{
	static const int ID = 29;
	ELSIF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ELSE
	: public ExportTree
{
	static const int ID = 30;
	ELSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct IN
	: public ExportTree
{
	static const int ID = 31;
	IN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PARSER
	: public ExportTree
{
	static const int ID = 32;
	PARSER( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIST
	: public ExportTree
{
	static const int ID = 33;
	LIST( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIST_EL
	: public ExportTree
{
	static const int ID = 34;
	LIST_EL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MAP
	: public ExportTree
{
	static const int ID = 35;
	MAP( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MAP_EL
	: public ExportTree
{
	static const int ID = 36;
	MAP_EL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PTR
	: public ExportTree
{
	static const int ID = 37;
	PTR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ITER
	: public ExportTree
{
	static const int ID = 38;
	ITER( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REF
	: public ExportTree
{
	static const int ID = 39;
	REF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct EXPORT
	: public ExportTree
{
	static const int ID = 40;
	EXPORT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RETURN
	: public ExportTree
{
	static const int ID = 41;
	RETURN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BREAK
	: public ExportTree
{
	static const int ID = 42;
	BREAK( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REJECT
	: public ExportTree
{
	static const int ID = 43;
	REJECT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct REDUCEFIRST
	: public ExportTree
{
	static const int ID = 44;
	REDUCEFIRST( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ALIAS
	: public ExportTree
{
	static const int ID = 45;
	ALIAS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COMMIT
	: public ExportTree
{
	static const int ID = 46;
	COMMIT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NEW
	: public ExportTree
{
	static const int ID = 47;
	NEW( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PREEOF
	: public ExportTree
{
	static const int ID = 48;
	PREEOF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct GLOBAL
	: public ExportTree
{
	static const int ID = 49;
	GLOBAL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct EOS
	: public ExportTree
{
	static const int ID = 50;
	EOS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CAST
	: public ExportTree
{
	static const int ID = 51;
	CAST( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SWITCH
	: public ExportTree
{
	static const int ID = 52;
	SWITCH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CASE
	: public ExportTree
{
	static const int ID = 53;
	CASE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DEFAULT
	: public ExportTree
{
	static const int ID = 54;
	DEFAULT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct INT
	: public ExportTree
{
	static const int ID = 55;
	INT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BOOL
	: public ExportTree
{
	static const int ID = 56;
	BOOL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct VOID
	: public ExportTree
{
	static const int ID = 57;
	VOID( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MAKE_TOKEN
	: public ExportTree
{
	static const int ID = 58;
	MAKE_TOKEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MAKE_TREE
	: public ExportTree
{
	static const int ID = 59;
	MAKE_TREE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct TYPEID
	: public ExportTree
{
	static const int ID = 60;
	TYPEID( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LITERAL
	: public ExportTree
{
	static const int ID = 61;
	LITERAL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CONTEXT
	: public ExportTree
{
	static const int ID = 62;
	CONTEXT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct STRUCT
	: public ExportTree
{
	static const int ID = 63;
	STRUCT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NI
	: public ExportTree
{
	static const int ID = 64;
	NI( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NIL
	: public ExportTree
{
	static const int ID = 65;
	NIL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct TRUE
	: public ExportTree
{
	static const int ID = 66;
	TRUE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct FALSE
	: public ExportTree
{
	static const int ID = 67;
	FALSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEFT
	: public ExportTree
{
	static const int ID = 68;
	LEFT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RIGHT
	: public ExportTree
{
	static const int ID = 69;
	RIGHT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NONASSOC
	: public ExportTree
{
	static const int ID = 70;
	NONASSOC( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct INCLUDE
	: public ExportTree
{
	static const int ID = 71;
	INCLUDE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct id
	: public ExportTree
{
	static const int ID = 72;
	id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct number
	: public ExportTree
{
	static const int ID = 73;
	number( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct backtick_lit
	: public ExportTree
{
	static const int ID = 74;
	backtick_lit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DQ
	: public ExportTree
{
	static const int ID = 75;
	DQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SQ
	: public ExportTree
{
	static const int ID = 76;
	SQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct TILDE
	: public ExportTree
{
	static const int ID = 77;
	TILDE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SQOPEN
	: public ExportTree
{
	static const int ID = 78;
	SQOPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct SQCLOSE
	: public ExportTree
{
	static const int ID = 79;
	SQCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BAR
	: public ExportTree
{
	static const int ID = 80;
	BAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct FSLASH
	: public ExportTree
{
	static const int ID = 81;
	FSLASH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COLON
	: public ExportTree
{
	static const int ID = 82;
	COLON( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DOUBLE_COLON
	: public ExportTree
{
	static const int ID = 83;
	DOUBLE_COLON( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DOT
	: public ExportTree
{
	static const int ID = 84;
	DOT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct ARROW
	: public ExportTree
{
	static const int ID = 85;
	ARROW( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct POPEN
	: public ExportTree
{
	static const int ID = 86;
	POPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PCLOSE
	: public ExportTree
{
	static const int ID = 87;
	PCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COPEN
	: public ExportTree
{
	static const int ID = 88;
	COPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CCLOSE
	: public ExportTree
{
	static const int ID = 89;
	CCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct STAR
	: public ExportTree
{
	static const int ID = 90;
	STAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct QUESTION
	: public ExportTree
{
	static const int ID = 91;
	QUESTION( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct EQUALS
	: public ExportTree
{
	static const int ID = 92;
	EQUALS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct EQ_EQ
	: public ExportTree
{
	static const int ID = 93;
	EQ_EQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BANG_EQ
	: public ExportTree
{
	static const int ID = 94;
	BANG_EQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COMMA
	: public ExportTree
{
	static const int ID = 95;
	COMMA( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LT
	: public ExportTree
{
	static const int ID = 96;
	LT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct GT
	: public ExportTree
{
	static const int ID = 97;
	GT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LT_EQ
	: public ExportTree
{
	static const int ID = 98;
	LT_EQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct GT_EQ
	: public ExportTree
{
	static const int ID = 99;
	GT_EQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BANG
	: public ExportTree
{
	static const int ID = 100;
	BANG( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DOLLAR
	: public ExportTree
{
	static const int ID = 101;
	DOLLAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CARET
	: public ExportTree
{
	static const int ID = 102;
	CARET( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct AT
	: public ExportTree
{
	static const int ID = 103;
	AT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PERCENT
	: public ExportTree
{
	static const int ID = 104;
	PERCENT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PLUS
	: public ExportTree
{
	static const int ID = 105;
	PLUS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct MINUS
	: public ExportTree
{
	static const int ID = 106;
	MINUS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct AMP_AMP
	: public ExportTree
{
	static const int ID = 107;
	AMP_AMP( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct BAR_BAR
	: public ExportTree
{
	static const int ID = 108;
	BAR_BAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DOT_DOT_DOT
	: public ExportTree
{
	static const int ID = 109;
	DOT_DOT_DOT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LT_LT
	: public ExportTree
{
	static const int ID = 110;
	LT_LT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LARROW
	: public ExportTree
{
	static const int ID = 111;
	LARROW( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_00d9
	: public ExportTree
{
	static const int ID = 112;
	_ignore_00d9( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_00db
	: public ExportTree
{
	static const int ID = 113;
	_ignore_00db( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIT_DQ
	: public ExportTree
{
	static const int ID = 114;
	LIT_DQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIT_DQ_NL
	: public ExportTree
{
	static const int ID = 115;
	LIT_DQ_NL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIT_SQOPEN
	: public ExportTree
{
	static const int ID = 116;
	LIT_SQOPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LIT_SQCLOSE
	: public ExportTree
{
	static const int ID = 117;
	LIT_SQCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lit_dq_data
	: public ExportTree
{
	static const int ID = 118;
	lit_dq_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CONS_SQ
	: public ExportTree
{
	static const int ID = 119;
	CONS_SQ( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct CONS_SQ_NL
	: public ExportTree
{
	static const int ID = 120;
	CONS_SQ_NL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct sq_cons_data
	: public ExportTree
{
	static const int ID = 121;
	sq_cons_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct TILDE_NL
	: public ExportTree
{
	static const int ID = 122;
	TILDE_NL( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct tilde_data
	: public ExportTree
{
	static const int ID = 123;
	tilde_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lex_id
	: public ExportTree
{
	static const int ID = 124;
	lex_id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lex_uint
	: public ExportTree
{
	static const int ID = 125;
	lex_uint( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lex_hex
	: public ExportTree
{
	static const int ID = 126;
	lex_hex( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lex_lit
	: public ExportTree
{
	static const int ID = 127;
	lex_lit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_DOT
	: public ExportTree
{
	static const int ID = 128;
	LEX_DOT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_BAR
	: public ExportTree
{
	static const int ID = 129;
	LEX_BAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_AMP
	: public ExportTree
{
	static const int ID = 130;
	LEX_AMP( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_DASH
	: public ExportTree
{
	static const int ID = 131;
	LEX_DASH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_POPEN
	: public ExportTree
{
	static const int ID = 132;
	LEX_POPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_PCLOSE
	: public ExportTree
{
	static const int ID = 133;
	LEX_PCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_STAR
	: public ExportTree
{
	static const int ID = 134;
	LEX_STAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_STARSTAR
	: public ExportTree
{
	static const int ID = 135;
	LEX_STARSTAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_QUESTION
	: public ExportTree
{
	static const int ID = 136;
	LEX_QUESTION( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_PLUS
	: public ExportTree
{
	static const int ID = 137;
	LEX_PLUS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_CARET
	: public ExportTree
{
	static const int ID = 138;
	LEX_CARET( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_DOTDOT
	: public ExportTree
{
	static const int ID = 139;
	LEX_DOTDOT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_SQOPEN_POS
	: public ExportTree
{
	static const int ID = 140;
	LEX_SQOPEN_POS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_SQOPEN_NEG
	: public ExportTree
{
	static const int ID = 141;
	LEX_SQOPEN_NEG( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_FSLASH
	: public ExportTree
{
	static const int ID = 142;
	LEX_FSLASH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_DASHDASH
	: public ExportTree
{
	static const int ID = 143;
	LEX_DASHDASH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_COLON_GT
	: public ExportTree
{
	static const int ID = 144;
	LEX_COLON_GT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_COLON_GTGT
	: public ExportTree
{
	static const int ID = 145;
	LEX_COLON_GTGT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEX_LT_COLON
	: public ExportTree
{
	static const int ID = 146;
	LEX_LT_COLON( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_011f
	: public ExportTree
{
	static const int ID = 147;
	_ignore_011f( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_0121
	: public ExportTree
{
	static const int ID = 148;
	_ignore_0121( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RE_DASH
	: public ExportTree
{
	static const int ID = 149;
	RE_DASH( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RE_CHAR
	: public ExportTree
{
	static const int ID = 150;
	RE_CHAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RE_SQCLOSE
	: public ExportTree
{
	static const int ID = 151;
	RE_SQCLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_OPEN
	: public ExportTree
{
	static const int ID = 152;
	RED_OPEN( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_CLOSE
	: public ExportTree
{
	static const int ID = 153;
	RED_CLOSE( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct red_id
	: public ExportTree
{
	static const int ID = 154;
	red_id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct red_comment
	: public ExportTree
{
	static const int ID = 155;
	red_comment( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct red_ws
	: public ExportTree
{
	static const int ID = 156;
	red_ws( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct red_lit
	: public ExportTree
{
	static const int ID = 157;
	red_lit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_LHS
	: public ExportTree
{
	static const int ID = 158;
	RED_LHS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_RHS_REF
	: public ExportTree
{
	static const int ID = 159;
	RED_RHS_REF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_RHS_LOC
	: public ExportTree
{
	static const int ID = 160;
	RED_RHS_LOC( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_TREE_REF
	: public ExportTree
{
	static const int ID = 161;
	RED_TREE_REF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_RHS_NREF
	: public ExportTree
{
	static const int ID = 162;
	RED_RHS_NREF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_RHS_NLOC
	: public ExportTree
{
	static const int ID = 163;
	RED_RHS_NLOC( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct RED_TREE_NREF
	: public ExportTree
{
	static const int ID = 164;
	RED_TREE_NREF( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct red_any
	: public ExportTree
{
	static const int ID = 165;
	red_any( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct start
	: public ExportTree
{
	static const int ID = 804;
	start( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_root_item RootItemList();
};
struct root_item
	: public ExportTree
{
	static const int ID = 805;
	root_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::rl_def rl_def();
	::literal_def literal_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::cfl_redef cfl_redef();
	::region_def region_def();
	::struct_def struct_def();
	::namespace_def namespace_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::statement statement();
	::global_def global_def();
	::export_def export_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
	::_include _include();
	::reduction_def reduction_def();
	enum prod_name {
		Rl = 0,
		Literal = 1,
		Token = 2,
		IgnoreCollector = 3,
		Ignore = 4,
		CflDef = 5,
		CflRedef = 6,
		Region = 7,
		Struct = 8,
		Namespace = 9,
		Function = 10,
		InHost = 11,
		Iter = 12,
		Statement = 13,
		Global = 14,
		Export = 15,
		PreEof = 16,
		Precedence = 17,
		Alias = 18,
		Include = 19,
		Reduction = 20,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct _include
	: public ExportTree
{
	static const int ID = 806;
	_include( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::INCLUDE INCLUDE();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
};
struct precedence_def
	: public ExportTree
{
	static const int ID = 807;
	precedence_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pred_type pred_type();
	::pred_token_list pred_token_list();
};
struct pred_type
	: public ExportTree
{
	static const int ID = 808;
	pred_type( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEFT LEFT();
	::RIGHT RIGHT();
	::NONASSOC NONASSOC();
	enum prod_name {
		Left = 0,
		Right = 1,
		NonAssoc = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pred_token_list
	: public ExportTree
{
	static const int ID = 809;
	pred_token_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pred_token_list _pred_token_list();
	::COMMA COMMA();
	::pred_token pred_token();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pred_token
	: public ExportTree
{
	static const int ID = 810;
	pred_token( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::backtick_lit backtick_lit();
	enum prod_name {
		Id = 0,
		Lit = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pre_eof_def
	: public ExportTree
{
	static const int ID = 811;
	pre_eof_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PREEOF PREEOF();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct alias_def
	: public ExportTree
{
	static const int ID = 812;
	alias_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ALIAS ALIAS();
	::id id();
	::type_ref type_ref();
};
struct struct_item
	: public ExportTree
{
	static const int ID = 813;
	struct_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::struct_var_def struct_var_def();
	::literal_def literal_def();
	::rl_def rl_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::region_def region_def();
	::struct_def struct_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::export_def export_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
	enum prod_name {
		StructVar = 0,
		Literal = 1,
		Rl = 2,
		Token = 3,
		IgnoreCollector = 4,
		Ignore = 5,
		Cfl = 6,
		Region = 7,
		Struct = 8,
		Function = 9,
		InHost = 10,
		Iter = 11,
		Export = 12,
		PreEof = 13,
		Precedence = 14,
		Alias = 15,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct export_def
	: public ExportTree
{
	static const int ID = 814;
	export_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EXPORT EXPORT();
	::var_def var_def();
	::opt_def_init opt_def_init();
};
struct global_def
	: public ExportTree
{
	static const int ID = 815;
	global_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::GLOBAL GLOBAL();
	::var_def var_def();
	::opt_def_init opt_def_init();
};
struct iter_def
	: public ExportTree
{
	static const int ID = 816;
	iter_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ITER ITER();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct reference_type_ref
	: public ExportTree
{
	static const int ID = 817;
	reference_type_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REF REF();
	::LT LT();
	::type_ref type_ref();
	::GT GT();
};
struct param_var_def_seq
	: public ExportTree
{
	static const int ID = 818;
	param_var_def_seq( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::param_var_def param_var_def();
	::COMMA COMMA();
	::param_var_def_seq _param_var_def_seq();
};
struct param_var_def_list
	: public ExportTree
{
	static const int ID = 819;
	param_var_def_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::param_var_def_seq param_var_def_seq();
};
struct param_var_def
	: public ExportTree
{
	static const int ID = 820;
	param_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	::type_ref type_ref();
	::reference_type_ref reference_type_ref();
	enum prod_name {
		Type = 0,
		Ref = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_export
	: public ExportTree
{
	static const int ID = 821;
	opt_export( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EXPORT EXPORT();
	enum prod_name {
		Export = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct function_def
	: public ExportTree
{
	static const int ID = 822;
	function_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_export opt_export();
	::type_ref type_ref();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct in_host_def
	: public ExportTree
{
	static const int ID = 823;
	in_host_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_export opt_export();
	::type_ref type_ref();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::EQUALS EQUALS();
	::id HostFunc();
};
struct struct_var_def
	: public ExportTree
{
	static const int ID = 824;
	struct_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::var_def var_def();
};
struct struct_key
	: public ExportTree
{
	static const int ID = 825;
	struct_key( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STRUCT STRUCT();
	::CONTEXT CONTEXT();
};
struct struct_def
	: public ExportTree
{
	static const int ID = 826;
	struct_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::struct_key struct_key();
	::id id();
	::_lrepeat_struct_item ItemList();
	::END END();
};
struct literal_keyword
	: public ExportTree
{
	static const int ID = 827;
	literal_keyword( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LITERAL LITERAL();
	::TOKEN TOKEN();
};
struct literal_def
	: public ExportTree
{
	static const int ID = 828;
	literal_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal_keyword literal_keyword();
	::literal_list literal_list();
};
struct literal_list
	: public ExportTree
{
	static const int ID = 829;
	literal_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal_list _literal_list();
	::literal_item literal_item();
	enum prod_name {
		Item = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct literal_item
	: public ExportTree
{
	static const int ID = 830;
	literal_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::no_ignore_left no_ignore_left();
	::backtick_lit backtick_lit();
	::no_ignore_right no_ignore_right();
};
struct no_ignore_left
	: public ExportTree
{
	static const int ID = 831;
	no_ignore_left( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NI NI();
	::MINUS MINUS();
	enum prod_name {
		Ni = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct no_ignore_right
	: public ExportTree
{
	static const int ID = 832;
	no_ignore_right( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::MINUS MINUS();
	::NI NI();
	enum prod_name {
		Ni = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct reduction_def
	: public ExportTree
{
	static const int ID = 833;
	reduction_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDUCTION REDUCTION();
	::id id();
	::_lrepeat_reduction_item ItemList();
	::END END();
};
struct red_nonterm
	: public ExportTree
{
	static const int ID = 834;
	red_nonterm( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::type_ref type_ref();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct red_action
	: public ExportTree
{
	static const int ID = 835;
	red_action( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::type_ref type_ref();
	::COLON COLON();
	::id id();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct host_item
	: public ExportTree
{
	static const int ID = 836;
	host_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::red_id red_id();
	::red_lit red_lit();
	::red_comment red_comment();
	::red_ws red_ws();
	::red_any red_any();
	::RED_LHS RED_LHS();
	::RED_RHS_REF RED_RHS_REF();
	::RED_TREE_REF RED_TREE_REF();
	::RED_RHS_LOC RED_RHS_LOC();
	::RED_RHS_NREF RED_RHS_NREF();
	::RED_TREE_NREF RED_TREE_NREF();
	::RED_RHS_NLOC RED_RHS_NLOC();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct reduction_item
	: public ExportTree
{
	static const int ID = 837;
	reduction_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::red_nonterm red_nonterm();
	::red_action red_action();
	enum prod_name {
		NonTerm = 0,
		Action = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct namespace_def
	: public ExportTree
{
	static const int ID = 838;
	namespace_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NAMESPACE NAMESPACE();
	::id id();
	::_lrepeat_namespace_item ItemList();
	::END END();
};
struct namespace_item
	: public ExportTree
{
	static const int ID = 839;
	namespace_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::rl_def rl_def();
	::literal_def literal_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::region_def region_def();
	::struct_def struct_def();
	::namespace_def namespace_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
	::_include _include();
	::global_def global_def();
	enum prod_name {
		Rl = 0,
		Literal = 1,
		Token = 2,
		IgnoreCollector = 3,
		Ignore = 4,
		Cfl = 5,
		Region = 6,
		Struct = 7,
		Namespace = 8,
		Function = 9,
		InHost = 10,
		Iter = 11,
		PreEof = 12,
		Precedence = 13,
		Alias = 14,
		Include = 15,
		Global = 16,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct obj_var_list
	: public ExportTree
{
	static const int ID = 840;
	obj_var_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct opt_reduce_first
	: public ExportTree
{
	static const int ID = 841;
	opt_reduce_first( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDUCEFIRST REDUCEFIRST();
};
struct cfl_def
	: public ExportTree
{
	static const int ID = 842;
	cfl_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DEF DEF();
	::id id();
	::_lrepeat_var_def VarDefList();
	::opt_reduce_first opt_reduce_first();
	::prod_list prod_list();
};
struct cfl_redef
	: public ExportTree
{
	static const int ID = 843;
	cfl_redef( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDEF REDEF();
	::id id();
	::_lrepeat_var_def VarDefList();
	::opt_reduce_first opt_reduce_first();
	::prod_list prod_list();
};
struct region_def
	: public ExportTree
{
	static const int ID = 844;
	region_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX LEX();
	::_lrepeat_root_item RootItemList();
	::END END();
};
struct rl_def
	: public ExportTree
{
	static const int ID = 845;
	rl_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::RL RL();
	::id id();
	::LEX_FSLASH LEX_FSLASH();
	::lex_expr lex_expr();
};
struct opt_lex_expr
	: public ExportTree
{
	static const int ID = 846;
	opt_lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr lex_expr();
};
struct token_def
	: public ExportTree
{
	static const int ID = 847;
	token_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::TOKEN TOKEN();
	::id id();
	::_lrepeat_var_def VarDefList();
	::no_ignore_left no_ignore_left();
	::LEX_FSLASH LEX_FSLASH();
	::opt_lex_expr opt_lex_expr();
	::no_ignore_right no_ignore_right();
	::opt_translate opt_translate();
};
struct ic_def
	: public ExportTree
{
	static const int ID = 848;
	ic_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::TOKEN TOKEN();
	::id id();
	::MINUS MINUS();
};
struct opt_translate
	: public ExportTree
{
	static const int ID = 849;
	opt_translate( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
	enum prod_name {
		Translate = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_id
	: public ExportTree
{
	static const int ID = 850;
	opt_id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	enum prod_name {
		Id = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct ignore_def
	: public ExportTree
{
	static const int ID = 851;
	ignore_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::IGNORE IGNORE();
	::opt_id opt_id();
	::LEX_FSLASH LEX_FSLASH();
	::opt_lex_expr opt_lex_expr();
};
struct prod_sublist
	: public ExportTree
{
	static const int ID = 852;
	prod_sublist( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_sublist _prod_sublist();
	::BAR BAR();
	::prod_el_list prod_el_list();
};
struct prod_el
	: public ExportTree
{
	static const int ID = 853;
	prod_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_prod_el_name opt_prod_el_name();
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::backtick_lit backtick_lit();
	::POPEN POPEN();
	::prod_sublist prod_sublist();
	::PCLOSE PCLOSE();
	enum prod_name {
		Id = 0,
		Lit = 1,
		SubList = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_prod_el_name
	: public ExportTree
{
	static const int ID = 854;
	opt_prod_el_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	enum prod_name {
		Name = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct prod_el_list
	: public ExportTree
{
	static const int ID = 855;
	prod_el_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list _prod_el_list();
	::prod_el prod_el();
	enum prod_name {
		List = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_commit
	: public ExportTree
{
	static const int ID = 856;
	opt_commit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COMMIT COMMIT();
	enum prod_name {
		Commit = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_prod_name
	: public ExportTree
{
	static const int ID = 857;
	opt_prod_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COLON COLON();
	::id id();
	enum prod_name {
		Name = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct prod
	: public ExportTree
{
	static const int ID = 858;
	prod( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::SQOPEN SQOPEN();
	::prod_el_list prod_el_list();
	::SQCLOSE SQCLOSE();
	::opt_prod_name opt_prod_name();
	::opt_commit opt_commit();
	::opt_reduce opt_reduce();
	::DOT_DOT_DOT DOT_DOT_DOT();
	enum prod_name {
		Prod = 0,
		DotDotDot = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_reduce
	: public ExportTree
{
	static const int ID = 859;
	opt_reduce( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
	enum prod_name {
		Reduce = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct prod_list
	: public ExportTree
{
	static const int ID = 860;
	prod_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_list _prod_list();
	::BAR BAR();
	::prod prod();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct case_clause
	: public ExportTree
{
	static const int ID = 861;
	case_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::CASE CASE();
	::pattern pattern();
	::block_or_single block_or_single();
	::id id();
	enum prod_name {
		Pattern = 0,
		Id = 1,
		IdPat = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct default_clause
	: public ExportTree
{
	static const int ID = 862;
	default_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DEFAULT DEFAULT();
	::block_or_single block_or_single();
};
struct case_clause_list
	: public ExportTree
{
	static const int ID = 863;
	case_clause_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::case_clause case_clause();
	::case_clause_list _case_clause_list();
	::default_clause default_clause();
	enum prod_name {
		Recursive = 0,
		BaseCase = 1,
		BaseDefault = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct bare_tok
	: public ExportTree
{
	static const int ID = 864;
	bare_tok( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LT_LT LT_LT();
	::LARROW LARROW();
};
struct statement
	: public ExportTree
{
	static const int ID = 865;
	statement( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::print_stmt print_stmt();
	::var_def var_def();
	::opt_def_init opt_def_init();
	::FOR FOR();
	::id id();
	::COLON COLON();
	::type_ref type_ref();
	::IN IN();
	::iter_call iter_call();
	::block_or_single block_or_single();
	::IF IF();
	::code_expr code_expr();
	::elsif_list elsif_list();
	::SWITCH SWITCH();
	::var_ref var_ref();
	::case_clause_list case_clause_list();
	::COPEN COPEN();
	::CCLOSE CCLOSE();
	::WHILE WHILE();
	::EQUALS EQUALS();
	::YIELD YIELD();
	::RETURN RETURN();
	::BREAK BREAK();
	::REJECT REJECT();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::stmt_or_factor stmt_or_factor();
	::bare_tok bare_tok();
	::accumulate accumulate();
	::opt_eos opt_eos();
	enum prod_name {
		Print = 0,
		VarDef = 1,
		For = 2,
		If = 3,
		SwitchUnder = 4,
		SwitchBlock = 5,
		While = 6,
		LhsVarRef = 7,
		Yield = 8,
		Return = 9,
		Break = 10,
		Reject = 11,
		Call = 12,
		StmtOrFactor = 13,
		BareSend = 14,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct elsif_list
	: public ExportTree
{
	static const int ID = 866;
	elsif_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::elsif_clause elsif_clause();
	::elsif_list _elsif_list();
	::optional_else optional_else();
	enum prod_name {
		Clause = 0,
		OptElse = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct elsif_clause
	: public ExportTree
{
	static const int ID = 867;
	elsif_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ELSIF ELSIF();
	::code_expr code_expr();
	::block_or_single block_or_single();
};
struct optional_else
	: public ExportTree
{
	static const int ID = 868;
	optional_else( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ELSE ELSE();
	::block_or_single block_or_single();
	enum prod_name {
		Else = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct call_arg_seq
	: public ExportTree
{
	static const int ID = 869;
	call_arg_seq( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
	::COMMA COMMA();
	::call_arg_seq _call_arg_seq();
};
struct call_arg_list
	: public ExportTree
{
	static const int ID = 870;
	call_arg_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::call_arg_seq call_arg_seq();
};
struct iter_call
	: public ExportTree
{
	static const int ID = 871;
	iter_call( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::var_ref var_ref();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::E2 E2();
	::id id();
	::E3 E3();
	::code_expr code_expr();
	enum prod_name {
		Call = 0,
		Id = 1,
		Expr = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct block_or_single
	: public ExportTree
{
	static const int ID = 872;
	block_or_single( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
	::statement statement();
	enum prod_name {
		Block = 0,
		Single = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct require_pattern
	: public ExportTree
{
	static const int ID = 873;
	require_pattern( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REQUIRE REQUIRE();
	::var_ref var_ref();
	::pattern pattern();
};
struct opt_require_stmt
	: public ExportTree
{
	static const int ID = 874;
	opt_require_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::require_pattern require_pattern();
	::lang_stmt_list lang_stmt_list();
	enum prod_name {
		Require = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lang_stmt_list
	: public ExportTree
{
	static const int ID = 875;
	lang_stmt_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_statement StmtList();
	::opt_require_stmt opt_require_stmt();
};
struct opt_def_init
	: public ExportTree
{
	static const int ID = 876;
	opt_def_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EQUALS EQUALS();
	::code_expr code_expr();
	enum prod_name {
		Init = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct var_def
	: public ExportTree
{
	static const int ID = 877;
	var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	::type_ref type_ref();
};
struct print_stmt
	: public ExportTree
{
	static const int ID = 878;
	print_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PRINT PRINT();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::PRINTS PRINTS();
	::var_ref var_ref();
	::COMMA COMMA();
	::accumulate accumulate();
	enum prod_name {
		Tree = 0,
		PrintStream = 1,
		Accum = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct expr_stmt
	: public ExportTree
{
	static const int ID = 879;
	expr_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
};
struct code_expr
	: public ExportTree
{
	static const int ID = 880;
	code_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr _code_expr();
	::AMP_AMP AMP_AMP();
	::code_relational code_relational();
	::BAR_BAR BAR_BAR();
	enum prod_name {
		AmpAmp = 0,
		BarBar = 1,
		Base = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct code_relational
	: public ExportTree
{
	static const int ID = 881;
	code_relational( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_relational _code_relational();
	::EQ_EQ EQ_EQ();
	::code_additive code_additive();
	::BANG_EQ BANG_EQ();
	::LT LT();
	::GT GT();
	::LT_EQ LT_EQ();
	::GT_EQ GT_EQ();
	enum prod_name {
		EqEq = 0,
		Neq = 1,
		Lt = 2,
		Gt = 3,
		LtEq = 4,
		GtEq = 5,
		Base = 6,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct code_additive
	: public ExportTree
{
	static const int ID = 882;
	code_additive( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_additive _code_additive();
	::PLUS PLUS();
	::code_multiplicitive code_multiplicitive();
	::MINUS MINUS();
	enum prod_name {
		Plus = 0,
		Minus = 1,
		Base = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct code_multiplicitive
	: public ExportTree
{
	static const int ID = 883;
	code_multiplicitive( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_multiplicitive _code_multiplicitive();
	::STAR STAR();
	::code_unary code_unary();
	::FSLASH FSLASH();
	enum prod_name {
		Star = 0,
		Fslash = 1,
		Base = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct code_unary
	: public ExportTree
{
	static const int ID = 884;
	code_unary( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::BANG BANG();
	::code_factor code_factor();
	::DOLLAR DOLLAR();
	::CARET CARET();
	::AT AT();
	::PERCENT PERCENT();
	enum prod_name {
		Bang = 0,
		Dollar = 1,
		DollarDollar = 2,
		Caret = 3,
		At = 4,
		Percent = 5,
		Base = 6,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_eos
	: public ExportTree
{
	static const int ID = 885;
	opt_eos( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DOT DOT();
	::EOS EOS();
	enum prod_name {
		Dot = 0,
		Eos = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct code_factor
	: public ExportTree
{
	static const int ID = 886;
	code_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::number number();
	::var_ref var_ref();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::NIL NIL();
	::TRUE TRUE();
	::FALSE FALSE();
	::code_expr code_expr();
	::string string();
	::type_ref type_ref();
	::IN IN();
	::TYPEID TYPEID();
	::LT LT();
	::GT GT();
	::CAST CAST();
	::code_factor _code_factor();
	::stmt_or_factor stmt_or_factor();
	enum prod_name {
		Number = 0,
		Call = 1,
		VarRef = 2,
		Nil = 3,
		True = 4,
		False = 5,
		Paren = 6,
		String = 7,
		In = 8,
		TypeId = 9,
		Cast = 10,
		StmtOrFactor = 11,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct type_ref
	: public ExportTree
{
	static const int ID = 887;
	type_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::INT INT();
	::BOOL BOOL();
	::VOID VOID();
	::PARSER PARSER();
	::LT LT();
	::type_ref _type_ref();
	::GT GT();
	::LIST LIST();
	::MAP MAP();
	::type_ref KeyType();
	::COMMA COMMA();
	::type_ref ValType();
	::LIST_EL LIST_EL();
	::MAP_EL MAP_EL();
	enum prod_name {
		Id = 0,
		Int = 1,
		Bool = 2,
		Void = 3,
		Parser = 4,
		List = 5,
		Map = 6,
		ListEl = 7,
		MapEl = 8,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct region_qual
	: public ExportTree
{
	static const int ID = 888;
	region_qual( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual _region_qual();
	::id id();
	::DOUBLE_COLON DOUBLE_COLON();
	enum prod_name {
		Qual = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_repeat
	: public ExportTree
{
	static const int ID = 889;
	opt_repeat( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STAR STAR();
	::PLUS PLUS();
	::QUESTION QUESTION();
	::LT LT();
	enum prod_name {
		Star = 0,
		Plus = 1,
		Question = 2,
		LeftStar = 3,
		LeftPlus = 4,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_capture
	: public ExportTree
{
	static const int ID = 890;
	opt_capture( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	enum prod_name {
		Id = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_field_init
	: public ExportTree
{
	static const int ID = 891;
	opt_field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::POPEN POPEN();
	::_lrepeat_field_init FieldInitList();
	::PCLOSE PCLOSE();
	enum prod_name {
		Init = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct field_init
	: public ExportTree
{
	static const int ID = 892;
	field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
};
struct stmt_or_factor
	: public ExportTree
{
	static const int ID = 893;
	stmt_or_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PARSE PARSE();
	::opt_capture opt_capture();
	::type_ref type_ref();
	::opt_field_init opt_field_init();
	::accumulate accumulate();
	::PARSE_TREE PARSE_TREE();
	::PARSE_STOP PARSE_STOP();
	::REDUCE REDUCE();
	::id id();
	::READ_REDUCE READ_REDUCE();
	::SEND SEND();
	::var_ref var_ref();
	::opt_eos opt_eos();
	::SEND_TREE SEND_TREE();
	::MAKE_TREE MAKE_TREE();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::MAKE_TOKEN MAKE_TOKEN();
	::CONS CONS();
	::constructor constructor();
	::MATCH MATCH();
	::pattern pattern();
	::NEW NEW();
	::_lrepeat_field_init FieldInitList();
	enum prod_name {
		Parse = 0,
		ParseTree = 1,
		ParseStop = 2,
		Reduce = 3,
		ReadReduce = 4,
		Send = 5,
		SendTree = 6,
		MakeTree = 7,
		MakeToken = 8,
		Cons = 9,
		Match = 10,
		New = 11,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_label
	: public ExportTree
{
	static const int ID = 894;
	opt_label( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	enum prod_name {
		Id = 0,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct dq_lit_term
	: public ExportTree
{
	static const int ID = 895;
	dq_lit_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LIT_DQ LIT_DQ();
	::LIT_DQ_NL LIT_DQ_NL();
};
struct sq_lit_term
	: public ExportTree
{
	static const int ID = 896;
	sq_lit_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::CONS_SQ CONS_SQ();
	::CONS_SQ_NL CONS_SQ_NL();
};
struct opt_tilde_data
	: public ExportTree
{
	static const int ID = 897;
	opt_tilde_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::tilde_data tilde_data();
};
struct pattern_el_lel
	: public ExportTree
{
	static const int ID = 898;
	pattern_el_lel( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::backtick_lit backtick_lit();
	enum prod_name {
		Id = 0,
		Lit = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pattern_el
	: public ExportTree
{
	static const int ID = 899;
	pattern_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_label opt_label();
	::pattern_el_lel pattern_el_lel();
	::DQ DQ();
	::_lrepeat_litpat_el LitpatElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	enum prod_name {
		PatternEl = 0,
		Dq = 1,
		Sq = 2,
		Tilde = 3,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct litpat_el
	: public ExportTree
{
	static const int ID = 900;
	litpat_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_pattern_el PatternElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
	enum prod_name {
		ConsData = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pattern_top_el
	: public ExportTree
{
	static const int ID = 901;
	pattern_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_litpat_el LitpatElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pattern_list
	: public ExportTree
{
	static const int ID = 902;
	pattern_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pattern_top_el pattern_top_el();
	::pattern_list _pattern_list();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct pattern
	: public ExportTree
{
	static const int ID = 903;
	pattern( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pattern_list pattern_list();
	::SQOPEN SQOPEN();
	::_lrepeat_pattern_el PatternElList();
	::SQCLOSE SQCLOSE();
	enum prod_name {
		TopList = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct E1
	: public ExportTree
{
	static const int ID = 904;
	E1( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct E2
	: public ExportTree
{
	static const int ID = 905;
	E2( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct E3
	: public ExportTree
{
	static const int ID = 906;
	E3( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct E4
	: public ExportTree
{
	static const int ID = 907;
	E4( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct cons_el
	: public ExportTree
{
	static const int ID = 908;
	cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::region_qual region_qual();
	::backtick_lit backtick_lit();
	::DQ DQ();
	::_lrepeat_lit_cons_el LitConsElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
	enum prod_name {
		Lit = 0,
		Dq = 1,
		Sq = 2,
		Tilde = 3,
		CodeExpr = 4,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lit_cons_el
	: public ExportTree
{
	static const int ID = 909;
	lit_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_cons_el ConsElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
	enum prod_name {
		ConsData = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct cons_top_el
	: public ExportTree
{
	static const int ID = 910;
	cons_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_cons_el LitConsElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct cons_list
	: public ExportTree
{
	static const int ID = 911;
	cons_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::cons_top_el cons_top_el();
	::cons_list _cons_list();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct constructor
	: public ExportTree
{
	static const int ID = 912;
	constructor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::cons_list cons_list();
	::SQOPEN SQOPEN();
	::_lrepeat_cons_el ConsElList();
	::SQCLOSE SQCLOSE();
	enum prod_name {
		TopList = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct accum_el
	: public ExportTree
{
	static const int ID = 913;
	accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::DQ DQ();
	::_lrepeat_lit_accum_el LitAccumElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
		CodeExpr = 3,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lit_accum_el
	: public ExportTree
{
	static const int ID = 914;
	lit_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_accum_el AccumElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
	enum prod_name {
		ConsData = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct accum_top_el
	: public ExportTree
{
	static const int ID = 915;
	accum_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_accum_el LitAccumElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::SQOPEN SQOPEN();
	::_lrepeat_accum_el AccumElList();
	::SQCLOSE SQCLOSE();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
		SubList = 3,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct accum_list
	: public ExportTree
{
	static const int ID = 916;
	accum_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::accum_top_el accum_top_el();
	::accum_list _accum_list();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct accumulate
	: public ExportTree
{
	static const int ID = 917;
	accumulate( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::accum_list accum_list();
};
struct string_el
	: public ExportTree
{
	static const int ID = 918;
	string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::DQ DQ();
	::_lrepeat_lit_string_el LitStringElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
		CodeExpr = 3,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lit_string_el
	: public ExportTree
{
	static const int ID = 919;
	lit_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_string_el StringElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
	enum prod_name {
		ConsData = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct string_top_el
	: public ExportTree
{
	static const int ID = 920;
	string_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_string_el LitStringElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	enum prod_name {
		Dq = 0,
		Sq = 1,
		Tilde = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct string_list
	: public ExportTree
{
	static const int ID = 921;
	string_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::string_top_el string_top_el();
	::string_list _string_list();
	enum prod_name {
		List = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct string
	: public ExportTree
{
	static const int ID = 922;
	string( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::string_list string_list();
	::SQOPEN SQOPEN();
	::_lrepeat_string_el StringElList();
	::SQCLOSE SQCLOSE();
	enum prod_name {
		TopList = 0,
		SubList = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct var_ref
	: public ExportTree
{
	static const int ID = 923;
	var_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::qual qual();
	::id id();
};
struct qual
	: public ExportTree
{
	static const int ID = 924;
	qual( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::qual _qual();
	::id id();
	::DOT DOT();
	::ARROW ARROW();
	enum prod_name {
		Dot = 0,
		Arrow = 1,
		Base = 2,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lex_expr
	: public ExportTree
{
	static const int ID = 925;
	lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr _lex_expr();
	::LEX_BAR LEX_BAR();
	::lex_term lex_term();
	::LEX_AMP LEX_AMP();
	::LEX_DASH LEX_DASH();
	::LEX_DASHDASH LEX_DASHDASH();
	enum prod_name {
		Bar = 0,
		Amp = 1,
		Dash = 2,
		DashDash = 3,
		Base = 4,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct opt_lex_dot
	: public ExportTree
{
	static const int ID = 926;
	opt_lex_dot( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX_DOT LEX_DOT();
};
struct lex_term
	: public ExportTree
{
	static const int ID = 927;
	lex_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_term _lex_term();
	::opt_lex_dot opt_lex_dot();
	::lex_factor_rep lex_factor_rep();
	::LEX_COLON_GT LEX_COLON_GT();
	::LEX_COLON_GTGT LEX_COLON_GTGT();
	::LEX_LT_COLON LEX_LT_COLON();
	enum prod_name {
		Dot = 0,
		ColonGt = 1,
		ColonGtGt = 2,
		LtColon = 3,
		Base = 4,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lex_factor_rep
	: public ExportTree
{
	static const int ID = 928;
	lex_factor_rep( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_rep _lex_factor_rep();
	::LEX_STAR LEX_STAR();
	::LEX_STARSTAR LEX_STARSTAR();
	::LEX_PLUS LEX_PLUS();
	::LEX_QUESTION LEX_QUESTION();
	::COPEN COPEN();
	::lex_uint lex_uint();
	::CCLOSE CCLOSE();
	::COMMA COMMA();
	::lex_uint Low();
	::lex_uint High();
	::lex_factor_neg lex_factor_neg();
	enum prod_name {
		Star = 0,
		StarStar = 1,
		Plus = 2,
		Question = 3,
		Exact = 4,
		Max = 5,
		Min = 6,
		Range = 7,
		Base = 8,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lex_factor_neg
	: public ExportTree
{
	static const int ID = 929;
	lex_factor_neg( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX_CARET LEX_CARET();
	::lex_factor_neg _lex_factor_neg();
	::lex_factor lex_factor();
	enum prod_name {
		Caret = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lex_range_lit
	: public ExportTree
{
	static const int ID = 930;
	lex_range_lit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_lit lex_lit();
	::lex_num lex_num();
	enum prod_name {
		Lit = 0,
		Number = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct lex_num
	: public ExportTree
{
	static const int ID = 931;
	lex_num( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_uint lex_uint();
	::lex_hex lex_hex();
};
struct lex_factor
	: public ExportTree
{
	static const int ID = 932;
	lex_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_lit lex_lit();
	::lex_id lex_id();
	::lex_uint lex_uint();
	::lex_hex lex_hex();
	::lex_range_lit Low();
	::LEX_DOTDOT LEX_DOTDOT();
	::lex_range_lit High();
	::LEX_SQOPEN_POS LEX_SQOPEN_POS();
	::reg_or_data reg_or_data();
	::RE_SQCLOSE RE_SQCLOSE();
	::LEX_SQOPEN_NEG LEX_SQOPEN_NEG();
	::LEX_POPEN LEX_POPEN();
	::lex_expr lex_expr();
	::LEX_PCLOSE LEX_PCLOSE();
	enum prod_name {
		Literal = 0,
		Id = 1,
		Number = 2,
		Hex = 3,
		Range = 4,
		PosOrBlock = 5,
		NegOrBlock = 6,
		Paren = 7,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct reg_or_data
	: public ExportTree
{
	static const int ID = 933;
	reg_or_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::reg_or_data _reg_or_data();
	::reg_or_char reg_or_char();
	enum prod_name {
		Data = 0,
		Base = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct reg_or_char
	: public ExportTree
{
	static const int ID = 934;
	reg_or_char( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::RE_CHAR RE_CHAR();
	::RE_CHAR Low();
	::RE_DASH RE_DASH();
	::RE_CHAR High();
	enum prod_name {
		Char = 0,
		Range = 1,
	};
	enum prod_name prodName() { return (enum prod_name)__tree->prod_num; }
};
struct _ign_0xa00181510
	: public ExportTree
{
	static const int ID = 166;
	_ign_0xa00181510( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa0012f6d0
	: public ExportTree
{
	static const int ID = 167;
	_ign_0xa0012f6d0( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa0012f910
	: public ExportTree
{
	static const int ID = 168;
	_ign_0xa0012f910( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa002148b0
	: public ExportTree
{
	static const int ID = 169;
	_ign_0xa002148b0( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa00215890
	: public ExportTree
{
	static const int ID = 170;
	_ign_0xa00215890( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa00222b30
	: public ExportTree
{
	static const int ID = 171;
	_ign_0xa00222b30( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ign_0xa00244580
	: public ExportTree
{
	static const int ID = 172;
	_ign_0xa00244580( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct __0xa0012f770_DEF_PAT_1
	: public ExportTree
{
	static const int ID = 173;
	__0xa0012f770_DEF_PAT_1( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct __0xa00212c10_DEF_PAT_2
	: public ExportTree
{
	static const int ID = 174;
	__0xa00212c10_DEF_PAT_2( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct __0xa00214950_DEF_PAT_3
	: public ExportTree
{
	static const int ID = 175;
	__0xa00214950_DEF_PAT_3( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct __0xa00222bd0_DEF_PAT_4
	: public ExportTree
{
	static const int ID = 176;
	__0xa00222bd0_DEF_PAT_4( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct __0xa00244620_DEF_PAT_5
	: public ExportTree
{
	static const int ID = 177;
	__0xa00244620_DEF_PAT_5( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_root_item
	: public ExportTree
{
	static const int ID = 935;
	_lrepeat_root_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_sq_cons_data
	: public ExportTree
{
	static const int ID = 936;
	_lrepeat_sq_cons_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_struct_item
	: public ExportTree
{
	static const int ID = 937;
	_lrepeat_struct_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_reduction_item
	: public ExportTree
{
	static const int ID = 938;
	_lrepeat_reduction_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_host_item
	: public ExportTree
{
	static const int ID = 939;
	_lrepeat_host_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_namespace_item
	: public ExportTree
{
	static const int ID = 940;
	_lrepeat_namespace_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_var_def
	: public ExportTree
{
	static const int ID = 941;
	_lrepeat_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_statement
	: public ExportTree
{
	static const int ID = 942;
	_lrepeat_statement( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_field_init
	: public ExportTree
{
	static const int ID = 943;
	_lrepeat_field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_litpat_el
	: public ExportTree
{
	static const int ID = 944;
	_lrepeat_litpat_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_pattern_el
	: public ExportTree
{
	static const int ID = 945;
	_lrepeat_pattern_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_lit_cons_el
	: public ExportTree
{
	static const int ID = 946;
	_lrepeat_lit_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_cons_el
	: public ExportTree
{
	static const int ID = 947;
	_lrepeat_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_lit_accum_el
	: public ExportTree
{
	static const int ID = 948;
	_lrepeat_lit_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_accum_el
	: public ExportTree
{
	static const int ID = 949;
	_lrepeat_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_lit_string_el
	: public ExportTree
{
	static const int ID = 950;
	_lrepeat_lit_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_string_el
	: public ExportTree
{
	static const int ID = 951;
	_lrepeat_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_any
	: public ExportTree
{
	static const int ID = 178;
	_T_any( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_start
	: public ExportTree
{
	static const int ID = 179;
	_T_start( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_root_item RootItemList();
};
struct _T_root_item
	: public ExportTree
{
	static const int ID = 180;
	_T_root_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::rl_def rl_def();
	::literal_def literal_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::cfl_redef cfl_redef();
	::region_def region_def();
	::struct_def struct_def();
	::namespace_def namespace_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::statement statement();
	::global_def global_def();
	::export_def export_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
	::_include _include();
	::reduction_def reduction_def();
};
struct _T__include
	: public ExportTree
{
	static const int ID = 181;
	_T__include( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::INCLUDE INCLUDE();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
};
struct _T_precedence_def
	: public ExportTree
{
	static const int ID = 182;
	_T_precedence_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pred_type pred_type();
	::pred_token_list pred_token_list();
};
struct _T_pred_type
	: public ExportTree
{
	static const int ID = 183;
	_T_pred_type( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEFT LEFT();
	::RIGHT RIGHT();
	::NONASSOC NONASSOC();
};
struct _T_pred_token_list
	: public ExportTree
{
	static const int ID = 184;
	_T_pred_token_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pred_token_list _pred_token_list();
	::COMMA COMMA();
	::pred_token pred_token();
};
struct _T_pred_token
	: public ExportTree
{
	static const int ID = 185;
	_T_pred_token( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::backtick_lit backtick_lit();
};
struct _T_pre_eof_def
	: public ExportTree
{
	static const int ID = 186;
	_T_pre_eof_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PREEOF PREEOF();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct _T_alias_def
	: public ExportTree
{
	static const int ID = 187;
	_T_alias_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ALIAS ALIAS();
	::id id();
	::type_ref type_ref();
};
struct _T_struct_item
	: public ExportTree
{
	static const int ID = 188;
	_T_struct_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::struct_var_def struct_var_def();
	::literal_def literal_def();
	::rl_def rl_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::region_def region_def();
	::struct_def struct_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::export_def export_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
};
struct _T_export_def
	: public ExportTree
{
	static const int ID = 189;
	_T_export_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EXPORT EXPORT();
	::var_def var_def();
	::opt_def_init opt_def_init();
};
struct _T_global_def
	: public ExportTree
{
	static const int ID = 190;
	_T_global_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::GLOBAL GLOBAL();
	::var_def var_def();
	::opt_def_init opt_def_init();
};
struct _T_iter_def
	: public ExportTree
{
	static const int ID = 191;
	_T_iter_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ITER ITER();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct _T_reference_type_ref
	: public ExportTree
{
	static const int ID = 192;
	_T_reference_type_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REF REF();
	::LT LT();
	::type_ref type_ref();
	::GT GT();
};
struct _T_param_var_def_seq
	: public ExportTree
{
	static const int ID = 193;
	_T_param_var_def_seq( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::param_var_def param_var_def();
	::COMMA COMMA();
	::param_var_def_seq _param_var_def_seq();
};
struct _T_param_var_def_list
	: public ExportTree
{
	static const int ID = 194;
	_T_param_var_def_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::param_var_def_seq param_var_def_seq();
};
struct _T_param_var_def
	: public ExportTree
{
	static const int ID = 195;
	_T_param_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	::type_ref type_ref();
	::reference_type_ref reference_type_ref();
};
struct _T_opt_export
	: public ExportTree
{
	static const int ID = 196;
	_T_opt_export( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EXPORT EXPORT();
};
struct _T_function_def
	: public ExportTree
{
	static const int ID = 197;
	_T_function_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_export opt_export();
	::type_ref type_ref();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct _T_in_host_def
	: public ExportTree
{
	static const int ID = 198;
	_T_in_host_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_export opt_export();
	::type_ref type_ref();
	::id id();
	::POPEN POPEN();
	::param_var_def_list ParamVarDefList();
	::PCLOSE PCLOSE();
	::EQUALS EQUALS();
	::id HostFunc();
};
struct _T_struct_var_def
	: public ExportTree
{
	static const int ID = 199;
	_T_struct_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::var_def var_def();
};
struct _T_struct_key
	: public ExportTree
{
	static const int ID = 200;
	_T_struct_key( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STRUCT STRUCT();
	::CONTEXT CONTEXT();
};
struct _T_struct_def
	: public ExportTree
{
	static const int ID = 201;
	_T_struct_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::struct_key struct_key();
	::id id();
	::_lrepeat_struct_item ItemList();
	::END END();
};
struct _T_literal_keyword
	: public ExportTree
{
	static const int ID = 202;
	_T_literal_keyword( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LITERAL LITERAL();
	::TOKEN TOKEN();
};
struct _T_literal_def
	: public ExportTree
{
	static const int ID = 203;
	_T_literal_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal_keyword literal_keyword();
	::literal_list literal_list();
};
struct _T_literal_list
	: public ExportTree
{
	static const int ID = 204;
	_T_literal_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal_list _literal_list();
	::literal_item literal_item();
};
struct _T_literal_item
	: public ExportTree
{
	static const int ID = 205;
	_T_literal_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::no_ignore_left no_ignore_left();
	::backtick_lit backtick_lit();
	::no_ignore_right no_ignore_right();
};
struct _T_no_ignore_left
	: public ExportTree
{
	static const int ID = 206;
	_T_no_ignore_left( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NI NI();
	::MINUS MINUS();
};
struct _T_no_ignore_right
	: public ExportTree
{
	static const int ID = 207;
	_T_no_ignore_right( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::MINUS MINUS();
	::NI NI();
};
struct _T_reduction_def
	: public ExportTree
{
	static const int ID = 208;
	_T_reduction_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDUCTION REDUCTION();
	::id id();
	::_lrepeat_reduction_item ItemList();
	::END END();
};
struct _T_red_nonterm
	: public ExportTree
{
	static const int ID = 209;
	_T_red_nonterm( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::type_ref type_ref();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct _T_red_action
	: public ExportTree
{
	static const int ID = 210;
	_T_red_action( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::type_ref type_ref();
	::COLON COLON();
	::id id();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct _T_host_item
	: public ExportTree
{
	static const int ID = 211;
	_T_host_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::red_id red_id();
	::red_lit red_lit();
	::red_comment red_comment();
	::red_ws red_ws();
	::red_any red_any();
	::RED_LHS RED_LHS();
	::RED_RHS_REF RED_RHS_REF();
	::RED_TREE_REF RED_TREE_REF();
	::RED_RHS_LOC RED_RHS_LOC();
	::RED_RHS_NREF RED_RHS_NREF();
	::RED_TREE_NREF RED_TREE_NREF();
	::RED_RHS_NLOC RED_RHS_NLOC();
	::RED_OPEN RED_OPEN();
	::_lrepeat_host_item HostItems();
	::RED_CLOSE RED_CLOSE();
};
struct _T_reduction_item
	: public ExportTree
{
	static const int ID = 212;
	_T_reduction_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::red_nonterm red_nonterm();
	::red_action red_action();
};
struct _T_namespace_def
	: public ExportTree
{
	static const int ID = 213;
	_T_namespace_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NAMESPACE NAMESPACE();
	::id id();
	::_lrepeat_namespace_item ItemList();
	::END END();
};
struct _T_namespace_item
	: public ExportTree
{
	static const int ID = 214;
	_T_namespace_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::rl_def rl_def();
	::literal_def literal_def();
	::token_def token_def();
	::ic_def ic_def();
	::ignore_def ignore_def();
	::cfl_def cfl_def();
	::region_def region_def();
	::struct_def struct_def();
	::namespace_def namespace_def();
	::function_def function_def();
	::in_host_def in_host_def();
	::iter_def iter_def();
	::pre_eof_def pre_eof_def();
	::precedence_def precedence_def();
	::alias_def alias_def();
	::_include _include();
	::global_def global_def();
};
struct _T_obj_var_list
	: public ExportTree
{
	static const int ID = 215;
	_T_obj_var_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_opt_reduce_first
	: public ExportTree
{
	static const int ID = 216;
	_T_opt_reduce_first( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDUCEFIRST REDUCEFIRST();
};
struct _T_cfl_def
	: public ExportTree
{
	static const int ID = 217;
	_T_cfl_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DEF DEF();
	::id id();
	::_lrepeat_var_def VarDefList();
	::opt_reduce_first opt_reduce_first();
	::prod_list prod_list();
};
struct _T_cfl_redef
	: public ExportTree
{
	static const int ID = 218;
	_T_cfl_redef( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REDEF REDEF();
	::id id();
	::_lrepeat_var_def VarDefList();
	::opt_reduce_first opt_reduce_first();
	::prod_list prod_list();
};
struct _T_region_def
	: public ExportTree
{
	static const int ID = 219;
	_T_region_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX LEX();
	::_lrepeat_root_item RootItemList();
	::END END();
};
struct _T_rl_def
	: public ExportTree
{
	static const int ID = 220;
	_T_rl_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::RL RL();
	::id id();
	::LEX_FSLASH LEX_FSLASH();
	::lex_expr lex_expr();
};
struct _T_opt_lex_expr
	: public ExportTree
{
	static const int ID = 221;
	_T_opt_lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr lex_expr();
};
struct _T_token_def
	: public ExportTree
{
	static const int ID = 222;
	_T_token_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::TOKEN TOKEN();
	::id id();
	::_lrepeat_var_def VarDefList();
	::no_ignore_left no_ignore_left();
	::LEX_FSLASH LEX_FSLASH();
	::opt_lex_expr opt_lex_expr();
	::no_ignore_right no_ignore_right();
	::opt_translate opt_translate();
};
struct _T_ic_def
	: public ExportTree
{
	static const int ID = 223;
	_T_ic_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::TOKEN TOKEN();
	::id id();
	::MINUS MINUS();
};
struct _T_opt_translate
	: public ExportTree
{
	static const int ID = 224;
	_T_opt_translate( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct _T_opt_id
	: public ExportTree
{
	static const int ID = 225;
	_T_opt_id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
};
struct _T_ignore_def
	: public ExportTree
{
	static const int ID = 226;
	_T_ignore_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::IGNORE IGNORE();
	::opt_id opt_id();
	::LEX_FSLASH LEX_FSLASH();
	::opt_lex_expr opt_lex_expr();
};
struct _T_prod_sublist
	: public ExportTree
{
	static const int ID = 227;
	_T_prod_sublist( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_sublist _prod_sublist();
	::BAR BAR();
	::prod_el_list prod_el_list();
};
struct _T_prod_el
	: public ExportTree
{
	static const int ID = 228;
	_T_prod_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_prod_el_name opt_prod_el_name();
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::backtick_lit backtick_lit();
	::POPEN POPEN();
	::prod_sublist prod_sublist();
	::PCLOSE PCLOSE();
};
struct _T_opt_prod_el_name
	: public ExportTree
{
	static const int ID = 229;
	_T_opt_prod_el_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
};
struct _T_prod_el_list
	: public ExportTree
{
	static const int ID = 230;
	_T_prod_el_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list _prod_el_list();
	::prod_el prod_el();
};
struct _T_opt_commit
	: public ExportTree
{
	static const int ID = 231;
	_T_opt_commit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COMMIT COMMIT();
};
struct _T_opt_prod_name
	: public ExportTree
{
	static const int ID = 232;
	_T_opt_prod_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COLON COLON();
	::id id();
};
struct _T_prod
	: public ExportTree
{
	static const int ID = 233;
	_T_prod( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::SQOPEN SQOPEN();
	::prod_el_list prod_el_list();
	::SQCLOSE SQCLOSE();
	::opt_prod_name opt_prod_name();
	::opt_commit opt_commit();
	::opt_reduce opt_reduce();
	::DOT_DOT_DOT DOT_DOT_DOT();
};
struct _T_opt_reduce
	: public ExportTree
{
	static const int ID = 234;
	_T_opt_reduce( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
};
struct _T_prod_list
	: public ExportTree
{
	static const int ID = 235;
	_T_prod_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_list _prod_list();
	::BAR BAR();
	::prod prod();
};
struct _T_case_clause
	: public ExportTree
{
	static const int ID = 236;
	_T_case_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::CASE CASE();
	::pattern pattern();
	::block_or_single block_or_single();
	::id id();
};
struct _T_default_clause
	: public ExportTree
{
	static const int ID = 237;
	_T_default_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DEFAULT DEFAULT();
	::block_or_single block_or_single();
};
struct _T_case_clause_list
	: public ExportTree
{
	static const int ID = 238;
	_T_case_clause_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::case_clause case_clause();
	::case_clause_list _case_clause_list();
	::default_clause default_clause();
};
struct _T_bare_tok
	: public ExportTree
{
	static const int ID = 239;
	_T_bare_tok( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LT_LT LT_LT();
	::LARROW LARROW();
};
struct _T_statement
	: public ExportTree
{
	static const int ID = 240;
	_T_statement( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::print_stmt print_stmt();
	::var_def var_def();
	::opt_def_init opt_def_init();
	::FOR FOR();
	::id id();
	::COLON COLON();
	::type_ref type_ref();
	::IN IN();
	::iter_call iter_call();
	::block_or_single block_or_single();
	::IF IF();
	::code_expr code_expr();
	::elsif_list elsif_list();
	::SWITCH SWITCH();
	::var_ref var_ref();
	::case_clause_list case_clause_list();
	::COPEN COPEN();
	::CCLOSE CCLOSE();
	::WHILE WHILE();
	::EQUALS EQUALS();
	::YIELD YIELD();
	::RETURN RETURN();
	::BREAK BREAK();
	::REJECT REJECT();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::stmt_or_factor stmt_or_factor();
	::bare_tok bare_tok();
	::accumulate accumulate();
	::opt_eos opt_eos();
};
struct _T_elsif_list
	: public ExportTree
{
	static const int ID = 241;
	_T_elsif_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::elsif_clause elsif_clause();
	::elsif_list _elsif_list();
	::optional_else optional_else();
};
struct _T_elsif_clause
	: public ExportTree
{
	static const int ID = 242;
	_T_elsif_clause( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ELSIF ELSIF();
	::code_expr code_expr();
	::block_or_single block_or_single();
};
struct _T_optional_else
	: public ExportTree
{
	static const int ID = 243;
	_T_optional_else( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::ELSE ELSE();
	::block_or_single block_or_single();
};
struct _T_call_arg_seq
	: public ExportTree
{
	static const int ID = 244;
	_T_call_arg_seq( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
	::COMMA COMMA();
	::call_arg_seq _call_arg_seq();
};
struct _T_call_arg_list
	: public ExportTree
{
	static const int ID = 245;
	_T_call_arg_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::call_arg_seq call_arg_seq();
};
struct _T_iter_call
	: public ExportTree
{
	static const int ID = 246;
	_T_iter_call( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::var_ref var_ref();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::E2 E2();
	::id id();
	::E3 E3();
	::code_expr code_expr();
};
struct _T_block_or_single
	: public ExportTree
{
	static const int ID = 247;
	_T_block_or_single( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COPEN COPEN();
	::lang_stmt_list lang_stmt_list();
	::CCLOSE CCLOSE();
	::statement statement();
};
struct _T_require_pattern
	: public ExportTree
{
	static const int ID = 248;
	_T_require_pattern( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::REQUIRE REQUIRE();
	::var_ref var_ref();
	::pattern pattern();
};
struct _T_opt_require_stmt
	: public ExportTree
{
	static const int ID = 249;
	_T_opt_require_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::require_pattern require_pattern();
	::lang_stmt_list lang_stmt_list();
};
struct _T_lang_stmt_list
	: public ExportTree
{
	static const int ID = 250;
	_T_lang_stmt_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_statement StmtList();
	::opt_require_stmt opt_require_stmt();
};
struct _T_opt_def_init
	: public ExportTree
{
	static const int ID = 251;
	_T_opt_def_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::EQUALS EQUALS();
	::code_expr code_expr();
};
struct _T_var_def
	: public ExportTree
{
	static const int ID = 252;
	_T_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
	::type_ref type_ref();
};
struct _T_print_stmt
	: public ExportTree
{
	static const int ID = 253;
	_T_print_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PRINT PRINT();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::PRINTS PRINTS();
	::var_ref var_ref();
	::COMMA COMMA();
	::accumulate accumulate();
};
struct _T_expr_stmt
	: public ExportTree
{
	static const int ID = 254;
	_T_expr_stmt( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
};
struct _T_code_expr
	: public ExportTree
{
	static const int ID = 255;
	_T_code_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr _code_expr();
	::AMP_AMP AMP_AMP();
	::code_relational code_relational();
	::BAR_BAR BAR_BAR();
};
struct _T_code_relational
	: public ExportTree
{
	static const int ID = 256;
	_T_code_relational( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_relational _code_relational();
	::EQ_EQ EQ_EQ();
	::code_additive code_additive();
	::BANG_EQ BANG_EQ();
	::LT LT();
	::GT GT();
	::LT_EQ LT_EQ();
	::GT_EQ GT_EQ();
};
struct _T_code_additive
	: public ExportTree
{
	static const int ID = 257;
	_T_code_additive( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_additive _code_additive();
	::PLUS PLUS();
	::code_multiplicitive code_multiplicitive();
	::MINUS MINUS();
};
struct _T_code_multiplicitive
	: public ExportTree
{
	static const int ID = 258;
	_T_code_multiplicitive( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_multiplicitive _code_multiplicitive();
	::STAR STAR();
	::code_unary code_unary();
	::FSLASH FSLASH();
};
struct _T_code_unary
	: public ExportTree
{
	static const int ID = 259;
	_T_code_unary( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::BANG BANG();
	::code_factor code_factor();
	::DOLLAR DOLLAR();
	::CARET CARET();
	::AT AT();
	::PERCENT PERCENT();
};
struct _T_opt_eos
	: public ExportTree
{
	static const int ID = 260;
	_T_opt_eos( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DOT DOT();
	::EOS EOS();
};
struct _T_code_factor
	: public ExportTree
{
	static const int ID = 261;
	_T_code_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::number number();
	::var_ref var_ref();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::NIL NIL();
	::TRUE TRUE();
	::FALSE FALSE();
	::code_expr code_expr();
	::string string();
	::type_ref type_ref();
	::IN IN();
	::TYPEID TYPEID();
	::LT LT();
	::GT GT();
	::CAST CAST();
	::code_factor _code_factor();
	::stmt_or_factor stmt_or_factor();
};
struct _T_type_ref
	: public ExportTree
{
	static const int ID = 262;
	_T_type_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::INT INT();
	::BOOL BOOL();
	::VOID VOID();
	::PARSER PARSER();
	::LT LT();
	::type_ref _type_ref();
	::GT GT();
	::LIST LIST();
	::MAP MAP();
	::type_ref KeyType();
	::COMMA COMMA();
	::type_ref ValType();
	::LIST_EL LIST_EL();
	::MAP_EL MAP_EL();
};
struct _T_region_qual
	: public ExportTree
{
	static const int ID = 263;
	_T_region_qual( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual _region_qual();
	::id id();
	::DOUBLE_COLON DOUBLE_COLON();
};
struct _T_opt_repeat
	: public ExportTree
{
	static const int ID = 264;
	_T_opt_repeat( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STAR STAR();
	::PLUS PLUS();
	::QUESTION QUESTION();
	::LT LT();
};
struct _T_opt_capture
	: public ExportTree
{
	static const int ID = 265;
	_T_opt_capture( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
};
struct _T_opt_field_init
	: public ExportTree
{
	static const int ID = 266;
	_T_opt_field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::POPEN POPEN();
	::_lrepeat_field_init FieldInitList();
	::PCLOSE PCLOSE();
};
struct _T_field_init
	: public ExportTree
{
	static const int ID = 267;
	_T_field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::code_expr code_expr();
};
struct _T_stmt_or_factor
	: public ExportTree
{
	static const int ID = 268;
	_T_stmt_or_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::PARSE PARSE();
	::opt_capture opt_capture();
	::type_ref type_ref();
	::opt_field_init opt_field_init();
	::accumulate accumulate();
	::PARSE_TREE PARSE_TREE();
	::PARSE_STOP PARSE_STOP();
	::REDUCE REDUCE();
	::id id();
	::READ_REDUCE READ_REDUCE();
	::SEND SEND();
	::var_ref var_ref();
	::opt_eos opt_eos();
	::SEND_TREE SEND_TREE();
	::MAKE_TREE MAKE_TREE();
	::POPEN POPEN();
	::call_arg_list call_arg_list();
	::PCLOSE PCLOSE();
	::MAKE_TOKEN MAKE_TOKEN();
	::CONS CONS();
	::constructor constructor();
	::MATCH MATCH();
	::pattern pattern();
	::NEW NEW();
	::_lrepeat_field_init FieldInitList();
};
struct _T_opt_label
	: public ExportTree
{
	static const int ID = 269;
	_T_opt_label( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id id();
	::COLON COLON();
};
struct _T_dq_lit_term
	: public ExportTree
{
	static const int ID = 270;
	_T_dq_lit_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LIT_DQ LIT_DQ();
	::LIT_DQ_NL LIT_DQ_NL();
};
struct _T_sq_lit_term
	: public ExportTree
{
	static const int ID = 271;
	_T_sq_lit_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::CONS_SQ CONS_SQ();
	::CONS_SQ_NL CONS_SQ_NL();
};
struct _T_opt_tilde_data
	: public ExportTree
{
	static const int ID = 272;
	_T_opt_tilde_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::tilde_data tilde_data();
};
struct _T_pattern_el_lel
	: public ExportTree
{
	static const int ID = 273;
	_T_pattern_el_lel( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::id id();
	::opt_repeat opt_repeat();
	::backtick_lit backtick_lit();
};
struct _T_pattern_el
	: public ExportTree
{
	static const int ID = 274;
	_T_pattern_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_label opt_label();
	::pattern_el_lel pattern_el_lel();
	::DQ DQ();
	::_lrepeat_litpat_el LitpatElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
};
struct _T_litpat_el
	: public ExportTree
{
	static const int ID = 275;
	_T_litpat_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_pattern_el PatternElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
};
struct _T_pattern_top_el
	: public ExportTree
{
	static const int ID = 276;
	_T_pattern_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_litpat_el LitpatElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
};
struct _T_pattern_list
	: public ExportTree
{
	static const int ID = 277;
	_T_pattern_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pattern_top_el pattern_top_el();
	::pattern_list _pattern_list();
};
struct _T_pattern
	: public ExportTree
{
	static const int ID = 278;
	_T_pattern( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::pattern_list pattern_list();
	::SQOPEN SQOPEN();
	::_lrepeat_pattern_el PatternElList();
	::SQCLOSE SQCLOSE();
};
struct _T_E1
	: public ExportTree
{
	static const int ID = 279;
	_T_E1( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_E2
	: public ExportTree
{
	static const int ID = 280;
	_T_E2( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_E3
	: public ExportTree
{
	static const int ID = 281;
	_T_E3( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_E4
	: public ExportTree
{
	static const int ID = 282;
	_T_E4( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_cons_el
	: public ExportTree
{
	static const int ID = 283;
	_T_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::region_qual region_qual();
	::backtick_lit backtick_lit();
	::DQ DQ();
	::_lrepeat_lit_cons_el LitConsElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
};
struct _T_lit_cons_el
	: public ExportTree
{
	static const int ID = 284;
	_T_lit_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_cons_el ConsElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
};
struct _T_cons_top_el
	: public ExportTree
{
	static const int ID = 285;
	_T_cons_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_cons_el LitConsElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
};
struct _T_cons_list
	: public ExportTree
{
	static const int ID = 286;
	_T_cons_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::cons_top_el cons_top_el();
	::cons_list _cons_list();
};
struct _T_constructor
	: public ExportTree
{
	static const int ID = 287;
	_T_constructor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::cons_list cons_list();
	::SQOPEN SQOPEN();
	::_lrepeat_cons_el ConsElList();
	::SQCLOSE SQCLOSE();
};
struct _T_accum_el
	: public ExportTree
{
	static const int ID = 288;
	_T_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::DQ DQ();
	::_lrepeat_lit_accum_el LitAccumElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
};
struct _T_lit_accum_el
	: public ExportTree
{
	static const int ID = 289;
	_T_lit_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_accum_el AccumElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
};
struct _T_accum_top_el
	: public ExportTree
{
	static const int ID = 290;
	_T_accum_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_accum_el LitAccumElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::SQOPEN SQOPEN();
	::_lrepeat_accum_el AccumElList();
	::SQCLOSE SQCLOSE();
};
struct _T_accum_list
	: public ExportTree
{
	static const int ID = 291;
	_T_accum_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::accum_top_el accum_top_el();
	::accum_list _accum_list();
};
struct _T_accumulate
	: public ExportTree
{
	static const int ID = 292;
	_T_accumulate( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::accum_list accum_list();
};
struct _T_string_el
	: public ExportTree
{
	static const int ID = 293;
	_T_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::E1 E1();
	::DQ DQ();
	::_lrepeat_lit_string_el LitStringElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
	::E2 E2();
	::code_expr code_expr();
};
struct _T_lit_string_el
	: public ExportTree
{
	static const int ID = 294;
	_T_lit_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lit_dq_data lit_dq_data();
	::LIT_SQOPEN LIT_SQOPEN();
	::_lrepeat_string_el StringElList();
	::LIT_SQCLOSE LIT_SQCLOSE();
};
struct _T_string_top_el
	: public ExportTree
{
	static const int ID = 295;
	_T_string_top_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::DQ DQ();
	::_lrepeat_lit_string_el LitStringElList();
	::dq_lit_term dq_lit_term();
	::SQ SQ();
	::_lrepeat_sq_cons_data SqConsDataList();
	::sq_lit_term sq_lit_term();
	::TILDE TILDE();
	::opt_tilde_data opt_tilde_data();
	::TILDE_NL TILDE_NL();
};
struct _T_string_list
	: public ExportTree
{
	static const int ID = 296;
	_T_string_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::string_top_el string_top_el();
	::string_list _string_list();
};
struct _T_string
	: public ExportTree
{
	static const int ID = 297;
	_T_string( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::string_list string_list();
	::SQOPEN SQOPEN();
	::_lrepeat_string_el StringElList();
	::SQCLOSE SQCLOSE();
};
struct _T_var_ref
	: public ExportTree
{
	static const int ID = 298;
	_T_var_ref( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::region_qual region_qual();
	::qual qual();
	::id id();
};
struct _T_qual
	: public ExportTree
{
	static const int ID = 299;
	_T_qual( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::qual _qual();
	::id id();
	::DOT DOT();
	::ARROW ARROW();
};
struct _T_lex_expr
	: public ExportTree
{
	static const int ID = 300;
	_T_lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr _lex_expr();
	::LEX_BAR LEX_BAR();
	::lex_term lex_term();
	::LEX_AMP LEX_AMP();
	::LEX_DASH LEX_DASH();
	::LEX_DASHDASH LEX_DASHDASH();
};
struct _T_opt_lex_dot
	: public ExportTree
{
	static const int ID = 301;
	_T_opt_lex_dot( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX_DOT LEX_DOT();
};
struct _T_lex_term
	: public ExportTree
{
	static const int ID = 302;
	_T_lex_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_term _lex_term();
	::opt_lex_dot opt_lex_dot();
	::lex_factor_rep lex_factor_rep();
	::LEX_COLON_GT LEX_COLON_GT();
	::LEX_COLON_GTGT LEX_COLON_GTGT();
	::LEX_LT_COLON LEX_LT_COLON();
};
struct _T_lex_factor_rep
	: public ExportTree
{
	static const int ID = 303;
	_T_lex_factor_rep( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_rep _lex_factor_rep();
	::LEX_STAR LEX_STAR();
	::LEX_STARSTAR LEX_STARSTAR();
	::LEX_PLUS LEX_PLUS();
	::LEX_QUESTION LEX_QUESTION();
	::COPEN COPEN();
	::lex_uint lex_uint();
	::CCLOSE CCLOSE();
	::COMMA COMMA();
	::lex_uint Low();
	::lex_uint High();
	::lex_factor_neg lex_factor_neg();
};
struct _T_lex_factor_neg
	: public ExportTree
{
	static const int ID = 304;
	_T_lex_factor_neg( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::LEX_CARET LEX_CARET();
	::lex_factor_neg _lex_factor_neg();
	::lex_factor lex_factor();
};
struct _T_lex_range_lit
	: public ExportTree
{
	static const int ID = 305;
	_T_lex_range_lit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_lit lex_lit();
	::lex_num lex_num();
};
struct _T_lex_num
	: public ExportTree
{
	static const int ID = 306;
	_T_lex_num( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_uint lex_uint();
	::lex_hex lex_hex();
};
struct _T_lex_factor
	: public ExportTree
{
	static const int ID = 307;
	_T_lex_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_lit lex_lit();
	::lex_id lex_id();
	::lex_uint lex_uint();
	::lex_hex lex_hex();
	::lex_range_lit Low();
	::LEX_DOTDOT LEX_DOTDOT();
	::lex_range_lit High();
	::LEX_SQOPEN_POS LEX_SQOPEN_POS();
	::reg_or_data reg_or_data();
	::RE_SQCLOSE RE_SQCLOSE();
	::LEX_SQOPEN_NEG LEX_SQOPEN_NEG();
	::LEX_POPEN LEX_POPEN();
	::lex_expr lex_expr();
	::LEX_PCLOSE LEX_PCLOSE();
};
struct _T_reg_or_data
	: public ExportTree
{
	static const int ID = 308;
	_T_reg_or_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::reg_or_data _reg_or_data();
	::reg_or_char reg_or_char();
};
struct _T_reg_or_char
	: public ExportTree
{
	static const int ID = 309;
	_T_reg_or_char( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::RE_CHAR RE_CHAR();
	::RE_CHAR Low();
	::RE_DASH RE_DASH();
	::RE_CHAR High();
};
struct _T__lrepeat_root_item
	: public ExportTree
{
	static const int ID = 310;
	_T__lrepeat_root_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_sq_cons_data
	: public ExportTree
{
	static const int ID = 311;
	_T__lrepeat_sq_cons_data( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_struct_item
	: public ExportTree
{
	static const int ID = 312;
	_T__lrepeat_struct_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_reduction_item
	: public ExportTree
{
	static const int ID = 313;
	_T__lrepeat_reduction_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_host_item
	: public ExportTree
{
	static const int ID = 314;
	_T__lrepeat_host_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_namespace_item
	: public ExportTree
{
	static const int ID = 315;
	_T__lrepeat_namespace_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_var_def
	: public ExportTree
{
	static const int ID = 316;
	_T__lrepeat_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_statement
	: public ExportTree
{
	static const int ID = 317;
	_T__lrepeat_statement( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_field_init
	: public ExportTree
{
	static const int ID = 318;
	_T__lrepeat_field_init( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_litpat_el
	: public ExportTree
{
	static const int ID = 319;
	_T__lrepeat_litpat_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_pattern_el
	: public ExportTree
{
	static const int ID = 320;
	_T__lrepeat_pattern_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_lit_cons_el
	: public ExportTree
{
	static const int ID = 321;
	_T__lrepeat_lit_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_cons_el
	: public ExportTree
{
	static const int ID = 322;
	_T__lrepeat_cons_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_lit_accum_el
	: public ExportTree
{
	static const int ID = 323;
	_T__lrepeat_lit_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_accum_el
	: public ExportTree
{
	static const int ID = 324;
	_T__lrepeat_accum_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_lit_string_el
	: public ExportTree
{
	static const int ID = 325;
	_T__lrepeat_lit_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T__lrepeat_string_el
	: public ExportTree
{
	static const int ID = 326;
	_T__lrepeat_string_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _root
	: public ExportTree
{
	static const int ID = 952;
	_root( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
::start ColmTree( colm_program *prg );
::str ColmError( colm_program *prg );

#endif
