/*
*
* FiveWin for Harbour
*
*/

#ifndef FWSQLCMD_CH
#define FWSQLCMD_CH

#xtranslate SQL INSERT INTO <tbl> ( <cols,...> ) VALUES ( <vals,...> ) => ;
"INSERT INTO " + <(tbl)> + " ( " +  FW_QuotedColSQL( #<cols> ) + " ) " +  " VALUES " + FW_ValToSql( { <vals> } )

#xtranslate SQL INSERT INTO <tbl> VALUES ( <vals,...> ) => ;
"INSERT INTO " + <(tbl)> + " VALUES " + FW_ValToSql( { <vals> } )

#xtranslate SQL INSERT INTO <tbl> ( <cols,...> ) ARRAY <a> => ;
"INSERT INTO " + <(tbl)> + " ( " +  FW_QuotedColSQL( #<cols> ) + " ) " + " VALUES " + ;
 StrTran( StrTran( FW_ValToSql( AClone( <a> ) ), '( (', '(' ), ') )', ')' )

#xtranslate SQL INSERT INTO <tbl> ARRAY <a> => ;
"INSERT INTO " + <(tbl)> + " VALUES " + ;
 StrTran( StrTran( FW_ValToSql( AClone( <a> ) ), '( (', '(' ), ') )', ')' )

#xtranslate SQL UPDATE <tbl> SET [ <col1> = <val1> [,<colN> = <valN> ] ] [ WHERE <*cwhere*> ]  => ;
   "UPDATE " + <(tbl)> + " SET " + ;
   FW_ArrayAsList( \{  FW_QuotedColSQL( <"col1"> ) + " = " +  FW_ValToSQL( <val1> ) ;
   [,  FW_QuotedColSQL( <"colN"> ) + " = " + FW_ValToSQL( <valN> )  ] \} ) [ + " WHERE " + CharRepl( '"', <"cwhere">, "'", .t. ) ]

#xtranslate SQL ALTER TABLE <tbl> <cop:ADD,MODIFY,ALTER> [COLUMN] <acol> => FW_AdoAddModiColSQL( <(tbl)>, <acol>, <"cop"> )

#xcommand ADOCONNECT <ocn> [TO] <cdbms> [<srv:SERVER,HOST> <cServer>] ;
            [ <cat:CATALOG,DATABASE> <catalog> ] [ USER <usr> ] [ PASSWORD <pwd> ];
          => ;
          <ocn> := FW_OpenAdoConnection( \{ Upper( <(cdbms)> ), <(cServer)>, ;
          <(catalog)>, <(usr)>, <(pwd)> \} )


#endif

