@echo off

rem -------------------------------------------
rem Añadido modulo crt.c de Diego F. (03/02/24)
rem -------------------------------------------

if exist "%ProgramFiles%\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" call "%ProgramFiles%\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64

set HB_WITH_OPENSSL=c:\vcpkg\packages\openssl_x64-windows\include\
set HB_OPENSSL_STATIC=yes      
set HB_STATIC_OPENSSL=yes 

c:\harbour\bin\hbmk2 hbssl.hbp -comp=msvc64
c:\harbour\bin\hbmk2 hbssls.hbp -comp=msvc64


pause