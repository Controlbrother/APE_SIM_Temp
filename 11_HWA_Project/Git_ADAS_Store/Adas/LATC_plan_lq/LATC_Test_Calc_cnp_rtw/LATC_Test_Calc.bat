:: Copyright (c) by Vector Informatik GmbH. All rights reserved.

@echo off
@echo --------------------------------------------------------------------------------
@echo Starting build for CANape/vSignalyzer algorithm DLL.
@echo --------------------------------------------------------------------------------
@echo on

:: clear all object files from previous algorithm DLL build
if exist /s *.obj (
del /s >NUL *.obj;
)


set "VSCMD_START_DIR=%CD%"
set "VSCMD_START_DIR=%CD%"

call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\VCVARSALL.BAT" amd64

cd .
nmake -f LATC_Test_Calc.mk  XCP_ETHERNET_HOST="localhost" COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=0"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
