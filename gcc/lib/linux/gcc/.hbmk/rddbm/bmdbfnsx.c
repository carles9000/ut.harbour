/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "rddbm/bmdbfnsx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( DBFNSX );
HB_FUNC_EXTERN( _BMDBF );
HB_FUNC( BMDBFNSX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BMDBFNSX )
{ "DBFNSX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFNSX )}, NULL },
{ "_BMDBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( _BMDBF )}, NULL },
{ "BMDBFNSX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BMDBFNSX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BMDBFNSX, "rddbm/bmdbfnsx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BMDBFNSX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BMDBFNSX )
   #include "hbiniseg.h"
#endif

HB_FUNC( BMDBFNSX )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

