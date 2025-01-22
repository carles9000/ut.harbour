set HB_BUILD_MODE=c
set HB_USER_PRGFLAGS=-l-
set HB_BUILD_CONTRIBS=
set HB_WITH_OPENSSL=C:\OpenSSL-Win64\include
set HB_WITH_CURL=C:\curl\include
set HB_OPENSSL_STATIC=yes      
set HB_STATIC_OPENSSL=yes  
set HB_STATIC_CURL=yes
set HB_BUILD_DYN=no
set HB_BUILD_CONTRIB_DYN=no
set HB_COMPILER=msvc64
win-make.exe
copy lib\win\msvc64\libcrypto-1_1-x64.lib lib\win\msvc64\libcrypto.lib
copy lib\win\msvc64\libssl-1_1-x64.lib lib\win\msvc64\libeay32.lib
copy lib\win\msvc64\libcurl-x64.lib lib\win\msvc64\libcurl.lib

mkdir output
mkdir output\bin
copy  bin\win\msvc64\*.exe output\bin
mkdir output\lib
copy  lib\win\msvc64\*.lib output\lib
mkdir output\include 
copy  include output\include

