@echo off
@set oldpath=%Path%
@set oldinclude=%INCLUDE%
set HB_COMPILER=msvc64
@SET PATH=c:\harbour\win64\bin;c:\windows
@SET HB_PATH=c:\harbour
call "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x86_amd64


c:\harbour\bin\hbmk2 nenadi.prg
c:\harbour\bin\hbmk2 basic.prg
c:\harbour\bin\hbmk2 ron.prg
c:\harbour\bin\hbmk2 test_dbf.prg
c:\harbour\bin\hbmk2 test_dbfe.prg
c:\harbour\bin\hbmk2 test_file.prg
c:\harbour\bin\hbmk2 test_filt.prg
c:\harbour\bin\hbmk2 test_ta.prg
c:\harbour\bin\hbmk2 test_tr.prg
c:\harbour\bin\hbmk2 test_var.prg
c:\harbour\bin\hbmk2 test_mem.prg -D__MEMIO__=1
c:\harbour\bin\hbmk2 letoudf
c:\harbour\bin\hbmk2 bug_info

