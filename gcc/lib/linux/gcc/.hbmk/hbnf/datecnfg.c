/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/datecnfg.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_DATECNFG );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MONTH );
HB_FUNC_EXTERN( DAY );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_DTOC );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DATECNFG )
{ "FT_DATECNFG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DATECNFG )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MONTH )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DTOC )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DATECNFG, "hbnf/datecnfg.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DATECNFG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DATECNFG )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_DATECNFG )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,116,8,0,176,1,0,95,1,12,1,28,
		54,176,2,0,95,1,12,1,80,3,176,3,0,95,
		3,12,1,31,36,176,4,0,95,3,12,1,92,2,
		8,28,17,176,5,0,95,3,12,1,92,29,8,28,
		5,173,3,0,95,3,103,1,0,122,2,176,6,0,
		95,2,12,1,28,23,95,2,121,15,28,17,95,2,
		92,8,35,28,10,95,2,103,1,0,92,2,2,176,
		7,0,103,1,0,122,1,106,11,121,121,121,121,46,
		109,109,46,100,100,0,12,2,103,1,0,92,2,1,
		4,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,8,0,1,0,116,8,0,134,208,75,37,0,122,
		4,2,0,82,1,0,179,1,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

