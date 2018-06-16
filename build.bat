@echo off
for %%f in (gfx/*.png) do rgbds\rgbgfx -o gfx/bin/%%f.bin gfx/%%f
if %errorlevel% neq 0 call :exit 1
rgbds\rgbasm -ogame.obj .\src\main.z80
if %errorlevel% neq 0 call :exit 1
rgbds\rgblink -mgame.map -ngame.sym -ogame.gb game.obj
if %errorlevel% neq 0 call :exit 1
rgbds\rgbfix -p0 -v game.gb
if %errorlevel% neq 0 call :exit 1
call :exit 0

:exit
exit