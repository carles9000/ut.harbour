/*
 * This sample tests working with dbf files
 * Just change the cPath value to that one you need.
 */
REQUEST DBFCDX
REQUEST LETO  // else done by using letodb.hbc */



Function Main( )

 LOCAL nPort := 22812 // Default 2812
 LOCAL nHotbuf := 100
 LOCAL nTimeOut := 6000
 LOCAL cPath := "bricofac.dyndns.org"
 //LOCAL cPath := "127.0.0.1"


   SET DATE FORMAT "dd/mm/yy"

   cPath := "//" + cPath + Iif( ":" $ cPath, "", ":" + ALLTRIM( STR( nPort ) ) )
   cPath += Iif( Right(cPath,1) == "/", "", "/" )


   IF !EMPTY( cPath )
      IF leto_Connect( cPath, /*user*/, /*pass*/, nTimeOut, nHotbuf ) == -1
         ? "NO SE HA ENCONTRADO SERVIDOR LETO: " + cPath
         Inkey(0)
         QUIT
      ELSE
         ? LETO_GetServerVersion(), " en la direccion: ", Leto_getLocalIP( .T. )

         LETO_DBDRIVER( "DBFCDX", "FPT", 512 )
         //LETO_DBDRIVER( "DBFNTX", "SMT", 512 )
            ? "DRIVER DE LA BASE DE DATOS DBF:", LETO_DBDRIVER()[ 1 ], "MEMOTYPE:", LETO_DBDRIVER()[ 2 ]

         LETO_TOGGLEZIP( 1 )
         ? "COMPRESION DE TRAFICO DE RED  :", Iif( LETO_TOGGLEZIP() > 0, "SI", "NO" )

         // Funcion Propia UDF
          ? Leto_UDF("optimus", Upper("lalalalalal"))
			 ? Leto_UDF("udf_Version")
         Inkey(0)
      ENDIF
   ENDIF


Return Nil

