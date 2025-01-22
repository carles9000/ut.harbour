/*
 * Harbour 3.2.0dev (r2104281802)
 * Microsoft Visual C 19.27.29112 (64-bit)
 * Generated C source from "../../../smtcdx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SMTCDX_GETFUNCTABLE );
HB_FUNC_EXTERN( USRRDD_GETFUNCTABLE );
HB_FUNC_INIT( SMTCDX_INIT );
HB_FUNC_EXTERN( RDDREGISTER );
HB_FUNC_EXTERN( RDDINFO );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC( SMTCDX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMTCDX )
{ "SMTCDX_GETFUNCTABLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SMTCDX_GETFUNCTABLE )}, NULL },
{ "USRRDD_GETFUNCTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( USRRDD_GETFUNCTABLE )}, NULL },
{ "SMTCDX_INIT$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( SMTCDX_INIT )}, NULL },
{ "RDDREGISTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDREGISTER )}, NULL },
{ "RDDINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDINFO )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "SMTCDX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SMTCDX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SMTCDX, "../../../smtcdx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SMTCDX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SMTCDX )
   #include "hbiniseg.h"
#endif

HB_FUNC( SMTCDX_GETFUNCTABLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,66,0,176,1,0,95,1,95,2,95,
		3,95,4,106,7,68,66,70,67,68,88,0,4,0,
		0,95,5,20,7,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( SMTCDX_INIT )
{
	static const HB_BYTE pcode[] =
	{
		36,70,0,176,3,0,106,7,83,77,84,67,68,88,
		0,122,20,2,36,71,0,176,4,0,92,14,92,3,
		106,7,83,77,84,67,68,88,0,20,3,36,73,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SMTCDX )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

