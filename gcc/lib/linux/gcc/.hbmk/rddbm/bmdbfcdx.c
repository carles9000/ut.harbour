/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "rddbm/bmdbfcdx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( _BMDBF );
HB_FUNC( BMDBFCDX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BMDBFCDX )
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "_BMDBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( _BMDBF )}, NULL },
{ "BMDBFCDX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BMDBFCDX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BMDBFCDX, "rddbm/bmdbfcdx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BMDBFCDX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BMDBFCDX )
   #include "hbiniseg.h"
#endif

HB_FUNC( BMDBFCDX )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

