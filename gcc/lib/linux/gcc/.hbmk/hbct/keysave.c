/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/keysave.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SAVESETKEY );
HB_FUNC_EXTERN( HB_SETKEYSAVE );
HB_FUNC( RESTSETKEY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_KEYSAVE )
{ "SAVESETKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAVESETKEY )}, NULL },
{ "HB_SETKEYSAVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SETKEYSAVE )}, NULL },
{ "RESTSETKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RESTSETKEY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_KEYSAVE, "../contrib/hbct/keysave.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_KEYSAVE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_KEYSAVE )
   #include "hbiniseg.h"
#endif

HB_FUNC( SAVESETKEY )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RESTSETKEY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,20,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

