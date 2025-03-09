/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "rddbm/bmdbfntx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( DBFNTX );
HB_FUNC_EXTERN( _BMDBF );
HB_FUNC( BMDBFNTX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BMDBFNTX )
{ "DBFNTX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFNTX )}, NULL },
{ "_BMDBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( _BMDBF )}, NULL },
{ "BMDBFNTX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BMDBFNTX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BMDBFNTX, "rddbm/bmdbfntx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BMDBFNTX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BMDBFNTX )
   #include "hbiniseg.h"
#endif

HB_FUNC( BMDBFNTX )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

