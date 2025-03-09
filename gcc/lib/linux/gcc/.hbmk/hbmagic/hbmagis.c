/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbmagic/hbmagis.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_MAGIC_SIMPLE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( MAGIC_OPEN );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MAGIC_LOAD );
HB_FUNC_EXTERN( MAGIC_FILE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBMAGIS )
{ "HB_MAGIC_SIMPLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_MAGIC_SIMPLE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "MAGIC_OPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAGIC_OPEN )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MAGIC_LOAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAGIC_LOAD )}, NULL },
{ "MAGIC_FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAGIC_FILE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBMAGIS, "hbmagic/hbmagis.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBMAGIS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBMAGIS )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_MAGIC_SIMPLE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,1,0,96,2,0,92,16,20,2,176,
		2,0,95,2,12,1,80,3,176,3,0,95,3,12,
		1,31,13,176,4,0,95,3,12,1,121,69,28,7,
		106,1,0,110,7,176,5,0,95,3,95,1,20,2,
		7
	};

	hb_vmExecute( pcode, symbols );
}

