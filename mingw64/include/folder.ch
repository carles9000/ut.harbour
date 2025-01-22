#ifndef _FOLDER_CH
#define _FOLDER_CH

#define FLDBMP_LEFT 0
#define FLDBMP_RIGHT 1
#define FLDBMP_CENTER 2

//----------------------------------------------------------------------------//

#xcommand @ <nRow>, <nCol> FOLDER [<oFolder>] ;
             [ <of: OF, WINDOW,DIALOG> <oWnd> ] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <dlg: DIALOG, DIALOGS, PAGE, PAGES><cDlgName1> [,<cDlgNameN>] ] ;
             [ <lPixel: PIXEL> ] ;
             [ <lDesign: DESIGN> ] ;
             [ <color: COLOR,COLORS> <nClrFore> [,<nClrBack>] ] ;
             [ OPTION <nOption> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <lAdjust: ADJUST> ] ;
             [ FONT <oFont> ];
             [ HELPTOPICS <cnHelpids,...> ] ;
       => ;
             [<oFolder> := ] TFolder():New( <nRow>, <nCol>,;
             [\{<cPrompt>\}], \{<cDlgName1>[,<cDlgNameN>]\},;
             <oWnd>, <nOption>, <nClrFore>, <nClrBack>, <.lPixel.>,;
             <.lDesign.>, <nWidth>, <nHeight>,<cMsg>, <.lAdjust.>,;
             <oFont>, [\{<cnHelpids>\}], [<(oFolder)>] )

#xcommand REDEFINE FOLDER [<oFolder>] ;
             [ ID <nId> ] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <dlg: DIALOG, DIALOGS, PAGE, PAGES> <cDlgName1> [,<cDlgNameN>] ] ;
             [ <color: COLOR, COLORS> <nClrFore>[,<nClrBack>] ] ;
             [ OPTION <nOption> ] ;
             [ ON CHANGE <uChange> ] ;
             [ <lAdjust: ADJUST> ] ;
	          [ HELPTOPICS <cnHelpids,...> ] ; //-->> byte-one
        => ;
             [<oFolder> := ] TFolder():ReDefine( <nId>, [\{<cPrompt>\}],;
             \{ <cDlgName1> [,<cDlgNameN>] \}, <oWnd>,;
             <nOption>, <nClrFore>, <nClrBack>,;
             [{|nOption,nOldOption| <uChange>}], <.lAdjust.>,;
             [\{<cnHelpids>\}] )  //-->> byte-one

//----------------------------------------------------------------------------//

#xcommand @ <nRow>, <nCol> TABS [<oTabs>] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd>] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <bmp: BITMAP, BITMAPS, RESOURCE> <cBitMap,...> ] ;
             [ <act: ACTION, EXECUTE, ON CHANGE> <uAction> ] ;
             [ <lPixel: PIXEL> ] ;
             [ <lDesign: DESIGN> ] ;
             [ <color: COLOR, COLORS> <nClrFore> [,<nClrBack>] ] ;
             [ OPTION <nOption> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ MESSAGE <cMsg> ] ;
       => ;
             [<oTabs> := ] TTabs():New( <nRow>, <nCol>,;
             [\{<cPrompt>\}], [{|nOption,nOldOption|<uAction>}], ;
             <oWnd>, <nOption>, <nClrFore>, <nClrBack>, <.lPixel.>,;
             <.lDesign.>, <nWidth>, <nHeight>, <cMsg>, [\{<cBitMap>\}] )

#xcommand REDEFINE TABS [<oTabs>] ;
             [ ID <nId> ] ;
             [ <of: OF,WINDOW, DIALOG> <oWnd> ] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <bmp: BITMAP, BITMAPS, RESOURCE> <cBitMap,...> ] ;
             [ <act: ACTION, EXECUTE> <uAction> ] ;
             [ <color: COLOR, COLORS> <nClrFore> [,<nClrBack>] ] ;
             [ OPTION <nOption> ] ;
        => ;
	     [<oTabs> := ] TTabs():ReDefine( <nId>, [\{<cPrompt>\}],;
             [{|nOption|<uAction>}], <oWnd>, <nOption>, <nClrFore>, <nClrBack>, [\{<cBitMap>\}] )

//----------------------------------------------------------------------------//
//
// FiveWin Dialog TPages Class

#xcommand REDEFINE PAGES <oPag> ;
             [ ID <nId> ] ;
             [ OF <oWnd> ] ;
             [ DIALOGS <DlgName,...> ] ;
             [ OPTION <nOption> ] ;
             [ ON CHANGE <uChange> ] ;
             [ FONT <oFont> ] ;
             [ HELPTOPICS <cnHelpids,...> ] ; //-->> byte-one
       => ;
             <oPag> := TPages():Redefine( <nId>, <oWnd>, [{<DlgName>}], <nOption>,;
             [{|nOption, nOldOption|<uChange>}], <oFont>,;
             [\{<cnHelpids>\}] ) //-->> byte-one

//----------------------------------------------------------------------------
//
// FiveWin TFolderEx Class


#xcommand @ <nRow>, <nCol> FOLDEREX [<oFolder>] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <bm: BITMAPS, IMAGES, BMPS> <cbmps,...> ] ;
             [ <lPixel: PIXEL> ] ;
             [ <lDesign: DESIGN> ] ;
             [ TAB HEIGHT <ntabheight> ];
             [ SEPARATOR <nSep> ];
             [ OPTION <nOption> ] ;
             [ ROUND <nRound> ];
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <lAdjust: ADJUST> ] ;
             [ <lStretch: STRETCH> ] ;
             [ POPUP <upop>];
             [ ALIGN <nAlign,...> ] ;
             [ ACTION <uAction> ];
             [ BRIGHT <nBright> ] ;
             [ ON CHANGE <uChange> ] ;
             [ ON PAINT TAB <uPaint> ];
             [ ON PAINT TEXT <uPaintxt> ];
             [ HELPTOPICS <cnHelpids,...> ] ;
             [ <layout: TOP, LEFT, BOTTOM, RIGHT> ] ;
             [ <lAnimate: ANIMATE> [ SPEED <nSpeed> ] ] ;
             [ FONT <oFont> ] ; //-->> byte-one 2010
             [ <lTransparent: TRANSPARENT> ] ;	           
             [ <dlg: DIALOG, DIALOGS, PAGE, PAGES> <cDlgsName,...> ] ;
             [ <lBorder: NOBORDER > ] ;
             [ COLOR <nClrPane> ] ;
       => ;
             [<oFolder> := ] TFoldereX():New( <nRow>, <nCol>, <nWidth>, <nHeight>,;
             <oWnd>, [\{<cbmps>\}], <.lPixel.>, <.lDesign.>, [\{<cPrompt>\}], ;
             <ntabheight>, [\{<cnHelpids>\}], <nRound>, [{|nOption, nOldOption, Self | <uChange>}],;
             [{|Self,nOption| <uPaint>}], [{|Self,nOption| <uPaintxt>}], ;
             [\{<nAlign>\}], <.lAdjust.>, <nSep>, <nOption>, [{|Self,nOption| <upop>}],;
             <.lStretch.>, [ Upper(<(layout)>) ], [{|Self,nOption| <uAction>}], <nBright>,;
             <.lAnimate.>, [<nSpeed>], <oFont>, <.lTransparent.>, [\{<cDlgsName>\}], ;
             <.lBorder.>, <nClrPane>, [<(oFolder)>] )

#xcommand REDEFINE FOLDEREX [<oFolder>];
             [ ID <nId> ] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <prm: PROMPT, PROMPTS, ITEMS> <cPrompt,...> ] ;
             [ <bm: BITMAPS, IMAGES, BMPS> <cbmps,...> ] ;
             [ <dlg: DIALOG, DIALOGS, PAGE, PAGES> <cDlgsName,...> ] ;
             [ TAB HEIGHT <ntabheight> ];
             [ OPTION <nOption> ] ;
             [ ROUND <nRound> ];
             [ SEPARATOR <nSep> ];
             [ <lAdjust: ADJUST> ] ;
             [ <lStretch: STRETCH> ] ;
             [ POPUP <upop>];
             [ ALIGN <nAlign,...> ] ;
             [ BRIGHT <nBright> ] ;
             [ ACTION <uAction> ];
             [ ON CHANGE <uChange> ] ;
             [ ON PAINT TAB <uPaint> ];
             [ ON PAINT TEXT <uPaintxt> ];
             [ HELPTOPICS <cnHelpids,...> ] ;
             [ <layout: TOP, LEFT, BOTTOM, RIGHT> ] ;
             [ <lAnimate: ANIMATE> [ SPEED <nSpeed> ] ] ;
             [ FONT <oFont> ]; //-->> byte-one 2010
             [ <lTransparent: TRANSPARENT> ] ;	
             [ <lBorder: NOBORDER > ] ;
             [ COLOR <nClrPane> ] ;
        => ;
             [<oFolder> := ] TFoldereX():ReDefine( <nId>, <oWnd>, [\{<cDlgsName>\}],;
             [\{<cbmps>\}], [\{<cPrompt>\}], <ntabheight>, [\{<cnHelpids>\}],;
             <nRound>, [{|nOption,nOldOption,Self| <uChange>}],;
             [{|Self,nOption| <uPaint>}], [{|Self,nOption| <uPaintxt>}], ;
             [\{<nAlign>\}], <.lAdjust.>, <nSep>, <nOption>, ;
             [{|Self,nOption| <upop>}], <.lStretch.>, [ Upper(<(layout)>) ],;
             [{|Self,nOption| <uAction>}], <nBright>, <.lAnimate.>, [<nSpeed>], ;
             <oFont>, <.lTransparent.>, <.lBorder.>, <nClrPane> )
#endif

//----------------------------------------------------------------------------
