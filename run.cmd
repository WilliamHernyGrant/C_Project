@echo off
rem 用法: run.cmd 源码路径.c
rem 例:   run.cmd _practice\src\07_03_number_guessing_game.c
rem 作用: gcc 编译到同级 bin 目录，然后立即运行
setlocal
if "%~1"=="" goto usage
set "SRC=%~f1"
set "NAME=%~n1"
set "BIN=%~dp1..\bin"
if not exist "%BIN%" mkdir "%BIN%"
"C:\mingw64\bin\gcc.exe" -Wall -Wextra -g "%SRC%" -o "%BIN%\%NAME%.exe"
if errorlevel 1 goto fail
echo.
echo ---- run ----
"%BIN%\%NAME%.exe"
echo.
echo ---- done ----
exit /b 0
:usage
echo usage: run.cmd <path\to\source.c>
exit /b 1
:fail
echo.
echo [build failed] check the errors above, fix and rerun.
exit /b 1