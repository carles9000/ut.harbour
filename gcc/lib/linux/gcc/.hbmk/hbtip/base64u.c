/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbtip/base64u.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIP_BASE64ENCODEURL );
HB_FUNC_EXTERN( HB_STRREPLACE );
HB_FUNC_EXTERN( HB_BASE64ENCODE );
HB_FUNC( TIP_BASE64DECODEURL );
HB_FUNC_EXTERN( HB_BASE64DECODE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BASE64U )
{ "TIP_BASE64ENCODEURL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_BASE64ENCODEURL )}, NULL },
{ "HB_STRREPLACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRREPLACE )}, NULL },
{ "HB_BASE64ENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BASE64ENCODE )}, NULL },
{ "TIP_BASE64DECODEURL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_BASE64DECODEURL )}, NULL },
{ "HB_BASE64DECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BASE64DECODE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BASE64U, "../contrib/hbtip/base64u.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BASE64U
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BASE64U )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIP_BASE64ENCODEURL )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,1,0,176,2,0,164,123,1,0,106,
		4,43,47,61,0,106,3,45,95,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TIP_BASE64DECODEURL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,4,0,176,1,0,95,1,106,3,45,
		95,0,106,3,43,47,0,12,3,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

