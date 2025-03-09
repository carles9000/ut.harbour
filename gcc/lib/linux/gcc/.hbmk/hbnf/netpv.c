/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/netpv.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_NETPV );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AEVAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NETPV )
{ "FT_NETPV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_NETPV )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NETPV, "hbnf/netpv.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NETPV
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NETPV )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_NETPV )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,121,80,5,176,1,0,96,4,0,176,2,
		0,95,3,12,1,20,2,176,3,0,95,3,89,28,
		0,2,0,2,0,5,0,2,0,96,255,255,95,1,
		95,254,92,100,18,23,95,2,84,18,139,6,122,95,
		4,20,4,96,5,0,95,1,140,110,7
	};

	hb_vmExecute( pcode, symbols );
}

