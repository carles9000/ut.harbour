/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/ctmisc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( ALLOFREE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( MEMORY );
HB_FUNC( CENTER );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC( CSETCURS );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC( CSETKEY );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC( CSETCENT );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC( LTOC );
HB_FUNC( DOSPARAM );
HB_FUNC_EXTERN( HB_ARGC );
HB_FUNC_EXTERN( HB_ARGV );
HB_FUNC( EXENAME );
HB_FUNC_EXTERN( HB_PROGNAME );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CTMISC )
{ "ALLOFREE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ALLOFREE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "MEMORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMORY )}, NULL },
{ "CENTER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CENTER )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CSETCURS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CSETCURS )}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "CSETKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CSETKEY )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "CSETCENT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CSETCENT )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "LTOC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LTOC )}, NULL },
{ "DOSPARAM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DOSPARAM )}, NULL },
{ "HB_ARGC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ARGC )}, NULL },
{ "HB_ARGV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ARGV )}, NULL },
{ "EXENAME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXENAME )}, NULL },
{ "HB_PROGNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PROGNAME )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CTMISC, "../contrib/hbct/ctmisc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CTMISC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CTMISC )
   #include "hbiniseg.h"
#endif

HB_FUNC( ALLOFREE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,96,1,0,9,20,2,176,2,
		0,95,1,28,5,121,25,3,122,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CENTER )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,4,0,95,2,12,1,31,19,176,5,
		0,12,0,23,176,6,0,12,0,92,2,65,49,80,
		2,176,7,0,95,1,12,1,31,7,106,1,0,80,
		1,176,8,0,95,3,12,1,28,11,95,3,80,4,
		100,80,3,25,14,176,8,0,95,4,12,1,31,5,
		9,80,4,176,9,0,176,10,0,95,1,12,1,95,
		2,95,3,12,3,80,5,95,4,28,6,95,5,25,
		9,176,10,0,95,5,12,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CSETCURS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,8,0,95,1,12,1,31,11,176,12,
		0,12,0,121,69,110,7,176,12,0,95,1,28,5,
		122,25,3,121,12,1,121,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CSETKEY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,14,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CSETCENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,16,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( LTOC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,28,8,106,2,84,0,25,6,106,
		2,70,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DOSPARAM )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,106,1,0,80,1,176,19,0,12,0,80,
		2,122,165,80,3,25,32,96,1,0,95,3,122,8,
		28,7,106,1,0,25,6,106,2,32,0,176,20,0,
		95,3,12,1,72,135,175,3,0,95,2,15,28,223,
		95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( EXENAME )
{
	static const HB_BYTE pcode[] =
	{
		176,22,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

