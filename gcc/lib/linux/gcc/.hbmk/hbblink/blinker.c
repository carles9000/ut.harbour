/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbblink/blinker.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_BLIVERNUM );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC( HB_BLIDEMDTE );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( DTOS );
HB_FUNC( HB_BLIDEMMIN );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC( BLIDBGHAN );
HB_FUNC( BLIDEMDTE );
HB_FUNC( BLIDEMDTEBAS );
HB_FUNC( BLIDEMMIN );
HB_FUNC( BLIDISFRG );
HB_FUNC( BLIERRNUM );
HB_FUNC( BLIERRPRM );
HB_FUNC( BLIERRPRMBAS );
HB_FUNC( BLILIBLIB );
HB_FUNC_EXTERN( HB_HRBLOAD );
HB_FUNC( BLIFUNHAN );
HB_FUNC_EXTERN( HB_HRBGETFUNSYM );
HB_FUNC( BLIFUNCAL );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( HB_HRBDO );
HB_FUNC( BLILIBFRE );
HB_FUNC_EXTERN( HB_HRBUNLOAD );
HB_FUNC( BLILIBOVR );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC( BLILSTFRG );
HB_FUNC( BLIMEMAVL );
HB_FUNC_EXTERN( MEMORY );
HB_FUNC( BLIMEMSIZ );
HB_FUNC( BLIMEMBLK );
HB_FUNC( BLIMEMPAK );
HB_FUNC( BLIMEMUSE );
HB_FUNC( BLIOVLCLR );
HB_FUNC( BLIOVLOPS );
HB_FUNC( BLIOVLRES );
HB_FUNC( BLIOVLSIZ );
HB_FUNC( BLIOVLSUS );
HB_FUNC( BLIPTRDEC );
HB_FUNC( BLIPTRINC );
HB_FUNC( BLISERNUM );
HB_FUNC( BLISERNUMBAS );
HB_FUNC( BLISTRFRG );
HB_FUNC( BLIVERNUM );
HB_FUNC( BLICPUREL );
HB_FUNC_EXTERN( HB_RELEASECPU );
HB_FUNC( BLIMGRSTS );
HB_FUNC( SWPADDENV );
HB_FUNC( SWPADDSTR );
HB_FUNC( SWPADDSTRBAS );
HB_FUNC( SWPCURDIR );
HB_FUNC( SWPDISMSG );
HB_FUNC( SWPEMS320 );
HB_FUNC( SWPERRLEV );
HB_FUNC( SWPERRMAJ );
HB_FUNC( SWPERRMIN );
HB_FUNC( SWPFREEMS );
HB_FUNC( SWPUSEEMS );
HB_FUNC( SWPFREXMS );
HB_FUNC( SWPUSEXMS );
HB_FUNC( SWPUSEUMB );
HB_FUNC( SWPGETKEY );
HB_FUNC( SWPGETPID );
HB_FUNC( SWPVIDMDE );
HB_FUNC( SWPGETSTR );
HB_FUNC( SWPKEYBRD );
HB_FUNC( SWPKEYBRDBAS );
HB_FUNC( SWPKEYCLR );
HB_FUNC( SWPNOBOOT );
HB_FUNC( SWPRUNCMD );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( GETENV );
HB_FUNC_EXTERN( HB_RUN );
HB_FUNC( SWPSETENV );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( HB_SETENV );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC( SWPSETPID );
HB_FUNC( SWPSETPIDBAS );
HB_FUNC( SWPSETSTR );
HB_FUNC( SWPSETSTRBAS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BLINKER )
{ "HB_BLIVERNUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_BLIVERNUM )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_BLIDEMDTE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_BLIDEMDTE )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "HB_BLIDEMMIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_BLIDEMMIN )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "BLIDBGHAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIDBGHAN )}, NULL },
{ "BLIDEMDTE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIDEMDTE )}, NULL },
{ "BLIDEMDTEBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIDEMDTEBAS )}, NULL },
{ "BLIDEMMIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIDEMMIN )}, NULL },
{ "BLIDISFRG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIDISFRG )}, NULL },
{ "BLIERRNUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIERRNUM )}, NULL },
{ "BLIERRPRM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIERRPRM )}, NULL },
{ "BLIERRPRMBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIERRPRMBAS )}, NULL },
{ "BLILIBLIB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLILIBLIB )}, NULL },
{ "HB_HRBLOAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBLOAD )}, NULL },
{ "BLIFUNHAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIFUNHAN )}, NULL },
{ "HB_HRBGETFUNSYM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBGETFUNSYM )}, NULL },
{ "BLIFUNCAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIFUNCAL )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "HB_HRBDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBDO )}, NULL },
{ "BLILIBFRE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLILIBFRE )}, NULL },
{ "HB_HRBUNLOAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBUNLOAD )}, NULL },
{ "BLILIBOVR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLILIBOVR )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "BLILSTFRG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLILSTFRG )}, NULL },
{ "BLIMEMAVL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMEMAVL )}, NULL },
{ "MEMORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMORY )}, NULL },
{ "BLIMEMSIZ", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMEMSIZ )}, NULL },
{ "BLIMEMBLK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMEMBLK )}, NULL },
{ "BLIMEMPAK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMEMPAK )}, NULL },
{ "BLIMEMUSE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMEMUSE )}, NULL },
{ "BLIOVLCLR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIOVLCLR )}, NULL },
{ "BLIOVLOPS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIOVLOPS )}, NULL },
{ "BLIOVLRES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIOVLRES )}, NULL },
{ "BLIOVLSIZ", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIOVLSIZ )}, NULL },
{ "BLIOVLSUS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIOVLSUS )}, NULL },
{ "BLIPTRDEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIPTRDEC )}, NULL },
{ "BLIPTRINC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIPTRINC )}, NULL },
{ "BLISERNUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLISERNUM )}, NULL },
{ "BLISERNUMBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLISERNUMBAS )}, NULL },
{ "BLISTRFRG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLISTRFRG )}, NULL },
{ "BLIVERNUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIVERNUM )}, NULL },
{ "BLICPUREL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLICPUREL )}, NULL },
{ "HB_RELEASECPU", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RELEASECPU )}, NULL },
{ "BLIMGRSTS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLIMGRSTS )}, NULL },
{ "SWPADDENV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPADDENV )}, NULL },
{ "SWPADDSTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPADDSTR )}, NULL },
{ "SWPADDSTRBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPADDSTRBAS )}, NULL },
{ "SWPCURDIR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPCURDIR )}, NULL },
{ "SWPDISMSG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPDISMSG )}, NULL },
{ "SWPEMS320", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPEMS320 )}, NULL },
{ "SWPERRLEV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPERRLEV )}, NULL },
{ "SWPERRMAJ", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPERRMAJ )}, NULL },
{ "SWPERRMIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPERRMIN )}, NULL },
{ "SWPFREEMS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPFREEMS )}, NULL },
{ "SWPUSEEMS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPUSEEMS )}, NULL },
{ "SWPFREXMS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPFREXMS )}, NULL },
{ "SWPUSEXMS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPUSEXMS )}, NULL },
{ "SWPUSEUMB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPUSEUMB )}, NULL },
{ "SWPGETKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPGETKEY )}, NULL },
{ "SWPGETPID", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPGETPID )}, NULL },
{ "SWPVIDMDE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPVIDMDE )}, NULL },
{ "SWPGETSTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPGETSTR )}, NULL },
{ "SWPKEYBRD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPKEYBRD )}, NULL },
{ "SWPKEYBRDBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPKEYBRDBAS )}, NULL },
{ "SWPKEYCLR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPKEYCLR )}, NULL },
{ "SWPNOBOOT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPNOBOOT )}, NULL },
{ "SWPRUNCMD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPRUNCMD )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "GETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETENV )}, NULL },
{ "HB_RUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RUN )}, NULL },
{ "SWPSETENV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPSETENV )}, NULL },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "HB_SETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SETENV )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SWPSETPID", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPSETPID )}, NULL },
{ "SWPSETPIDBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPSETPIDBAS )}, NULL },
{ "SWPSETSTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPSETSTR )}, NULL },
{ "SWPSETSTRBAS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SWPSETSTRBAS )}, NULL },
{ "(_INITSTATICS00011)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BLINKER, "hbblink/blinker.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BLINKER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BLINKER )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_BLIVERNUM )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,86,0,176,1,0,95,1,12,1,28,
		7,95,1,82,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_BLIDEMDTE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,86,0,176,3,0,95,1,12,1,28,
		12,176,4,0,95,1,12,1,82,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_BLIDEMMIN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,86,0,176,6,0,95,1,12,1,28,
		7,95,1,82,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIDBGHAN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,86,0,103,10,0,80,2,176,6,0,
		95,1,12,1,28,7,95,1,82,10,0,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIDEMDTE )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIDEMDTEBAS )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIDEMMIN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,86,0,103,3,0,80,2,176,6,0,
		95,1,12,1,28,7,95,1,82,3,0,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIDISFRG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIERRNUM )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,4,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIERRPRM )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,5,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIERRPRMBAS )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,5,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLILIBLIB )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,86,0,103,6,0,28,13,176,16,0,
		92,2,95,1,12,2,25,9,176,16,0,95,1,12,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIFUNHAN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,18,0,95,1,95,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIFUNCAL )
{
	static const HB_BYTE pcode[] =
	{
		149,2,0,176,20,0,12,0,80,1,176,21,0,95,
		1,12,1,121,15,28,39,176,22,0,95,1,12,1,
		80,2,176,23,0,95,1,176,21,0,95,1,12,1,
		17,20,2,176,24,0,95,2,122,95,1,180,124,2,
		0,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLILIBFRE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,26,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLILIBOVR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,86,0,176,28,0,95,1,12,1,28,
		7,95,1,82,6,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLILSTFRG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMEMAVL )
{
	static const HB_BYTE pcode[] =
	{
		176,31,0,121,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMEMSIZ )
{
	static const HB_BYTE pcode[] =
	{
		176,31,0,121,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMEMBLK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,31,0,121,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMEMPAK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,86,0,103,3,0,80,2,176,6,0,
		95,1,12,1,28,7,95,1,82,11,0,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMEMUSE )
{
	static const HB_BYTE pcode[] =
	{
		176,31,0,93,233,3,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIOVLCLR )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIOVLOPS )
{
	static const HB_BYTE pcode[] =
	{
		176,31,0,121,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIOVLRES )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIOVLSIZ )
{
	static const HB_BYTE pcode[] =
	{
		121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIOVLSUS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIPTRDEC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,1,95,2,49,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIPTRINC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,1,95,2,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLISERNUM )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLISERNUMBAS )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLISTRFRG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIVERNUM )
{
	static const HB_BYTE pcode[] =
	{
		93,188,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLICPUREL )
{
	static const HB_BYTE pcode[] =
	{
		176,48,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLIMGRSTS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,25,27,121,110,7,121,110,7,122,110,7,
		176,31,0,121,20,1,7,176,31,0,121,20,1,7,
		25,70,95,1,133,9,0,97,1,0,0,0,25,221,
		97,4,0,0,0,25,217,97,5,0,0,0,25,213,
		97,7,0,0,0,25,209,97,8,0,0,0,25,209,
		97,2,0,0,0,25,209,97,3,0,0,0,25,202,
		97,6,0,0,0,25,195,97,9,0,0,0,25,188,
		121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPADDENV )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,97,0,128,0,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPADDSTR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPADDSTRBAS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPCURDIR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPDISMSG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPEMS320 )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPERRLEV )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,7,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPERRMAJ )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,8,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPERRMIN )
{
	static const HB_BYTE pcode[] =
	{
		116,86,0,103,9,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPFREEMS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPUSEEMS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPFREXMS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPUSEXMS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPUSEUMB )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPGETKEY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPGETPID )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPVIDMDE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPGETSTR )
{
	static const HB_BYTE pcode[] =
	{
		106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPKEYBRD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPKEYBRDBAS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPKEYCLR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPNOBOOT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPRUNCMD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,116,86,0,176,1,0,95,1,12,1,28,
		11,176,73,0,95,1,12,1,28,17,176,74,0,106,
		6,83,72,69,76,76,0,12,1,80,1,176,75,0,
		95,1,12,1,165,82,7,0,92,255,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPSETENV )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,77,0,95,1,106,2,255,0,12,2,
		96,2,0,129,1,1,28,48,176,78,0,106,2,61,
		0,95,2,12,2,165,80,3,121,15,28,27,176,79,
		0,176,80,0,95,2,95,3,17,12,2,176,81,0,
		95,2,95,3,23,12,2,20,2,130,31,212,132,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPSETPID )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPSETPIDBAS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPSETSTR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SWPSETSTRBAS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,86,0,11,0,116,86,0,106,1,0,82,1,0,
		106,1,0,82,2,0,121,82,3,0,121,82,4,0,
		106,1,0,82,5,0,9,82,6,0,121,82,7,0,
		121,82,8,0,121,82,9,0,122,82,10,0,121,82,
		11,0,179,3,0,7,0,8,0,9,0,7
	};

	hb_vmExecute( pcode, symbols );
}

