#ifndef _DIALOG_CH
#define _DIALOG_CH

//----------------------------------------------------------------------------//
// DialogBoxes 3D look

#ifdef __CLIPPER__
   #xcommand SET <look_3d: _3DLOOK, 3DLOOK, LOOK3D, LOOK 3D, 3D LOOK> ;
      <on:ON,OFF,&> => Set3DLook( Upper(<(on)>) == "ON" )
#else
   #xcommand SET <look_3d: _3DLOOK, 3DLOOK, LOOK3D, LOOK 3D, 3D LOOK> ;
      <on:ON,OFF,&> =>
#endif

//----------------------------------------------------------------------------//
// Resources

#xcommand SET RESOURCES TO <cName1> [,<cName2>] ;
       => ;
          [ SetResources( <cName2> ); ] SetResources( <cName1> )

#xcommand SET RESOURCES TO => FreeResources()

//----------------------------------------------------------------------------//

#xcommand SET HELPFILE TO <cFile>    => SetHelpFile( <cFile> )
#xcommand SET HELP TOPIC TO <cTopic> => HelpSetTopic( <cTopic> )

//----------------------------------------------------------------------------//
// Loading strings/or other Types from Resources

#xcommand REDEFINE <uVar> ;
             [ AS <type: CHARACTER, NUMERIC, LOGICAL, DATE> ] ;
             [ <resource: RESOURCE, RESNAME, NAME> <nIdRes> ] ;
       => ;
          <uVar> := LoadValue( <nIdRes>, [Upper(<(type)>)], <uVar> )

//----------------------------------------------------------------------------//

#xcommand DEFINE DIALOG <oDlg> ;
             [ <resource: NAME, RESNAME, RESOURCE> <cResName> ] ;
             [ TITLE <cTitle> ] ;
             [ FROM <nTop>, <nLeft> TO <nBottom>, <nRight> ] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <lib: LIBRARY, DLL> <hResources> ] ;
             [ <vbx: VBX> ] ;
             [ STYLE <nStyle> ] ;
             [ <color: COLOR, COLORS> <nClrText> [,<nClrBack> ] ] ;
             [ BRUSH <oBrush> ] ;
             [ <of: WINDOW, DIALOG, OF> <oWnd> ] ;
             [ <pixel: PIXEL> ] ;
             [ ICON <oIco> ] ;
             [ FONT <oFont> ] ;
             [ <help: HELP, HELPID> <nHelpId> ] ;
             [ <transparent: TRANSPARENT> ] ;
             [ GRADIENT <aGradColors> ] ;
             [ <lTruePixel: TRUEPIXEL>  ] ;
             [ <lResizable: RESIZABLE>  ] ;
       => ;
          <oDlg> = TDialog():New( <nTop>, <nLeft>, <nBottom>, <nRight>,;
                 <cTitle>, <cResName>, <hResources>, <.vbx.>, <nStyle>,;
                 <nClrText>, <nClrBack>, <oBrush>, <oWnd>, <.pixel.>,;
                 <oIco>, <oFont>, <nHelpId>, <nWidth>, <nHeight>, <.transparent.>,;
                 <aGradColors>, [<(oDlg)>], nil, [<.lTruePixel.>], [<.lResizable.>] )

#xcommand ACTIVATE DIALOG <oDlg> ;
             [ <center: CENTER, CENTERED> [ <inwnd: IN PARENT> ] ] ;
             [ <NonModal: NOWAIT, NOMODAL> ] ;
             [ WHEN <uWhen> ] ;
             [ VALID <uValid> ] ;
             [ ON [ LEFT ] CLICK <uClick> ] ;
             [ ON INIT <uInit> ] ;
             [ ON MOVE <uMoved> ] ;
             [ ON PAINT <uPaint> ] ;
             [ ON RIGHT CLICK <uRClicked> ] ;
	          [ <Resize16: RESIZE16> ] ;
	          [ <mdi: AS MDICHILD> [ SETUP <usetup> ] ] ;
        => ;
          <oDlg>:Activate( <oDlg>:bLClicked [ := {|nRow,nCol,nFlags,Self|<uClick>}], ;
                           <oDlg>:bMoved    [ := <{uMoved}> ], ;
                           <oDlg>:bPainted  [ := {|hDC,cPS,Self|<uPaint>}],;
                           <.center.>, [{|Self|<uValid>}],;
                           [ ! <.NonModal.> ], [{|Self|<uInit>}],;
                           <oDlg>:bRClicked [ := {|nRow,nCol,nFlags,Self|<uRClicked>}],;
                           [{|Self|<uWhen>}], [<.Resize16.>], [<.inwnd.>], ;
                           [<.mdi.>], [@<oDlg>], [{|oWnd|<usetup>}] )



//----------------------------------------------------------------------------//

#endif
