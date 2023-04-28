# Copyright 1994-2007 The MathWorks, Inc.
#
# File    : cnp_msdll.tmf
#
# Abstract:
#       Vector CANape Real-Time Workshop template makefile
#
#       Note that this template is automatically customized by the Real-Time
#       Workshop build procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#
#         OPT_OPTS       - Optimization option. See DEFAULT_OPT_OPTS in
#                          vctools.mak for default.
#         OPTS           - User specific options.
#         CPP_OPTS       - C++ compiler options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         specify OPT_OPTS=-Zd
#         modify tmf LDFLAGS to include /DEBUG
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see grt.tlc


#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD             = nmake
HOST                = PC
BUILD                 = yes
SYS_TARGET_FILE       = cnp.tlc
BUILD_SUCCESS         = ^#^#^# Created
COMPILER_TOOL_CHAIN   = vc
# 2019a provides a simplified process for compiling and linking generated code.
# If you specify a template makefile that contains any of those old/unsupported tokens, 
# the build process produces a warning. 
# If you want to suppress the warning, in the template makefile, insert the text # NO_WARN_LEGACY_TOKENS.
NO_WARN_LEGACY_TOKENS = 1

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to were MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of S-functions.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  SOLVER              - Solver source file name
#  NUMST               - Number of sample times
#  TID01EQ             - yes (1) or no (0): Are sampling rates of continuous task
#                        (tid=0) and 1st discrete task equal.
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  MEX_OPT_FILE        - mex option file name
#  VISUAL_VER          - Visual C++ version information
#  GENERATE_MSDEV_FILE      - yes (1) or no (0): should a vcproj file be generated
#  PERFORM_SIMSTEP_AT_START - yes (1) or no (0): should simstep be performed at t(0)

MODEL                = LATC_Test_Calc
MODULES              = rt_matrx.c rt_printf.c LATC_Test_Calc_data.c rtGetInf.c rtGetNaN.c rt_nonfinite.c cnpenvin.c cnpenvout.c
MAKEFILE             = LATC_Test_Calc.mk
MATLAB_ROOT          = D:\Matlab2021b\R2021b
ALT_MATLAB_ROOT      = D:\Matlab2021b\R2021b
MATLAB_BIN           = D:\Matlab2021b\R2021b\bin
ALT_MATLAB_BIN       = D:\Matlab2021b\R2021b\bin
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
SOLVER               = 
NUMST                = 1
TID01EQ              = 0
NCSTATES             = 0
BUILDARGS            =  XCP_ETHERNET_HOST="localhost" COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=0"
MULTITASKING         = 0

MODELREFS            = 
SHARED_SRC           = 
SHARED_SRC_DIR       = 
SHARED_BIN_DIR       = 
SHARED_LIB           = 
TARGET_LANG_EXT      = c
MEX_OPT_FILE         = 
VISUAL_VER           = 16.0
OPTIMIZATION_FLAGS   = 

#--------------------------- Model and reference models -----------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = LATC_Test_Calc_ref.rsp
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE

#------------------------ CANape/vSignalyzer Target ---------------------------
RELEASE_VERSION           = R2021b
GENERATE_MSDEV_FILE       = 0
PERFORM_SIMSTEP_AT_START  = 0
CANAPE_RTTARGET_DLL_VER   = 14.0.2
XCP_TRANSPORT_LAYER       = VectorSimulink
XCP_ETHERNET_PORT         = 5555
COMPILER_OPTIMIZATION     = 0
ALGO_PLATFORM             = 64-bit
OUTPUT_DIR                = ..\..\dll
INTDIR                    = "IntDir"

!ifndef WEC_ALGO_BUILD
# Default: do not build a WEC DLL!
WEC_ALGO_BUILD = 0
!else
# WEC is always 32-bit
ALGO_PLATFORM = 32-bit
# WEC creates *.wec.lib files for referenced models
MODELREF_LINK_LIBS = $(MODELREF_LINK_LIBS:.lib=.wec.lib)
!endif

# ALT_MATLAB macro expansion for handling white-spaces in Matlab installation path.
!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif
!if "$(MATLAB_BIN)" != "$(ALT_MATLAB_BIN)"
MATLAB_BIN = $(ALT_MATLAB_BIN)
!endif

#--------------------------- Tool Specifications ------------------------------
# 64 bit build with suffix "_x64"
!if "$(ALGO_PLATFORM)" == "64-bit"
OUTPUT_NAME = $(MODEL)_x64
CPU = AMD64
!else
OUTPUT_NAME = $(MODEL)
CPU = i386
!endif

!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak

CANAPE_SRC      = $(MATLAB_ROOT)\rtw\c\canape
CANAPE_BIN      =
USER_INCLUDES   =
WEC_SRC         = .\model_access

PERL = $(MATLAB_ROOT)\sys\perl\win32\bin\perl
!if $(WEC_ALGO_BUILD) == 1
CANAPE_INCLUDE = $(CANAPE_SRC);$(CANAPE_SRC)\private;$(CANAPE_SRC)\shared;
DEF  =
!else
CANAPE_INCLUDE = $(CANAPE_SRC)
!if "$(ALGO_PLATFORM)" == "32-bit"
DEF  = $(CANAPE_SRC)\private\nlapml.def
!endif
!endif
#------------------------------ Include/Lib Path ------------------------------

MATLAB_INCLUDES =                    $(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(CANAPE_INCLUDE)

# Additional file include paths

MATLAB_INCLUDES = $(MATLAB_INCLUDES);F:\04_APE_Temple_Files\ADAS_CAN+dll+SimulinkModel\ADAS_CAN_ESS_Test\SimulinkModel
MATLAB_INCLUDES = $(MATLAB_INCLUDES);F:\04_APE_Temple_Files\ADAS_CAN+dll+SimulinkModel\ADAS_CAN_ESS_Test\SimulinkModel\LATC_Test_Calc_cnp_rtw
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\extern\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\simulink\include
MATLAB_INCLUDES = $(MATLAB_INCLUDES);$(MATLAB_ROOT)\rtw\c\src

INCLUDE = .;$(RELATIVE_PATH_TO_ANCHOR);$(MATLAB_INCLUDES);$(INCLUDE)

!if "$(SHARED_SRC_DIR)" != ""
INCLUDE = $(INCLUDE);$(SHARED_SRC_DIR)
!endif

#------------------------ rtModel ----------------------------------------------

RTM_CC_OPTS = -DUSE_RTMODEL
DEFINES = $(DEFINES) /D USE_RTMODEL

#----------------------------- Defines -----------------------------------------

# TODO(wp): _BUILDNODELAYERDLL should be replace with _BUILDALGODLL
DEFINES = /D MODEL=$(MODEL) /D "RT" /D NUMST=$(NUMST)   \
          /D TID01EQ=$(TID01EQ) /D NCSTATES=$(NCSTATES) \
          /D MT=$(MULTITASKING) \
          /D "_BUILDNODELAYERDLL" \
          /D "_BUILDALGODLL" \
          $(EXT_CC_OPTS) $(RTM_CC_OPTS)

!if $(PERFORM_SIMSTEP_AT_START) == 1
DEFINES = $(DEFINES) /D PERFORM_SIMSTEP_AT_START
!endif
RELEASE_VERSION_NR = 170
DEFINES = $(DEFINES) /D RELEASE_VERSION_NR=$(RELEASE_VERSION_NR)

# EM00047972: Support Microsoft VS2012-VS2013 Compiler
# Wp 2015-02-24: Target XP with new MS compilers by specifying the _USING_V110_SDK71_ define
!if "$(VISUAL_VER)" == "12.0" || "$(VISUAL_VER)" == "13.0"
DEFINES = $(DEFINES) /D _USING_V110_SDK71_
!endif

#----------------------------- CANape options ---------------------------------

!if $(WEC_ALGO_BUILD) == 1
!if "$(OUTPUT_DIR)" == ""
OUTPUT_DIR = Release_ERT
!endif
!else
!if "$(OUTPUT_DIR)" == ""
!if "$(ALGO_PLATFORM)" == "64-bit"
OUTPUT_DIR = Release_x64
!else
OUTPUT_DIR = Release
!endif
!endif
!endif

# Handle TLC transport layer option
XCP_TL = XCP_TRANSPORT_LAYER_PL
!if "$(XCP_TRANSPORT_LAYER)" == "Ethernet"
XCP_TL = XCP_TRANSPORT_LAYER_ETH
!endif

!if $(COMPILER_OPTIMIZATION) == 1
# RELEASE build with activated CL Compiler /O2 (Maximize Speed) option.
!if "$(ALGO_PLATFORM)" == "64-bit"
CNP_DEFINES = /D "NDEBUG" /D "_WIN64" /D "WIN64" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" \
              /D XCP_ETHERNET_PORT="$(XCP_ETHERNET_PORT)" /D "$(XCP_TL)" \
              /D "_CRT_SECURE_NO_DEPRECATE"
!else
CNP_DEFINES = /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" \
              /D XCP_ETHERNET_PORT="$(XCP_ETHERNET_PORT)" /D "$(XCP_TL)" \
              /D "_CRT_SECURE_NO_DEPRECATE"
!endif
# Set required CANape Target compiler options
CNP_OPTS = /MT /O2 /Oi /wd4996 /fp:precise /Zi /FD /EHa \
           /Fd"$(INTDIR)/" /W3 /nologo

# WEC compiler options for RELEASE build
WEC_DEFINES = /D "_ERT_BUILD" /D "_CRT_SECURE_NO_WARNINGS" \
              /D "NDEBUG" /D "UNDER_CE" /D "WINCE" \
              /D "_WIN32_WCE=0x800" /D "x86" /D "_X86_" /D "_UNICODE" /D "UNICODE"
WEC_OPTS = /MD /Gy /Zc:forScope /Gd /Oy- /EHsc /nologo /MP /GS /GL \
           /analyze- /W3 /Zc:wchar_t /Gm- /fp:precise /errorReport:prompt \
           /O2 /Oi /Zi /FD /Fp"$(INTDIR)/$(MODEL).pch" /Fd"$(INTDIR)/" /c
# With R2007b the default options are /Od.
# This results in conflict with out seeing /O2.
# /Od is set in $(matlabroot)/rtw/c/tools/vctools.mak
DEFAULT_OPT_OPTS =
!else
# Release build with deactivated CL Compiler optimization.
!if "$(ALGO_PLATFORM)" == "64-bit"
CNP_DEFINES = /D "_DEBUG" /D "_WIN64" /D "WIN64" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" \
              /D XCP_ETHERNET_PORT="$(XCP_ETHERNET_PORT)" /D "$(XCP_TL)" \
              /D "_CRT_SECURE_NO_DEPRECATE" /D "CANAPENODELAYER_EXPORTS" \
              /D "_BUILDNODELAYERDLL" /D "_CRT_SECURE_NO_WARNINGS" \
              /D "_WINDLL" /D "_UNICODE" /D "UNICODE"          
# Set required CANape Target compiler options
CNP_OPTS = /MTd /wd4996 /fp:precise /Od /Zi /FD /EHa \
           /Fd"$(INTDIR)/" /W3 /nologo /WX- /Gm- /RTC1 /GS \
           /Zc:wchar_t /Zc:forScope /Gd /Oi
!else           
CNP_DEFINES = /D "_DEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" \
              /D XCP_ETHERNET_PORT="$(XCP_ETHERNET_PORT)" /D "$(XCP_TL)" \
              /D "_CRT_SECURE_NO_DEPRECATE"
# Set required CANape Target compiler options
CNP_OPTS = /MTd /wd4996 /fp:precise /Od /Zi /FD /EHa \
           /Fd"$(INTDIR)/" /W3 /nologo
!endif
# WEC compiler options for DEBUG build
WEC_DEFINES = /D "_ERT_BUILD" /D "_CRT_SECURE_NO_WARNINGS" \
              /D "_DEBUG" /D "UNDER_CE" /D "WINCE" \
              /D "_WIN32_WCE=0x800" /D "x86" /D "_X86_" /D "_UNICODE" /D "UNICODE"
WEC_OPTS = /MD /Gy /Zc:forScope /Gd /Oy- /EHsc /nologo /MP /GS /GL \
           /analyze- /W3 /Zc:wchar_t /Gm- /fp:precise /errorReport:prompt \
           /Od /Zi /FD /Fp"$(INTDIR)/$(MODEL).pch" /Fd"$(INTDIR)/" /c
!endif

# Suppress warning C4267 for 64-bit DLL: conversion from 'size_t' to 'int'
# rt_matrx.c: as a result of this conversion: matrix should not contain more than 2^31-1 elements
# warning only appears from version R2017a because of other default behavior
!if "$(ALGO_PLATFORM)" == "64-bit"
CNP_OPTS = $(CNP_OPTS) /wd4267
!endif

# Specify no enhanced instructions
# and also specify x87 for floating-point calculations.
!if "$(VISUAL_VER)" != "10.0"
WEC_OPTS = $(WEC_OPTS) /arch:IA32
!endif

# Reset compiler version specific options
CPPFLAGS_VERSPECIFIC=

!if $(WEC_ALGO_BUILD) == 1
DEFINES = $(DEFINES) $(OPTS) $(WEC_DEFINES) $(RTM_CC_OPTS)
!else
DEFINES = $(DEFINES) $(OPTS) $(CNP_DEFINES) $(RTM_CC_OPTS)
!endif


#----------------- Compiler and Linker Options --------------------------------

# Optimization Options
#   Set  OPT_OPTS=-Zd  for debugging
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =

# WEC/WES Target Options
!if $(WEC_ALGO_BUILD) == 1
TARGET_OPTS = $(WEC_OPTS)
!else
TARGET_OPTS = $(CNP_OPTS)
!endif

!if "$(OPTIMIZATION_FLAGS)" != ""
CC_OPTS = $(OPTIMIZATION_FLAGS) $(OPTS) $(EXT_CC_OPTS) $(RTM_CC_OPTS) $(TARGET_OPTS)
!else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(EXT_CC_OPTS) $(RTM_CC_OPTS) $(TARGET_OPTS)
!endif

CPP_REQ_DEFINES = $(DEFINES)

# overwrite warning level: W4 may be set by cflags (e.g. VS2010 64-bit)
cflags   = $(cflags:W4=W3)
CFLAGS   = $(MODELREF_INC_PATH) $(CC_OPTS) $(CPP_REQ_DEFINES)\
           $(USER_INCLUDES) $(cflags) $(CFLAGS_VERSPECIFIC)
CPPFLAGS = $(MODELREF_INC_PATH) $(CPP_OPTS) $(CC_OPTS) $(CPP_REQ_DEFINES) \
           $(USER_INCLUDES) $(cflags) $(CPPFLAGS_VERSPECIFIC)

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
# Linker flags for the master model
!if $(WEC_ALGO_BUILD) == 1
# coredll.lib for IsProcessorFeaturePreset
# msvcrt.lib for DllMainCRTStartup
LDFLAGS  =  /DEBUG /NOLOGO /DLL /LTCG /MACHINE:X86 /INCREMENTAL:NO \
            /MANIFEST \
            /MANIFESTUAC:NO \
            /DYNAMICBASE /NXCOMPAT \
            /SUBSYSTEM:WindowsCE \
            /NODEFAULTLIB \
            /PDB:"$(OUTPUT_DIR)/$(MODEL).wec.pdb" \
            /OUT:"$(OUTPUT_DIR)/$(MODEL).wec.dll" \
            /IMPLIB:"$(OUTPUT_DIR)/$(MODEL).wec.lib" \
            /LIBPATH:$(INTDIR) \
            /ENTRY:"_DllMainCRTStartup" \
            /TLBID:1 \
            /SAFESEH \
            "$(MATLAB_ROOT)\rtw\c\canape\wec\coredll.lib" \
            "$(MATLAB_ROOT)\rtw\c\canape\wec\msvcrt.lib"
!else
LDFLAGS  =  /DEBUG /nologo /DLL /INCREMENTAL:NO \
!if "$(ALGO_PLATFORM)" == "64-bit"
            /machine:X64 \
!else
            /machine:X86 /DEF:$(DEF) \
!endif            
            /pdb:"$(OUTPUT_DIR)/$(OUTPUT_NAME).pdb" \
            /out:"$(OUTPUT_DIR)/$(OUTPUT_NAME).dll" \
            ws2_32.lib \
            /LIBPATH:$(INTDIR) \
            /IMPLIB:"$(OUTPUT_DIR)/$(OUTPUT_NAME).lib" \
            $(EXT_LIB)
!endif
!else
# Linker flags for a single model reference
!if $(WEC_ALGO_BUILD) == 1
LDFLAGS  =  /NOLOGO /LTCG /MACHINE:X86 \
            /SUBSYSTEM:WindowsCE \
            /OUT:$(MODELLIB) \
            /LIBPATH:$(INTDIR)
!else
LDFLAGS  =  /OUT:$(MODELLIB) \
            /LIBPATH:$(INTDIR)
!endif
!endif

RCFLAGS = /D CANAPE_RTTARGET_VERSION=\""$(CANAPE_RTTARGET_DLL_VER)"\" \
          /D DLL_FILENAME=\""$(OUTPUT_NAME).dll"\" \
          /D TARGET_PLATFORM=\""$(ALGO_PLATFORM)"\" \
          /D VISUAL_STUDIO_VERSION=\""$(VISUAL_VER)"\" \
          /D MATLAB_VERSION=\""$(RELEASE_VERSION)"\"

# libcpmt.lib is the multi-threaded, static lib version of the C++ standard lib

#----------------------------- Source Files -----------------------------------

!if $(WEC_ALGO_BUILD) == 1
REQ_SRCS  = $(MODEL).$(TARGET_LANG_EXT) $(MODULES) \
            $(MODEL)_access.c cnp_main.c rt_sim.c \
            $(SOLVER) $(EXT_SRC)
CPP_SRC   =
!else
REQ_SRCS  = $(MODEL).$(TARGET_LANG_EXT) $(MODULES) \
            cnp_main.c xcpBasic.c xcpServer.c rt_sim.c \
            $(SOLVER) $(EXT_SRC)
CPP_SRC   = cnpcomm.cpp nlapml.cpp timer.cpp
!endif

#Standalone executable
!if "$(MODELREF_TARGET_TYPE)" == "NONE"
!if $(WEC_ALGO_BUILD) == 1
PRODUCT   = "$(OUTPUT_DIR)\$(MODEL).wec.dll"
!else
PRODUCT   = "$(OUTPUT_DIR)\$(OUTPUT_NAME).dll"
!endif
#Model Reference Target
!else
!if $(WEC_ALGO_BUILD) == 1
MODELLIB  = $(MODELLIB:.lib=.wec.lib)
!endif
PRODUCT   = $(MODELLIB)
REQ_SRCS  = $(MODULES)
!endif

LIBSRC_FILES = \

USER_SRCS =

SRCS = $(REQ_SRCS) $(CPP_SRC) $(USER_SRCS) $(S_FUNCTIONS) $(LIBSRC_FILES)
OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj)
SHARED_OBJS = $(SHARED_SRC:.c=.obj)

# ------------------------- Resources: version info ------------------------------
!if "$(MODELREF_TARGET_TYPE)" == "NONE"
RESOURCES_SRC = versioninfo.res
RESOURCES = $(RESOURCES_SRC:.rc=.res)
!endif

# ------------------------- Additional Libraries ------------------------------

LIBS =


LIBS = $(LIBS)

# ---------------------------- Linker Script ----------------------------------

CMD_FILE = $(MODEL).lnk
GEN_LNK_SCRIPT = $(MATLAB_ROOT)\rtw\c\tools\mkvc_lnk.pl

#--------------------------------- Rules --------------------------------------

!if $(GENERATE_MSDEV_FILE) == 0

# remove this line for verbose mode
.SILENT :

all: set_environment_variables $(PRODUCT)

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
#--- Stand-alone model ---
$(PRODUCT) : clean_shared create_intdir $(OBJS) $(RESOURCES) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ...  "
	@if not exist "$(OUTPUT_DIR)/$(NULL)" mkdir "$(OUTPUT_DIR)"
	$(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS)
	$(LD) $(LDFLAGS) $(S_FUNCTIONS_LIB) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)\
	$(MAT_LIBS) $(RESOURCES) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -out:$@
	@del $(CMD_FILE)
!if $(WEC_ALGO_BUILD) == 1
	@cmd /C "echo $(BUILD_SUCCESS) ERT algorithm module $(MODEL).wec.dll using MS Visual Studio version $(VISUAL_VER)"
!else
	@cmd /C "echo $(BUILD_SUCCESS) CANape/vSignalyzer nodelayer module $(OUTPUT_NAME).dll using MS Visual Studio version $(VISUAL_VER)"
!endif

!else
#--- Model reference RTW Target ---
$(PRODUCT) : clean_shared create_intdir $(OBJS) $(RESOURCES) $(SHARED_LIB)
	@cmd /C "echo ### Linking ..."
	@if not exist "$(OUTPUT_DIR)/$(NULL)" mkdir "$(OUTPUT_DIR)"
	$(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS) $(RESOURCES)
	$(LD) -lib $(LDFLAGS) @$(CMD_FILE) $(S_FUNCTIONS_LIB)
!if $(WEC_ALGO_BUILD) == 1
	@cmd /C "echo $(BUILD_SUCCESS) ERT static library $(MODELLIB) using MS Visual Studio version $(VISUAL_VER)"
!else
	@cmd /C "echo $(BUILD_SUCCESS) static library $(MODELLIB) using MS Visual Studio version $(VISUAL_VER)"
!endif
!endif

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
# Rules for resources
{$(CANAPE_SRC)}.rc.res :
  $(RC) $(RCFLAGS) -Fo$(INTDIR)\$@ $<
!endif  

# CANape sources
{$(MATLAB_ROOT)\rtw\c\canape}.c.obj :
  $(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

!if $(WEC_ALGO_BUILD) != 1
# do not include VIA interface in case of WEC build
{$(CANAPE_SRC)\devices}.c.obj :
  $(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

{$(CANAPE_SRC)\xcp}.c.obj :
  $(CC) $(CFLAGS) -Fo$(INTDIR)\ $<
  
{$(CANAPE_SRC)\devices}.cpp.obj :
  $(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

{$(CANAPE_SRC)\private}.cpp.obj :
  $(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<
!endif

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

# Additional sources

{$(MATLAB_ROOT)\rtw\c\CANape\devices}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

rt_matrx.obj : $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c

rt_printf.obj : $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $(MATLAB_ROOT)\rtw\c\src\rt_printf.c

cnpenvin.obj : $(MATLAB_ROOT)\rtw\c\CANape\devices\cnpenvin.c
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $(MATLAB_ROOT)\rtw\c\CANape\devices\cnpenvin.c

cnpenvout.obj : $(MATLAB_ROOT)\rtw\c\CANape\devices\cnpenvout.c
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $(MATLAB_ROOT)\rtw\c\CANape\devices\cnpenvout.c



{$(MATLAB_ROOT)\rtw\c\CANape\devices}.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<



# Look in simulink/src helper files

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

# Put these rule last, otherwise nmake will check toolboxes first
!if $(WEC_ALGO_BUILD) == 1
{$(WEC_SRC)}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<
!endif

{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

.c.obj :
	$(CC) $(CFLAGS) -Fo$(INTDIR)\ $<

.cpp.obj :
	$(CC) $(CPPFLAGS) -Fo$(INTDIR)\ $<

!if "$(SHARED_LIB)" != ""
$(SHARED_LIB) : $(SHARED_SRC)
	@cmd /C "echo ### Creating $@"
	@$(CC) $(CFLAGS) -Fo$(SHARED_BIN_DIR)\ @<<
$?
<<
!if $(WEC_ALGO_BUILD) == 1
	@$(LIBCMD) /nologo /LTCG /MACHINE:X86 /SUBSYSTEM:WindowsCE /out:$@ $(SHARED_OBJS)
!else
	@$(LIBCMD) /nologo /out:$@ $(SHARED_OBJS)
!endif
	@cmd /C "echo ### $@ Created"
!endif


set_environment_variables:
	@set INCLUDE=$(INCLUDE)
	@set LIB=$(LIB)

create_intdir:
        @if not exist "$(INTDIR)/$(NULL)" mkdir "$(INTDIR)"

clean_shared:
        @if exist "$(SHARED_LIB)" del "$(SHARED_LIB)"
        @if exist "$(SHARED_BIN_DIR)\*.obj" del "$(SHARED_BIN_DIR)\*.obj"

# Libraries:






!else

#------ VS project file generation, copied from old TMF file VC6 section ------
#----------------------------- Source Files -----------------------------------
USER_SRCS =

SRCS = $(REQ_SRCS) $(CPP_SRC) $(USER_SRCS) $(S_FUNCTIONS) $(LIBSRC_FILES)
OBJS_CPP_UPPER = $(SRCS:.CPP=.ofile)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.ofile)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.ofile)
OBJS = $(OBJS_C_UPPER:.c=.ofile)
SHARED_OBJS = $(SHARED_SRC:.c=.ofile)
VER_RESOURCE = $(MODEL).rc

$(MODEL).mak : $(MODEL).mki
         copy $(CANAPE_SRC)\versioninfo.rc $(VER_RESOURCE)
         copy $(CANAPE_SRC)\versioninfo.h versioninfo.h
         @$(PERL) $(CANAPE_SRC)\vs_cnp_mak.pl $(CANAPE_SRC)\vs_project_tmp.vcxproj $(CANAPE_SRC)\vs_solution_tmp.sln $(MODEL).mki
         @$(PERL) $(CANAPE_SRC)\vs_build.pl $(VISUAL_VER) $(MODEL)
         @echo $(BUILD_SUCCESS) executable $(OUTPUT_NAME).dll
         $(CMD_PARAMETER)
#        @echo ### Matlab version $(RELEASE_VERSION)

$(MODEL).mki ::
        @if exist $(MODEL).mki del $(MODEL).mki
        @echo Model           = $(MODEL)> $(MODEL).mki
        @echo RequiredDefines = $(DEFINES)>> $(MODEL).mki
        @echo IncludeDirs     = $(INCLUDE)>> $(MODEL).mki
        @echo AdditionalLibs  = $(EXT_LIB) $(S_FUNCTIONS_LIB)>> $(MODEL).mki
        @echo DefFile         = $(DEF)>> $(MODEL).mki        
        @echo OutputDir       = $(OUTPUT_DIR)>> $(MODEL).mki
        @echo Resources       = $(VER_RESOURCE)>> $(MODEL).mki
        @echo RcDefines       = $(RCFLAGS)>> $(MODEL).mki
        @echo Sources:>> $(MODEL).mki


$(MODEL).mki :: $(OBJS)

# Rules for resources
{$(CANAPE_SRC)}.rc.res :
  @echo $<>> $(MODEL).mki

{$(CANAPE_SRC)\devices}.cpp.ofile :
  @echo $<>> $(MODEL).mki

{$(CANAPE_SRC)\devices}.c.ofile :
  @echo $<>> $(MODEL).mki
  
{$(CANAPE_SRC)\xcp}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(CANAPE_SRC)\private}.cpp.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\rtw\c\canape}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(RELATIVE_PATH_TO_ANCHOR)}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\rtw\c\src}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\simulink\src}.c.ofile :
  @echo $<>> $(MODEL).mki

# Toolbox & Blocksets:

{$(MATLAB_ROOT)\toolbox\comm\commsfun}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\toolbox\dspblks\dspmex}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\toolbox\fixpoint}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\toolbox\fuzzy\fuzzy\src}.c.ofile :
  @echo $<>> $(MODEL).mki

# Additional sources

{$(MATLAB_ROOT)\rtw\c\CANape\devices}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\rtw\c\src}.c.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\simulink\src}.c.ofile :
  @echo $<>> $(MODEL).mki



{$(MATLAB_ROOT)\rtw\c\CANape\devices}.cpp.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\rtw\c\src}.cpp.ofile :
  @echo $<>> $(MODEL).mki

{$(MATLAB_ROOT)\simulink\src}.cpp.ofile :
  @echo $<>> $(MODEL).mki



#------ VS project file generation, copied from old TMF file VC6 section ------

{..}.c.ofile :
  @echo $<>> $(MODEL).mki

.c.ofile :
  @echo $<>> $(MODEL).mki

{..}.cpp.ofile :
  @echo $<>> $(MODEL).mki

.cpp.ofile :
  @echo $<>> $(MODEL).mki
  
!endif

#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
