/*
 * Harbour 3.2.0dev (r2104281802)
 * Microsoft Visual C 19.27.29112 (64-bit)
 * Generated C source from "hbhttpd.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( UADDHEADER );
HB_FUNC_EXTERN( UGETHEADER );
HB_FUNC_EXTERN( UGETWIDGETBYID );
HB_FUNC_EXTERN( UHTMLENCODE );
HB_FUNC_EXTERN( UHTTPD );
HB_FUNC_EXTERN( UHTTPDLOG );
HB_FUNC_EXTERN( UHTTPDNEW );
HB_FUNC_EXTERN( ULINK );
HB_FUNC_EXTERN( UOSFILENAME );
HB_FUNC_EXTERN( UPARSE );
HB_FUNC_EXTERN( UPROCFILES );
HB_FUNC_EXTERN( UPROCINFO );
HB_FUNC_EXTERN( UPROCWIDGETS );
HB_FUNC_EXTERN( UREDIRECT );
HB_FUNC_EXTERN( USESSIONDESTROY );
HB_FUNC_EXTERN( USESSIONSTART );
HB_FUNC_EXTERN( USESSIONSTOP );
HB_FUNC_EXTERN( USETSTATUSCODE );
HB_FUNC_EXTERN( UURLCHECKSUM );
HB_FUNC_EXTERN( UURLDECODE );
HB_FUNC_EXTERN( UURLENCODE );
HB_FUNC_EXTERN( UURLVALIDATE );
HB_FUNC_EXTERN( UWBROWSE );
HB_FUNC_EXTERN( UWBROWSENEW );
HB_FUNC_EXTERN( UWDEFAULTHANDLER );
HB_FUNC_EXTERN( UWFORM );
HB_FUNC_EXTERN( UWFORMNEW );
HB_FUNC_EXTERN( UWHTML );
HB_FUNC_EXTERN( UWHTMLNEW );
HB_FUNC_EXTERN( UWINPUT );
HB_FUNC_EXTERN( UWINPUTNEW );
HB_FUNC_EXTERN( UWLABEL );
HB_FUNC_EXTERN( UWLABELNEW );
HB_FUNC_EXTERN( UWLAYOUTGRID );
HB_FUNC_EXTERN( UWLAYOUTGRIDNEW );
HB_FUNC_EXTERN( UWMAIN );
HB_FUNC_EXTERN( UWMAINNEW );
HB_FUNC_EXTERN( UWMENU );
HB_FUNC_EXTERN( UWMENUNEW );
HB_FUNC_EXTERN( UWOPTION );
HB_FUNC_EXTERN( UWOPTIONNEW );
HB_FUNC_EXTERN( UWPASSWORD );
HB_FUNC_EXTERN( UWPASSWORDNEW );
HB_FUNC_EXTERN( UWRITE );
HB_FUNC_EXTERN( UWSEPARATOR );
HB_FUNC_EXTERN( UWSEPARATORNEW );
HB_FUNC_EXTERN( UWSUBMIT );
HB_FUNC_EXTERN( UWSUBMITNEW );
HB_FUNC( __HBEXTERN__HBHTTPD__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBHTTPD )
{ "UADDHEADER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UADDHEADER )}, NULL },
{ "UGETHEADER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UGETHEADER )}, NULL },
{ "UGETWIDGETBYID", {HB_FS_PUBLIC}, {HB_FUNCNAME( UGETWIDGETBYID )}, NULL },
{ "UHTMLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UHTMLENCODE )}, NULL },
{ "UHTTPD", {HB_FS_PUBLIC}, {HB_FUNCNAME( UHTTPD )}, NULL },
{ "UHTTPDLOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( UHTTPDLOG )}, NULL },
{ "UHTTPDNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UHTTPDNEW )}, NULL },
{ "ULINK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ULINK )}, NULL },
{ "UOSFILENAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( UOSFILENAME )}, NULL },
{ "UPARSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPARSE )}, NULL },
{ "UPROCFILES", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPROCFILES )}, NULL },
{ "UPROCINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPROCINFO )}, NULL },
{ "UPROCWIDGETS", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPROCWIDGETS )}, NULL },
{ "UREDIRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( UREDIRECT )}, NULL },
{ "USESSIONDESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( USESSIONDESTROY )}, NULL },
{ "USESSIONSTART", {HB_FS_PUBLIC}, {HB_FUNCNAME( USESSIONSTART )}, NULL },
{ "USESSIONSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( USESSIONSTOP )}, NULL },
{ "USETSTATUSCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( USETSTATUSCODE )}, NULL },
{ "UURLCHECKSUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( UURLCHECKSUM )}, NULL },
{ "UURLDECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UURLDECODE )}, NULL },
{ "UURLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UURLENCODE )}, NULL },
{ "UURLVALIDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UURLVALIDATE )}, NULL },
{ "UWBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWBROWSE )}, NULL },
{ "UWBROWSENEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWBROWSENEW )}, NULL },
{ "UWDEFAULTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWDEFAULTHANDLER )}, NULL },
{ "UWFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWFORM )}, NULL },
{ "UWFORMNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWFORMNEW )}, NULL },
{ "UWHTML", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWHTML )}, NULL },
{ "UWHTMLNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWHTMLNEW )}, NULL },
{ "UWINPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWINPUT )}, NULL },
{ "UWINPUTNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWINPUTNEW )}, NULL },
{ "UWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWLABEL )}, NULL },
{ "UWLABELNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWLABELNEW )}, NULL },
{ "UWLAYOUTGRID", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWLAYOUTGRID )}, NULL },
{ "UWLAYOUTGRIDNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWLAYOUTGRIDNEW )}, NULL },
{ "UWMAIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWMAIN )}, NULL },
{ "UWMAINNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWMAINNEW )}, NULL },
{ "UWMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWMENU )}, NULL },
{ "UWMENUNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWMENUNEW )}, NULL },
{ "UWOPTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWOPTION )}, NULL },
{ "UWOPTIONNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWOPTIONNEW )}, NULL },
{ "UWPASSWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWPASSWORD )}, NULL },
{ "UWPASSWORDNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWPASSWORDNEW )}, NULL },
{ "UWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWRITE )}, NULL },
{ "UWSEPARATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWSEPARATOR )}, NULL },
{ "UWSEPARATORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWSEPARATORNEW )}, NULL },
{ "UWSUBMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWSUBMIT )}, NULL },
{ "UWSUBMITNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( UWSUBMITNEW )}, NULL },
{ "__HBEXTERN__HBHTTPD__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBHTTPD__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBHTTPD, "hbhttpd.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBHTTPD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBHTTPD )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBHTTPD__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

