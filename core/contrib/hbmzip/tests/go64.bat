@echo off
@cls
if exist "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" call "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x86_x64


c:\harbour\bin\win\msvc64\hbmk2 %1.prg hbmk.hbm
IF ERRORLEVEL 1 GOTO COMPILEERROR

%1.exe

GOTO EXIT 

:COMPILEERROR
ECHO * Compiling errors *


:EXIT

pause
