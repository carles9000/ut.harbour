// FWER.CH
//---------------------------------------
// EasyReport - The Visual Report Designer
// Header File
// Adopted by FWH
//----------------------------------------------------------------------------//

#xtranslate VRD() => FW_EReport()
#xtranslate VRD_PrReport( [<params,...>] ) => FWER_PrReport( <params> )
#xtranslate VRDITEM() => FWER_Item()
#xtranslate VRDBARCODE() => FWER_BarCode()

//------------------------------------------------------------------------------
#xcommand EASYREPORT <oVRD>                      ;
                     NAME <cRptFile>             ;
                     [ PREVIEW <lPreview>      ] ;
                     [ TO <cPrinter>           ] ;
                     [ OF <oWnd>               ] ;
                     [ <lModal: MODAL>         ] ;
                     [ <lPrintIDs: PRINTIDS>   ] ;
                     [ <lNoPrint: NOPRINT>     ] ;
                     [ <lNoExpr: NOEXPR>       ] ;
                     [ CHECK <lCheck>          ] ;
                     [ AREAPATH <cAreaPath>    ] ;
                     [ PRINTDIALOG <lPrDialog> ] ;
                     [ COPIES <nCopies>        ] ;
                     [ PRINTOBJECT <oPrn>      ] ;
                     [ PAPERSIZE <aSize>       ] ;
                     [ FILE <cFile>            ] ;
   => ;
      <oVRD> := FW_EReport():New( <cRptFile>      , ;
                           [ <lPreview>    ], ;
                           [ <cPrinter>    ], ;
                           [ <oWnd>        ], ;
                           [ <.lModal.>    ], ;
                           [ <.lPrintIDs.> ], ;
                           [ <.lNoPrint.>  ], ;
                           [ <.lNoExpr.>   ], ;
                           [ <cAreaPath>   ], ;
                           [ <lPrDialog>   ], ;
                           [ <nCopies>     ], ;
                           [ <lCheck>      ], ;
                           [ <oPrn>        ], ;
                           [ <aSize>       ], ;
                           nil, nil, nil, nil, ;
                           [ <cFile>       ] )

//------------------------------------------------------------------------------
#xcommand ER QUICK <oVRD>                       ;
                   NAME <cRptFile>              ;
                   [ PREVIEW <lPreview>       ] ;
                   [ TO <cPrinter>            ] ;
                   [ OF <oWnd>                ] ;
                   [ <lModal: MODAL>          ] ;
                   [ <lPrintIDs: PRINTIDS>    ] ;
                   [ <lNoPrint: NOPRINT>      ] ;
                   [ <lNoExpr: NOEXPR>        ] ;
                   [ CHECK <lCheck>           ] ;
                   [ AREAPATH <cAreaPath>     ] ;
                   [ PRINTDIALOG <lPrDialog>  ] ;
                   [ COPIES <nCopies>         ] ;
                   [ ACTION <uAction>         ] ;
   => ;
         FWER_PrReport( <cRptFile>         , ;
                     [ <lPreview>        ], ;
                     [ <cPrinter>        ], ;
                     [ <oWnd>            ], ;
                     [ <.lModal.>        ], ;
                     [ <.lPrintIDs.>     ], ;
                     [ <.lNoPrint.>      ], ;
                     [ <.lNoExpr.>       ], ;
                     [ <cAreaPath>       ], ;
                     [ <lPrDialog>       ], ;
                     [ <nCopies>         ], ;
                     [ <lCheck>          ], ;
                     [ {|oVRD|<uAction>} ] )

//------------------------------------------------------------------------------
#xcommand PRINTAREA <nArea>                     ;
                    OF <oVRD>                   ;
                    [ <lOnlyInit: ONLYINIT>   ] ;
                    [ ITEMIDS <aIDs>          ] ;
                    [ ITEMVALUES <aStrings>   ] ;
                    [ <lPageBreak: PAGEBREAK> ] ;
   => ;
      <oVRD>:AreaStart( <nArea>           , ;
                        [ !<.lOnlyInit.> ], ;
                        [ <aIDs>         ], ;
                        [ <aStrings>     ], ;
                        [ <.lPageBreak.> ] )

//------------------------------------------------------------------------------
#xcommand PRINTITEM <nItemID>                ;
                    AREA <nArea>             ;
                    [ VALUE <cTextORImage> ] ;
                    OF <oVRD>                ;
                    [ ENTRY <nEntry>       ] ;
   => ;
      <oVRD>:PrintItem( <nArea>            , ;
                        <nItemID>          , ;
                        [ <cTextORImage> ] ,,, ;
                        [ <nEntry>       ] )

//------------------------------------------------------------------------------
#xcommand PRITEMLIST AREA <nArea>          ;
                     OF <oVRD>             ;
                     ITEMIDS <aIDs>        ;
                     ITEMVALUES <aStrings> ;
   => ;
      <oVRD>:PrintItemList( <nArea>    , ;
                            <aIDs>     , ;
                            <aStrings> )

//------------------------------------------------------------------------------
#xcommand PRINTREST AREA <nArea> OF <oVRD> => <oVRD>:PrintRest( <nArea> )

//------------------------------------------------------------------------------
#xcommand PAGEBREAK <oVRD> => <oVRD>:PageBreak()

//------------------------------------------------------------------------------
#xcommand END EASYREPORT <oVRD> => <oVRD>:End()

//------------------------------------------------------------------------------
#xcommand ENDEASYREPORT <oVRD> => <oVRD>:End()
