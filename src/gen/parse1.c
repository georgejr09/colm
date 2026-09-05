#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <colm/pdarun.h>
#include <colm/debug.h>
#include <colm/bytecode.h>
#include <colm/defs.h>
#include <colm/input.h>
#include <colm/tree.h>
#include <colm/program.h>
#include <colm/colm.h>

extern struct colm_sections colm_object;

#define parser_start 9
#define parser_first_final 9
#define parser_error 0
#define false 0
#define true 1

static long parser_entry_by_region[] = {
	0, 9, 35, 60, 60
};

static struct fsm_tables fsmTables_start =
{
	0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
	parser_entry_by_region,

	0,  0,  0,  0,  0,  0,  0,  0,
	4,

	parser_start,
	parser_first_final,
	parser_error,

	0,
	0
};

static void fsm_execute( struct pda_run *pdaRun, struct input_impl *inputStream )
{
	pdaRun->start = pdaRun->p;
/*_resume:*/
	if ( pdaRun->fsm_cs == 0 )
		goto out;
	if ( pdaRun->p == pdaRun->pe )
		goto out_switch;
	--pdaRun->p;

	switch ( pdaRun->fsm_cs )
	{
tr1:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 20;
	goto out;
}
	goto st9;
tr3:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 24;
	goto out;
}
	goto st9;
tr5:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 27;
	goto out;
}
	goto st9;
tr14:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 14;
	goto out;
}
	goto st9;
tr15:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 15;
	goto out;
}
	goto st9;
tr16:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 25;
	goto out;
}
	goto st9;
tr17:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 26;
	goto out;
}
	goto st9;
tr18:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 18;
	goto out;
}
	goto st9;
tr20:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 12;
	goto out;
}
	goto st9;
tr24:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 9;
	goto out;
}
	goto st9;
tr25:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 10;
	goto out;
}
	goto st9;
tr26:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 17;
	goto out;
}
	goto st9;
tr34:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 11;
	goto out;
}
	goto st9;
tr35:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 19;
	goto out;
}
	goto st9;
tr36:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 28;
	goto out;
}
	goto st9;
tr37:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 16;
	goto out;
}
	goto st9;
tr38:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 13;
	goto out;
}
	goto st9;
tr39:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 29;
	goto out;
}
	goto st9;
tr40:
	{	switch( pdaRun->act ) {
	case 5:
	pdaRun->matched_token = 4;
	break;
	case 7:
	pdaRun->matched_token = 5;
	break;
	case 9:
	pdaRun->matched_token = 6;
	break;
	case 11:
	pdaRun->matched_token = 7;
	break;
	case 13:
	pdaRun->matched_token = 8;
	break;
	case 15:
	pdaRun->matched_token = 21;
	break;
	case 17:
	pdaRun->matched_token = 22;
	break;
	case 19:
	pdaRun->matched_token = 23;
	break;
	}
		goto skip_tokpref;
}
	goto st9;
tr41:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 23;
	goto out;
}
	goto st9;
st9:
case 9:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out9;
	{pdaRun->tokstart = pdaRun->p;}
	switch( (*pdaRun->p) ) {
		case 32: goto st10;
		case 35: goto st1;
		case 39: goto st2;
		case 40: goto tr14;
		case 41: goto tr15;
		case 42: goto tr16;
		case 43: goto tr17;
		case 45: goto tr18;
		case 46: goto st11;
		case 47: goto tr20;
		case 58: goto st12;
		case 60: goto st4;
		case 91: goto tr24;
		case 93: goto tr25;
		case 94: goto tr26;
		case 95: goto tr23;
		case 99: goto st14;
		case 100: goto st19;
		case 101: goto st21;
		case 105: goto st23;
		case 108: goto st28;
		case 110: goto st30;
		case 116: goto st31;
		case 124: goto tr34;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 9 <= (*pdaRun->p) && (*pdaRun->p) <= 11 )
			goto st10;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto st0;
st10:
case 10:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out10;
	if ( (*pdaRun->p) == 32 )
		goto st10;
	if ( 9 <= (*pdaRun->p) && (*pdaRun->p) <= 11 )
		goto st10;
	goto tr35;
st1:
case 1:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out1;
	if ( (*pdaRun->p) == 10 )
		goto tr1;
	goto st1;
st2:
case 2:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out2;
	switch( (*pdaRun->p) ) {
		case 39: goto tr3;
		case 92: goto st3;
	}
	goto st2;
st3:
case 3:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out3;
	goto st2;
st11:
case 11:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out11;
	if ( (*pdaRun->p) == 46 )
		goto tr37;
	goto tr36;
st12:
case 12:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out12;
	if ( (*pdaRun->p) == 62 )
		goto tr39;
	goto tr38;
st4:
case 4:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out4;
	if ( (*pdaRun->p) == 42 )
		goto tr5;
	goto st0;
st0:
	goto out0;
tr23:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 19;}
	goto st13;
tr46:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 17;}
	goto st13;
tr48:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 5;}
	goto st13;
tr50:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 9;}
	goto st13;
tr55:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 13;}
	goto st13;
tr57:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 7;}
	goto st13;
tr58:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 15;}
	goto st13;
tr62:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 11;}
	goto st13;
st13:
case 13:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out13;
	if ( (*pdaRun->p) == 95 )
		goto tr23;
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr40;
st14:
case 14:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out14;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 111: goto st15;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st15:
case 15:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out15;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 109: goto st16;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st16:
case 16:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out16;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 109: goto st17;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st17:
case 17:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out17;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 105: goto st18;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st18:
case 18:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out18;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 116: goto tr46;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st19:
case 19:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out19;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 101: goto st20;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st20:
case 20:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out20;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 102: goto tr48;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st21:
case 21:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out21;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 110: goto st22;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st22:
case 22:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out22;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 100: goto tr50;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st23:
case 23:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out23;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 103: goto st24;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st24:
case 24:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out24;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 110: goto st25;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st25:
case 25:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out25;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 111: goto st26;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st26:
case 26:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out26;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 114: goto st27;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st27:
case 27:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out27;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 101: goto tr55;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st28:
case 28:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out28;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 101: goto st29;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st29:
case 29:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out29;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 120: goto tr57;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st30:
case 30:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out30;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 105: goto tr58;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st31:
case 31:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out31;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 111: goto st32;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st32:
case 32:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out32;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 107: goto st33;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st33:
case 33:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out33;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 101: goto st34;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
st34:
case 34:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out34;
	switch( (*pdaRun->p) ) {
		case 95: goto tr23;
		case 110: goto tr62;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr23;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr23;
	} else
		goto tr23;
	goto tr41;
tr8:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 24;
	goto out;
}
	goto st35;
tr10:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 27;
	goto out;
}
	goto st35;
tr63:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 14;
	goto out;
}
	goto st35;
tr64:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 15;
	goto out;
}
	goto st35;
tr65:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 25;
	goto out;
}
	goto st35;
tr66:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 26;
	goto out;
}
	goto st35;
tr67:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 18;
	goto out;
}
	goto st35;
tr69:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 12;
	goto out;
}
	goto st35;
tr73:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 9;
	goto out;
}
	goto st35;
tr74:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 10;
	goto out;
}
	goto st35;
tr75:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 17;
	goto out;
}
	goto st35;
tr83:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 11;
	goto out;
}
	goto st35;
tr84:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 28;
	goto out;
}
	goto st35;
tr85:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 16;
	goto out;
}
	goto st35;
tr86:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 13;
	goto out;
}
	goto st35;
tr87:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 29;
	goto out;
}
	goto st35;
tr88:
	{	switch( pdaRun->act ) {
	case 6:
	pdaRun->matched_token = 4;
	break;
	case 8:
	pdaRun->matched_token = 5;
	break;
	case 10:
	pdaRun->matched_token = 6;
	break;
	case 12:
	pdaRun->matched_token = 7;
	break;
	case 14:
	pdaRun->matched_token = 8;
	break;
	case 16:
	pdaRun->matched_token = 21;
	break;
	case 18:
	pdaRun->matched_token = 22;
	break;
	case 20:
	pdaRun->matched_token = 23;
	break;
	}
		goto skip_tokpref;
}
	goto st35;
tr89:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 23;
	goto out;
}
	goto st35;
st35:
case 35:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out35;
	{pdaRun->tokstart = pdaRun->p;}
	switch( (*pdaRun->p) ) {
		case 39: goto st5;
		case 40: goto tr63;
		case 41: goto tr64;
		case 42: goto tr65;
		case 43: goto tr66;
		case 45: goto tr67;
		case 46: goto st36;
		case 47: goto tr69;
		case 58: goto st37;
		case 60: goto st7;
		case 91: goto tr73;
		case 93: goto tr74;
		case 94: goto tr75;
		case 95: goto tr72;
		case 99: goto st39;
		case 100: goto st44;
		case 101: goto st46;
		case 105: goto st48;
		case 108: goto st53;
		case 110: goto st55;
		case 116: goto st56;
		case 124: goto tr83;
	}
	if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else if ( (*pdaRun->p) >= 65 )
		goto tr72;
	goto st0;
st5:
case 5:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out5;
	switch( (*pdaRun->p) ) {
		case 39: goto tr8;
		case 92: goto st6;
	}
	goto st5;
st6:
case 6:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out6;
	goto st5;
st36:
case 36:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out36;
	if ( (*pdaRun->p) == 46 )
		goto tr85;
	goto tr84;
st37:
case 37:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out37;
	if ( (*pdaRun->p) == 62 )
		goto tr87;
	goto tr86;
st7:
case 7:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out7;
	if ( (*pdaRun->p) == 42 )
		goto tr10;
	goto st0;
tr72:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 20;}
	goto st38;
tr94:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 18;}
	goto st38;
tr96:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 6;}
	goto st38;
tr98:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 10;}
	goto st38;
tr103:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 14;}
	goto st38;
tr105:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 8;}
	goto st38;
tr106:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 16;}
	goto st38;
tr110:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ) + 1; }}
	{pdaRun->act = 12;}
	goto st38;
st38:
case 38:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out38;
	if ( (*pdaRun->p) == 95 )
		goto tr72;
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr88;
st39:
case 39:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out39;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 111: goto st40;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st40:
case 40:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out40;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 109: goto st41;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st41:
case 41:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out41;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 109: goto st42;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st42:
case 42:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out42;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 105: goto st43;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st43:
case 43:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out43;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 116: goto tr94;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st44:
case 44:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out44;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 101: goto st45;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st45:
case 45:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out45;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 102: goto tr96;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st46:
case 46:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out46;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 110: goto st47;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st47:
case 47:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out47;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 100: goto tr98;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st48:
case 48:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out48;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 103: goto st49;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st49:
case 49:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out49;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 110: goto st50;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st50:
case 50:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out50;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 111: goto st51;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st51:
case 51:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out51;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 114: goto st52;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st52:
case 52:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out52;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 101: goto tr103;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st53:
case 53:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out53;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 101: goto st54;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st54:
case 54:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out54;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 120: goto tr105;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st55:
case 55:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out55;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 105: goto tr106;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st56:
case 56:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out56;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 111: goto st57;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st57:
case 57:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out57;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 107: goto st58;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st58:
case 58:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out58;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 101: goto st59;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
st59:
case 59:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out59;
	switch( (*pdaRun->p) ) {
		case 95: goto tr72;
		case 110: goto tr110;
	}
	if ( (*pdaRun->p) < 65 ) {
		if ( 48 <= (*pdaRun->p) && (*pdaRun->p) <= 57 )
			goto tr72;
	} else if ( (*pdaRun->p) > 90 ) {
		if ( 97 <= (*pdaRun->p) && (*pdaRun->p) <= 122 )
			goto tr72;
	} else
		goto tr72;
	goto tr89;
tr12:
	{	pdaRun->p += 1;
{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 20;
	goto out;
}
	goto st60;
tr112:
	{{ pdaRun->tokend = pdaRun->tokpref + ( pdaRun->p - pdaRun->start ); }	pdaRun->matched_token = 19;
	goto out;
}
	goto st60;
st60:
case 60:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out60;
	{pdaRun->tokstart = pdaRun->p;}
	switch( (*pdaRun->p) ) {
		case 32: goto st61;
		case 35: goto st8;
	}
	if ( 9 <= (*pdaRun->p) && (*pdaRun->p) <= 11 )
		goto st61;
	goto st0;
st61:
case 61:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out61;
	if ( (*pdaRun->p) == 32 )
		goto st61;
	if ( 9 <= (*pdaRun->p) && (*pdaRun->p) <= 11 )
		goto st61;
	goto tr112;
st8:
case 8:
	if ( ++pdaRun->p == pdaRun->pe )
		goto out8;
	if ( (*pdaRun->p) == 10 )
		goto tr12;
	goto st8;
	}
out_switch:
	switch ( pdaRun->fsm_cs )
	{
	case 9: out9: pdaRun->fsm_cs = 9; goto out; 
	case 10: out10: if ( pdaRun->scan_eof ) {goto tr35;
}pdaRun->fsm_cs = 10; goto out; 
	case 1: out1: pdaRun->fsm_cs = 1; goto out; 
	case 2: out2: pdaRun->fsm_cs = 2; goto out; 
	case 3: out3: pdaRun->fsm_cs = 3; goto out; 
	case 11: out11: if ( pdaRun->scan_eof ) {goto tr36;
}pdaRun->fsm_cs = 11; goto out; 
	case 12: out12: if ( pdaRun->scan_eof ) {goto tr38;
}pdaRun->fsm_cs = 12; goto out; 
	case 4: out4: pdaRun->fsm_cs = 4; goto out; 
	case 0: out0: pdaRun->fsm_cs = 0; goto out; 
	case 13: out13: if ( pdaRun->scan_eof ) {goto tr40;
}pdaRun->fsm_cs = 13; goto out; 
	case 14: out14: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 14; goto out; 
	case 15: out15: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 15; goto out; 
	case 16: out16: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 16; goto out; 
	case 17: out17: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 17; goto out; 
	case 18: out18: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 18; goto out; 
	case 19: out19: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 19; goto out; 
	case 20: out20: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 20; goto out; 
	case 21: out21: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 21; goto out; 
	case 22: out22: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 22; goto out; 
	case 23: out23: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 23; goto out; 
	case 24: out24: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 24; goto out; 
	case 25: out25: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 25; goto out; 
	case 26: out26: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 26; goto out; 
	case 27: out27: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 27; goto out; 
	case 28: out28: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 28; goto out; 
	case 29: out29: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 29; goto out; 
	case 30: out30: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 30; goto out; 
	case 31: out31: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 31; goto out; 
	case 32: out32: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 32; goto out; 
	case 33: out33: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 33; goto out; 
	case 34: out34: if ( pdaRun->scan_eof ) {goto tr41;
}pdaRun->fsm_cs = 34; goto out; 
	case 35: out35: pdaRun->fsm_cs = 35; goto out; 
	case 5: out5: pdaRun->fsm_cs = 5; goto out; 
	case 6: out6: pdaRun->fsm_cs = 6; goto out; 
	case 36: out36: if ( pdaRun->scan_eof ) {goto tr84;
}pdaRun->fsm_cs = 36; goto out; 
	case 37: out37: if ( pdaRun->scan_eof ) {goto tr86;
}pdaRun->fsm_cs = 37; goto out; 
	case 7: out7: pdaRun->fsm_cs = 7; goto out; 
	case 38: out38: if ( pdaRun->scan_eof ) {goto tr88;
}pdaRun->fsm_cs = 38; goto out; 
	case 39: out39: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 39; goto out; 
	case 40: out40: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 40; goto out; 
	case 41: out41: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 41; goto out; 
	case 42: out42: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 42; goto out; 
	case 43: out43: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 43; goto out; 
	case 44: out44: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 44; goto out; 
	case 45: out45: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 45; goto out; 
	case 46: out46: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 46; goto out; 
	case 47: out47: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 47; goto out; 
	case 48: out48: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 48; goto out; 
	case 49: out49: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 49; goto out; 
	case 50: out50: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 50; goto out; 
	case 51: out51: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 51; goto out; 
	case 52: out52: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 52; goto out; 
	case 53: out53: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 53; goto out; 
	case 54: out54: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 54; goto out; 
	case 55: out55: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 55; goto out; 
	case 56: out56: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 56; goto out; 
	case 57: out57: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 57; goto out; 
	case 58: out58: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 58; goto out; 
	case 59: out59: if ( pdaRun->scan_eof ) {goto tr89;
}pdaRun->fsm_cs = 59; goto out; 
	case 60: out60: pdaRun->fsm_cs = 60; goto out; 
	case 61: out61: if ( pdaRun->scan_eof ) {goto tr112;
}pdaRun->fsm_cs = 61; goto out; 
	case 8: out8: pdaRun->fsm_cs = 8; goto out; 
	}
out:
	if ( pdaRun->p != 0 )
		pdaRun->tokpref += pdaRun->p - pdaRun->start;
skip_tokpref:
	{}
}

static void sendNamedLangEl( struct colm_program *prg, tree_t **tree,
		struct pda_run *pda_run, struct input_impl *input ) { }
static void initBindings( struct pda_run *pdaRun ) {}
static void popBinding( struct pda_run *pdaRun, parse_tree_t *tree ) {}


static int pid_0_parser_indices[] = {
	112, 112, 69, 4, 3, 111, 111, 5, 
	99, 18, 19, 107, 107, 107, 10, 11, 
	12, 108, 108, 21, 38, 41, 99, 17, 
	105, 105, 105, 106, 106, 106, 40, 109, 
	109, 102, 102, 17, 54, 15, 22, 53, 
	102, 49, 50, 99, 7, 99, 99, 112, 
	0, 1, 2, 98, 111, 107, 107, 6, 
	9, 8, 13, 49, 16, 14, 92, 56, 
	108, 98, 105, 105, 35, 106, 106, 85, 
	39, 57, 61, 92, 89, 24, 109, -1, 
	102, 37, 49, 67, -1, -1, 98, -1, 
	98, 98, -1, 92, 92, 20, -1, -1, 
	23, 36, 34, -1, 112, 32, -1, 110, 
	29, 111, -1, -1, 83, 83, 33, 31, 
	83, -1, -1, -1, -1, 108, -1, 30, 
	28, 27, 26, 25, 91, 47, 48, -1, 
	81, 81, -1, 109, 81, 102, 101, 101, 
	-1, 91, -1, -1, -1, 101, 45, 46, 
	7, 81, 81, -1, 0, 1, 2, -1, 
	-1, 91, 91, 6, 9, 8, 13, -1, 
	16, 14, 78, 78, 32, -1, 78, 29, 
	-1, 84, 84, 84, 39, 33, 31, 84, 
	78, 78, -1, 78, 78, 101, 30, 43, 
	-1, 75, 75, -1, 90, 75, 70, 70, 
	-1, 20, 70, 44, 23, 36, 34, 75, 
	75, 90, 75, 75, 70, 70, 32, 70, 
	70, 29, -1, 84, 84, -1, -1, 33, 
	31, 90, 90, 30, 28, 27, 26, 25, 
	30, 28, 27, 26, 42, 71, 71, 96, 
	96, 71, 101, -1, 97, -1, 96, -1, 
	52, -1, 32, 71, 71, 29, 71, 71, 
	-1, 96, 97, 33, 31, -1, -1, -1, 
	-1, -1, -1, -1, 30, 28, 27, 26, 
	55, 103, 103, 103, -1, 96, 51, 97, 
	-1, 97, 97, 74, 74, -1, 96, 74, 
	76, 76, 30, 43, 76, -1, 86, 77, 
	77, 74, 74, 77, 74, 74, 76, 76, 
	-1, 76, 76, 86, 32, 77, 77, 29, 
	77, 77, -1, 103, 103, 33, 31, -1, 
	-1, -1, -1, 86, 86, -1, 30, 28, 
	58, -1, -1, -1, 30, 28, 27, 26, 
	42, 32, -1, 96, 29, 32, 100, 100, 
	29, 87, 33, 31, -1, 100, 33, 31, 
	-1, -1, -1, 30, 28, 59, 87, 30, 
	28, 27, 60, -1, 88, -1, 94, 94, 
	30, 28, 27, 26, 55, 94, 87, 87, 
	-1, 88, 51, 65, -1, 66, 72, 72, 
	63, -1, 72, -1, -1, 100, -1, -1, 
	64, 88, 88, -1, 72, 72, -1, 72, 
	72, 73, 73, -1, 62, 73, 79, 79, 
	-1, -1, 79, -1, -1, 94, -1, 73, 
	73, -1, 73, 73, 45, 46, -1, 79, 
	79, -1, 30, 28, 58, 80, 80, 82, 
	82, 80, -1, 82, -1, -1, 93, 93, 
	-1, -1, 100, 45, 46, 93, 80, 80, 
	47, 48, -1, 95, 95, -1, -1, 30, 
	28, 59, 95, 30, 28, 27, 60, 85, 
	85, 85, 94, -1, -1, 95, 104, 104, 
	104, -1, -1, 24, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, 93, -1, -1, 
	-1, 95, -1, -1, 64, -1, 68, -1, 
	-1, -1, 95, -1, -1, -1, -1, -1, 
	62, 85, 85, -1, -1, -1, -1, -1, 
	104, 104, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, 93, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, 95, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, 68
};

static int pid_0_parser_owners[] = {
	0, 0, 1, 2, 2, 3, 3, 5, 
	6, 12, 13, 4, 4, 4, 7, 7, 
	7, 11, 11, 16, 22, 24, 6, 8, 
	9, 9, 9, 10, 10, 10, 25, 15, 
	15, 17, 17, 23, 37, 8, 15, 38, 
	17, 26, 26, 6, 6, 6, 6, 0, 
	0, 0, 2, 14, 3, 4, 4, 4, 
	7, 7, 8, 43, 8, 8, 18, 43, 
	11, 14, 9, 9, 21, 10, 10, 19, 
	23, 45, 53, 18, 54, 19, 15, -1, 
	17, 21, 56, 56, -1, -1, 14, -1, 
	14, 14, -1, 18, 18, 18, -1, -1, 
	19, 21, 21, -1, 0, 20, -1, 2, 
	20, 3, -1, -1, 27, 27, 20, 20, 
	27, -1, -1, -1, -1, 11, -1, 20, 
	20, 20, 20, 20, 35, 27, 27, -1, 
	28, 28, -1, 15, 28, 17, 40, 40, 
	-1, 35, -1, -1, -1, 40, 28, 28, 
	6, 28, 28, -1, 0, 0, 2, -1, 
	-1, 35, 35, 4, 7, 7, 8, -1, 
	8, 8, 29, 29, 30, -1, 29, 30, 
	-1, 41, 41, 41, 23, 30, 30, 41, 
	29, 29, -1, 29, 29, 40, 30, 30, 
	-1, 31, 31, -1, 65, 31, 32, 32, 
	-1, 18, 32, 32, 19, 21, 21, 31, 
	31, 65, 31, 31, 32, 32, 33, 32, 
	32, 33, -1, 41, 41, -1, -1, 33, 
	33, 65, 65, 20, 20, 20, 20, 20, 
	33, 33, 33, 33, 33, 34, 34, 36, 
	36, 34, 40, -1, 39, -1, 36, -1, 
	36, -1, 42, 34, 34, 42, 34, 34, 
	-1, 36, 39, 42, 42, -1, -1, -1, 
	-1, -1, -1, -1, 42, 42, 42, 42, 
	42, 51, 51, 51, -1, 36, 36, 39, 
	-1, 39, 39, 44, 44, -1, 36, 44, 
	46, 46, 30, 30, 46, -1, 66, 47, 
	47, 44, 44, 47, 44, 44, 46, 46, 
	-1, 46, 46, 66, 48, 47, 47, 48, 
	47, 47, -1, 51, 51, 48, 48, -1, 
	-1, -1, -1, 66, 66, -1, 48, 48, 
	48, -1, -1, -1, 33, 33, 33, 33, 
	33, 49, -1, 36, 49, 50, 63, 63, 
	50, 67, 49, 49, -1, 63, 50, 50, 
	-1, -1, -1, 49, 49, 49, 67, 50, 
	50, 50, 50, -1, 55, -1, 52, 52, 
	42, 42, 42, 42, 42, 52, 67, 67, 
	-1, 55, 36, 55, -1, 55, 57, 57, 
	52, -1, 57, -1, -1, 63, -1, -1, 
	55, 55, 55, -1, 57, 57, -1, 57, 
	57, 58, 58, -1, 52, 58, 59, 59, 
	-1, -1, 59, -1, -1, 52, -1, 58, 
	58, -1, 58, 58, 59, 59, -1, 59, 
	59, -1, 48, 48, 48, 60, 60, 61, 
	61, 60, -1, 61, -1, -1, 64, 64, 
	-1, -1, 63, 60, 60, 64, 60, 60, 
	61, 61, -1, 62, 62, -1, -1, 49, 
	49, 49, 62, 50, 50, 50, 50, 68, 
	68, 68, 52, -1, -1, 62, 69, 69, 
	69, -1, -1, 68, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, 64, -1, -1, 
	-1, 62, -1, -1, 55, -1, 68, -1, 
	-1, -1, 62, -1, -1, -1, -1, -1, 
	52, 68, 68, -1, -1, -1, -1, -1, 
	69, 69, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, 64, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, 62, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, 68
};

static int pid_0_parser_keys[] = {
	4, 153, 104, 104, 4, 151, 4, 104, 
	6, 150, 23, 23, 9, 145, 6, 149, 
	9, 147, 6, 49, 6, 49, 4, 104, 
	23, 23, 12, 12, 9, 47, 4, 104, 
	13, 13, 4, 104, 10, 141, 12, 137, 
	14, 136, 10, 140, 23, 23, 9, 146, 
	12, 12, 21, 21, 11, 12, 11, 29, 
	11, 29, 11, 29, 14, 133, 11, 29, 
	11, 29, 14, 136, 11, 29, 10, 40, 
	4, 143, 23, 23, 13, 13, 9, 47, 
	4, 104, 6, 49, 14, 136, 11, 15, 
	11, 29, 24, 24, 11, 29, 11, 29, 
	14, 134, 14, 134, 14, 135, 6, 49, 
	4, 142, 23, 23, 23, 23, 10, 138, 
	11, 12, 11, 29, 11, 29, 11, 29, 
	11, 29, 11, 29, 4, 104, 4, 104, 
	4, 104, 10, 40, 10, 40, 10, 40, 
	6, 137, 6, 49, 0, 0
};

static unsigned int pid_0_parser_offsets[] = {
	0, 2, 3, 5, 11, 7, 8, 14, 
	23, 24, 27, 17, 9, 10, 51, 31, 
	19, 33, 62, 71, 101, 68, 20, 35, 
	21, 30, 41, 108, 128, 162, 164, 185, 
	190, 206, 229, 124, 231, 36, 39, 236, 
	134, 169, 242, 59, 275, 73, 280, 287, 
	300, 329, 333, 265, 358, 74, 76, 356, 
	82, 374, 393, 398, 421, 423, 443, 334, 
	430, 188, 286, 337, 455, 462, 0
};

static unsigned int pid_0_parser_targs[] = {
	1, 2, 3, 4, 5, 6, 7, 8, 
	9, 10, 11, 12, 13, 14, 15, 16, 
	17, 18, 19, 20, 21, 22, 23, 24, 
	25, 26, 27, 28, 29, 30, 31, 32, 
	33, 34, 35, 36, 37, 38, 39, 40, 
	41, 42, 43, 44, 45, 46, 47, 48, 
	49, 50, 51, 52, 53, 54, 55, 56, 
	57, 58, 59, 60, 61, 62, 63, 64, 
	65, 66, 67, 68, 69, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70
};

static unsigned int pid_0_parser_actInds[] = {
	0, 2, 4, 6, 8, 10, 12, 14, 
	16, 18, 20, 22, 24, 26, 28, 30, 
	32, 34, 36, 38, 40, 42, 44, 46, 
	48, 50, 52, 54, 56, 58, 60, 62, 
	64, 66, 68, 70, 72, 74, 77, 79, 
	81, 83, 85, 87, 89, 91, 93, 95, 
	97, 99, 101, 103, 105, 107, 109, 111, 
	113, 115, 117, 119, 121, 123, 125, 127, 
	129, 131, 133, 135, 137, 139, 141, 143, 
	145, 147, 149, 151, 153, 155, 157, 159, 
	161, 163, 165, 167, 169, 171, 173, 175, 
	177, 179, 181, 183, 185, 187, 189, 191, 
	193, 195, 197, 199, 201, 203, 205, 207, 
	209, 211, 213, 215, 217, 219, 221, 223, 
	225
};

static unsigned int pid_0_parser_actions[] = {
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 82, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 2, 0, 6, 
	0, 10, 0, 14, 0, 18, 0, 22, 
	0, 26, 0, 30, 0, 34, 0, 38, 
	0, 42, 0, 46, 0, 50, 0, 54, 
	0, 58, 0, 62, 0, 66, 0, 70, 
	0, 74, 0, 78, 0, 86, 0, 90, 
	0, 94, 0, 98, 0, 102, 0, 106, 
	0, 110, 0, 114, 0, 118, 0, 122, 
	0, 126, 0, 130, 0, 134, 0, 138, 
	0, 142, 0, 146, 0, 150, 0, 154, 
	0, 158, 0, 162, 0, 166, 0, 170, 
	0, 174, 0
};

static int pid_0_parser_commitLen[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0
};

static int pid_0_parser_tokenRegionInds[] = {
	1, 3, 5, 7, 9, 11, 13, 15, 
	17, 19, 21, 23, 25, 27, 29, 31, 
	33, 35, 37, 39, 41, 43, 45, 47, 
	49, 51, 53, 55, 57, 59, 61, 63, 
	65, 67, 69, 71, 73, 75, 77, 79, 
	81, 83, 85, 87, 89, 91, 93, 95, 
	97, 99, 101, 103, 105, 107, 109, 111, 
	113, 115, 117, 119, 121, 123, 125, 127, 
	129, 131, 133, 135, 137, 139, 141
};

static int pid_0_parser_tokenRegions[] = {
	0, 1, 0, 0, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 0
};

static int pid_0_parser_tokenPreRegions[] = {
	0, -1, 0, -1, 0, -1, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, -1, 
	0, -1, 0, -1, 0, -1, 0, 3, 
	0, 3, 0, 3, 0, -1, 0, -1, 
	0, 3, 0, -1, 0, 3, 0, 3, 
	0, 3, 0, -1, 0, 3, 0, 3, 
	0, -1, 0, 3, 0, -1, 0, -1, 
	0, -1, 0, -1, 0, 3, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, -1, 
	0, 3, 0, -1, 0, 3, 0, 3, 
	0, -1, 0, 3, 0, 3, 0, -1, 
	0, -1, 0, 3, 0, 3, 0, 3, 
	0, 3, 0, 3, 0, 3, 0, 3, 
	0, -1, 0, 3, 0, 3, 0, 3, 
	0, -1, 0, 3, 0, 3, 0, -1, 
	0, -1, 0, -1, 0, 3, 0, -1, 
	0, 3, 0, -1, 0, 3, 0, 3, 
	0, 3, 0, -1, 0, 0
};

static struct pda_tables pid_0_pdaTables =
{
	pid_0_parser_indices,
	pid_0_parser_owners,
	pid_0_parser_keys,
	pid_0_parser_offsets,
	pid_0_parser_targs,
	pid_0_parser_actInds,
	pid_0_parser_actions,
	pid_0_parser_commitLen,
	pid_0_parser_tokenRegionInds,
	pid_0_parser_tokenRegions,
	pid_0_parser_tokenPreRegions,

	587,
	142,
	71,
	113,
	113,
	227,
	113,
	142,
	142
};

static struct local_info locals_0[] = {
	{ 1, -1 }, { 1, -2 }
};

static unsigned char copy_0[] = {
	0, 0
};

static unsigned char copy_1[] = {
	0, 0
};

static unsigned char copy_2[] = {
	0, 1
};

static unsigned char copy_3[] = {
	0, 0, 0, 2
};

static unsigned char copy_4[] = {
	0, 1
};

static unsigned char copy_5[] = {
	0, 0
};

static unsigned char copy_6[] = {
	0, 0, 0, 1
};

static unsigned char copy_7[] = {
	0, 0, 0, 1
};

static unsigned char copy_8[] = {
	0, 0
};

static unsigned char copy_9[] = {
	0, 0, 0, 1, 0, 2
};

static unsigned char copy_10[] = {
	0, 0, 0, 1, 0, 2
};

static unsigned char copy_11[] = {
	0, 0
};

static unsigned char copy_12[] = {
	0, 0, 0, 2
};

static unsigned char copy_13[] = {
	0, 0
};

static unsigned char copy_14[] = {
	0, 1
};

static unsigned char copy_16[] = {
	0, 0
};

static unsigned char copy_17[] = {
	0, 0
};

static unsigned char copy_19[] = {
	0, 0
};

static unsigned char copy_21[] = {
	0, 0, 0, 1, 0, 2
};

static unsigned char copy_22[] = {
	0, 0, 0, 1
};

static unsigned char copy_24[] = {
	0, 0
};

static unsigned char copy_26[] = {
	0, 1
};

static unsigned char copy_28[] = {
	0, 0, 0, 2
};

static unsigned char copy_29[] = {
	0, 0, 0, 1
};

static unsigned char copy_31[] = {
	0, 1, 0, 3, 0, 4
};

static unsigned char copy_32[] = {
	0, 0, 0, 2
};

static unsigned char copy_33[] = {
	0, 0
};

static unsigned char copy_34[] = {
	0, 2
};

static unsigned char copy_35[] = {
	0, 1, 0, 2, 0, 4, 0, 6
};

static unsigned char copy_36[] = {
	0, 0, 0, 1
};

static unsigned char copy_37[] = {
	0, 0, 0, 1
};

static unsigned char copy_39[] = {
	0, 1
};

static unsigned char copy_40[] = {
	0, 1, 0, 2, 0, 3
};

static unsigned char copy_41[] = {
	0, 0
};

static code_t parser_rootCode[] = {
	255, 8, 3, 0, 255, 7, 2, 0, 
	255, 62, 1, 0, 85, 147, 2, 0, 
	255, 52, 3, 0, 39, 255, 255, 241, 
	1, 0, 0, 0, 37, 255, 255, 2, 
	1, 0, 0, 0, 0, 0, 0, 0, 
	180, 144, 162, 135, 162, 31, 91, 1, 
	0, 226, 91, 0, 0, 242, 39, 254, 
	255, 29, 37, 254, 255, 87, 251, 0, 
	0, 255, 10
};

static struct lang_el_info parser_lelInfo[] = {
/*    0 */ { "__UNUSED",  "__UNUSED", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0 },
/*    1 */ { "ptr",  "ptr", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*    2 */ { "str",  "str", 0, 0, 0, 0, -1, 53, 0, 0, 0, -1, 0, 0 },
/*    3 */ { "il",  "il", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*    4 */ { "'def'",  "_literal_0005", 0, 0, 1, 0, -1, 7, 0, 0, 0, -1, 0, 0 },
/*    5 */ { "'lex'",  "_literal_0007", 0, 0, 1, 0, -1, 8, 0, 0, 0, -1, 0, 0 },
/*    6 */ { "'end'",  "_literal_0009", 0, 0, 1, 0, -1, 9, 0, 0, 0, -1, 0, 0 },
/*    7 */ { "'token'",  "_literal_000b", 0, 0, 1, 0, -1, 10, 0, 0, 0, -1, 0, 0 },
/*    8 */ { "'ignore'",  "_literal_000d", 0, 0, 1, 0, -1, 11, 0, 0, 0, -1, 0, 0 },
/*    9 */ { "'['",  "_literal_001d", 0, 0, 1, 0, -1, 19, 0, 0, 0, -1, 0, 0 },
/*   10 */ { "']'",  "_literal_001f", 0, 0, 1, 0, -1, 20, 0, 0, 0, -1, 0, 0 },
/*   11 */ { "'|'",  "_literal_0021", 0, 0, 1, 0, -1, 21, 0, 0, 0, -1, 0, 0 },
/*   12 */ { "'/'",  "_literal_0023", 0, 0, 1, 0, -1, 22, 0, 0, 0, -1, 0, 0 },
/*   13 */ { "':'",  "_literal_0025", 0, 0, 1, 0, -1, 23, 0, 0, 0, -1, 0, 0 },
/*   14 */ { "'('",  "_literal_002b", 0, 0, 1, 0, -1, 26, 0, 0, 0, -1, 0, 0 },
/*   15 */ { "')'",  "_literal_002d", 0, 0, 1, 0, -1, 27, 0, 0, 0, -1, 0, 0 },
/*   16 */ { "'..'",  "_literal_002f", 0, 0, 1, 0, -1, 28, 0, 0, 0, -1, 0, 0 },
/*   17 */ { "'^'",  "_literal_0031", 0, 0, 1, 0, -1, 29, 0, 0, 0, -1, 0, 0 },
/*   18 */ { "'-'",  "_literal_0033", 0, 0, 1, 0, -1, 30, 0, 0, 0, -1, 0, 0 },
/*   19 */ { "_ignore_0001",  "_ignore_0001", 0, 0, 0, 1, -1, 5, 0, 0, 0, -1, 0, 0 },
/*   20 */ { "_ignore_0003",  "_ignore_0003", 0, 0, 0, 1, -1, 6, 0, 0, 0, -1, 0, 0 },
/*   21 */ { "NI",  "NI", 0, 0, 0, 0, -1, 12, 0, 0, 0, -1, 0, 0 },
/*   22 */ { "COMMIT",  "COMMIT", 0, 0, 0, 0, -1, 13, 0, 0, 0, -1, 0, 0 },
/*   23 */ { "id",  "id", 0, 0, 0, 0, -1, 14, 0, 0, 0, -1, 0, 0 },
/*   24 */ { "literal",  "literal", 0, 0, 0, 0, -1, 15, 0, 0, 0, -1, 0, 0 },
/*   25 */ { "STAR",  "STAR", 0, 0, 0, 0, -1, 16, 0, 0, 0, -1, 0, 0 },
/*   26 */ { "PLUS",  "PLUS", 0, 0, 0, 0, -1, 17, 0, 0, 0, -1, 0, 0 },
/*   27 */ { "LEFT_STAR",  "LEFT_STAR", 0, 0, 0, 0, -1, 18, 0, 0, 0, -1, 0, 0 },
/*   28 */ { "DOT",  "DOT", 0, 0, 0, 0, -1, 24, 0, 0, 0, -1, 0, 0 },
/*   29 */ { "COLON_LT",  "COLON_LT", 0, 0, 0, 0, -1, 25, 0, 0, 0, -1, 0, 0 },
/*   30 */ { "_ign_0xa000198f0",  "_ign_0xa000198f0", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   31 */ { "_T_any",  "_T_any", 0, 0, 0, 0, -1, 0, 0, 0, 131, -1, 0, 0 },
/*   32 */ { "_T_lex_factor",  "_T_lex_factor", 0, 0, 0, 0, -1, 31, 0, 0, 132, -1, 0, 0 },
/*   33 */ { "_T_lex_factor_neg",  "_T_lex_factor_neg", 0, 0, 0, 0, -1, 32, 0, 0, 133, -1, 0, 0 },
/*   34 */ { "_T_lex_factor_rep",  "_T_lex_factor_rep", 0, 0, 0, 0, -1, 33, 0, 0, 134, -1, 0, 0 },
/*   35 */ { "_T_lex_term",  "_T_lex_term", 0, 0, 0, 0, -1, 34, 0, 0, 135, -1, 0, 0 },
/*   36 */ { "_T_lex_expr",  "_T_lex_expr", 0, 0, 0, 0, -1, 35, 0, 0, 136, -1, 0, 0 },
/*   37 */ { "_T_opt_ni",  "_T_opt_ni", 0, 0, 0, 0, -1, 36, 0, 0, 137, -1, 0, 0 },
/*   38 */ { "_T_opt_prod_repeat",  "_T_opt_prod_repeat", 0, 0, 0, 0, -1, 37, 0, 0, 138, -1, 0, 0 },
/*   39 */ { "_T_opt_prod_el_name",  "_T_opt_prod_el_name", 0, 0, 0, 0, -1, 38, 0, 0, 139, -1, 0, 0 },
/*   40 */ { "_T_prod_el",  "_T_prod_el", 0, 0, 0, 0, -1, 39, 0, 0, 140, -1, 0, 0 },
/*   41 */ { "_T_prod_el_list",  "_T_prod_el_list", 0, 0, 0, 0, -1, 40, 0, 0, 141, -1, 0, 0 },
/*   42 */ { "_T_opt_commit",  "_T_opt_commit", 0, 0, 0, 0, -1, 41, 0, 0, 142, -1, 0, 0 },
/*   43 */ { "_T_opt_prod_name",  "_T_opt_prod_name", 0, 0, 0, 0, -1, 42, 0, 0, 143, -1, 0, 0 },
/*   44 */ { "_T_prod_var_def",  "_T_prod_var_def", 0, 0, 0, 0, -1, 43, 0, 0, 144, -1, 0, 0 },
/*   45 */ { "_T_prod_var_list",  "_T_prod_var_list", 0, 0, 0, 0, -1, 44, 0, 0, 145, -1, 0, 0 },
/*   46 */ { "_T_prod",  "_T_prod", 0, 0, 0, 0, -1, 45, 0, 0, 146, -1, 0, 0 },
/*   47 */ { "_T_prod_list",  "_T_prod_list", 0, 0, 0, 0, -1, 46, 0, 0, 147, -1, 0, 0 },
/*   48 */ { "_T_ignore_def",  "_T_ignore_def", 0, 0, 0, 0, -1, 47, 0, 0, 148, -1, 0, 0 },
/*   49 */ { "_T_token_def",  "_T_token_def", 0, 0, 0, 0, -1, 48, 0, 0, 149, -1, 0, 0 },
/*   50 */ { "_T_token_list",  "_T_token_list", 0, 0, 0, 0, -1, 49, 0, 0, 150, -1, 0, 0 },
/*   51 */ { "_T_item",  "_T_item", 0, 0, 0, 0, -1, 50, 0, 0, 151, -1, 0, 0 },
/*   52 */ { "_T_start",  "_T_start", 0, 0, 0, 0, -1, 51, 0, 0, 152, -1, 0, 0 },
/*   53 */ { "_T__lrepeat_item",  "_T__lrepeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 153, -1, 0, 0 },
/*   54 */ { "_eof_ptr",  "_eof_ptr", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   55 */ { "_eof_str",  "_eof_str", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   56 */ { "_eof_il",  "_eof_il", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   57 */ { "_eof_any",  "_eof_any", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   58 */ { "_eof__literal_0005",  "_eof__literal_0005", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   59 */ { "_eof__literal_0007",  "_eof__literal_0007", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   60 */ { "_eof__literal_0009",  "_eof__literal_0009", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   61 */ { "_eof__literal_000b",  "_eof__literal_000b", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   62 */ { "_eof__literal_000d",  "_eof__literal_000d", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   63 */ { "_eof__literal_001d",  "_eof__literal_001d", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   64 */ { "_eof__literal_001f",  "_eof__literal_001f", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   65 */ { "_eof__literal_0021",  "_eof__literal_0021", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   66 */ { "_eof__literal_0023",  "_eof__literal_0023", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   67 */ { "_eof__literal_0025",  "_eof__literal_0025", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   68 */ { "_eof__literal_002b",  "_eof__literal_002b", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   69 */ { "_eof__literal_002d",  "_eof__literal_002d", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   70 */ { "_eof__literal_002f",  "_eof__literal_002f", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   71 */ { "_eof__literal_0031",  "_eof__literal_0031", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   72 */ { "_eof__literal_0033",  "_eof__literal_0033", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   73 */ { "_eof__ignore_0001",  "_eof__ignore_0001", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   74 */ { "_eof__ignore_0003",  "_eof__ignore_0003", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   75 */ { "_eof_NI",  "_eof_NI", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   76 */ { "_eof_COMMIT",  "_eof_COMMIT", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   77 */ { "_eof_id",  "_eof_id", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   78 */ { "_eof_literal",  "_eof_literal", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   79 */ { "_eof_STAR",  "_eof_STAR", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   80 */ { "_eof_PLUS",  "_eof_PLUS", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   81 */ { "_eof_LEFT_STAR",  "_eof_LEFT_STAR", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   82 */ { "_eof_DOT",  "_eof_DOT", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   83 */ { "_eof_COLON_LT",  "_eof_COLON_LT", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   84 */ { "_eof_lex_factor",  "_eof_lex_factor", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   85 */ { "_eof_lex_factor_neg",  "_eof_lex_factor_neg", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   86 */ { "_eof_lex_factor_rep",  "_eof_lex_factor_rep", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   87 */ { "_eof_lex_term",  "_eof_lex_term", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   88 */ { "_eof_lex_expr",  "_eof_lex_expr", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   89 */ { "_eof_opt_ni",  "_eof_opt_ni", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   90 */ { "_eof_opt_prod_repeat",  "_eof_opt_prod_repeat", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   91 */ { "_eof_opt_prod_el_name",  "_eof_opt_prod_el_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   92 */ { "_eof_prod_el",  "_eof_prod_el", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   93 */ { "_eof_prod_el_list",  "_eof_prod_el_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   94 */ { "_eof_opt_commit",  "_eof_opt_commit", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   95 */ { "_eof_opt_prod_name",  "_eof_opt_prod_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   96 */ { "_eof_prod_var_def",  "_eof_prod_var_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   97 */ { "_eof_prod_var_list",  "_eof_prod_var_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   98 */ { "_eof_prod",  "_eof_prod", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*   99 */ { "_eof_prod_list",  "_eof_prod_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  100 */ { "_eof_ignore_def",  "_eof_ignore_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  101 */ { "_eof_token_def",  "_eof_token_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  102 */ { "_eof_token_list",  "_eof_token_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  103 */ { "_eof_item",  "_eof_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  104 */ { "_eof_start",  "_eof_start", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  105 */ { "_eof__ign_0xa000198f0",  "_eof__ign_0xa000198f0", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  106 */ { "_eof__lrepeat_item",  "_eof__lrepeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  107 */ { "_eof__T_any",  "_eof__T_any", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  108 */ { "_eof__T_lex_factor",  "_eof__T_lex_factor", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  109 */ { "_eof__T_lex_factor_neg",  "_eof__T_lex_factor_neg", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  110 */ { "_eof__T_lex_factor_rep",  "_eof__T_lex_factor_rep", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  111 */ { "_eof__T_lex_term",  "_eof__T_lex_term", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  112 */ { "_eof__T_lex_expr",  "_eof__T_lex_expr", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  113 */ { "_eof__T_opt_ni",  "_eof__T_opt_ni", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  114 */ { "_eof__T_opt_prod_repeat",  "_eof__T_opt_prod_repeat", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  115 */ { "_eof__T_opt_prod_el_name",  "_eof__T_opt_prod_el_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  116 */ { "_eof__T_prod_el",  "_eof__T_prod_el", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  117 */ { "_eof__T_prod_el_list",  "_eof__T_prod_el_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  118 */ { "_eof__T_opt_commit",  "_eof__T_opt_commit", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  119 */ { "_eof__T_opt_prod_name",  "_eof__T_opt_prod_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  120 */ { "_eof__T_prod_var_def",  "_eof__T_prod_var_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  121 */ { "_eof__T_prod_var_list",  "_eof__T_prod_var_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  122 */ { "_eof__T_prod",  "_eof__T_prod", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  123 */ { "_eof__T_prod_list",  "_eof__T_prod_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  124 */ { "_eof__T_ignore_def",  "_eof__T_ignore_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  125 */ { "_eof__T_token_def",  "_eof__T_token_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  126 */ { "_eof__T_token_list",  "_eof__T_token_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  127 */ { "_eof__T_item",  "_eof__T_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  128 */ { "_eof__T_start",  "_eof__T_start", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  129 */ { "_eof__T__lrepeat_item",  "_eof__T__lrepeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  130 */ { "_notoken",  "_notoken", 0, 0, 0, 1, -1, 0, 0, 0, 0, -1, 0, 0 },
/*  131 */ { "any",  "any", 0, 0, 0, 0, -1, 0, 0, 0, 31, -1, 0, 0 },
/*  132 */ { "lex_factor",  "lex_factor", 0, 0, 0, 0, -1, 31, 0, 0, 32, -1, 0, 0 },
/*  133 */ { "lex_factor_neg",  "lex_factor_neg", 0, 0, 0, 0, -1, 32, 0, 0, 33, -1, 0, 0 },
/*  134 */ { "lex_factor_rep",  "lex_factor_rep", 0, 0, 0, 0, -1, 33, 0, 0, 34, -1, 0, 0 },
/*  135 */ { "lex_term",  "lex_term", 0, 0, 0, 0, -1, 34, 0, 0, 35, -1, 0, 0 },
/*  136 */ { "lex_expr",  "lex_expr", 0, 0, 0, 0, -1, 35, 0, 0, 36, -1, 0, 0 },
/*  137 */ { "opt_ni",  "opt_ni", 0, 0, 0, 0, -1, 36, 0, 0, 37, -1, 0, 0 },
/*  138 */ { "opt_prod_repeat",  "opt_prod_repeat", 0, 0, 0, 0, -1, 37, 0, 0, 38, -1, 0, 0 },
/*  139 */ { "opt_prod_el_name",  "opt_prod_el_name", 0, 0, 0, 0, -1, 38, 0, 0, 39, -1, 0, 0 },
/*  140 */ { "prod_el",  "prod_el", 0, 0, 0, 0, -1, 39, 0, 0, 40, -1, 0, 0 },
/*  141 */ { "prod_el_list",  "prod_el_list", 0, 0, 0, 0, -1, 40, 0, 0, 41, -1, 0, 0 },
/*  142 */ { "opt_commit",  "opt_commit", 0, 0, 0, 0, -1, 41, 0, 0, 42, -1, 0, 0 },
/*  143 */ { "opt_prod_name",  "opt_prod_name", 0, 0, 0, 0, -1, 42, 0, 0, 43, -1, 0, 0 },
/*  144 */ { "prod_var_def",  "prod_var_def", 0, 0, 0, 0, -1, 43, 0, 0, 44, -1, 0, 0 },
/*  145 */ { "prod_var_list",  "prod_var_list", 0, 0, 0, 0, -1, 44, 0, 0, 45, -1, 0, 0 },
/*  146 */ { "prod",  "prod", 0, 0, 0, 0, -1, 45, 0, 0, 46, -1, 0, 0 },
/*  147 */ { "prod_list",  "prod_list", 0, 0, 0, 0, -1, 46, 0, 0, 47, -1, 0, 0 },
/*  148 */ { "ignore_def",  "ignore_def", 0, 0, 0, 0, -1, 47, 0, 0, 48, -1, 0, 0 },
/*  149 */ { "token_def",  "token_def", 0, 0, 0, 0, -1, 48, 0, 0, 49, -1, 0, 0 },
/*  150 */ { "token_list",  "token_list", 0, 0, 0, 0, -1, 49, 0, 0, 50, -1, 0, 0 },
/*  151 */ { "item",  "item", 0, 0, 0, 0, -1, 50, 0, 0, 51, -1, 0, 0 },
/*  152 */ { "start",  "start", 0, 0, 0, 0, -1, 51, 0, 0, 52, -1, 0, 0 },
/*  153 */ { "_lrepeat_item",  "_lrepeat_item", 1, 0, 0, 0, -1, 0, 0, 0, 53, -1, 0, 0 },
/*  154 */ { "_root",  "_root", 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0 }
};

static short struct_trees_0[] = {
	0, 3, 
};

static short struct_trees_4[] = {
	0, 
};

static struct struct_el_info parser_selInfo[] = {
	{ 4, struct_trees_0, 2,  },
	{ 0, 0, 0,  },
	{ 0, 0, 0,  },
	{ 3, 0, 0,  },
	{ 3, struct_trees_4, 1,  },

};

static struct frame_info parser_frameInfo[] = {
	{ "", 0, 0, 0, 0, locals_0, 2, 0, 2 }
};

static struct prod_info parser_prodInfo[] = {
	{ 132, 0, 1, "lex_factor-1", -1, 1, copy_0, 1,  },
	{ 132, 3, 1, "lex_factor-4", -1, 1, copy_1, 1,  },
	{ 132, 1, 3, "lex_factor-2", -1, 1, copy_2, 1,  },
	{ 132, 2, 3, "lex_factor-3", -1, 1, copy_3, 2,  },
	{ 133, 0, 2, "lex_factor_neg-1", -1, 1, copy_4, 1,  },
	{ 133, 1, 1, "lex_factor_neg-2", -1, 1, copy_5, 1,  },
	{ 134, 0, 2, "lex_factor_rep-1", -1, 1, copy_6, 2,  },
	{ 134, 1, 2, "lex_factor_rep-2", -1, 1, copy_7, 2,  },
	{ 134, 2, 1, "lex_factor_rep-3", -1, 1, copy_8, 1,  },
	{ 135, 0, 3, "lex_term-1", -1, 1, copy_9, 3,  },
	{ 135, 1, 3, "lex_term-2", -1, 1, copy_10, 3,  },
	{ 135, 2, 1, "lex_term-3", -1, 1, copy_11, 1,  },
	{ 136, 0, 3, "lex_expr-1", -1, 1, copy_12, 2,  },
	{ 136, 1, 1, "lex_expr-2", -1, 1, copy_13, 1,  },
	{ 137, 0, 2, "opt_ni-1", -1, 1, copy_14, 1,  },
	{ 137, 1, 0, "opt_ni-2", -1, 1, 0, 0,  },
	{ 138, 0, 1, "opt_prod_repeat-1", -1, 1, copy_16, 1,  },
	{ 138, 1, 1, "opt_prod_repeat-2", -1, 1, copy_17, 1,  },
	{ 138, 2, 0, "opt_prod_repeat-3", -1, 1, 0, 0,  },
	{ 139, 0, 2, "opt_prod_el_name-1", -1, 1, copy_19, 1,  },
	{ 139, 1, 0, "opt_prod_el_name-2", -1, 1, 0, 0,  },
	{ 140, 0, 3, "prod_el-1", -1, 1, copy_21, 3,  },
	{ 141, 0, 2, "prod_el_list-1", -1, 1, copy_22, 2,  },
	{ 141, 1, 0, "prod_el_list-2", -1, 1, 0, 0,  },
	{ 142, 0, 1, "opt_commit-1", -1, 1, copy_24, 1,  },
	{ 142, 1, 0, "opt_commit-2", -1, 1, 0, 0,  },
	{ 143, 0, 2, "opt_prod_name-1", -1, 1, copy_26, 1,  },
	{ 143, 1, 0, "opt_prod_name-2", -1, 1, 0, 0,  },
	{ 144, 0, 3, "prod_var_def-1", -1, 1, copy_28, 2,  },
	{ 145, 0, 2, "prod_var_list-1", -1, 1, copy_29, 2,  },
	{ 145, 1, 0, "prod_var_list-2", -1, 1, 0, 0,  },
	{ 146, 0, 5, "prod-1", -1, 1, copy_31, 3,  },
	{ 147, 0, 3, "prod_list-1", -1, 1, copy_32, 2,  },
	{ 147, 1, 1, "prod_list-2", -1, 1, copy_33, 1,  },
	{ 148, 0, 4, "ignore_def-1", -1, 1, copy_34, 1,  },
	{ 149, 0, 7, "token_def-1", -1, 1, copy_35, 4,  },
	{ 150, 0, 2, "token_list-1", -1, 1, copy_36, 2,  },
	{ 150, 1, 2, "token_list-2", -1, 1, copy_37, 2,  },
	{ 150, 2, 0, "token_list-3", -1, 1, 0, 0,  },
	{ 151, 0, 3, "item-1", -1, 1, copy_39, 1,  },
	{ 151, 1, 4, "item-2", -1, 1, copy_40, 3,  },
	{ 152, 0, 1, "start-1", -1, 1, copy_41, 1,  },
	{ 153, 0, 2, "_lrepeat_item-1", -1, 1, 0, 0,  },
	{ 153, 1, 0, "_lrepeat_item-2", -1, 1, 0, 0,  },
	{ 154, 0, 1, "_root-1", -1, 1, 0, 0,  },
	{ 154, 1, 1, "_root-2", -1, 1, 0, 0,  },
	{ 154, 2, 1, "_root-3", -1, 1, 0, 0,  },
	{ 154, 3, 1, "_root-4", -1, 1, 0, 0,  },
	{ 154, 4, 1, "_root-5", -1, 1, 0, 0,  },
	{ 154, 5, 1, "_root-6", -1, 1, 0, 0,  },
	{ 154, 6, 1, "_root-7", -1, 1, 0, 0,  },
	{ 154, 7, 1, "_root-8", -1, 1, 0, 0,  },
	{ 154, 8, 1, "_root-9", -1, 1, 0, 0,  },
	{ 154, 9, 1, "_root-10", -1, 1, 0, 0,  },
	{ 154, 10, 1, "_root-11", -1, 1, 0, 0,  },
	{ 154, 11, 1, "_root-12", -1, 1, 0, 0,  },
	{ 154, 12, 1, "_root-13", -1, 1, 0, 0,  },
	{ 154, 13, 1, "_root-14", -1, 1, 0, 0,  },
	{ 154, 14, 1, "_root-15", -1, 1, 0, 0,  },
	{ 154, 15, 1, "_root-16", -1, 1, 0, 0,  },
	{ 154, 16, 1, "_root-17", -1, 1, 0, 0,  },
	{ 154, 17, 1, "_root-18", -1, 1, 0, 0,  },
	{ 154, 18, 1, "_root-19", -1, 1, 0, 0,  },
	{ 154, 19, 1, "_root-20", -1, 1, 0, 0,  },
	{ 154, 20, 1, "_root-21", -1, 1, 0, 0,  },
	{ 154, 21, 1, "_root-22", -1, 1, 0, 0,  },
	{ 154, 22, 1, "_root-23", -1, 1, 0, 0,  },
	{ 154, 23, 1, "_root-24", -1, 1, 0, 0,  },
	{ 154, 24, 1, "_root-25", -1, 1, 0, 0,  },
	{ 154, 25, 1, "_root-26", -1, 1, 0, 0,  },
	{ 154, 26, 1, "_root-27", -1, 1, 0, 0,  },
	{ 154, 27, 1, "_root-28", -1, 1, 0, 0,  },
	{ 154, 28, 1, "_root-29", -1, 1, 0, 0,  },
	{ 154, 29, 1, "_root-30", -1, 1, 0, 0,  },
	{ 154, 30, 1, "_root-31", -1, 1, 0, 0,  },
	{ 154, 31, 1, "_root-32", -1, 1, 0, 0,  },
	{ 154, 32, 1, "_root-33", -1, 1, 0, 0,  },
	{ 154, 33, 1, "_root-34", -1, 1, 0, 0,  },
	{ 154, 34, 1, "_root-35", -1, 1, 0, 0,  },
	{ 154, 35, 1, "_root-36", -1, 1, 0, 0,  },
	{ 154, 36, 1, "_root-37", -1, 1, 0, 0,  },
	{ 154, 37, 1, "_root-38", -1, 1, 0, 0,  },
	{ 154, 38, 1, "_root-39", -1, 1, 0, 0,  },
	{ 154, 39, 1, "_root-40", -1, 1, 0, 0,  },
	{ 154, 40, 1, "_root-41", -1, 1, 0, 0,  },
	{ 154, 41, 1, "_root-42", -1, 1, 0, 0,  },
	{ 154, 42, 1, "_root-43", -1, 1, 0, 0,  },
	{ 154, 43, 1, "_root-44", -1, 1, 0, 0,  },
	{ 154, 44, 1, "_root-45", -1, 1, 0, 0,  },
	{ 154, 45, 1, "_root-46", -1, 1, 0, 0,  },
	{ 154, 46, 1, "_root-47", -1, 1, 0, 0,  },
	{ 154, 47, 1, "_root-48", -1, 1, 0, 0,  },
	{ 154, 48, 1, "_root-49", -1, 1, 0, 0,  },
	{ 154, 49, 1, "_root-50", -1, 1, 0, 0,  },
	{ 154, 50, 1, "_root-51", -1, 1, 0, 0,  },
	{ 154, 51, 1, "_root-52", -1, 1, 0, 0,  },
	{ 154, 52, 1, "_root-53", -1, 1, 0, 0,  },
	{ 154, 53, 1, "_root-54", -1, 1, 0, 0,  },
	{ 154, 54, 1, "_root-55", -1, 1, 0, 0,  },
	{ 154, 55, 1, "_root-56", -1, 1, 0, 0,  },
	{ 154, 56, 1, "_root-57", -1, 1, 0, 0,  },
	{ 154, 57, 1, "_root-58", -1, 1, 0, 0,  },
	{ 154, 58, 1, "_root-59", -1, 1, 0, 0,  },
	{ 154, 59, 1, "_root-60", -1, 1, 0, 0,  },
	{ 154, 60, 1, "_root-61", -1, 1, 0, 0,  },
	{ 154, 61, 1, "_root-62", -1, 1, 0, 0,  },
	{ 154, 62, 1, "_root-63", -1, 1, 0, 0,  },
	{ 154, 63, 1, "_root-64", -1, 1, 0, 0,  },
	{ 154, 64, 1, "_root-65", -1, 1, 0, 0,  },
	{ 154, 65, 1, "_root-66", -1, 1, 0, 0,  },
	{ 154, 66, 1, "_root-67", -1, 1, 0, 0,  },
	{ 154, 67, 1, "_root-68", -1, 1, 0, 0,  },
	{ 154, 68, 1, "_root-69", -1, 1, 0, 0,  },
	{ 154, 69, 1, "_root-70", -1, 1, 0, 0,  },
	{ 154, 70, 1, "_root-71", -1, 1, 0, 0,  },
	{ 154, 71, 1, "_root-72", -1, 1, 0, 0,  },
	{ 154, 72, 1, "_root-73", -1, 1, 0, 0,  },
	{ 154, 73, 1, "_root-74", -1, 1, 0, 0,  },
	{ 154, 74, 1, "_root-75", -1, 1, 0, 0,  },
	{ 154, 75, 1, "_root-76", -1, 1, 0, 0,  },
	{ 154, 76, 1, "_root-77", -1, 1, 0, 0,  },
	{ 154, 77, 1, "_root-78", -1, 1, 0, 0,  },
	{ 154, 78, 1, "_root-79", -1, 1, 0, 0,  },
	{ 154, 79, 1, "_root-80", -1, 1, 0, 0,  },
	{ 154, 80, 1, "_root-81", -1, 1, 0, 0,  },
	{ 154, 81, 1, "_root-82", -1, 1, 0, 0,  },
	{ 154, 82, 1, "_root-83", -1, 1, 0, 0,  },
	{ 154, 83, 1, "_root-84", -1, 1, 0, 0,  },
	{ 154, 84, 1, "_root-85", -1, 1, 0, 0,  },
	{ 154, 85, 1, "_root-86", -1, 1, 0, 0,  },
	{ 154, 86, 1, "_root-87", -1, 1, 0, 0,  },
	{ 154, 87, 1, "_root-88", -1, 1, 0, 0,  },
	{ 154, 88, 1, "_root-89", -1, 1, 0, 0,  },
	{ 154, 89, 1, "_root-90", -1, 1, 0, 0,  },
	{ 154, 90, 1, "_root-91", -1, 1, 0, 0,  },
	{ 154, 91, 1, "_root-92", -1, 1, 0, 0,  },
	{ 154, 92, 1, "_root-93", -1, 1, 0, 0,  },
	{ 154, 93, 1, "_root-94", -1, 1, 0, 0,  },
	{ 154, 94, 1, "_root-95", -1, 1, 0, 0,  },
	{ 154, 95, 1, "_root-96", -1, 1, 0, 0,  },
	{ 154, 96, 1, "_root-97", -1, 1, 0, 0,  },
	{ 154, 97, 1, "_root-98", -1, 1, 0, 0,  },
	{ 154, 98, 1, "_root-99", -1, 1, 0, 0,  },
	{ 154, 99, 1, "_root-100", -1, 1, 0, 0,  },
	{ 154, 100, 1, "_root-101", -1, 1, 0, 0,  },
	{ 154, 101, 1, "_root-102", -1, 1, 0, 0,  },
	{ 154, 102, 1, "_root-103", -1, 1, 0, 0,  },
	{ 154, 103, 1, "_root-104", -1, 1, 0, 0,  },
	{ 154, 104, 1, "_root-105", -1, 1, 0, 0,  },
	{ 154, 105, 1, "_root-106", -1, 1, 0, 0,  },
	{ 154, 106, 1, "_root-107", -1, 1, 0, 0,  },
	{ 154, 107, 1, "_root-108", -1, 1, 0, 0,  },
	{ 154, 108, 1, "_root-109", -1, 1, 0, 0,  },
	{ 154, 109, 1, "_root-110", -1, 1, 0, 0,  },
	{ 154, 110, 1, "_root-111", -1, 1, 0, 0,  },
	{ 154, 111, 1, "_root-112", -1, 1, 0, 0,  },
	{ 154, 112, 1, "_root-113", -1, 1, 0, 0,  },
	{ 154, 113, 1, "_root-114", -1, 1, 0, 0,  },
	{ 154, 114, 1, "_root-115", -1, 1, 0, 0,  },
	{ 154, 115, 1, "_root-116", -1, 1, 0, 0,  },
	{ 154, 116, 1, "_root-117", -1, 1, 0, 0,  },
	{ 154, 117, 1, "_root-118", -1, 1, 0, 0,  },
	{ 154, 118, 1, "_root-119", -1, 1, 0, 0,  },
	{ 154, 119, 1, "_root-120", -1, 1, 0, 0,  },
	{ 154, 120, 1, "_root-121", -1, 1, 0, 0,  },
	{ 154, 121, 1, "_root-122", -1, 1, 0, 0,  },
	{ 154, 122, 1, "_root-123", -1, 1, 0, 0,  },
	{ 154, 123, 1, "_root-124", -1, 1, 0, 0,  },
	{ 154, 124, 1, "_root-125", -1, 1, 0, 0,  },
	{ 154, 125, 1, "_root-126", -1, 1, 0, 0,  },
	{ 154, 126, 1, "_root-127", -1, 1, 0, 0,  },
	{ 154, 127, 1, "_root-128", -1, 1, 0, 0,  },
	{ 154, 128, 1, "_root-129", -1, 1, 0, 0,  },
	{ 154, 129, 1, "_root-130", -1, 1, 0, 0,  },
	{ 154, 130, 1, "_root-131", -1, 1, 0, 0,  },
	{ 154, 131, 1, "_root-132", -1, 1, 0, 0,  },
	{ 154, 132, 1, "_root-133", -1, 1, 0, 0,  },
	{ 154, 133, 1, "_root-134", -1, 1, 0, 0,  },
	{ 154, 134, 1, "_root-135", -1, 1, 0, 0,  },
	{ 154, 135, 1, "_root-136", -1, 1, 0, 0,  },
	{ 154, 136, 1, "_root-137", -1, 1, 0, 0,  },
	{ 154, 137, 1, "_root-138", -1, 1, 0, 0,  },
	{ 154, 138, 1, "_root-139", -1, 1, 0, 0,  },
	{ 154, 139, 1, "_root-140", -1, 1, 0, 0,  },
	{ 154, 140, 1, "_root-141", -1, 1, 0, 0,  },
	{ 154, 141, 1, "_root-142", -1, 1, 0, 0,  },
	{ 154, 142, 1, "_root-143", -1, 1, 0, 0,  },
	{ 154, 143, 1, "_root-144", -1, 1, 0, 0,  },
	{ 154, 144, 1, "_root-145", -1, 1, 0, 0,  },
	{ 154, 145, 1, "_root-146", -1, 1, 0, 0,  },
	{ 154, 146, 1, "_root-147", -1, 1, 0, 0,  },
	{ 154, 147, 1, "_root-148", -1, 1, 0, 0,  },
	{ 154, 148, 1, "_root-149", -1, 1, 0, 0,  },
	{ 154, 149, 1, "_root-150", -1, 1, 0, 0,  },
	{ 154, 150, 1, "_root-151", -1, 1, 0, 0,  },
	{ 154, 151, 1, "_root-152", -1, 1, 0, 0,  },
	{ 154, 152, 1, "_root-153", -1, 1, 0, 0,  },
	{ 154, 153, 1, "_root-154", -1, 1, 0, 0,  }
};

static struct pat_cons_info parser_patReplInfo[] = {
};

static struct pat_cons_node parser_patReplNodes[] = {
};

static struct function_info parser_functionInfo[] = {

};

static struct region_info parser_regionInfo[] = {
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 30 }
};

static struct generic_info parser_genericInfo[] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 20, -1, -1, 0, 0, 0, 0, 0 },
	{ 21, 158, 1, 0, 0, 5, 0, -1 },
	{ 21, 159, 1, 0, 0, 2, 0, -1 },
};

static const char *parser_litdata[] = {
	"unwind code\n",
	"r",
};

static long parser_litlen[] = {
	12, 1, };

static head_t *parser_literals[] = {
	0, 0, };

static int startStates[] = {
	0, };

static int eofLelIds[] = {
	104, };

static int parserLelIds[] = {
	152, };

static CaptureAttr captureAttr[] = {
};

tree_t **colm_object_host_call( program_t *prg, long code, tree_t **sp );
void colm_object_commit_reduce_forward( program_t *prg, tree_t **root,
		struct pda_run *pda_run, parse_tree_t *pt );
long colm_object_commit_union_sz( int reducer );
void colm_object_init_need();
int colm_object_reducer_need_tok( program_t *prg, struct pda_run *pda_run, int id );
int colm_object_reducer_need_ign( program_t *prg, struct pda_run *pda_run );
void colm_object_read_reduce( program_t *prg, int reducer, input_t *stream );

static struct export_info parser_exportInfo[] = {
	{ "ColmTree", 0 },
};
const int colm_export_ColmTree = 0;

struct colm_sections colm_object = 
{
	parser_lelInfo,
	155,

	parser_selInfo,
	5,

	parser_prodInfo,
	198,

	parser_regionInfo,
	5,

	parser_rootCode,
	67,
	0,

	parser_frameInfo,
	1,

	parser_functionInfo,
	0,

	parser_patReplInfo,
	0,

	parser_patReplNodes,
	0,

	parser_genericInfo,
	4,

	parser_exportInfo,
	1,

	3,
	2,

	parser_litdata,
	parser_litlen,
	parser_literals,
	2,

	captureAttr,
	0,

	&fsmTables_start,
	&pid_0_pdaTables,
	startStates, eofLelIds, parserLelIds, 1,

	4,

	131,
	155,
	-1,
	2,
	131,
	0,
	130,
	155,
	159,
	158,
	160,
	160,
	162,
	&fsm_execute,
	&sendNamedLangEl,
	&initBindings,
	&popBinding,
	&colm_object_host_call,
	&colm_object_commit_reduce_forward,
	&colm_object_commit_union_sz,
	&colm_object_init_need,
	&colm_object_reducer_need_tok,
	&colm_object_reducer_need_ign,
	&colm_object_read_reduce,
};

tree_t **colm_object_host_call( program_t *prg, long code, tree_t **sp )
{
	value_t rtn = 0;
	switch ( code ) {
	}
	vm_push_value( rtn );
	return sp;
}
void colm_object_commit_reduce_forward( program_t *prg, tree_t **root,
		struct pda_run *pda_run, parse_tree_t *pt )
{
	commit_clear_parse_tree( prg, root, pda_run, pt->child );
}

long colm_object_commit_union_sz( int reducer ) { return 0; }
void colm_object_init_need() {}
int colm_object_reducer_need_tok( program_t *prg, struct pda_run *pda_run, int id ) { return COLM_RN_BOTH; }
int colm_object_reducer_need_ign( program_t *prg, struct pda_run *pda_run ) { return COLM_RN_BOTH; }

void colm_object_read_reduce( program_t *prg, int reducer, input_t *stream ) {}
