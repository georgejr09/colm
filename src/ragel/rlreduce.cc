#include <colm/pdarun.h>
#include <colm/bytecode.h>
#include <colm/defs.h>
#include <colm/input.h>
#include <colm/tree.h>
#include <colm/program.h>
#include <colm/colm.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#include <iostream>
#include <fstream>

using std::endl;

#include "reducer.h"

struct lel_def_name
{
#line 118"rlreduce.lm"

		RedToken tok;
		colm_location loc;
	};
struct lel_action_spec
{
#line 162"rlreduce.lm"

		Action *action;
	};
struct lel_join
{
#line 351"rlreduce.lm"

		Join *join;
	};
struct lel_expression
{
#line 369"rlreduce.lm"

		Expression *expr;
	};
struct lel_expr_left
{
#line 393"rlreduce.lm"

		Term *term;
	};
struct lel_expression_op_list
{
#line 406"rlreduce.lm"

		Expression *expr;
	};
struct lel_expression_op
{
#line 428"rlreduce.lm"

		Expression::Type type;
		Term *term;
	};
struct lel_term
{
#line 461"rlreduce.lm"

		Term *term;
	};
struct lel_term_left
{
#line 487"rlreduce.lm"

		FactorWithAug *fwa;
	};
struct lel_term_op_list_short
{
#line 501"rlreduce.lm"

		Term *term;
	};
struct lel_term_op
{
#line 524"rlreduce.lm"

		Term::Type type;
		FactorWithAug *fwa;
	};
struct lel_factor_label
{
#line 563"rlreduce.lm"

		FactorWithAug *fwa;
	};
struct lel_factor_ep
{
#line 589"rlreduce.lm"

		FactorWithAug *fwa;
	};
struct lel_epsilon_target
{
#line 608"rlreduce.lm"

		NameRef *nameRef;
	};
struct lel_named_action_ref
{
#line 628"rlreduce.lm"

		Action *action;
	};
struct lel_action_arg_list
{
#line 703"rlreduce.lm"

		ActionArgList *argList;
	};
struct lel_opt_action_arg_list
{
#line 723"rlreduce.lm"

		ActionArgList *argList;
	};
struct lel_action_ref
{
#line 742"rlreduce.lm"

		Action *action;
	};
struct lel_action_params
{
#line 768"rlreduce.lm"

		ActionParamList *paramList;
	};
struct lel_opt_action_param_list
{
#line 782"rlreduce.lm"

		ActionParamList *paramList;
	};
struct lel_action_param
{
#line 799"rlreduce.lm"

		ActionParam *param;
	};
struct lel_action_param_list
{
#line 813"rlreduce.lm"

		ActionParamList *paramList;
	};
struct lel_action_block
{
#line 836"rlreduce.lm"

		colm_location loc;
		InlineList *inlineList;
	};
struct lel_inline_expr_reparse
{
#line 851"rlreduce.lm"

		InlineList *inlineList;
	};
struct lel_action_expr
{
#line 865"rlreduce.lm"

		colm_location loc;
		InlineList *inlineList;
	};
struct lel_state_ref
{
#line 879"rlreduce.lm"

		NameRef *nameRef;
	};
struct lel_opt_name_sep
{
#line 894"rlreduce.lm"

		bool nameSep;
	};
struct lel_state_ref_names
{
#line 912"rlreduce.lm"

		NameRef *nameRef;
	};
struct lel_priority_aug
{
#line 933"rlreduce.lm"

		int priorityNum;
	};
struct lel_priority_name
{
#line 956"rlreduce.lm"

		int priorityName;
	};
struct lel_error_name
{
#line 976"rlreduce.lm"

		int errName;
	};
struct lel_aug_base
{
#line 996"rlreduce.lm"

		colm_location loc;
		AugType augType;
	};
struct lel_aug_cond
{
#line 1016"rlreduce.lm"

		colm_location loc;
		AugType augType;
	};
struct lel_aug_to_state
{
#line 1047"rlreduce.lm"

		colm_location loc;
		AugType augType;	
	};
struct lel_aug_from_state
{
#line 1084"rlreduce.lm"

		colm_location loc;
		AugType augType;	
	};
struct lel_aug_eof
{
#line 1121"rlreduce.lm"

		colm_location loc;
		AugType augType;	
	};
struct lel_aug_gbl_error
{
#line 1158"rlreduce.lm"

		colm_location loc;
		AugType augType;	
	};
struct lel_aug_local_error
{
#line 1197"rlreduce.lm"

		colm_location loc;
		AugType augType;
	};
struct lel_factor_aug
{
#line 1252"rlreduce.lm"

		FactorWithAug *fwa;
	};
struct lel_factor_rep
{
#line 1354"rlreduce.lm"

		FactorWithRep *rep;
	};
struct lel_factor_rep_op_list
{
#line 1380"rlreduce.lm"

		FactorWithRep *rep;
	};
struct lel_factor_rep_op
{
#line 1403"rlreduce.lm"

		FactorWithRep *rep;
	};
struct lel_factor_rep_num
{
#line 1450"rlreduce.lm"

		int rep;
	};
struct lel_factor_neg
{
#line 1477"rlreduce.lm"

		FactorWithNeg *neg;
	};
struct lel_opt_max_arg
{
#line 1501"rlreduce.lm"

		Action *action;
	};
struct lel_nfastar
{
#line 1519"rlreduce.lm"

		Factor::NfaRepeatMode mode;
	};
struct lel_nfawrap
{
#line 1542"rlreduce.lm"

		Factor::NfaRepeatMode mode;
	};
struct lel_colon_cond
{
#line 1565"rlreduce.lm"

		Factor::Type type;
	};
struct lel_factor
{
#line 1601"rlreduce.lm"

		Factor *factor;
	};
struct lel_regex
{
#line 1715"rlreduce.lm"

		RegExpr *regExpr;
	};
struct lel_reg_item_rep_list
{
#line 1728"rlreduce.lm"

		RegExpr *regExpr;
	};
struct lel_reg_item_rep
{
#line 1745"rlreduce.lm"

		ReItem *reItem;
	};
struct lel_reg_item
{
#line 1766"rlreduce.lm"

		ReItem *reItem;
	};
struct lel_reg_or_data
{
#line 1793"rlreduce.lm"

		ReOrBlock *reOrBlock;
	};
struct lel_reg_or_char
{
#line 1828"rlreduce.lm"

		ReOrItem *reOrItem;
	};
struct lel_alphabet_num
{
#line 1856"rlreduce.lm"

		bool neg;
		RedToken tok;
	};
struct lel_range_lit
{
#line 1883"rlreduce.lm"

		Literal *literal;
	};
struct lel_lm
{
#line 1906"rlreduce.lm"

		MachineDef *machineDef;
	};
struct lel_lm_stmt_list
{
#line 1942"rlreduce.lm"

		LmPartList *lmPartList;
	};
struct lel_lm_stmt
{
#line 1965"rlreduce.lm"

		LongestMatchPart *lmPart;
	};
struct lel_opt_lm_act
{
#line 2003"rlreduce.lm"

		Action *action;
	};
struct lel_lm_act
{
#line 2021"rlreduce.lm"

		Action *action;
	};
struct lel_opt_export
{
#line 2041"rlreduce.lm"

		bool isSet;
	};
struct lel_nfa_expr
{
#line 2060"rlreduce.lm"

		NfaUnion *nfaUnion;
	};
struct lel_nfa_round_spec
{
#line 2079"rlreduce.lm"

		long depth;
		long group;
	};
struct lel_nfa_round_list
{
#line 2101"rlreduce.lm"

		NfaRoundVect *roundsList;
	};
struct lel_nfa_rounds
{
#line 2122"rlreduce.lm"

		NfaRoundVect *roundsList;
	};
struct lel_inline_block
{
#line 2143"rlreduce.lm"

		InlineList *inlineList;
	};
struct lel_block_item_list
{
#line 2156"rlreduce.lm"

		InlineList *inlineList;
	};
struct lel_block_item
{
#line 2183"rlreduce.lm"

		InlineItem *inlineItem;
		InlineList *inlineList;
	};
struct lel_expr_any
{
#line 2220"rlreduce.lm"

		InlineItem *inlineItem;
	};
struct lel_block_symbol
{
#line 2269"rlreduce.lm"

		InlineItem *inlineItem;
	};
struct lel_block_interpret
{
#line 2326"rlreduce.lm"

		InlineItem *inlineItem;
	};
struct lel_inline_expr
{
#line 2404"rlreduce.lm"

		InlineList *inlineList;
	};
struct lel_expr_item_list
{
#line 2417"rlreduce.lm"

		InlineList *inlineList;
	};
struct lel_expr_item
{
#line 2437"rlreduce.lm"

		InlineItem *inlineItem;
	};
struct lel_expr_symbol
{
#line 2458"rlreduce.lm"

		const char *sym;
		colm_location loc;
	};
struct lel_expr_interpret
{
#line 2483"rlreduce.lm"

		InlineItem *inlineItem;
	};
union commit_reduce_union
{
	lel_def_name def_name;
	lel_action_spec action_spec;
	lel_join join;
	lel_expression expression;
	lel_expr_left expr_left;
	lel_expression_op_list expression_op_list;
	lel_expression_op expression_op;
	lel_term term;
	lel_term_left term_left;
	lel_term_op_list_short term_op_list_short;
	lel_term_op term_op;
	lel_factor_label factor_label;
	lel_factor_ep factor_ep;
	lel_epsilon_target epsilon_target;
	lel_named_action_ref named_action_ref;
	lel_action_arg_list action_arg_list;
	lel_opt_action_arg_list opt_action_arg_list;
	lel_action_ref action_ref;
	lel_action_params action_params;
	lel_opt_action_param_list opt_action_param_list;
	lel_action_param action_param;
	lel_action_param_list action_param_list;
	lel_action_block action_block;
	lel_inline_expr_reparse inline_expr_reparse;
	lel_action_expr action_expr;
	lel_state_ref state_ref;
	lel_opt_name_sep opt_name_sep;
	lel_state_ref_names state_ref_names;
	lel_priority_aug priority_aug;
	lel_priority_name priority_name;
	lel_error_name error_name;
	lel_aug_base aug_base;
	lel_aug_cond aug_cond;
	lel_aug_to_state aug_to_state;
	lel_aug_from_state aug_from_state;
	lel_aug_eof aug_eof;
	lel_aug_gbl_error aug_gbl_error;
	lel_aug_local_error aug_local_error;
	lel_factor_aug factor_aug;
	lel_factor_rep factor_rep;
	lel_factor_rep_op_list factor_rep_op_list;
	lel_factor_rep_op factor_rep_op;
	lel_factor_rep_num factor_rep_num;
	lel_factor_neg factor_neg;
	lel_opt_max_arg opt_max_arg;
	lel_nfastar nfastar;
	lel_nfawrap nfawrap;
	lel_colon_cond colon_cond;
	lel_factor factor;
	lel_regex regex;
	lel_reg_item_rep_list reg_item_rep_list;
	lel_reg_item_rep reg_item_rep;
	lel_reg_item reg_item;
	lel_reg_or_data reg_or_data;
	lel_reg_or_char reg_or_char;
	lel_alphabet_num alphabet_num;
	lel_range_lit range_lit;
	lel_lm lm;
	lel_lm_stmt_list lm_stmt_list;
	lel_lm_stmt lm_stmt;
	lel_opt_lm_act opt_lm_act;
	lel_lm_act lm_act;
	lel_opt_export opt_export;
	lel_nfa_expr nfa_expr;
	lel_nfa_round_spec nfa_round_spec;
	lel_nfa_round_list nfa_round_list;
	lel_nfa_rounds nfa_rounds;
	lel_inline_block inline_block;
	lel_block_item_list block_item_list;
	lel_block_item block_item;
	lel_expr_any expr_any;
	lel_block_symbol block_symbol;
	lel_block_interpret block_interpret;
	lel_inline_expr inline_expr;
	lel_expr_item_list expr_item_list;
	lel_expr_item expr_item;
	lel_expr_symbol expr_symbol;
	lel_expr_interpret expr_interpret;
};

extern "C" long rlparseC_commit_union_sz( int reducer )
{
	return sizeof( commit_reduce_union );
}
struct read_reduce_node
{
	std::string name;
	int id;
	int prod_num;
	colm_location loc;
	colm_data data;
	commit_reduce_union u;
	read_reduce_node *next;
	read_reduce_node *child;
};


extern "C" void rlparseC_commit_reduce_forward( program_t *prg, tree_t **root,
		struct pda_run *pda_run, parse_tree_t *pt )
{
	switch ( pda_run->reducer ) {
	case 1:
		((TopLevel*)prg->red_ctx)->commit_reduce_forward( prg, root, pda_run, pt );
		break;
	}
}

extern "C" void rlparseC_read_reduce( program_t *prg, int reducer, stream_t *stream )
{
	switch ( reducer ) {
	}
}

void TopLevel::commit_reduce_forward( program_t *prg, 
		tree_t **root, struct pda_run *pda_run, parse_tree_t *pt )
{
	tree_t **sp = root;

	parse_tree_t *lel = pt;
	kid_t *kid = pt->shadow;

recurse:

	if ( lel->child != 0 ) {
		/* There are children. Must process all children first. */
		vm_push_ptree( lel );
		vm_push_kid( kid );

		lel = lel->child;
		kid = tree_child( prg, kid->tree );
		while ( lel != 0 ) {
			goto recurse;
			resume:
			lel = lel->next;
			kid = kid->next;
		}

		kid = vm_pop_kid();
		lel = vm_pop_ptree();
	}

	if ( !( lel->flags & PF_COMMITTED ) ) {
		/* Now can execute the reduction action. */
		{
		{ switch ( kid->tree->id ) {
		case 803: {
			if ( kid->tree->prod_num == 0 ) {
	lel_state_ref *_lhs = &((commit_reduce_union*)(lel+1))->state_ref;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_opt_name_sep *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->opt_name_sep;
	_pt_cursor = _pt_cursor->next;
lel_state_ref_names *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref_names;
#line 884 "rlreduce.lm"

		_lhs->nameRef = _rhs1->nameRef;
		if ( _rhs0->nameSep )
			_lhs->nameRef->prepend( "" );
				}
			break;
		}
		case 804: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_name_sep *_lhs = &((commit_reduce_union*)(lel+1))->opt_name_sep;
#line 899 "rlreduce.lm"

		_lhs->nameSep = true;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_name_sep *_lhs = &((commit_reduce_union*)(lel+1))->opt_name_sep;
#line 904 "rlreduce.lm"

		_lhs->nameSep = false;
				}
			break;
		}
		case 805: {
			if ( kid->tree->prod_num == 0 ) {
	lel_state_ref_names *_lhs = &((commit_reduce_union*)(lel+1))->state_ref_names;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_state_ref_names *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref_names;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
#line 917 "rlreduce.lm"

		_lhs->nameRef = _rhs0->nameRef;
		_lhs->nameRef->append( string( _rhs2->data, _rhs2->length ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_state_ref_names *_lhs = &((commit_reduce_union*)(lel+1))->state_ref_names;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 923 "rlreduce.lm"

		_lhs->nameRef = new NameRef;
		_lhs->nameRef->append( string( _rhs0->data, _rhs0->length ) );
				}
			break;
		}
		case 806: {
			if ( kid->tree->prod_num == 0 ) {
	lel_inline_expr *_lhs = &((commit_reduce_union*)(lel+1))->inline_expr;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_item_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_item_list;
#line 2409 "rlreduce.lm"

		_lhs->inlineList = _rhs0->inlineList;
				}
			break;
		}
		case 807: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_item_list *_lhs = &((commit_reduce_union*)(lel+1))->expr_item_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_item_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_item_list;
	_pt_cursor = _pt_cursor->next;
lel_expr_item *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->expr_item;
#line 2422 "rlreduce.lm"

		_lhs->inlineList = _rhs0->inlineList;
		_lhs->inlineList->append( _rhs1->inlineItem );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expr_item_list *_lhs = &((commit_reduce_union*)(lel+1))->expr_item_list;
#line 2428 "rlreduce.lm"

		_lhs->inlineList = new InlineList;
				}
			break;
		}
		case 808: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_item *_lhs = &((commit_reduce_union*)(lel+1))->expr_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_any *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_any;
#line 2442 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expr_item *_lhs = &((commit_reduce_union*)(lel+1))->expr_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_symbol *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_symbol;
#line 2446 "rlreduce.lm"

		string sym( _rhs0->sym );
		_lhs->inlineItem = new InlineItem( &_rhs0->loc, sym, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_expr_item *_lhs = &((commit_reduce_union*)(lel+1))->expr_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_interpret *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_interpret;
#line 2451 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			break;
		}
		case 809: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2225 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2231 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2237 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2243 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2249 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2255 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 6 ) {
	lel_expr_any *_lhs = &((commit_reduce_union*)(lel+1))->expr_any;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2261 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			break;
		}
		case 810: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_symbol *_lhs = &((commit_reduce_union*)(lel+1))->expr_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2464 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->sym = ","; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_expr_symbol *_lhs = &((commit_reduce_union*)(lel+1))->expr_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2466 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->sym = "("; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_expr_symbol *_lhs = &((commit_reduce_union*)(lel+1))->expr_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2468 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->sym = ")"; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_expr_symbol *_lhs = &((commit_reduce_union*)(lel+1))->expr_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2470 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->sym = "*"; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_expr_symbol *_lhs = &((commit_reduce_union*)(lel+1))->expr_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2472 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->sym = "::"; 			}
			break;
		}
		case 811: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2488 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::PChar );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2493 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Char );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2498 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Curs );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2503 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Targs );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_state_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2508 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, _rhs2->nameRef, InlineItem::Entry );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_expr_interpret *_lhs = &((commit_reduce_union*)(lel+1))->expr_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2513 "rlreduce.lm"

		string data( _rhs0->data + 1, _rhs0->length - 1 );
		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Subst );

		ActionParamList::Iter api = *paramList;
		for ( ; api.lte(); api++ ) {
			if ( (*api)->name == data )
				break;
		}

		if ( api.end() )
			pd->id->error( _loc0 ) << "invalid parameter reference \"$" << _rhs0->data << "\"" << endl;
		else {
			_lhs->inlineItem->substPos = api.pos();
		}
				}
			break;
		}
		case 812: {
			if ( kid->tree->prod_num == 0 ) {
	lel_inline_block *_lhs = &((commit_reduce_union*)(lel+1))->inline_block;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_block_item_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->block_item_list;
#line 2148 "rlreduce.lm"

		_lhs->inlineList = _rhs0->inlineList;
				}
			break;
		}
		case 813: {
			if ( kid->tree->prod_num == 0 ) {
	lel_block_item_list *_lhs = &((commit_reduce_union*)(lel+1))->block_item_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_block_item *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->block_item;
	_pt_cursor = _pt_cursor->next;
lel_block_item_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->block_item_list;
#line 2161 "rlreduce.lm"

		_lhs->inlineList = _rhs1->inlineList;

		if ( _rhs0->inlineItem != 0 )
			_lhs->inlineList->prepend( _rhs0->inlineItem );
		else if ( _rhs0->inlineList != 0 ) {
			_lhs->inlineList->prepend( *_rhs0->inlineList );
			delete _rhs0->inlineList;
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_block_item_list *_lhs = &((commit_reduce_union*)(lel+1))->block_item_list;
#line 2173 "rlreduce.lm"

		_lhs->inlineList = new InlineList;
				}
			break;
		}
		case 814: {
			if ( kid->tree->prod_num == 0 ) {
	lel_block_item *_lhs = &((commit_reduce_union*)(lel+1))->block_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_any *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_any;
#line 2189 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_block_item *_lhs = &((commit_reduce_union*)(lel+1))->block_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_block_symbol *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->block_symbol;
#line 2194 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_block_item *_lhs = &((commit_reduce_union*)(lel+1))->block_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_block_interpret *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->block_interpret;
#line 2199 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_block_item *_lhs = &((commit_reduce_union*)(lel+1))->block_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2204 "rlreduce.lm"

		_lhs->inlineList = _rhs1->inlineList;
		_lhs->inlineList->prepend( new InlineItem( _loc0, "{", InlineItem::Text ) );
		_lhs->inlineList->append( new InlineItem( _loc0, "}", InlineItem::Text ) );
		_lhs->inlineItem = 0;
				}
			break;
		}
		case 815: {
			if ( kid->tree->prod_num == 0 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2274 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2280 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2286 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2292 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2298 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_block_symbol *_lhs = &((commit_reduce_union*)(lel+1))->block_symbol;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2304 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->inlineItem = new InlineItem( _loc0, data, InlineItem::Text );
				}
			break;
		}
		case 816: {
			if ( kid->tree->prod_num == 0 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_interpret *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_interpret;
#line 2397 "rlreduce.lm"

		_lhs->inlineItem = _rhs0->inlineItem;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2331 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Hold );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2335 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::GotoExpr );
		_lhs->inlineItem->children = _rhs3->inlineList;
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2340 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::NextExpr );
		_lhs->inlineItem->children = _rhs3->inlineList;
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2345 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::CallExpr );
		_lhs->inlineItem->children = _rhs3->inlineList;
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2350 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::NcallExpr );
		_lhs->inlineItem->children = _rhs3->inlineList;
				}
			if ( kid->tree->prod_num == 6 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2355 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Exec );
		_lhs->inlineItem->children = _rhs1->inlineList;
				}
			if ( kid->tree->prod_num == 7 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_state_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2360 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0,
				_rhs1->nameRef, InlineItem::Goto );
				}
			if ( kid->tree->prod_num == 8 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_state_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2365 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0,
				_rhs1->nameRef, InlineItem::Next );
				}
			if ( kid->tree->prod_num == 9 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_state_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2370 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0,
				_rhs1->nameRef, InlineItem::Call );
				}
			if ( kid->tree->prod_num == 10 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_state_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->state_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2375 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0,
				_rhs1->nameRef, InlineItem::Ncall );
				}
			if ( kid->tree->prod_num == 11 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2380 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Ret );
				}
			if ( kid->tree->prod_num == 12 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2384 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Nret );
				}
			if ( kid->tree->prod_num == 13 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2388 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Break );
				}
			if ( kid->tree->prod_num == 14 ) {
	lel_block_interpret *_lhs = &((commit_reduce_union*)(lel+1))->block_interpret;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2392 "rlreduce.lm"

		_lhs->inlineItem = new InlineItem( _loc0, InlineItem::Nbreak );
				}
			break;
		}
		case 819: {
			if ( kid->tree->prod_num == 1 ) {
	lel_inline_expr_reparse *_lhs = &((commit_reduce_union*)(lel+1))->inline_expr_reparse;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_expr *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_expr;
#line 855 "rlreduce.lm"

		_lhs->inlineList = _rhs0->inlineList;
				}
			break;
		}
		case 820: {
			if ( kid->tree->prod_num == 0 ) {
	lel_join *_lhs = &((commit_reduce_union*)(lel+1))->join;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_join *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->join;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_expression *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->expression;
#line 356 "rlreduce.lm"

		_lhs->join = _rhs0->join;
		_lhs->join->exprList.append( _rhs2->expr );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_join *_lhs = &((commit_reduce_union*)(lel+1))->join;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expression *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expression;
#line 362 "rlreduce.lm"

		_lhs->join = new Join( _rhs0->expr );
				}
			break;
		}
		case 821: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expression *_lhs = &((commit_reduce_union*)(lel+1))->expression;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expr_left *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expr_left;
	_pt_cursor = _pt_cursor->next;
lel_expression_op_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->expression_op_list;
#line 374 "rlreduce.lm"

		// 1. reverse the list
		// 2. put the new term at the end.
		Expression *prev = new Expression( _rhs0->term );
		Expression *cur = _rhs1->expr;
		while ( cur != 0 ) {
			Expression *next = cur->expression;

			/* Reverse. */
			cur->expression = prev;

			prev = cur;
			cur = next;
		}

		_lhs->expr = prev;
				}
			break;
		}
		case 822: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expression_op_list *_lhs = &((commit_reduce_union*)(lel+1))->expression_op_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_expression_op *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->expression_op;
	_pt_cursor = _pt_cursor->next;
lel_expression_op_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->expression_op_list;
#line 411 "rlreduce.lm"

		_lhs->expr = new Expression( _rhs1->expr,
				_rhs0->term, _rhs0->type );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expression_op_list *_lhs = &((commit_reduce_union*)(lel+1))->expression_op_list;
#line 417 "rlreduce.lm"

		_lhs->expr = 0;
				}
			break;
		}
		case 823: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expression_op *_lhs = &((commit_reduce_union*)(lel+1))->expression_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_term *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 434 "rlreduce.lm"

		_lhs->type = Expression::OrType;
		_lhs->term = _rhs1->term;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_expression_op *_lhs = &((commit_reduce_union*)(lel+1))->expression_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_term *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 440 "rlreduce.lm"

		_lhs->type = Expression::IntersectType;
		_lhs->term = _rhs1->term;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_expression_op *_lhs = &((commit_reduce_union*)(lel+1))->expression_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_term *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 446 "rlreduce.lm"

		_lhs->type = Expression::SubtractType;
		_lhs->term = _rhs1->term;
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_expression_op *_lhs = &((commit_reduce_union*)(lel+1))->expression_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_term *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 452 "rlreduce.lm"

		_lhs->type = Expression::StrongSubtractType;
		_lhs->term = _rhs1->term;
				}
			break;
		}
		case 824: {
			if ( kid->tree->prod_num == 0 ) {
	lel_expr_left *_lhs = &((commit_reduce_union*)(lel+1))->expr_left;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_term *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 398 "rlreduce.lm"

		_lhs->term = _rhs0->term;
				}
			break;
		}
		case 825: {
			if ( kid->tree->prod_num == 0 ) {
	lel_term *_lhs = &((commit_reduce_union*)(lel+1))->term;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_term_left *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->term_left;
	_pt_cursor = _pt_cursor->next;
lel_term_op_list_short *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term_op_list_short;
#line 466 "rlreduce.lm"

		// 1. reverse the list
		// 2. put the new term at the end.
		Term *prev = new Term( _rhs0->fwa );
		Term *cur = _rhs1->term;
		while ( cur != 0 ) {
			Term *next = cur->term;

			/* Reverse. */
			cur->term = prev;

			prev = cur;
			cur = next;
		}

		_lhs->term = prev;
				}
			break;
		}
		case 826: {
			if ( kid->tree->prod_num == 0 ) {
	lel_term_left *_lhs = &((commit_reduce_union*)(lel+1))->term_left;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_label *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 492 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;
				}
			break;
		}
		case 827: {
			if ( kid->tree->prod_num == 0 ) {
	lel_term_op_list_short *_lhs = &((commit_reduce_union*)(lel+1))->term_op_list_short;
#line 506 "rlreduce.lm"

		_lhs->term = 0;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_term_op_list_short *_lhs = &((commit_reduce_union*)(lel+1))->term_op_list_short;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_term_op *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->term_op;
	_pt_cursor = _pt_cursor->next;
lel_term_op_list_short *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->term_op_list_short;
#line 511 "rlreduce.lm"

		_lhs->term = new Term( _rhs1->term,
				_rhs0->fwa, _rhs0->type );
				}
			break;
		}
		case 828: {
			if ( kid->tree->prod_num == 0 ) {
	lel_term_op *_lhs = &((commit_reduce_union*)(lel+1))->term_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_label *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 530 "rlreduce.lm"

		_lhs->type = Term::ConcatType;
		_lhs->fwa = _rhs0->fwa;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_term_op *_lhs = &((commit_reduce_union*)(lel+1))->term_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_label *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 536 "rlreduce.lm"

		_lhs->type = Term::ConcatType;
		_lhs->fwa = _rhs1->fwa;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_term_op *_lhs = &((commit_reduce_union*)(lel+1))->term_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_label *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 542 "rlreduce.lm"

		_lhs->type = Term::RightStartType;
		_lhs->fwa = _rhs1->fwa;
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_term_op *_lhs = &((commit_reduce_union*)(lel+1))->term_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_label *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 548 "rlreduce.lm"

		_lhs->type = Term::RightFinishType;
		_lhs->fwa = _rhs1->fwa;
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_term_op *_lhs = &((commit_reduce_union*)(lel+1))->term_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_label *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
#line 554 "rlreduce.lm"

		_lhs->type = Term::LeftType;
		_lhs->fwa = _rhs1->fwa;
				}
			break;
		}
		case 829: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_label *_lhs = &((commit_reduce_union*)(lel+1))->factor_label;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_factor_label *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->factor_label;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 568 "rlreduce.lm"

		_lhs->fwa = _rhs2->fwa;

		InputLoc loc = _loc0;
		string label( _rhs0->data, _rhs0->length );

		_lhs->fwa->labels.insert( _lhs->fwa->labels.begin(), Label(loc, label) );

		if ( pd->id->isBreadthLabel( label ) )
			_lhs->fwa->labels[0].cut = true;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_label *_lhs = &((commit_reduce_union*)(lel+1))->factor_label;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_ep *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_ep;
#line 581 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;
				}
			break;
		}
		case 830: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_ep *_lhs = &((commit_reduce_union*)(lel+1))->factor_ep;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_epsilon_target *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->epsilon_target;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
#line 594 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;
		_rhs0->fwa->epsilonLinks.append( EpsilonLink( _loc1, _rhs2->nameRef ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_ep *_lhs = &((commit_reduce_union*)(lel+1))->factor_ep;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
#line 600 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;
				}
			break;
		}
		case 831: {
			if ( kid->tree->prod_num == 0 ) {
	lel_epsilon_target *_lhs = &((commit_reduce_union*)(lel+1))->epsilon_target;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_epsilon_target *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->epsilon_target;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
#line 613 "rlreduce.lm"

		_lhs->nameRef = _rhs0->nameRef;
		_lhs->nameRef->append( string( _rhs2->data, _rhs2->length ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_epsilon_target *_lhs = &((commit_reduce_union*)(lel+1))->epsilon_target;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 619 "rlreduce.lm"

		_lhs->nameRef = new NameRef;
		_lhs->nameRef->append( string( _rhs0->data, _rhs0->length ) );
				}
			break;
		}
		case 832: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_expr *_lhs = &((commit_reduce_union*)(lel+1))->action_expr;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 871 "rlreduce.lm"

		_lhs->loc = *_loc0;
		_lhs->inlineList = _rhs1->inlineList;
				}
			break;
		}
		case 833: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_block *_lhs = &((commit_reduce_union*)(lel+1))->action_block;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 842 "rlreduce.lm"

		_lhs->loc = *_loc0;
		_lhs->inlineList = _rhs1->inlineList;
				}
			break;
		}
		case 834: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_arg_list *_lhs = &((commit_reduce_union*)(lel+1))->action_arg_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_arg_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_arg_list;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 708 "rlreduce.lm"

		_lhs->argList = _rhs0->argList;
		_lhs->argList->append( _rhs2->action );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_action_arg_list *_lhs = &((commit_reduce_union*)(lel+1))->action_arg_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_ref *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 714 "rlreduce.lm"

		_lhs->argList = new ActionArgList;
		_lhs->argList->append( _rhs0->action );
				}
			break;
		}
		case 835: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_action_arg_list *_lhs = &((commit_reduce_union*)(lel+1))->opt_action_arg_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_arg_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_arg_list;
#line 728 "rlreduce.lm"

		_lhs->argList = _rhs0->argList;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_action_arg_list *_lhs = &((commit_reduce_union*)(lel+1))->opt_action_arg_list;
#line 733 "rlreduce.lm"

		_lhs->argList = new ActionArgList;
				}
			break;
		}
		case 836: {
			if ( kid->tree->prod_num == 0 ) {
	lel_named_action_ref *_lhs = &((commit_reduce_union*)(lel+1))->named_action_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 633 "rlreduce.lm"

		/* Set the name in the actionDict. */
		string data( _rhs0->data, _rhs0->length );
		Action *action = pd->actionDict.find( data );
		if ( action != 0 ) {
			if ( action->paramList != 0 )
				pd->id->error(_loc0) << "expecting no action args for " << data << endp;

			/* Pass up the action element */
			_lhs->action = action;
		}
		else {
			/* Will recover by returning null as the action. */
			pd->id->error(_loc0) << "action lookup of \"" << data << "\" failed" << endl;
			_lhs->action = 0;
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_named_action_ref *_lhs = &((commit_reduce_union*)(lel+1))->named_action_ref;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_opt_action_arg_list *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->opt_action_arg_list;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 652 "rlreduce.lm"

		/* Set the name in the actionDict. */
		string data( _rhs0->data, _rhs0->length );
		Action *action = pd->actionDict.find( data );
		if ( action != 0 ) {
			if ( action->paramList == 0 )
				pd->id->error(_loc0) << "expecting action args" << endp;

			/* Pass up the action element */
			_lhs->action = action;
		}
		else {
			/* Will recover by returning null as the action. */
			pd->id->error(_loc0) << "action lookup of \"" << data << "\" failed" << endl;
			_lhs->action = 0;
		}

		if ( _lhs->action != 0 ) {
			ActionArgList *argList = _rhs2->argList;
			ActionParamList *paramList = action->paramList;

			/* Make sure the number of actions line up. */
			if ( argList->length() != paramList->length() ) {
				pd->id->error(_loc0) << "wrong number of action "
					"arguments for \"" << data << "\"" << endl;
			}
					
			/* Now we need to specialize using the supplied args. We can only
			 * present an Action* to fsmcodegen. */
			ActionArgListMapEl *el = action->argListMap->find( argList );
			if ( el == 0 ) {
				/* Allocate an action representing this specialization. */
				Action *specAction = Action::cons( _loc0, action,
						argList, pd->fsmCtx->nextCondId++ );
				pd->fsmCtx->actionList.append( specAction );

				el = action->argListMap->insert( argList, specAction );
			}
			else {
				/* Can delete $3->arg list. */
				delete _rhs2->argList;
			}

			_lhs->action = el->value;
		}
				}
			break;
		}
		case 837: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_ref *_lhs = &((commit_reduce_union*)(lel+1))->action_ref;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_named_action_ref *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->named_action_ref;
#line 747 "rlreduce.lm"

		_lhs->action = _rhs0->action;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_action_ref *_lhs = &((commit_reduce_union*)(lel+1))->action_ref;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_named_action_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->named_action_ref;
#line 752 "rlreduce.lm"

		_lhs->action = _rhs1->action;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_action_ref *_lhs = &((commit_reduce_union*)(lel+1))->action_ref;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_block *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
#line 757 "rlreduce.lm"

		/* Create the action, add it to the list and pass up. */
		Action *newAction = new Action( &_rhs0->loc, std::string(),
				_rhs0->inlineList, pd->fsmCtx->nextCondId++ );
		pd->fsmCtx->actionList.append( newAction );
		_lhs->action = newAction;
				}
			break;
		}
		case 838: {
			if ( kid->tree->prod_num == 0 ) {
	lel_priority_name *_lhs = &((commit_reduce_union*)(lel+1))->priority_name;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 961 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );

		// Lookup/create the priority key.
		PriorDictEl *priorDictEl;
		if ( pd->priorDict.insert( data, pd->fsmCtx->nextPriorKey, &priorDictEl ) )
			pd->fsmCtx->nextPriorKey += 1;

		// Use the inserted/found priority key.
		_lhs->priorityName = priorDictEl->value;
				}
			break;
		}
		case 839: {
			if ( kid->tree->prod_num == 0 ) {
	lel_error_name *_lhs = &((commit_reduce_union*)(lel+1))->error_name;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 981 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		/* Lookup/create the priority key. */
		LocalErrDictEl *localErrDictEl;
		if ( pd->localErrDict.insert( data, pd->nextLocalErrKey, &localErrDictEl ) )
			pd->nextLocalErrKey += 1;

		/* Use the inserted/found priority key. */
		_lhs->errName = localErrDictEl->value;
				}
			break;
		}
		case 840: {
			if ( kid->tree->prod_num == 0 ) {
	lel_priority_aug *_lhs = &((commit_reduce_union*)(lel+1))->priority_aug;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 937 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->priorityNum = tryLongScan( _loc0, data.c_str() );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_priority_aug *_lhs = &((commit_reduce_union*)(lel+1))->priority_aug;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 942 "rlreduce.lm"

		string data( _rhs1->data, _rhs1->length );
		_lhs->priorityNum = tryLongScan( _loc0, data.c_str() );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_priority_aug *_lhs = &((commit_reduce_union*)(lel+1))->priority_aug;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 947 "rlreduce.lm"

		string data( _rhs1->data, _rhs1->length );
		_lhs->priorityNum = -1 * tryLongScan( _loc0, data.c_str() );
				}
			break;
		}
		case 841: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_base *_lhs = &((commit_reduce_union*)(lel+1))->aug_base;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1006 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_finish; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_base *_lhs = &((commit_reduce_union*)(lel+1))->aug_base;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1002 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_base *_lhs = &((commit_reduce_union*)(lel+1))->aug_base;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1008 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_leave; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_base *_lhs = &((commit_reduce_union*)(lel+1))->aug_base;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1004 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all; 			}
			break;
		}
		case 842: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1022 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1028 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1034 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_leave; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1024 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1030 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1036 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_leave; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1026 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1032 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_cond *_lhs = &((commit_reduce_union*)(lel+1))->aug_cond;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1038 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_leave; 			}
			break;
		}
		case 843: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1053 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_to_state; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1057 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_to_state; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1061 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_to_state; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1065 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_to_state; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1069 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_to_state; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1073 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_to_state; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1055 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_to_state; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1059 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_to_state; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1063 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_to_state; 			}
			if ( kid->tree->prod_num == 9 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1067 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_to_state; 			}
			if ( kid->tree->prod_num == 10 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1071 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_to_state; 			}
			if ( kid->tree->prod_num == 11 ) {
	lel_aug_to_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_to_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1075 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_to_state; 			}
			break;
		}
		case 844: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1090 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_from_state; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1094 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_from_state; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1098 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_from_state; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1102 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_from_state; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1106 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_from_state; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1110 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_from_state; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1092 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_from_state; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1096 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_from_state; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1100 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_from_state; 			}
			if ( kid->tree->prod_num == 9 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1104 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_from_state; 			}
			if ( kid->tree->prod_num == 10 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1108 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_from_state; 			}
			if ( kid->tree->prod_num == 11 ) {
	lel_aug_from_state *_lhs = &((commit_reduce_union*)(lel+1))->aug_from_state;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1112 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_from_state; 			}
			break;
		}
		case 845: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1127 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_eof; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1131 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_eof; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1135 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_eof; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1139 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_eof; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1143 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_eof; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1147 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_eof; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1129 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_eof; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1133 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_eof; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1137 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_eof; 			}
			if ( kid->tree->prod_num == 9 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1141 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_eof; 			}
			if ( kid->tree->prod_num == 10 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1145 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_eof; 			}
			if ( kid->tree->prod_num == 11 ) {
	lel_aug_eof *_lhs = &((commit_reduce_union*)(lel+1))->aug_eof;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1149 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_eof; 			}
			break;
		}
		case 846: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1164 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_gbl_error; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1168 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_gbl_error; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1174 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_gbl_error; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1178 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_gbl_error; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1182 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_gbl_error; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1186 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_gbl_error; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1166 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_gbl_error; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1170 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_gbl_error; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1172 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_gbl_error; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1176 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_gbl_error; 			}
			if ( kid->tree->prod_num == 9 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1180 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_gbl_error; 			}
			if ( kid->tree->prod_num == 10 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1184 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_gbl_error; 			}
			if ( kid->tree->prod_num == 11 ) {
	lel_aug_gbl_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_gbl_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1188 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_gbl_error; 			}
			break;
		}
		case 847: {
			if ( kid->tree->prod_num == 0 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1203 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_local_error; 			}
			if ( kid->tree->prod_num == 1 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1209 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_local_error; 			}
			if ( kid->tree->prod_num == 2 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1215 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_local_error; 			}
			if ( kid->tree->prod_num == 3 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1221 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_local_error; 			}
			if ( kid->tree->prod_num == 4 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1227 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_local_error; 			}
			if ( kid->tree->prod_num == 5 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1233 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_local_error; 			}
			if ( kid->tree->prod_num == 6 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1206 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_start_local_error; 			}
			if ( kid->tree->prod_num == 7 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1212 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_start_local_error; 			}
			if ( kid->tree->prod_num == 8 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1218 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_all_local_error; 			}
			if ( kid->tree->prod_num == 9 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1224 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_final_local_error; 			}
			if ( kid->tree->prod_num == 10 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1230 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_not_final_local_error; 			}
			if ( kid->tree->prod_num == 11 ) {
	lel_aug_local_error *_lhs = &((commit_reduce_union*)(lel+1))->aug_local_error;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1236 "rlreduce.lm"
 _lhs->loc = *_loc0; _lhs->augType = at_middle_local_error; 			}
			break;
		}
		case 848: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_base *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_base;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1257 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		/* Append the action to the factorWithAug, record the refernce from 
		 * factorWithAug to the action and pass up the factorWithAug. */
		_lhs->fwa->actions.append( ParserAction(
				&_rhs1->loc, _rhs1->augType, 0, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_base *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_base;
	_pt_cursor = _pt_cursor->next;
lel_priority_aug *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->priority_aug;
#line 1267 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_rhs0->fwa->priorityAugs.append( PriorityAug( _rhs1->augType,
				pd->curDefPriorKey, _rhs2->priorityNum ) );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_base *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_base;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_priority_name *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->priority_name;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_priority_aug *_rhs5 = &((commit_reduce_union*)(_pt_cursor+1))->priority_aug;
#line 1275 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_rhs0->fwa->priorityAugs.append( PriorityAug( _rhs1->augType,
				_rhs3->priorityName, _rhs5->priorityNum ) );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_cond *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_cond;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1283 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->conditions.append( ConditionTest( &_rhs1->loc, 
				_rhs1->augType, _rhs2->action, true ) );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_cond *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_cond;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1291 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->conditions.append( ConditionTest( &_rhs1->loc, 
				_rhs1->augType, _rhs3->action, false ) );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_to_state *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_to_state;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1299 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->actions.append( ParserAction( &_rhs1->loc,
				_rhs1->augType, 0, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 6 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_from_state *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_from_state;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1307 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->actions.append( ParserAction( &_rhs1->loc,
				_rhs1->augType, 0, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 7 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_eof *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_eof;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1315 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;
		_rhs0->fwa->actions.append( ParserAction( &_rhs1->loc,
				_rhs1->augType, 0, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 8 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_gbl_error *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_gbl_error;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1322 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_rhs0->fwa->actions.append( ParserAction( &_rhs1->loc,
				_rhs1->augType, pd->curDefLocalErrKey, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 9 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_local_error *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_local_error;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1330 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->actions.append( ParserAction( &_rhs1->loc, 
				_rhs1->augType, pd->curDefLocalErrKey, _rhs2->action ) );
				}
			if ( kid->tree->prod_num == 10 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_aug *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_aug;
	_pt_cursor = _pt_cursor->next;
lel_aug_local_error *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->aug_local_error;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_error_name *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->error_name;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs5 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1338 "rlreduce.lm"

		_lhs->fwa = _rhs0->fwa;

		_lhs->fwa->actions.append( ParserAction( &_rhs1->loc, 
				_rhs1->augType, _rhs3->errName, _rhs5->action ) );
				}
			if ( kid->tree->prod_num == 11 ) {
	lel_factor_aug *_lhs = &((commit_reduce_union*)(lel+1))->factor_aug;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_rep *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep;
#line 1346 "rlreduce.lm"

		_lhs->fwa = new FactorWithAug( _rhs0->rep );
				}
			break;
		}
		case 849: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_rep *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_neg *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_neg;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_op_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_op_list;
#line 1359 "rlreduce.lm"

		FactorWithRep *prev = new FactorWithRep( _rhs0->neg );
		FactorWithRep *cur = _rhs1->rep;
		while ( cur != 0 ) {
			FactorWithRep *next = cur->factorWithRep;

			/* Reverse. */
			cur->factorWithRep = prev;

			prev = cur;
			cur = next;
		}

		_lhs->rep = prev;
				}
			break;
		}
		case 850: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_rep_op_list *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor_rep_op *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_op;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_op_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_op_list;
#line 1384 "rlreduce.lm"

		_lhs->rep = _rhs0->rep;
		_lhs->rep->factorWithRep = _rhs1->rep;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_rep_op_list *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op_list;
#line 1389 "rlreduce.lm"

		_lhs->rep = 0;
				}
			break;
		}
		case 851: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1407 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0, 0, 0, FactorWithRep::StarType );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1411 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0, 0, 0, FactorWithRep::StarStarType );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1415 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0, 0, 0, FactorWithRep::OptionalType );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1419 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0, 0, 0, FactorWithRep::PlusType );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_num *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1423 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0,
				_rhs1->rep, 0,
				FactorWithRep::ExactType );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_num *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1429 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0,
				0, _rhs2->rep,
				FactorWithRep::MaxType );
				}
			if ( kid->tree->prod_num == 6 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_num *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1435 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0,
				_rhs1->rep, 0,
				FactorWithRep::MinType );
				}
			if ( kid->tree->prod_num == 7 ) {
	lel_factor_rep_op *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_op;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_num *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_num;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_factor_rep_num *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->factor_rep_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1441 "rlreduce.lm"

		_lhs->rep = new FactorWithRep( _loc0, 0,
				_rhs1->rep, _rhs3->rep,
				FactorWithRep::RangeType );
				}
			break;
		}
		case 852: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_rep_num *_lhs = &((commit_reduce_union*)(lel+1))->factor_rep_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1455 "rlreduce.lm"

		// Convert the priority number to a long. Check for overflow.
		string data( _rhs0->data, _rhs0->length );
		errno = 0;
		long rep = strtol( data.c_str(), 0, 10 );
		if ( errno == ERANGE && rep == LONG_MAX ) {
			// Repetition too large. Recover by returing repetition 1. */
			pd->id->error(_loc0) << "repetition number " << data << " overflows" << endl;
			_lhs->rep = 1;
		}
		else {
			// Cannot be negative, so no overflow.
			_lhs->rep = rep;
		}
				}
			break;
		}
		case 853: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor_neg *_lhs = &((commit_reduce_union*)(lel+1))->factor_neg;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_neg *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_neg;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1482 "rlreduce.lm"

		_lhs->neg = new FactorWithNeg( _loc0,
				_rhs1->neg, FactorWithNeg::NegateType );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor_neg *_lhs = &((commit_reduce_union*)(lel+1))->factor_neg;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_factor_neg *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->factor_neg;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1488 "rlreduce.lm"

		_lhs->neg = new FactorWithNeg( _loc0,
				_rhs1->neg, FactorWithNeg::CharNegateType );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_factor_neg *_lhs = &((commit_reduce_union*)(lel+1))->factor_neg;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_factor *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->factor;
#line 1494 "rlreduce.lm"

		_lhs->neg = new FactorWithNeg( _rhs0->factor );
				}
			break;
		}
		case 854: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_max_arg *_lhs = &((commit_reduce_union*)(lel+1))->opt_max_arg;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 1506 "rlreduce.lm"

		_lhs->action = _rhs1->action;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_max_arg *_lhs = &((commit_reduce_union*)(lel+1))->opt_max_arg;
#line 1511 "rlreduce.lm"

		_lhs->action = 0;
				}
			break;
		}
		case 855: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfastar *_lhs = &((commit_reduce_union*)(lel+1))->nfastar;
#line 1524 "rlreduce.lm"

		_lhs->mode = Factor::NfaLegacy;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_nfastar *_lhs = &((commit_reduce_union*)(lel+1))->nfastar;
#line 1529 "rlreduce.lm"

		_lhs->mode = Factor::NfaLazy;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_nfastar *_lhs = &((commit_reduce_union*)(lel+1))->nfastar;
#line 1534 "rlreduce.lm"

		_lhs->mode = Factor::NfaGreedy;
				}
			break;
		}
		case 856: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfawrap *_lhs = &((commit_reduce_union*)(lel+1))->nfawrap;
#line 1547 "rlreduce.lm"

		_lhs->mode = Factor::NfaGreedy;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_nfawrap *_lhs = &((commit_reduce_union*)(lel+1))->nfawrap;
#line 1552 "rlreduce.lm"

		_lhs->mode = Factor::NfaLazy;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_nfawrap *_lhs = &((commit_reduce_union*)(lel+1))->nfawrap;
#line 1557 "rlreduce.lm"

		_lhs->mode = Factor::NfaGreedy;
				}
			break;
		}
		case 857: {
			if ( kid->tree->prod_num == 0 ) {
	lel_colon_cond *_lhs = &((commit_reduce_union*)(lel+1))->colon_cond;
#line 1570 "rlreduce.lm"

		_lhs->type = Factor::CondStar;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_colon_cond *_lhs = &((commit_reduce_union*)(lel+1))->colon_cond;
#line 1575 "rlreduce.lm"

		_lhs->type = Factor::CondStar;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_colon_cond *_lhs = &((commit_reduce_union*)(lel+1))->colon_cond;
#line 1580 "rlreduce.lm"

		_lhs->type = Factor::CondPlus;
				}
			break;
		}
		case 858: {
			if ( kid->tree->prod_num == 0 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_alphabet_num *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->alphabet_num;
#line 1613 "rlreduce.lm"

		_lhs->factor = new Factor( new Literal( _rhs0->tok.loc,
				_rhs0->neg, _rhs0->tok.data,
				_rhs0->tok.length, Literal::Number ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1620 "rlreduce.lm"

		InputLoc loc = _loc0;
		string s( _rhs0->data, _rhs0->length );
		
		/* Find the named graph. */
		GraphDictEl *gdNode = pd->graphDict.find( s );
		if ( gdNode == 0 ) {
			/* Recover by returning null as the factor node. */
			pd->id->error(loc) << "graph lookup of \"" << s << "\" failed" << endl;
			_lhs->factor = 0;
		}
		else if ( gdNode->isInstance ) {
			/* Recover by retuning null as the factor node. */
			pd->id->error(loc) << "references to graph instantiations not allowed "
					"in expressions" << endl;
			_lhs->factor = 0;
		}
		else {
			/* Create a factor node that is a lookup of an expression. */
			_lhs->factor = new Factor( loc, gdNode->value );
		}
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1644 "rlreduce.lm"

		_lhs->factor = new Factor( new Literal( _loc0, false,
				_rhs0->data, _rhs0->length, Literal::LitString ) );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_reg_or_data *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_data;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1667 "rlreduce.lm"

		_lhs->factor = new Factor( new ReItem( _loc0,
				_rhs1->reOrBlock, ReItem::OrBlock ) );
				}
			if ( kid->tree->prod_num == 4 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_reg_or_data *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_data;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1673 "rlreduce.lm"

		_lhs->factor = new Factor( new ReItem( _loc0,
				_rhs1->reOrBlock, ReItem::NegOrBlock ) );
				}
			if ( kid->tree->prod_num == 5 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_regex *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->regex;
	_pt_cursor = _pt_cursor->next;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
	colm_location *_loc2 = colm_find_location( prg, _tree_cursor->tree );
#line 1704 "rlreduce.lm"

		bool caseInsensitive = false;
		checkLitOptions( pd->id, _loc2, _rhs2->data, _rhs2->length, caseInsensitive );
		if ( caseInsensitive )
			_rhs1->regExpr->caseInsensitive = true;
		_lhs->factor = new Factor( _rhs1->regExpr );
				}
			if ( kid->tree->prod_num == 6 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_range_lit *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->range_lit;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_range_lit *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->range_lit;
#line 1656 "rlreduce.lm"

		_lhs->factor = new Factor( new Range( _rhs0->literal, _rhs2->literal, false ) );
				}
			if ( kid->tree->prod_num == 7 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_range_lit *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->range_lit;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_range_lit *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->range_lit;
#line 1661 "rlreduce.lm"

		_lhs->factor = new Factor( new Range( _rhs0->literal, _rhs2->literal, true ) );
				}
			if ( kid->tree->prod_num == 8 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_nfastar *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->nfastar;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_expression *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->expression;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs4 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs6 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs8 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs10 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs12 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs14 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1679 "rlreduce.lm"

		/* push, pop, init, stay, repeat, exit */
		_lhs->factor = new Factor( _loc0, pd->nextRepId++, _rhs2->expr,
				_rhs4->action, _rhs6->action, _rhs8->action, _rhs10->action,
				_rhs12->action, _rhs14->action, Factor::NfaRep );
		_lhs->factor->mode = _rhs0->mode;
				}
			if ( kid->tree->prod_num == 9 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_nfawrap *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->nfawrap;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_expression *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->expression;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs4 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs6 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs8 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs10 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs12 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1688 "rlreduce.lm"

		/* push, pop, init, stay, repeat, exit */
		_lhs->factor = new Factor( _loc0, pd->nextRepId++, _rhs2->expr,
				_rhs4->action, _rhs6->action, _rhs8->action, _rhs10->action,
				0, _rhs12->action, Factor::NfaWrap );
		_lhs->factor->mode = _rhs0->mode;
				}
			if ( kid->tree->prod_num == 10 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_colon_cond *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->colon_cond;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_expression *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->expression;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs4 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs6 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs8 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
	_pt_cursor = _pt_cursor->next;
lel_opt_max_arg *_rhs9 = &((commit_reduce_union*)(_pt_cursor+1))->opt_max_arg;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
#line 1697 "rlreduce.lm"

		/* init, inc, min, opt-max. */
		_lhs->factor = new Factor( _loc1, pd->nextRepId++, _rhs2->expr,
				_rhs4->action, _rhs6->action, _rhs8->action, _rhs9->action, 0, 0, _rhs0->type );
				}
			if ( kid->tree->prod_num == 11 ) {
	lel_factor *_lhs = &((commit_reduce_union*)(lel+1))->factor;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_join *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->join;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1606 "rlreduce.lm"

		/* Create a new factor going to a parenthesized join. */
		_lhs->factor = new Factor( _rhs1->join );
		_lhs->factor->join->loc = _loc0;
				}
			break;
		}
		case 859: {
			if ( kid->tree->prod_num == 0 ) {
	lel_regex *_lhs = &((commit_reduce_union*)(lel+1))->regex;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_reg_item_rep_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->reg_item_rep_list;
#line 1720 "rlreduce.lm"

		_lhs->regExpr = _rhs0->regExpr;
				}
			break;
		}
		case 860: {
			if ( kid->tree->prod_num == 0 ) {
	lel_reg_item_rep_list *_lhs = &((commit_reduce_union*)(lel+1))->reg_item_rep_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_reg_item_rep_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->reg_item_rep_list;
	_pt_cursor = _pt_cursor->next;
lel_reg_item_rep *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_item_rep;
#line 1732 "rlreduce.lm"

		_lhs->regExpr = new RegExpr( _rhs0->regExpr,
				_rhs1->reItem );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_reg_item_rep_list *_lhs = &((commit_reduce_union*)(lel+1))->reg_item_rep_list;
#line 1737 "rlreduce.lm"

		_lhs->regExpr = new RegExpr();
				}
			break;
		}
		case 861: {
			if ( kid->tree->prod_num == 0 ) {
	lel_reg_item_rep *_lhs = &((commit_reduce_union*)(lel+1))->reg_item_rep;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_reg_item *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->reg_item;
#line 1750 "rlreduce.lm"

		_lhs->reItem = _rhs0->reItem;
		_lhs->reItem->star = true;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_reg_item_rep *_lhs = &((commit_reduce_union*)(lel+1))->reg_item_rep;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_reg_item *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->reg_item;
#line 1756 "rlreduce.lm"

		_lhs->reItem = _rhs0->reItem;
				}
			break;
		}
		case 862: {
			if ( kid->tree->prod_num == 0 ) {
	lel_reg_item *_lhs = &((commit_reduce_union*)(lel+1))->reg_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_reg_or_data *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_data;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1770 "rlreduce.lm"

		_lhs->reItem = new ReItem( _loc0, _rhs1->reOrBlock, ReItem::OrBlock );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_reg_item *_lhs = &((commit_reduce_union*)(lel+1))->reg_item;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_reg_or_data *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_data;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1774 "rlreduce.lm"

		_lhs->reItem = new ReItem( _loc0, _rhs1->reOrBlock, ReItem::NegOrBlock );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_reg_item *_lhs = &((commit_reduce_union*)(lel+1))->reg_item;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1778 "rlreduce.lm"

		_lhs->reItem = new ReItem( _loc0, ReItem::Dot );
				}
			if ( kid->tree->prod_num == 3 ) {
	lel_reg_item *_lhs = &((commit_reduce_union*)(lel+1))->reg_item;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1782 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		char *c = unescape( data.c_str() );
		_lhs->reItem = new ReItem( _loc0, c, strlen(c) );
		delete[] c;
				}
			break;
		}
		case 863: {
			if ( kid->tree->prod_num == 0 ) {
	lel_reg_or_data *_lhs = &((commit_reduce_union*)(lel+1))->reg_or_data;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_reg_or_data *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_data;
	_pt_cursor = _pt_cursor->next;
lel_reg_or_char *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->reg_or_char;
#line 1798 "rlreduce.lm"

		/* An optimization to lessen the tree size. If an or char is directly
		 * under the left side on the right and the right side is another or
		 * char then paste them together and return the left side. Otherwise
		 * just put the two under a new or data node. */
		if ( _rhs1->reOrItem->type == ReOrItem::Data &&
				_rhs0->reOrBlock->type == ReOrBlock::RecurseItem &&
				_rhs0->reOrBlock->item->type == ReOrItem::Data )
		{
			/* Append the right side to right side of the left and toss the
			 * right side. */
			_rhs0->reOrBlock->item->data.append( _rhs1->reOrItem->data );
			delete _rhs1->reOrItem;
			_lhs->reOrBlock = _rhs0->reOrBlock;
		}
		else {
			/* Can't optimize, put the left and right under a new node. */
			_lhs->reOrBlock = new ReOrBlock( _rhs0->reOrBlock, _rhs1->reOrItem );
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_reg_or_data *_lhs = &((commit_reduce_union*)(lel+1))->reg_or_data;
#line 1820 "rlreduce.lm"

		_lhs->reOrBlock = new ReOrBlock();
				}
			break;
		}
		case 864: {
			if ( kid->tree->prod_num == 0 ) {
	lel_reg_or_char *_lhs = &((commit_reduce_union*)(lel+1))->reg_or_char;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1833 "rlreduce.lm"

		// ReOrItem *reOrItem;
		char *c = unescape( _rhs0->data, _rhs0->length );
		_lhs->reOrItem = new ReOrItem( _loc0, c, 1 );
		delete[] c;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_reg_or_char *_lhs = &((commit_reduce_union*)(lel+1))->reg_or_char;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	_tree_cursor = _tree_cursor->next;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
#line 1841 "rlreduce.lm"

		// ReOrItem *reOrItem;
		char *low = unescape( _rhs0->data, _rhs0->length );
		char *high = unescape( _rhs2->data, _rhs2->length );
		_lhs->reOrItem = new ReOrItem( _loc1, low[0], high[0] );
		delete[] low;
		delete[] high;
				}
			break;
		}
		case 865: {
			if ( kid->tree->prod_num == 0 ) {
	lel_range_lit *_lhs = &((commit_reduce_union*)(lel+1))->range_lit;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1888 "rlreduce.lm"

		/* Range literals must have only one char. We restrict this in the
		 * parse tree. */
		_lhs->literal = new Literal( _loc0, false,
				_rhs0->data, _rhs0->length, Literal::LitString );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_range_lit *_lhs = &((commit_reduce_union*)(lel+1))->range_lit;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_alphabet_num *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->alphabet_num;
#line 1896 "rlreduce.lm"

		_lhs->literal = new Literal( _rhs0->tok.loc,
				_rhs0->neg, _rhs0->tok.data,
				_rhs0->tok.length, Literal::Number );
				}
			break;
		}
		case 866: {
			if ( kid->tree->prod_num == 0 ) {
	lel_alphabet_num *_lhs = &((commit_reduce_union*)(lel+1))->alphabet_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1862 "rlreduce.lm"

		_lhs->neg = false;
		_lhs->tok.set( _rhs0, _loc0 );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_alphabet_num *_lhs = &((commit_reduce_union*)(lel+1))->alphabet_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 1868 "rlreduce.lm"

		_lhs->neg = true;
		_lhs->tok.set( _rhs1, _loc0 );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_alphabet_num *_lhs = &((commit_reduce_union*)(lel+1))->alphabet_num;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1874 "rlreduce.lm"

		_lhs->neg = false;
		_lhs->tok.set( _rhs0, _loc0 );
				}
			break;
		}
		case 867: {
			if ( kid->tree->prod_num == 0 ) {
	lel_lm_act *_lhs = &((commit_reduce_union*)(lel+1))->lm_act;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_ref *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_ref;
#line 2025 "rlreduce.lm"

		_lhs->action = _rhs1->action;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_lm_act *_lhs = &((commit_reduce_union*)(lel+1))->lm_act;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_block *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
#line 2029 "rlreduce.lm"

		/* Create the action, add it to the list and pass up. */
		Action *newAction = new Action( &_rhs0->loc, std::string(),
				_rhs0->inlineList, pd->fsmCtx->nextCondId++ );
		pd->fsmCtx->actionList.append( newAction );
		_lhs->action = newAction;
				}
			break;
		}
		case 868: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_lm_act *_lhs = &((commit_reduce_union*)(lel+1))->opt_lm_act;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_lm_act *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->lm_act;
#line 2008 "rlreduce.lm"

		_lhs->action = _rhs0->action;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_lm_act *_lhs = &((commit_reduce_union*)(lel+1))->opt_lm_act;
#line 2013 "rlreduce.lm"

		_lhs->action = 0;
				}
			break;
		}
		case 869: {
			if ( kid->tree->prod_num == 0 ) {
	lel_lm_stmt *_lhs = &((commit_reduce_union*)(lel+1))->lm_stmt;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_join *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->join;
	_pt_cursor = _pt_cursor->next;
lel_opt_lm_act *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->opt_lm_act;
#line 1970 "rlreduce.lm"

		InputLoc loc;
		loc.line = 1;
		loc.fileName = 0;

		Join *join = _rhs0->join;
		Action *action = _rhs1->action;

		if ( action != 0 )
			action->isLmAction = true;

		/* Provide a location to join. Unfortunately We don't
		 * have the start of the join as in other occurances. Use the end. */
		join->loc = loc;

		_lhs->lmPart = new LongestMatchPart( join, action, 
				loc, pd->nextLongestMatchId++ );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_lm_stmt *_lhs = &((commit_reduce_union*)(lel+1))->lm_stmt;
#line 1990 "rlreduce.lm"

		_lhs->lmPart = 0;
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_lm_stmt *_lhs = &((commit_reduce_union*)(lel+1))->lm_stmt;
#line 1995 "rlreduce.lm"

		_lhs->lmPart = 0;
				}
			break;
		}
		case 870: {
			if ( kid->tree->prod_num == 0 ) {
	lel_lm_stmt_list *_lhs = &((commit_reduce_union*)(lel+1))->lm_stmt_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_lm_stmt_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->lm_stmt_list;
	_pt_cursor = _pt_cursor->next;
lel_lm_stmt *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->lm_stmt;
#line 1946 "rlreduce.lm"

		_lhs->lmPartList = _rhs0->lmPartList;
		if ( _rhs1->lmPart != 0 )
			_lhs->lmPartList->append( _rhs1->lmPart );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_lm_stmt_list *_lhs = &((commit_reduce_union*)(lel+1))->lm_stmt_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_lm_stmt *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->lm_stmt;
#line 1952 "rlreduce.lm"

		_lhs->lmPartList = new LmPartList;
		if ( _rhs0->lmPart != 0 )
			_lhs->lmPartList->append( _rhs0->lmPart );
				}
			break;
		}
		case 871: {
			if ( kid->tree->prod_num == 0 ) {
	lel_lm *_lhs = &((commit_reduce_union*)(lel+1))->lm;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_join *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->join;
#line 1911 "rlreduce.lm"

		_lhs->machineDef = new MachineDef( _rhs0->join );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_lm *_lhs = &((commit_reduce_union*)(lel+1))->lm;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_lm_stmt_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->lm_stmt_list;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1916 "rlreduce.lm"

		/* Create a new factor going to a longest match structure. Record in
		 * the parse data that we have a longest match. */
		LongestMatch *lm = new LongestMatch( _loc0, _rhs1->lmPartList );
		pd->lmList.append( lm );
		for ( LmPartList::Iter lmp = *_rhs1->lmPartList; lmp.lte(); lmp++ )
			lmp->longestMatch = lm;
		_lhs->machineDef = new MachineDef( lm );
				}
			if ( kid->tree->prod_num == 2 ) {
	lel_lm *_lhs = &((commit_reduce_union*)(lel+1))->lm;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_lm_stmt_list *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->lm_stmt_list;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 1927 "rlreduce.lm"

		/* Create a new factor going to a longest match structure. Record in
		 * the parse data that we have a longest match. */
		LongestMatch *lm = new LongestMatch( _loc0, _rhs2->lmPartList );
		lm->nfaConstruction = true;
		pd->lmList.append( lm );
		for ( LmPartList::Iter lmp = *_rhs2->lmPartList; lmp.lte(); lmp++ )
			lmp->longestMatch = lm;
		_lhs->machineDef = new MachineDef( lm );
				}
			break;
		}
		case 872: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_param *_lhs = &((commit_reduce_union*)(lel+1))->action_param;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 804 "rlreduce.lm"

		string param( _rhs0->data, _rhs0->length );
		_lhs->param = new ActionParam( param );
				}
			break;
		}
		case 873: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_param_list *_lhs = &((commit_reduce_union*)(lel+1))->action_param_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_param_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_param_list;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_param *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_param;
#line 818 "rlreduce.lm"

		_lhs->paramList = _rhs0->paramList;
		_lhs->paramList->append( _rhs2->param );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_action_param_list *_lhs = &((commit_reduce_union*)(lel+1))->action_param_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_param *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_param;
#line 824 "rlreduce.lm"

		_lhs->paramList = new ActionParamList;
		_lhs->paramList->append( _rhs0->param );
				}
			break;
		}
		case 874: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_action_param_list *_lhs = &((commit_reduce_union*)(lel+1))->opt_action_param_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_action_param_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->action_param_list;
#line 787 "rlreduce.lm"

		_lhs->paramList = _rhs0->paramList;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_action_param_list *_lhs = &((commit_reduce_union*)(lel+1))->opt_action_param_list;
#line 792 "rlreduce.lm"

		_lhs->paramList = new ActionParamList;
				}
			break;
		}
		case 875: {
			if ( kid->tree->prod_num == 0 ) {
	lel_action_params *_lhs = &((commit_reduce_union*)(lel+1))->action_params;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_opt_action_param_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->opt_action_param_list;
#line 773 "rlreduce.lm"

		_lhs->paramList = _rhs1->paramList;
		paramList = _rhs1->paramList;
				}
			break;
		}
		case 876: {
			if ( kid->tree->prod_num == 0 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_params *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_params;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
#line 167 "rlreduce.lm"

		string data( _rhs1->data, _rhs1->length );
		if ( pd->actionDict.find( data ) ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc1) << "action \"" << data << "\" already defined" << endl;
		}
		else {
			/* Add the action to the list of actions. */
			Action *newAction = new Action( &_rhs3->loc, data, 
					_rhs3->inlineList, pd->fsmCtx->nextCondId++ );

			/* Insert to list and dict. */
			pd->fsmCtx->actionList.append( newAction );
			pd->actionDict.insert( newAction );

			newAction->paramList = _rhs2->paramList;
			if ( _rhs2->paramList != 0 )
				newAction->argListMap = new ActionArgListMap;
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
#line 189 "rlreduce.lm"

		string data( _rhs1->data, _rhs1->length );
		if ( pd->actionDict.find( data ) ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc1) << "action \"" << data << "\" already defined" << endl;
		}
		else {
			/* Add the action to the list of actions. */
			Action *newAction = new Action( &_rhs2->loc, data, 
					_rhs2->inlineList, pd->fsmCtx->nextCondId++ );

			/* Insert to list and dict. */
			pd->fsmCtx->actionList.append( newAction );
			pd->actionDict.insert( newAction );
		}
				}
			break;
		}
		case 877: {
			if ( kid->tree->prod_num == 0 ) {
	lel_def_name *_lhs = &((commit_reduce_union*)(lel+1))->def_name;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 124 "rlreduce.lm"

		string data( _rhs0->data, _rhs0->length );
		_lhs->tok.set( _rhs0, _loc0 );
		_lhs->loc = *_loc0;

		/* Make/get the priority key. The name may have already been referenced
		 * and therefore exist. */
		PriorDictEl *priorDictEl;
		if ( pd->priorDict.insert( data, pd->fsmCtx->nextPriorKey, &priorDictEl ) )
			pd->fsmCtx->nextPriorKey += 1;
		pd->curDefPriorKey = priorDictEl->value;

		/* Make/get the local error key. */
		LocalErrDictEl *localErrDictEl;
		if ( pd->localErrDict.insert( data, pd->nextLocalErrKey, &localErrDictEl ) )
			pd->nextLocalErrKey += 1;
		pd->curDefLocalErrKey = localErrDictEl->value;
				}
			break;
		}
		case 878: {
			if ( kid->tree->prod_num == 0 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_opt_export *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->opt_export;
	_pt_cursor = _pt_cursor->next;
lel_def_name *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->def_name;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_join *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->join;
#line 61 "rlreduce.lm"

		InputLoc loc = &_rhs1->loc;

		bool exportMachine = _rhs0->isSet;
		if ( exportMachine )
			exportContext.append( true );

		string name( _rhs1->tok.data, _rhs1->tok.length );

		/* Main machine must be an instance. */
		bool isInstance = false;
		if ( name == MAIN_MACHINE ) {
			pd->id->warning(loc) << "main machine will be implicitly instantiated" << endl;
			isInstance = true;
		}

		MachineDef *machineDef = new MachineDef( _rhs3->join );

		/* Generic creation of machine for instantiation and assignment. */
		tryMachineDef( loc, name, machineDef, isInstance );

		if ( exportMachine )
			exportContext.remove( exportContext.length()-1 );

		/* Pass a location to join_or_lm */
		if ( machineDef->join != 0 )
			machineDef->join->loc = loc;
				}
			break;
		}
		case 879: {
			if ( kid->tree->prod_num == 0 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_opt_export *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->opt_export;
	_pt_cursor = _pt_cursor->next;
lel_def_name *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->def_name;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_lm *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->lm;
#line 93 "rlreduce.lm"

		InputLoc loc = &_rhs1->loc;

		bool exportMachine = _rhs0->isSet;
		if ( exportMachine )
			exportContext.append( true );

		string name( _rhs1->tok.data, _rhs1->tok.length );

		MachineDef *machineDef = _rhs3->machineDef;

		/* Generic creation of machine for instantiation and assignment. */
		tryMachineDef( loc, name, machineDef, true );

		if ( exportMachine )
			exportContext.remove( exportContext.length()-1 );

		/* Pass a location to join_or_lm */
		if ( machineDef->join != 0 )
			machineDef->join->loc = loc;
				}
			break;
		}
		case 880: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfa_expr *_lhs = &((commit_reduce_union*)(lel+1))->nfa_expr;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_nfa_expr *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_expr;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_term *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 2065 "rlreduce.lm"

		_lhs->nfaUnion = _rhs0->nfaUnion;
		_lhs->nfaUnion->terms.append( _rhs2->term );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_nfa_expr *_lhs = &((commit_reduce_union*)(lel+1))->nfa_expr;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_term *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->term;
#line 2071 "rlreduce.lm"

		_lhs->nfaUnion = new NfaUnion();
		_lhs->nfaUnion->terms.append( _rhs0->term );
				}
			break;
		}
		case 881: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfa_round_spec *_lhs = &((commit_reduce_union*)(lel+1))->nfa_round_spec;
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
#line 2085 "rlreduce.lm"

		// Convert the priority number to a long. Check for overflow.
		errno = 0;
		_lhs->depth = strtol( _rhs0->data, 0, 10 );
		if ( _lhs->depth == LONG_MAX && errno == ERANGE )
			pd->id->error(_loc0) << "rounds " << _rhs0->data << " overflows" << endl;

		_lhs->group = strtol( _rhs2->data, 0, 10 );
		if ( _lhs->group == LONG_MAX && errno == ERANGE )
			pd->id->error() << "group " << _rhs2->data << " overflows" << endl;
				}
			break;
		}
		case 882: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfa_round_list *_lhs = &((commit_reduce_union*)(lel+1))->nfa_round_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_nfa_round_list *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_round_list;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_nfa_round_spec *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_round_spec;
#line 2106 "rlreduce.lm"

		_lhs->roundsList = _rhs0->roundsList;
		_lhs->roundsList->append( NfaRound( _rhs2->depth,
				_rhs2->group ) );
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_nfa_round_list *_lhs = &((commit_reduce_union*)(lel+1))->nfa_round_list;
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_nfa_round_spec *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_round_spec;
#line 2113 "rlreduce.lm"

		_lhs->roundsList = new NfaRoundVect;
		_lhs->roundsList->append( NfaRound( _rhs0->depth,
				_rhs0->group ) );
				}
			break;
		}
		case 883: {
			if ( kid->tree->prod_num == 0 ) {
	lel_nfa_rounds *_lhs = &((commit_reduce_union*)(lel+1))->nfa_rounds;
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_nfa_round_list *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_round_list;
#line 2127 "rlreduce.lm"

		_lhs->roundsList = _rhs1->roundsList;
				}
			break;
		}
		case 884: {
			if ( kid->tree->prod_num == 0 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
lel_def_name *_rhs0 = &((commit_reduce_union*)(_pt_cursor+1))->def_name;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_nfa_rounds *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_rounds;
	_pt_cursor = _pt_cursor->next;
lel_nfa_expr *_rhs3 = &((commit_reduce_union*)(_pt_cursor+1))->nfa_expr;
#line 146 "rlreduce.lm"

		InputLoc loc = &_rhs0->loc;
		string name( _rhs0->tok.data, _rhs0->tok.length );

		_rhs3->nfaUnion->roundsList = _rhs2->roundsList;

		MachineDef *machineDef = new MachineDef( _rhs3->nfaUnion );

		/* Generic creation of machine for instantiation and assignment. */
		tryMachineDef( loc, name, machineDef, true );
				}
			break;
		}
		case 885: {
			if ( kid->tree->prod_num == 0 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 300 "rlreduce.lm"

		string one( _rhs0->data, _rhs0->length );
		if ( ! pd->setAlphType( _loc0, hostLang, one.c_str() ) ) {
			// Recover by ignoring the alphtype statement.
			pd->id->error(_loc0) << "\"" << one << 
					"\" is not a valid alphabet type" << endl;
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 310 "rlreduce.lm"

		string one( _rhs0->data, _rhs0->length );
		string two( _rhs1->data, _rhs1->length );
		if ( ! pd->setAlphType( _loc0, hostLang, one.c_str(), two.c_str() ) ) {
			// Recover by ignoring the alphtype statement.
			pd->id->error(_loc0) << "\"" << one << 
					"\" is not a valid alphabet type" << endl;
		}
				}
			break;
		}
		case 886: {
			if ( kid->tree->prod_num == 0 ) {
	lel_opt_export *_lhs = &((commit_reduce_union*)(lel+1))->opt_export;
#line 2046 "rlreduce.lm"

		_lhs->isSet = true;
				}
			if ( kid->tree->prod_num == 1 ) {
	lel_opt_export *_lhs = &((commit_reduce_union*)(lel+1))->opt_export;
#line 2051 "rlreduce.lm"

		_lhs->isSet = false;
				}
			break;
		}
		case 887: {
			if ( kid->tree->prod_num == 0 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
#line 2133 "rlreduce.lm"

		string arg( _rhs0->data, _rhs0->length );
		writeArgs.push_back( arg );
				}
			break;
		}
		case 888: {
			if ( kid->tree->prod_num == 0 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 10 "rlreduce.lm"

		string machine( _rhs1->data, _rhs1->length );

		if ( includeDepth == 0 ) {
			/* Maintain section dict, section list and the cur section pointer
			 * if we are in the top level. */
			SectionDictEl *sdEl = id->sectionDict.find( machine );
			if ( sdEl == 0 ) {
				sdEl = new SectionDictEl( machine );
				sdEl->value = new Section( machine );
				id->sectionDict.insert( sdEl );
				id->sectionList.append( sdEl->value );
			}

			section = sdEl->value;

			ParseDataDictEl *pdEl = id->parseDataDict.find( machine );
			if ( pdEl == 0 ) {
				InputLoc sectionLoc = _loc0;
				pdEl = new ParseDataDictEl( machine );
				pdEl->value = new ParseData( id, machine,
						id->nextMachineId++, sectionLoc, hostLang,
						minimizeLevel, minimizeOpt );
				id->parseDataDict.insert( pdEl );
				id->parseDataList.append( pdEl->value );
			}

			pd = pdEl->value;
		}
				}
			break;
		}
		case 889: {
			if ( kid->tree->prod_num == 0 ) {
#line 328 "rlreduce.lm"

		includeDepth += 1;
				}
			break;
		}
		case 890: {
			if ( kid->tree->prod_num == 0 ) {
#line 333 "rlreduce.lm"

		includeDepth -= 1;
				}
			break;
		}
		case 892: {
			if ( kid->tree->prod_num == 0 ) {
#line 338 "rlreduce.lm"

		isImport = true;
				}
			break;
		}
		case 893: {
			if ( kid->tree->prod_num == 0 ) {
#line 343 "rlreduce.lm"

		isImport = false;
				}
			break;
		}
		case 895: {
			if ( kid->tree->prod_num == 4 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 210 "rlreduce.lm"

		if ( pd->fsmCtx->prePushExpr != 0 ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc0) << "prepush code already defined" << endl;
		}
		pd->fsmCtx->prePushExpr = new InlineBlock( _loc0, _rhs1->inlineList );

				}
			if ( kid->tree->prod_num == 5 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 219 "rlreduce.lm"

		if ( pd->fsmCtx->postPopExpr != 0 ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc0) << "postpop code already defined" << endl;
		}
		pd->fsmCtx->postPopExpr = new InlineBlock( _loc0, _rhs1->inlineList );
				}
			if ( kid->tree->prod_num == 6 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr_reparse *_rhs2 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr_reparse;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
#line 255 "rlreduce.lm"

		string data( _rhs1->data, _rhs1->length );
		bool wasSet = pd->setVariable( data.c_str(),
				_rhs2->inlineList );
		if ( !wasSet )
			pd->id->error(_loc0) << "bad variable name: " << _rhs1->data << endl;
				}
			if ( kid->tree->prod_num == 8 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr_reparse *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr_reparse;
#line 264 "rlreduce.lm"

		pd->fsmCtx->accessExpr = _rhs1->inlineList;
				}
			if ( kid->tree->prod_num == 9 ) {
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs1 = _tree_cursor->tree->tokdata;
	colm_location *_loc1 = colm_find_location( prg, _tree_cursor->tree );
#line 271 "rlreduce.lm"

		if ( !isImport && includeDepth == 0 ) {
			{
				InputItem *inputItem = new InputItem;
				inputItem->type = InputItem::Write;
				inputItem->loc = _loc1;
				inputItem->name = section->sectionName;
				inputItem->section = section;

				id->inputItems.append( inputItem );
			}
			id->curItem = id->curItem->next;
			InputItem *inputItem = id->curItem;

			string cmd( _rhs1->data, _rhs1->length );
			inputItem->writeArgs.push_back( cmd );
			inputItem->writeArgs.insert( inputItem->writeArgs.end(), writeArgs.begin(), writeArgs.end() );

			inputItem->pd = pd;
		}

		/* Clear the write args collector. */
		writeArgs.clear();
				}
			if ( kid->tree->prod_num == 10 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_inline_expr_reparse *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->inline_expr_reparse;
#line 323 "rlreduce.lm"

		pd->fsmCtx->getKeyExpr = _rhs1->inlineList;
				}
			if ( kid->tree->prod_num == 13 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 230 "rlreduce.lm"

		if ( pd->fsmCtx->nfaPrePushExpr != 0 ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc0) << "nfa_pre_push code already defined" << endl;
		}

		pd->fsmCtx->nfaPrePushExpr = new InlineBlock( _loc0, _rhs1->inlineList );
				}
			if ( kid->tree->prod_num == 14 ) {
	struct colm_parse_tree *_pt_cursor = lel->child;
	_pt_cursor = _pt_cursor->next;
lel_action_block *_rhs1 = &((commit_reduce_union*)(_pt_cursor+1))->action_block;
	kid_t *_tree_cursor = kid->tree->child;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 242 "rlreduce.lm"

		if ( pd->fsmCtx->nfaPostPopExpr != 0 ) {
			/* Recover by just ignoring the duplicate. */
			pd->id->error(_loc0) << "nfa_post_pop code already defined" << endl;
		}

		pd->fsmCtx->nfaPostPopExpr = new InlineBlock( _loc0, _rhs1->inlineList );
				}
			break;
		}
		case 900: {
			if ( kid->tree->prod_num == 0 ) {
#line 3 "rlreduce.lm"

		id->utf8BomPresent = true;
				}
			break;
		}
		case 901: {
			if ( kid->tree->prod_num == 0 ) {
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_location *_loc4 = colm_find_location( prg, _tree_cursor->tree );
#line 2531 "rlreduce.lm"

		if ( !isImport && includeDepth == 0 ) {
			InputItem *inputItem = new InputItem;
			inputItem->type = InputItem::EndSection;
			inputItem->loc = _loc4;
			id->inputItems.append( inputItem );

			if ( section != 0 ) {
				inputItem->section = section;
				section->lastReference = inputItem;
			}

			/* The end section may include a newline on the end, so
			 * we use the last line, which will count the newline. */
			inputItem = new InputItem;
			inputItem->type = InputItem::HostData;
			inputItem->loc.fileName = 0;
						
			id->inputItems.append( inputItem );

			/* Record the parse data and move over the end section. */
			id->curItem = id->curItem->next;
			id->curItem->pd = pd;

			/* Move over the host data. */
			id->curItem = id->curItem->next;
		}
				}
			if ( kid->tree->prod_num == 2 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_tree *_tree0 = _tree_cursor->tree;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
#line 2561 "rlreduce.lm"

		if ( !isImport && includeDepth == 0 ) {
			if ( id->curItem->loc.fileName == 0 )
				id->curItem->loc = _loc0;

			head_t *head = tree_to_str( prg, sp, _tree0, false, false );
			id->curItem->data.write( head->data, head->length );
		}
				}
			break;
		}
		case 902: {
			if ( kid->tree->prod_num == 0 ) {
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
	colm_location *_loc2 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs4 = _tree_cursor->tree->tokdata;
	colm_location *_loc4 = colm_find_location( prg, _tree_cursor->tree );
#line 172 "rlparse.lm"

		if ( isImport )
		{
			Literal *lit = new Literal( _loc4,
					false /* $number->neg */, _rhs4->data,
					_rhs4->length, Literal::Number );

			string name( _rhs2->data, _rhs2->length );
			import( _loc2, name, lit );
		}
				}
			if ( kid->tree->prod_num == 1 ) {
	kid_t *_tree_cursor = kid->tree->child;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs2 = _tree_cursor->tree->tokdata;
	colm_location *_loc2 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs4 = _tree_cursor->tree->tokdata;
	colm_location *_loc4 = colm_find_location( prg, _tree_cursor->tree );
#line 185 "rlparse.lm"

		if ( isImport )
		{
			Literal *lit = new Literal( _loc4, false,
					_rhs4->data, _rhs4->length, Literal::LitString );
			string name( _rhs2->data, _rhs2->length );
			import( _loc2, name, lit );
		}
				}
			if ( kid->tree->prod_num == 2 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs4 = _tree_cursor->tree->tokdata;
	colm_location *_loc4 = colm_find_location( prg, _tree_cursor->tree );
#line 196 "rlparse.lm"

		if ( isImport )
		{
			Literal *lit = new Literal( _loc4,
					false /*$number->neg */, _rhs4->data,
					_rhs4->length, Literal::Number );
			string name( _rhs0->data, _rhs0->length );
			import( _loc0, name, lit );
		}
				}
			if ( kid->tree->prod_num == 3 ) {
	kid_t *_tree_cursor = kid->tree->child;
	colm_data *_rhs0 = _tree_cursor->tree->tokdata;
	colm_location *_loc0 = colm_find_location( prg, _tree_cursor->tree );
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	_tree_cursor = _tree_cursor->next;
	colm_data *_rhs4 = _tree_cursor->tree->tokdata;
	colm_location *_loc4 = colm_find_location( prg, _tree_cursor->tree );
#line 208 "rlparse.lm"

		if ( isImport )
		{
			Literal *lit = new Literal( _loc4, false,
					_rhs4->data, _rhs4->length, Literal::LitString );

			string name( _rhs0->data, _rhs0->length );
			import( _loc0, name, lit );
		}
				}
			break;
		}
		} }
		}
	}

	commit_clear_parse_tree( prg, sp, pda_run, lel->child );
	if ( prg->reduce_clean ) {
		commit_clear_kid_list( prg, sp, kid->tree->child );
		kid->tree->child = 0;
		kid->tree->flags &= ~( AF_LEFT_IGNORE | AF_RIGHT_IGNORE );
	}
	lel->child = 0;

	if ( sp != root )
		goto resume;
	pt->flags |= PF_COMMITTED;
}

struct reduction_info
{
	unsigned char need_data[913];
	unsigned char need_loc[913];
};

static struct reduction_info ri[2];

extern "C" void rlparseC_init_need()
{
	memset( ri[1].need_data, 0, sizeof(unsigned char) * 913 );
	memset( ri[1].need_loc, 0, sizeof(unsigned char) * 913 );
	ri[1].need_data[27] = COLM_RN_DATA;
	ri[1].need_loc[28] = COLM_RN_LOC;
	ri[1].need_loc[29] = COLM_RN_LOC;
	ri[1].need_loc[30] = COLM_RN_LOC;
	ri[1].need_loc[31] = COLM_RN_LOC;
	ri[1].need_loc[32] = COLM_RN_LOC;
	ri[1].need_loc[33] = COLM_RN_LOC;
	ri[1].need_loc[34] = COLM_RN_LOC;
	ri[1].need_loc[35] = COLM_RN_LOC;
	ri[1].need_loc[36] = COLM_RN_LOC;
	ri[1].need_loc[37] = COLM_RN_LOC;
	ri[1].need_loc[38] = COLM_RN_LOC;
	ri[1].need_loc[39] = COLM_RN_LOC;
	ri[1].need_loc[40] = COLM_RN_LOC;
	ri[1].need_loc[41] = COLM_RN_LOC;
	ri[1].need_loc[42] = COLM_RN_LOC;
	ri[1].need_loc[43] = COLM_RN_LOC;
	ri[1].need_data[45] = COLM_RN_DATA;
	ri[1].need_loc[45] = COLM_RN_LOC;
	ri[1].need_data[46] = COLM_RN_DATA;
	ri[1].need_loc[46] = COLM_RN_LOC;
	ri[1].need_data[47] = COLM_RN_DATA;
	ri[1].need_loc[47] = COLM_RN_LOC;
	ri[1].need_data[48] = COLM_RN_DATA;
	ri[1].need_loc[48] = COLM_RN_LOC;
	ri[1].need_data[49] = COLM_RN_DATA;
	ri[1].need_loc[49] = COLM_RN_LOC;
	ri[1].need_data[50] = COLM_RN_DATA;
	ri[1].need_loc[50] = COLM_RN_LOC;
	ri[1].need_data[51] = COLM_RN_DATA;
	ri[1].need_loc[51] = COLM_RN_LOC;
	ri[1].need_data[52] = COLM_RN_DATA;
	ri[1].need_loc[52] = COLM_RN_LOC;
	ri[1].need_data[53] = COLM_RN_DATA;
	ri[1].need_loc[53] = COLM_RN_LOC;
	ri[1].need_data[55] = COLM_RN_DATA;
	ri[1].need_loc[55] = COLM_RN_LOC;
	ri[1].need_data[56] = COLM_RN_DATA;
	ri[1].need_loc[56] = COLM_RN_LOC;
	ri[1].need_data[57] = COLM_RN_DATA;
	ri[1].need_loc[57] = COLM_RN_LOC;
	ri[1].need_data[58] = COLM_RN_DATA;
	ri[1].need_loc[58] = COLM_RN_LOC;
	ri[1].need_data[59] = COLM_RN_DATA;
	ri[1].need_loc[59] = COLM_RN_LOC;
	ri[1].need_loc[60] = COLM_RN_LOC;
	ri[1].need_loc[61] = COLM_RN_LOC;
	ri[1].need_loc[63] = COLM_RN_LOC;
	ri[1].need_loc[66] = COLM_RN_LOC;
	ri[1].need_loc[67] = COLM_RN_LOC;
	ri[1].need_loc[69] = COLM_RN_LOC;
	ri[1].need_loc[71] = COLM_RN_LOC;
	ri[1].need_loc[73] = COLM_RN_LOC;
	ri[1].need_loc[75] = COLM_RN_LOC;
	ri[1].need_loc[80] = COLM_RN_LOC;
	ri[1].need_loc[81] = COLM_RN_LOC;
	ri[1].need_loc[82] = COLM_RN_LOC;
	ri[1].need_loc[85] = COLM_RN_LOC;
	ri[1].need_loc[86] = COLM_RN_LOC;
	ri[1].need_loc[87] = COLM_RN_LOC;
	ri[1].need_loc[88] = COLM_RN_LOC;
	ri[1].need_loc[89] = COLM_RN_LOC;
	ri[1].need_loc[95] = COLM_RN_LOC;
	ri[1].need_loc[96] = COLM_RN_LOC;
	ri[1].need_loc[97] = COLM_RN_LOC;
	ri[1].need_loc[98] = COLM_RN_LOC;
	ri[1].need_loc[99] = COLM_RN_LOC;
	ri[1].need_loc[100] = COLM_RN_LOC;
	ri[1].need_loc[108] = COLM_RN_LOC;
	ri[1].need_loc[109] = COLM_RN_LOC;
	ri[1].need_loc[110] = COLM_RN_LOC;
	ri[1].need_loc[111] = COLM_RN_LOC;
	ri[1].need_loc[112] = COLM_RN_LOC;
	ri[1].need_loc[113] = COLM_RN_LOC;
	ri[1].need_loc[114] = COLM_RN_LOC;
	ri[1].need_loc[115] = COLM_RN_LOC;
	ri[1].need_loc[116] = COLM_RN_LOC;
	ri[1].need_loc[117] = COLM_RN_LOC;
	ri[1].need_loc[118] = COLM_RN_LOC;
	ri[1].need_loc[119] = COLM_RN_LOC;
	ri[1].need_loc[120] = COLM_RN_LOC;
	ri[1].need_loc[121] = COLM_RN_LOC;
	ri[1].need_loc[122] = COLM_RN_LOC;
	ri[1].need_loc[123] = COLM_RN_LOC;
	ri[1].need_loc[124] = COLM_RN_LOC;
	ri[1].need_loc[125] = COLM_RN_LOC;
	ri[1].need_loc[126] = COLM_RN_LOC;
	ri[1].need_loc[127] = COLM_RN_LOC;
	ri[1].need_loc[128] = COLM_RN_LOC;
	ri[1].need_loc[129] = COLM_RN_LOC;
	ri[1].need_loc[130] = COLM_RN_LOC;
	ri[1].need_loc[131] = COLM_RN_LOC;
	ri[1].need_loc[132] = COLM_RN_LOC;
	ri[1].need_loc[133] = COLM_RN_LOC;
	ri[1].need_loc[134] = COLM_RN_LOC;
	ri[1].need_loc[135] = COLM_RN_LOC;
	ri[1].need_loc[136] = COLM_RN_LOC;
	ri[1].need_loc[137] = COLM_RN_LOC;
	ri[1].need_loc[138] = COLM_RN_LOC;
	ri[1].need_loc[141] = COLM_RN_LOC;
	ri[1].need_loc[143] = COLM_RN_LOC;
	ri[1].need_loc[149] = COLM_RN_LOC;
	ri[1].need_loc[150] = COLM_RN_LOC;
	ri[1].need_loc[151] = COLM_RN_LOC;
	ri[1].need_loc[152] = COLM_RN_LOC;
	ri[1].need_loc[153] = COLM_RN_LOC;
	ri[1].need_data[167] = COLM_RN_DATA;
	ri[1].need_loc[167] = COLM_RN_LOC;
	ri[1].need_loc[169] = COLM_RN_LOC;
	ri[1].need_loc[170] = COLM_RN_LOC;
	ri[1].need_data[171] = COLM_RN_DATA;
	ri[1].need_loc[171] = COLM_RN_LOC;
	ri[1].need_data[172] = COLM_RN_DATA;
	ri[1].need_loc[172] = COLM_RN_LOC;
	ri[1].need_data[173] = COLM_RN_DATA;
	ri[1].need_loc[173] = COLM_RN_LOC;
	ri[1].need_loc[174] = COLM_RN_LOC;
	ri[1].need_data[176] = COLM_RN_DATA;
	ri[1].need_loc[176] = COLM_RN_LOC;
	ri[1].need_data[177] = COLM_RN_DATA;
	ri[1].need_loc[177] = COLM_RN_LOC;
	ri[1].need_loc[178] = COLM_RN_LOC;
	ri[1].need_loc[179] = COLM_RN_LOC;
	ri[1].need_loc[180] = COLM_RN_LOC;
	ri[1].need_data[181] = COLM_RN_DATA;
	ri[1].need_loc[181] = COLM_RN_LOC;
	ri[1].need_data[184] = COLM_RN_DATA;
	ri[1].need_data[188] = COLM_RN_DATA;
	ri[1].need_data[198] = COLM_RN_DATA;
	ri[1].need_loc[198] = COLM_RN_LOC;
	ri[1].need_data[199] = COLM_RN_DATA;
	ri[1].need_loc[199] = COLM_RN_LOC;
	ri[1].need_data[202] = COLM_RN_DATA;
	ri[1].need_loc[202] = COLM_RN_LOC;
	ri[1].need_loc[855] = COLM_RN_LOC;
	ri[1].need_loc[856] = COLM_RN_LOC;
	ri[1].need_loc[902] = COLM_RN_LOC;
}
extern "C" int rlparseC_reducer_need_tok( program_t *prg, struct pda_run *pda_run, int id )
{
	if ( prg->reduce_clean && pda_run->reducer > 0 ) {
		return COLM_RN_DATA | ri[pda_run->reducer].need_data[id] | 
			ri[pda_run->reducer].need_loc[id];
	}
	return COLM_RN_BOTH;
}

extern "C" int rlparseC_reducer_need_ign( program_t *prg, struct pda_run *pda_run )
{
	return COLM_RN_BOTH;
}
