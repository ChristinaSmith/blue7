@echo off

rem  Vivado(TM)
rem  launch.bat: a Vivado-generated ExploreAhead Script
rem  Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.


setlocal

set HD_LDIR=%~dp0

rem *** Create Queue Clues
set HD_RUNDIR=%HD_LDIR%\../impl_1_4
if exist "%HD_RUNDIR%" echo. > "%HD_RUNDIR%/.Vivado Implementation.queue.rst"


rem *** Launch Runs (one at a time)
set HD_RUNBAT=%HD_LDIR%\../impl_1_4\runme.bat
if exist "%HD_RUNBAT%" call "%HD_RUNBAT%" %*


