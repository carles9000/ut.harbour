@echo off
@set oldpath=%Path%
@set oldinclude=%INCLUDE%
set HB_COMPILER=msvc64
@SET PATH=c:\harbour\win64\bin;c:\windows
@SET HB_PATH=c:\harbour
call "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x86_amd64


c:\harbour\bin\hbmk2 juan.prg
pause

