#ifndef _RICHEDIT5_CH
#define _RICHEDIT5_CH

#ifndef SF_RTF
#define SF_RTF                   2
#endif
#ifndef SFF_SELECTION
#define SFF_SELECTION            32768
#endif

#ifndef EM_GETSEL
#define EM_GETSEL                176
#endif
#ifndef EM_SCROLL
#define EM_SCROLL                181
#endif
#ifndef EM_GETMODIFY
#define EM_GETMODIFY             184
#endif
#ifndef EM_SETMODIFY
#define EM_SETMODIFY             185
#endif
#ifndef EM_GETLINECOUNT
#define EM_GETLINECOUNT          186
#endif
#ifndef EM_LINEINDEX
#define EM_LINEINDEX             187
#endif
#ifndef EM_CANUNDO
#define EM_CANUNDO               198
#endif
#ifndef EM_REPLACESEL
#define EM_REPLACESEL            194
#endif
#ifndef EM_UNDO
#define EM_UNDO                  199
#endif
#ifndef EM_POSFROMCHAR
#define EM_POSFROMCHAR           ( WM_USER + 38 )
#endif
#ifndef EM_SCROLLCARET
#define EM_SCROLLCARET           ( WM_USER + 49 )
#endif
#ifndef EM_CANPASTE
#define EM_CANPASTE              ( WM_USER + 50 )
#endif
#ifndef EM_EXLIMITTEXT
#define EM_EXLIMITTEXT           ( WM_USER + 53 )
#endif
#ifndef EM_EXLINEFROMCHAR
#define EM_EXLINEFROMCHAR        ( WM_USER + 54 )
#endif
#ifndef EM_GETSELTEXT
#define EM_GETSELTEXT            ( WM_USER + 62 )
#endif
#ifndef EM_SETBKGNDCOLOR
#define EM_SETBKGNDCOLOR         ( WM_USER + 67 )
#endif
#ifndef EM_SETOPTIONS
#define EM_SETOPTIONS            ( WM_USER + 77 )
#endif

#ifndef _RICHEDIT_CH
#define CFM_BOLD                 1
#define CFM_ITALIC               2
#define CFM_UNDERLINE            4
#define CFM_STRIKEOUT            8

#define CFE_BOLD                 1
#define CFE_ITALIC               2
#define CFE_UNDERLINE            4
#define CFE_STRIKEOUT            8

#define PFA_LEFT                 1
#define PFA_RIGHT                2
#define PFA_CENTER               3
#define PFA_JUSTIFY              4

#define SF_TEXT                  1

#define EM_SETUNDOLIMIT          ( WM_USER + 82 )
#define EM_REDO                  ( WM_USER + 84 )
#define EM_CANREDO               ( WM_USER + 85 )
#define EM_GETAUTOURLDETECT      ( WM_USER + 91 )

#define EM_SETTYPOGRAPHYOPTIONS  ( WM_USER + 202 )
#define EM_GETTYPOGRAPHYOPTIONS  ( WM_USER + 203 )

#define EN_LINK                  1803

#define ES_DISABLENOSCROLL       8192

#define ECO_READONLY             2048

#define ECOOP_OR                 2
#define ECOOP_XOR                4

#define TO_ADVANCEDTYPOGRAPHY    1
#endif

#xcommand REDEFINE RICHEDIT5 [ <oRTF> VAR ] <uVar> ;
             [ ID <nId> ] ;
             [ <dlg: OF, WINDOW, DIALOG> <oDlg> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ FONT <oFont> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <readonly: READONLY, NO MODIFY> ] ;
             [ <lHighlight: HIGHLIGHT> ] ;
             [ <file: FILE, FILENAME> <cFileName> ] ;
             [ RTFSIZE <nRTFSize> ] ;
             [ <lNoURL: NO URL> ] ;
             [ WHEN <uWhen> ] ;
             [ VALID <uValid> ] ;
             [ ON CHANGE <uChange> ] ;
             [ MARGINLEFT <nLeftMargin> ] ;
             [ <lBar: BARBUTTON> ] ;
       => ;
          [ <oRTF> := ] TRichEdit5():ReDefine( <nId>, bSETGET(<uVar>), ;
                        <oDlg>, <nHelpId>, <oFont>, <cMsg>, <.readonly.>, ;
                        <.lHighlight.>, <cFileName>, <nRTFSize>, ;
                        <.lNoURL.>, <{uWhen}>, <{uValid}>, ;
                        [\{|nKey, nFlags, Self| <uChange>\}], <nLeftMargin>, , <.lBar.> )

#command @ <nTop>, <nLeft> RICHEDIT5 [ <oRTF> VAR ] <uVar> ;
             [ <dlg: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ FONT <oFont> ] ;
             [ <pixel: PIXEL> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <lHScroll: HSCROLL> ] ;
             [ <readonly: READONLY, NO MODIFY> ] ;
             [ WHEN <uWhen> ] ;
             [ VALID <uValid> ] ;
             [ ON CHANGE <uChange> ] ;
             [ <lDesign: DESIGN> ] ;
             [ <lHighlight: HIGHLIGHT> ] ;
             [ <file: FILE, FILENAME> <cFileName> ] ;
             [ RTFSIZE <nRTFSize> ] ;
             [ <lNoURL: NO URL> ] ;
             [ <lNoScroll: NO SCROLL> ] ;
             [ <lNoBorder: NOBORDER, NO BORDER> ] ;
             [ MARGINLEFT <nLeftMargin> ] ;
             [ <lBar: BARBUTTON> ] ;
       => ;
          [ <oRTF> := ] TRichEdit5():New( <nTop>, <nLeft>, bSETGET(<uVar>), ;
                        [<oWnd>], <nWidth>, <nHeight>, <oFont>, <.pixel.>, ;
                        <cMsg>, <.lHScroll.>, <.readonly.>, <{uWhen}>, ;
                        <{uValid}>, [\{|nKey, nFlags, Self| <uChange>\}], ;
                        <.lDesign.>, <.lHighlight.>, <cFileName>, <nRTFSize>, ;
                        <.lNoURL.>, <.lNoScroll.>, [<.lNoBorder.>], <nLeftMargin>, , <.lBar.> )

#endif
