/*
 * Copyright 2001-2018 Adrian Thurston <thurston@colm.net>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "inputdata.h"
#include "nragel.h"

extern struct colm_sections rlparsePascal;
extern struct colm_sections rlhcPascal;

/*
 * Pascal (Free Pascal / Object Pascal)
 *
 * Emits FPC-compatible Pascal. Uses VarFeature + GenSwitchLoop (Pascal has no
 * computed goto), and the emitted tables conform to the low-level record
 * patterns in reference/lowlevel-record.ebnf (raw byte arrays, bit-sets,
 * packed records).
 */

const char *defaultOutFnPascal( const char *inputFileName )
{
	return fileNameFromStem( inputFileName, ".pas" );
}

HostType hostTypesPascal[] = 
{
	/* data1, data2, internalName, isSigned, isOrd, isChar, sMin, sMax, uMin, uMax, size */
	{ "byte",     0,  "byte",     false, true,  false,  0, 0,                    U8BIT_MIN,  U8BIT_MAX,   1 },
	{ "shortint", 0,  "shortint", true,  true,  false,  S8BIT_MIN,  S8BIT_MAX,   0, 0,                    1 },
	{ "word",     0,  "word",     false, true,  false,  0, 0,                    U16BIT_MIN, U16BIT_MAX,  2 },
	{ "smallint", 0,  "smallint", true,  true,  false,  S16BIT_MIN, S16BIT_MAX,  0, 0,                    2 },
	{ "cardinal", 0,  "cardinal", false, true,  false,  0, 0,                    U32BIT_MIN, U32BIT_MAX,  4 },
	{ "integer",  0,  "integer",  true,  true,  false,  S32BIT_MIN, S32BIT_MAX,  0, 0,                    4 },
	{ "qword",    0,  "qword",    false, true,  false,  0, 0,                    U64BIT_MIN, U64BIT_MAX,  8 },
	{ "int64",    0,  "int64",    true,  true,  false,  S64BIT_MIN, S64BIT_MAX,  0, 0,                    8 },
	{ "char",     0,  "char",     true,  true,  true,   S8BIT_MIN,  S8BIT_MAX,   0, 0,                    1 },
};

const HostLang hostLangPascal =
{
	hostTypesPascal,
	9,
	0,
	true,
	false, /* loopLabels */
	Translated,
	GotoFeature,
	&makeCodeGen,
	&defaultOutFnPascal,
	&genLineDirectiveTrans
};


int main( int argc, const char **argv )
{
	InputData id( &hostLangPascal, &rlparsePascal, &rlhcPascal );
	return id.rlhcMain( argc, argv );
}
