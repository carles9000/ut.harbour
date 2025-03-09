/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/sinkey.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SINKEY );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCLINE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SINKEY )
{ "FT_SINKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SINKEY )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SINKEY, "hbnf/sinkey.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SINKEY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SINKEY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SINKEY )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,1,0,12,0,121,8,28,11,176,2,
		0,12,0,80,2,25,36,95,1,100,8,28,21,176,
		1,0,12,0,122,8,28,12,176,2,0,121,12,1,
		80,2,25,11,176,2,0,95,1,12,1,80,2,176,
		3,0,95,2,12,1,165,80,3,100,69,28,23,48,
		4,0,95,3,176,5,0,122,12,1,176,6,0,122,
		12,1,100,112,3,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

