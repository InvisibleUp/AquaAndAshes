@echo off

REM Merge assembly files into one, run M4 on it
python .\build\mergeasm.py .\src\main.z80 > .\bin\raw.z80
type .\bin\raw.z80 | .\build\m4 > .\bin\src.z80
if %errorlevel% neq 0 call :exit 1

REM Create graphics files
for %%f in (gfx/*.png) do rgbds\rgbgfx -h -o gfx/bin/%%f.bin gfx/%%f
if %errorlevel% neq 0 call :exit 1

REM Run assembler, linker, etc.
rgbds\rgbasm -o.\bin\game.obj .\bin\src.z80
if %errorlevel% neq 0 call :exit 1
rgbds\rgblink -m.\bin\game.map -n.\bin\game.sym -o.\bin\game.gb .\bin\game.obj
if %errorlevel% neq 0 call :exit 1
rgbds\rgbfix -p0 -v .\bin\game.gb
if %errorlevel% neq 0 call :exit 1
call :exit 0

:exit
exit