/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/invclr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_INVCLR );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRTRAN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_INVCLR )
{ "FT_INVCLR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_INVCLR )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_INVCLR, "hbnf/invclr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_INVCLR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_INVCLR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_INVCLR )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,176,1,0,96,1,0,176,2,0,12,0,
		20,2,176,3,0,95,1,176,4,0,106,2,44,0,
		95,1,106,2,44,0,72,12,2,17,12,2,80,1,
		106,2,42,0,95,1,24,28,8,106,2,42,0,25,
		5,106,1,0,106,2,43,0,95,1,24,28,8,106,
		2,43,0,25,5,106,1,0,72,80,4,176,5,0,
		176,3,0,95,1,176,4,0,106,2,47,0,95,1,
		12,2,17,12,2,12,1,80,3,176,5,0,176,6,
		0,95,1,176,4,0,106,2,47,0,95,1,12,2,
		23,12,2,12,1,80,2,176,7,0,176,7,0,95,
		2,106,2,43,0,12,2,106,2,42,0,12,2,95,
		4,72,106,2,47,0,72,176,7,0,176,7,0,95,
		3,106,2,43,0,12,2,106,2,42,0,12,2,72,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

