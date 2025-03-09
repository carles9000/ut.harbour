/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbfoxpro/occurs.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OCCURS );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_AT );
HB_FUNC( FOX_AT );
HB_FUNC_EXTERN( HB_DEFAULT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OCCURS )
{ "OCCURS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OCCURS )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_AT )}, NULL },
{ "FOX_AT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FOX_AT )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OCCURS, "hbfoxpro/occurs.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OCCURS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OCCURS )
   #include "hbiniseg.h"
#endif

HB_FUNC( OCCURS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,121,80,3,176,1,0,95,1,12,1,28,
		38,176,1,0,95,2,12,1,28,29,121,80,4,176,
		2,0,95,1,95,2,95,4,23,12,3,165,80,4,
		121,15,28,7,174,3,0,25,234,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FOX_AT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,121,80,4,176,1,0,95,1,12,1,28,
		48,176,1,0,95,2,12,1,28,39,176,4,0,96,
		3,0,122,20,2,173,3,0,95,3,121,16,28,21,
		176,2,0,95,1,95,2,95,4,23,12,3,165,80,
		4,121,69,31,230,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

