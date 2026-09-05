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
struct _literal_0005;
struct _literal_0007;
struct _literal_0009;
struct _literal_000b;
struct _literal_000d;
struct _literal_001d;
struct _literal_001f;
struct _literal_0021;
struct _literal_0023;
struct _literal_0025;
struct _literal_002b;
struct _literal_002d;
struct _literal_002f;
struct _literal_0031;
struct _literal_0033;
struct _ignore_0001;
struct _ignore_0003;
struct NI;
struct COMMIT;
struct id;
struct literal;
struct STAR;
struct PLUS;
struct LEFT_STAR;
struct DOT;
struct COLON_LT;
struct lex_factor;
struct lex_factor_neg;
struct lex_factor_rep;
struct lex_term;
struct lex_expr;
struct opt_ni;
struct opt_prod_repeat;
struct opt_prod_el_name;
struct prod_el;
struct prod_el_list;
struct opt_commit;
struct opt_prod_name;
struct prod_var_def;
struct prod_var_list;
struct prod;
struct prod_list;
struct ignore_def;
struct token_def;
struct token_list;
struct item;
struct start;
struct _ign_0xa000198f0;
struct _lrepeat_item;
struct _T_any;
struct _T_lex_factor;
struct _T_lex_factor_neg;
struct _T_lex_factor_rep;
struct _T_lex_term;
struct _T_lex_expr;
struct _T_opt_ni;
struct _T_opt_prod_repeat;
struct _T_opt_prod_el_name;
struct _T_prod_el;
struct _T_prod_el_list;
struct _T_opt_commit;
struct _T_opt_prod_name;
struct _T_prod_var_def;
struct _T_prod_var_list;
struct _T_prod;
struct _T_prod_list;
struct _T_ignore_def;
struct _T_token_def;
struct _T_token_list;
struct _T_item;
struct _T_start;
struct _T__lrepeat_item;
struct _root;
struct _notoken
	: public ExportTree
{
	static const int ID = 130;
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
	static const int ID = 131;
	any( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0005
	: public ExportTree
{
	static const int ID = 4;
	_literal_0005( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0007
	: public ExportTree
{
	static const int ID = 5;
	_literal_0007( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0009
	: public ExportTree
{
	static const int ID = 6;
	_literal_0009( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_000b
	: public ExportTree
{
	static const int ID = 7;
	_literal_000b( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_000d
	: public ExportTree
{
	static const int ID = 8;
	_literal_000d( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_001d
	: public ExportTree
{
	static const int ID = 9;
	_literal_001d( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_001f
	: public ExportTree
{
	static const int ID = 10;
	_literal_001f( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0021
	: public ExportTree
{
	static const int ID = 11;
	_literal_0021( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0023
	: public ExportTree
{
	static const int ID = 12;
	_literal_0023( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0025
	: public ExportTree
{
	static const int ID = 13;
	_literal_0025( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_002b
	: public ExportTree
{
	static const int ID = 14;
	_literal_002b( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_002d
	: public ExportTree
{
	static const int ID = 15;
	_literal_002d( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_002f
	: public ExportTree
{
	static const int ID = 16;
	_literal_002f( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0031
	: public ExportTree
{
	static const int ID = 17;
	_literal_0031( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _literal_0033
	: public ExportTree
{
	static const int ID = 18;
	_literal_0033( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_0001
	: public ExportTree
{
	static const int ID = 19;
	_ignore_0001( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _ignore_0003
	: public ExportTree
{
	static const int ID = 20;
	_ignore_0003( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct NI
	: public ExportTree
{
	static const int ID = 21;
	NI( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COMMIT
	: public ExportTree
{
	static const int ID = 22;
	COMMIT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct id
	: public ExportTree
{
	static const int ID = 23;
	id( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct literal
	: public ExportTree
{
	static const int ID = 24;
	literal( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct STAR
	: public ExportTree
{
	static const int ID = 25;
	STAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct PLUS
	: public ExportTree
{
	static const int ID = 26;
	PLUS( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct LEFT_STAR
	: public ExportTree
{
	static const int ID = 27;
	LEFT_STAR( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct DOT
	: public ExportTree
{
	static const int ID = 28;
	DOT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct COLON_LT
	: public ExportTree
{
	static const int ID = 29;
	COLON_LT( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct lex_factor
	: public ExportTree
{
	static const int ID = 132;
	lex_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal Literal();
	::lex_expr Expr();
	::literal Low();
	::literal High();
	::id Id();
};
struct lex_factor_neg
	: public ExportTree
{
	static const int ID = 133;
	lex_factor_neg( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_neg FactorNeg();
	::lex_factor Factor();
};
struct lex_factor_rep
	: public ExportTree
{
	static const int ID = 134;
	lex_factor_rep( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_rep FactorRep();
	::STAR Star();
	::PLUS Plus();
	::lex_factor_neg FactorNeg();
};
struct lex_term
	: public ExportTree
{
	static const int ID = 135;
	lex_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_term Term();
	::DOT Dot();
	::lex_factor_rep FactorRep();
	::COLON_LT ColonLt();
};
struct lex_expr
	: public ExportTree
{
	static const int ID = 136;
	lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr Expr();
	::lex_term Term();
};
struct opt_ni
	: public ExportTree
{
	static const int ID = 137;
	opt_ni( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NI Ni();
};
struct opt_prod_repeat
	: public ExportTree
{
	static const int ID = 138;
	opt_prod_repeat( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STAR Star();
	::LEFT_STAR LeftStar();
};
struct opt_prod_el_name
	: public ExportTree
{
	static const int ID = 139;
	opt_prod_el_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
};
struct prod_el
	: public ExportTree
{
	static const int ID = 140;
	prod_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_prod_el_name OptName();
	::id Id();
	::opt_prod_repeat OptRepeat();
};
struct prod_el_list
	: public ExportTree
{
	static const int ID = 141;
	prod_el_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list ProdElList();
	::prod_el ProdEl();
};
struct opt_commit
	: public ExportTree
{
	static const int ID = 142;
	opt_commit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COMMIT Commit();
};
struct opt_prod_name
	: public ExportTree
{
	static const int ID = 143;
	opt_prod_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
};
struct prod_var_def
	: public ExportTree
{
	static const int ID = 144;
	prod_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
	::id Type();
};
struct prod_var_list
	: public ExportTree
{
	static const int ID = 145;
	prod_var_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_var_list VarDefList();
	::prod_var_def VarDef();
};
struct prod
	: public ExportTree
{
	static const int ID = 146;
	prod( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list ProdElList();
	::opt_prod_name OptName();
	::opt_commit OptCommit();
};
struct prod_list
	: public ExportTree
{
	static const int ID = 147;
	prod_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_list ProdList();
	::prod Prod();
};
struct ignore_def
	: public ExportTree
{
	static const int ID = 148;
	ignore_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr Expr();
};
struct token_def
	: public ExportTree
{
	static const int ID = 149;
	token_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Id();
	::opt_ni LeftNi();
	::lex_expr Expr();
	::opt_ni RightNi();
};
struct token_list
	: public ExportTree
{
	static const int ID = 150;
	token_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::token_list TokenList();
	::token_def TokenDef();
	::ignore_def IgnoreDef();
};
struct item
	: public ExportTree
{
	static const int ID = 151;
	item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::token_list TokenList();
	::id DefId();
	::prod_var_list ProdVarList();
	::prod_list ProdList();
};
struct start
	: public ExportTree
{
	static const int ID = 152;
	start( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_item ItemList();
};
struct _ign_0xa000198f0
	: public ExportTree
{
	static const int ID = 30;
	_ign_0xa000198f0( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _lrepeat_item
	: public ExportTree
{
	static const int ID = 153;
	_lrepeat_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_any
	: public ExportTree
{
	static const int ID = 31;
	_T_any( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _T_lex_factor
	: public ExportTree
{
	static const int ID = 32;
	_T_lex_factor( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::literal Literal();
	::lex_expr Expr();
	::literal Low();
	::literal High();
	::id Id();
};
struct _T_lex_factor_neg
	: public ExportTree
{
	static const int ID = 33;
	_T_lex_factor_neg( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_neg FactorNeg();
	::lex_factor Factor();
};
struct _T_lex_factor_rep
	: public ExportTree
{
	static const int ID = 34;
	_T_lex_factor_rep( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_factor_rep FactorRep();
	::STAR Star();
	::PLUS Plus();
	::lex_factor_neg FactorNeg();
};
struct _T_lex_term
	: public ExportTree
{
	static const int ID = 35;
	_T_lex_term( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_term Term();
	::DOT Dot();
	::lex_factor_rep FactorRep();
	::COLON_LT ColonLt();
};
struct _T_lex_expr
	: public ExportTree
{
	static const int ID = 36;
	_T_lex_expr( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr Expr();
	::lex_term Term();
};
struct _T_opt_ni
	: public ExportTree
{
	static const int ID = 37;
	_T_opt_ni( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::NI Ni();
};
struct _T_opt_prod_repeat
	: public ExportTree
{
	static const int ID = 38;
	_T_opt_prod_repeat( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::STAR Star();
	::LEFT_STAR LeftStar();
};
struct _T_opt_prod_el_name
	: public ExportTree
{
	static const int ID = 39;
	_T_opt_prod_el_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
};
struct _T_prod_el
	: public ExportTree
{
	static const int ID = 40;
	_T_prod_el( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::opt_prod_el_name OptName();
	::id Id();
	::opt_prod_repeat OptRepeat();
};
struct _T_prod_el_list
	: public ExportTree
{
	static const int ID = 41;
	_T_prod_el_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list ProdElList();
	::prod_el ProdEl();
};
struct _T_opt_commit
	: public ExportTree
{
	static const int ID = 42;
	_T_opt_commit( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::COMMIT Commit();
};
struct _T_opt_prod_name
	: public ExportTree
{
	static const int ID = 43;
	_T_opt_prod_name( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
};
struct _T_prod_var_def
	: public ExportTree
{
	static const int ID = 44;
	_T_prod_var_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Name();
	::id Type();
};
struct _T_prod_var_list
	: public ExportTree
{
	static const int ID = 45;
	_T_prod_var_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_var_list VarDefList();
	::prod_var_def VarDef();
};
struct _T_prod
	: public ExportTree
{
	static const int ID = 46;
	_T_prod( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_el_list ProdElList();
	::opt_prod_name OptName();
	::opt_commit OptCommit();
};
struct _T_prod_list
	: public ExportTree
{
	static const int ID = 47;
	_T_prod_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::prod_list ProdList();
	::prod Prod();
};
struct _T_ignore_def
	: public ExportTree
{
	static const int ID = 48;
	_T_ignore_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::lex_expr Expr();
};
struct _T_token_def
	: public ExportTree
{
	static const int ID = 49;
	_T_token_def( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::id Id();
	::opt_ni LeftNi();
	::lex_expr Expr();
	::opt_ni RightNi();
};
struct _T_token_list
	: public ExportTree
{
	static const int ID = 50;
	_T_token_list( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::token_list TokenList();
	::token_def TokenDef();
	::ignore_def IgnoreDef();
};
struct _T_item
	: public ExportTree
{
	static const int ID = 51;
	_T_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::token_list TokenList();
	::id DefId();
	::prod_var_list ProdVarList();
	::prod_list ProdList();
};
struct _T_start
	: public ExportTree
{
	static const int ID = 52;
	_T_start( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
	::_lrepeat_item ItemList();
};
struct _T__lrepeat_item
	: public ExportTree
{
	static const int ID = 53;
	_T__lrepeat_item( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
struct _root
	: public ExportTree
{
	static const int ID = 154;
	_root( colm_program *prg, colm_tree *tree ) : ExportTree( prg, tree ) {
}
};
::start ColmTree( colm_program *prg );

#endif
