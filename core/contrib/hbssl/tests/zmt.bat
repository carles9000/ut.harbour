@echo off

if exist "%ProgramFiles%\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" call "%ProgramFiles%\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64

rem set HB_WITH_OPENSSL=c:\vcpkg\packages\openssl_x64-windows\include\



c:\harbour\bin\hbmk2 %1.prg -comp=msvc64 -mt



pause