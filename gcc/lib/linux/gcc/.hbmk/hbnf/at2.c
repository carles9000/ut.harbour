/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/at2.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_AT2 );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC( FT_RAT2 );
HB_FUNC_EXTERN( RAT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_AT2 )
{ "FT_AT2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_AT2 )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "FT_RAT2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_RAT2 )}, NULL },
{ "RAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RAT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_AT2, "hbnf/at2.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_AT2
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_AT2 )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_AT2 )
{
	static const HB_BYTE pcode[] =
	{
		13,4,4,121,80,7,95,2,80,8,176,1,0,96,
		4,0,120,20,2,176,1,0,96,3,0,122,20,2,
		122,165,80,5,25,74,95,4,28,15,176,2,0,95,
		1,95,8,12,2,80,6,25,23,176,2,0,176,3,
		0,95,1,12,1,176,3,0,95,8,12,1,12,2,
		80,6,96,7,0,95,6,135,176,4,0,95,8,176,
		2,0,95,1,95,8,12,2,23,12,2,80,8,95,
		6,121,8,31,10,175,5,0,95,3,15,28,181,95,
		7,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_RAT2 )
{
	static const HB_BYTE pcode[] =
	{
		13,4,4,121,80,7,95,2,80,8,176,1,0,96,
		4,0,120,20,2,176,1,0,96,3,0,122,20,2,
		122,165,80,5,25,73,95,4,28,15,176,6,0,95,
		1,95,8,12,2,80,6,25,23,176,6,0,176,3,
		0,95,1,12,1,176,3,0,95,8,12,1,12,2,
		80,6,95,6,80,7,176,4,0,95,8,122,176,6,
		0,95,1,95,8,12,2,17,12,3,80,8,95,6,
		121,8,31,10,175,5,0,95,3,15,28,182,95,7,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

