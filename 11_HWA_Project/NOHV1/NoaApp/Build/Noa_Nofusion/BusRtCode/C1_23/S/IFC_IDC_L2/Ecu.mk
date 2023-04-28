
##############################################################################
### Template file         : bus_manager.tmf
### File                  : Ecu.mk
### Compatibility         : DSMAKE 6.12
### Description           : Make file for ECU simulation component.
###
### Author(s)             : MartinEi
###
### Copyright 2022, dSPACE GmbH. All rights reserved.
###
##############################################################################

# ============================================================================
# NEVER CHANGE THIS LINE:
DSRT_MAKEFILE_TEMPLATE_VERSION = 10
# ============================================================================

# -----------------------------------------------------------------------------
# Make predefinitions.
# -----------------------------------------------------------------------------

.REJECT_RULES
.OPTIONS : MacroQuoted
.OPTIONS : TargetQuoted
.OPTIONS : TargetKeepCase

LIB_SRCS_DIR =
LIB_HDR_DIR =

WS_DEQUOTE = "=

# Search path for source files.
ECU_MAKEFILE_WORK_DIRPATH = $(INTERFACE_IN_INCLUDE_FILEPATH,D,$(WS_DEQUOTE))
LIB_SRCS_DIR = "$(ECU_MAKEFILE_WORK_DIRPATH)"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Common"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/CanIf"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Feature"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Rte"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Com"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/PduR"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/SchM"

ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT = "$(ECU_MAKEFILE_WORK_DIRPATH)/../../.."
ECU_MAKEFILE_WORK_DIRPATH_GRANDPARENT = "$(ECU_MAKEFILE_WORK_DIRPATH)/../.."
ECU_MAKEFILE_WORK_DIRPATH_PARENT = "$(ECU_MAKEFILE_WORK_DIRPATH)/.."

# Workaround for 18-A SP1. It has to be removed once when the PR494082 is integrated.
ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED = $(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT,A,D,$(WS_DEQUOTE))
ECU_MAKEFILE_WORK_DIRPATH_GRANDPARENT_CORRECTED = $(ECU_MAKEFILE_WORK_DIRPATH_GRANDPARENT,A,D,$(WS_DEQUOTE))
ECU_MAKEFILE_WORK_DIRPATH_PARENT_CORRECTED = $(ECU_MAKEFILE_WORK_DIRPATH_PARENT,A,D,$(WS_DEQUOTE))

ECU_MAKEFILE_WORK_DIRPATH_BUSCUSTOMCODE = "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDPARENT)/../../BusCustomCode"

LIB_HDR_DIR = \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED)/Utils" \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED)/Utils/DataStructures" \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED)/Utils/E2E" \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED)/Utils/StateManager" \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDGRANDPARENT_CORRECTED)" \
 "$(ECU_MAKEFILE_WORK_DIRPATH_GRANDPARENT_CORRECTED)"\
 "$(ECU_MAKEFILE_WORK_DIRPATH_PARENT_CORRECTED)"\
 "$(ECU_MAKEFILE_WORK_DIRPATH_BUSCUSTOMCODE, $(WS_DEQUOTE))"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Common"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/CanIf"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Feature"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Rte"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/Com"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/PduR"\
 "$(ECU_MAKEFILE_WORK_DIRPATH)/SchM"

# Interface macros for integration with ConfigurationDesk.
LIB_SRCS_FILES = \
 Det.c\
 GenericQueue.c\
 CanIf.c\
 CanIf_Cfg.c\
 CanIf_Cfg_BusAccess.cpp\
 Feature_generated.c\
 Feature_Com_generated.c\
 Feature_IpduM_generated.c\
 Feature_SecOC_generated.c\
 CounterSignal_generated.c\
 UserCode_generated.c\
 Rte_generated.c\
 Com.c\
 Com_generated.c\
 PduR_Cfg_generated.cpp\
 PduR_generated.cpp\
 SchM.c\
 SchM_CanIf.c\
 SchM_LinIf.c\
 SchM_IpduM.c\
 SchM_SecOC.c

INTERFACE_LIB_TARGET       =

# Library targets of referenced models.
LIB_BASENAME     := IFC_IDC_L2_232434_23

% foreach ITEM in $(INTERFACE_IN_LIB_TARGETS)
%    if member($(LIB_BASENAME), $(INTERFACE_IN_LIB_TARGETS))
%        set LIB_BASENAME = $(LIB_BASENAME)_1
%    else
%        break
%    endif
% endfor

# -----------------------------------------------------------------------------
# Shared library for utility code
# -----------------------------------------------------------------------------

% set TMP_MAKEDIR = "$(MAKEDIR)"
% set LIB_FILEPATH     := $(TMP_MAKEDIR,>/$(LIB_BASENAME)/$(LIB_BASENAME).a)
% set INTERFACE_LIB_TARGET       = $(LIB_BASENAME)
% set INTERFACE_LIB_$(LIB_BASENAME)_FILELOCATION = $(LIB_FILEPATH)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES = $(LIB_SRCS_FILES)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_DIRPATHS  = $(LIB_SRCS_DIR,A)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_HDR_DIRPATHS  = $(LIB_HDR_DIR,A)

# [EOF]

