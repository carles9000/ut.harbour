/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/restsets.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_RESTSETS );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( FT_SETCENTURY );
HB_FUNC_EXTERN( SETBLINK );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RESTSETS )
{ "FT_RESTSETS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_RESTSETS )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "FT_SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_SETCENTURY )}, NULL },
{ "SETBLINK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETBLINK )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RESTSETS, "hbnf/restsets.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RESTSETS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RESTSETS )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_RESTSETS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,89,17,0,2,0,0,
		0,176,2,0,95,2,95,1,12,2,6,122,92,47,
		20,4,176,3,0,95,1,92,48,1,20,1,176,4,
		0,95,1,92,49,1,20,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

