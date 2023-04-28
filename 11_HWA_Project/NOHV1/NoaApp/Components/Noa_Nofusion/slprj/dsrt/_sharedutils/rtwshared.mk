##############################################################################
### Template file         : dsrt.tmf
### File                  : 
### Compatibility         : DSMAKE 6.12
### Description           : Model specific makefile.
###
###
### Copyright 2019, dSPACE GmbH. All rights reserved.
###
##############################################################################

# ============================================================================
# NEVER CHANGE THIS LINE:
DSRT_MAKEFILE_TEMPLATE_VERSION = 11
# ============================================================================

# Version to control the handling of include paths in application process makefiles
%set INTERFACE_INCLUDE_MAKEFILE_VERSION := 2

# -----------------------------------------------------------------------------
# Make predefinitions.
# -----------------------------------------------------------------------------

.REJECT_RULES
.OPTIONS : MacroQuoted
.OPTIONS : TargetQuoted
.OPTIONS : TargetKeepCase

# -----------------------------------------------------------------------------
# Turn off warning for tokens declared as obsolete by MATLAB R2019a
# -----------------------------------------------------------------------------
# include a comment line in the .tmf files that includes
# NO_WARN_LEGACY_TOKENS
# This part shall be removed when the oldest supported MATLAB version is MATLAB R2019a

# -----------------------------------------------------------------------------
# Macros read by RTW.
# -----------------------------------------------------------------------------

# RTW specific environment specifications
# SECTION_DEFAULTS_RTW_BEGIN
MAKECMD                        = dsmake
HOST                           = PC
BUILD                          = no
BUILD_SUCCESS                  = DSRT: MAKE PROCESS SUCCEEDED
BUILD_ERROR                    = [sprintf('DSRT MAKE ERROR: Make process failed for model rtwshared.')]
SYS_TARGET_FILE                = any
PROJ_MARKER_FILE               = no
VERBOSE_BUILD_OFF_TREATMENT    = PRINT_OUTPUT_ALWAYS
# SECTION_DEFAULTS_RTW_END


# -----------------------------------------------------------------------------
# Tokens expaned by RTW.
# -----------------------------------------------------------------------------

# RTW specific customization macros
# SECTION_CUSTOMIZATION_RTW_BEGIN
DS_PROTECTION                     = OFF
MW_MAKEFILE                       = 
MW_BUILDARGS                      = 
# MW_MATLAB_ROOT                  = "D:\Matlab2020b\Polyspace\R2020b"
# MW_MATLAB_BIN                   = "D:\Matlab2020b\Polyspace\R2020b\bin"
MATLAB_ROOT                       = D:\Matlab2020b\Polyspace\R2020b
MATLAB_BIN_ALT                    = D:\Matlab2020b\Polyspace\R2020b\bin
MW_RELEASE_VERSION                = R2020b
MW_RELEASE_VERSION               := $(MW_RELEASE_VERSION,S'\.'_',W_,LC,S'^r'')
# MW_COMPUTER                     = PCWIN64
MW_MODEL                          = rtwshared
MW_MODEL_MODULES                  = BINARYSEARCH_real32_T.c LookUp_real32_T_real32_T.c LookUp_real_Treal32_T_real32_T.c const_params.c look1_iflf_binlcapw.c look1_iflf_binlcpw.c MPC_Solver_QPhild_CVFnlpm0.c inv_ryMcGK7i.c look2_iflf_binlcapw.c look2_iu8dtf_binlcapw.c mldivide_B2iTACYT.c mldivide_vBmGKDRi.c mldivide_z5IdNXbE.c mpower_1Vv6hBEw.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_powf_snf.c xgetrf_bmT7fcHY.c look1_iflf_binlxpw.c Interpol_Un9SFRZd.c Interpol_zjiXKfGp.c NumMin_uz5e5ZqN.c binsearch_u32f.c ifWhileCond_5kpBgavU.c intrp1d_fu32fga_pw.c intrp2d_fu32fl_pw.c local_ismember_ubQD6XDC.c look1_binlcpw.c look2_iflf_binlcpw.c look2_iu8fbfflftf_binlcpw.c mldivide_eM7gRv4h.c mod_1AYEMF5H.c plook_u32ff_binc.c plook_u32ff_evenca.c plook_u32u8ff_binc.c valueMax_xItBCuOH.c valueMin_cV8T4AKr.c xzgetrf_qoSwvruO.c BINARYSEARCH_real32_Treal_T.c LookUp_real32_Treal_T_real32_Treal_T.c look2_iflf_binlxpw.c minimum2_8ItySNSj.c mldivide_bDfh1YFq.c pl_3fC1hwr1.c pl_h0nX7xd3.c polyfit_d3B7CmJq.c power_D4iaDoLm.c power_J3qcWgcR.c qrpf_zcB6QFlQ.c rt_hypotf_snf.c std_0jbjRmL9.c xnrm2_CUJxKSSN.c BINARYSEARCH_U8real32_T.c BINARYSEARCH_U8real_T.c BINARYSEARCH_real_Treal32_T.c LookUp_real_T_real32_Treal_T.c LookUp_real_Treal32_T_U8real32_T.c LookUp_real_Treal32_T_U8real_T.c LookUp_real_Treal32_T_real32_Treal_T.c LookUp_real_Treal32_T_real_Treal32_T.c binsearch_u32u8.c plook_u32u8_bincka.c plook_u32u8_binckan.c rt_roundd_snf.c CalcSPW_3AVs5igj.c PlauByLpb_FrSwEd0B.c lpbDyc_1m5Msa6p.c
# MW_MODEL_MODULES_OBJ            = BINARYSEARCH_real32_T.obj LookUp_real32_T_real32_T.obj LookUp_real_Treal32_T_real32_T.obj const_params.obj look1_iflf_binlcapw.obj look1_iflf_binlcpw.obj MPC_Solver_QPhild_CVFnlpm0.obj inv_ryMcGK7i.obj look2_iflf_binlcapw.obj look2_iu8dtf_binlcapw.obj mldivide_B2iTACYT.obj mldivide_vBmGKDRi.obj mldivide_z5IdNXbE.obj mpower_1Vv6hBEw.obj rtGetInf.obj rtGetNaN.obj rt_nonfinite.obj rt_powf_snf.obj xgetrf_bmT7fcHY.obj look1_iflf_binlxpw.obj Interpol_Un9SFRZd.obj Interpol_zjiXKfGp.obj NumMin_uz5e5ZqN.obj binsearch_u32f.obj ifWhileCond_5kpBgavU.obj intrp1d_fu32fga_pw.obj intrp2d_fu32fl_pw.obj local_ismember_ubQD6XDC.obj look1_binlcpw.obj look2_iflf_binlcpw.obj look2_iu8fbfflftf_binlcpw.obj mldivide_eM7gRv4h.obj mod_1AYEMF5H.obj plook_u32ff_binc.obj plook_u32ff_evenca.obj plook_u32u8ff_binc.obj valueMax_xItBCuOH.obj valueMin_cV8T4AKr.obj xzgetrf_qoSwvruO.obj BINARYSEARCH_real32_Treal_T.obj LookUp_real32_Treal_T_real32_Treal_T.obj look2_iflf_binlxpw.obj minimum2_8ItySNSj.obj mldivide_bDfh1YFq.obj pl_3fC1hwr1.obj pl_h0nX7xd3.obj polyfit_d3B7CmJq.obj power_D4iaDoLm.obj power_J3qcWgcR.obj qrpf_zcB6QFlQ.obj rt_hypotf_snf.obj std_0jbjRmL9.obj xnrm2_CUJxKSSN.obj BINARYSEARCH_U8real32_T.obj BINARYSEARCH_U8real_T.obj BINARYSEARCH_real_Treal32_T.obj LookUp_real_T_real32_Treal_T.obj LookUp_real_Treal32_T_U8real32_T.obj LookUp_real_Treal32_T_U8real_T.obj LookUp_real_Treal32_T_real32_Treal_T.obj LookUp_real_Treal32_T_real_Treal32_T.obj binsearch_u32u8.obj plook_u32u8_bincka.obj plook_u32u8_binckan.obj rt_roundd_snf.obj CalcSPW_3AVs5igj.obj PlauByLpb_FrSwEd0B.obj lpbDyc_1m5Msa6p.obj 
MW_S_FUNCTIONS                    = 
# MW_S_FUNCTIONS_OBJ              = 
MW_S_FUNCTIONS_LIB                = 
# MW_SOLVER                       = 
# MW_SOLVER_OBJ                   = 
MW_NUMST                          = 
MW_TID01EQ                        = 0
MW_NCSTATES                       = 0
# MW_EXT_MODE                     = 0
MW_MULTITASKING                   = 0
# Support for parallel computing
MASTER_ANCHOR_DIR                 = 
START_DIR                         = F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion
MW_TARGET_LANG_EXT                = 
# MW_TGT_FCN_LIB                  = ISO_C
# MW_EXTMODE_STATIC_ALLOC         = 0
# MW_TMW_EXTMODE_TESTING          = 0
# MW_EXTMODE_STATIC_ALLOC_SIZE    = 1000000
# MW_EXTMODE_TRANSPORT            = 0
# Shared library for utility code
MW_SHARED_LIB                     = 
MW_SHARED_LIB_SRCS_WILD           = 
MW_SHARED_LIB_SRCS_DIR            = 
MW_SHARED_LIB_OBJS_DIR            = 

MW_RELATIVE_PATH_TO_ANCHOR        = ..\..\..

MW_MODELLIB                       = rtwshared.lib
MW_MODELREF_LINK_LIBS             = 
MW_MODELREF_TARGET_TYPE           = 
MW_MODELREFS                      = 
MW_MODELREF_LINK_RSPFILE          = rtwshared_ref.rsp
MW_MODELREF_INC_PATH              = 
# SECTION_CUSTOMIZATION_RTW_END

# -----------------------------------------------------------------------------
# Remove repeated items in MW_MODEL_MODULES to avoid linkage problems
# -----------------------------------------------------------------------------
%set TMP_UNIQUE_MODEL_MODULES =
%foreach ITEM in $(MW_MODEL_MODULES)
    # check if current ITEM is already contained in unique list.
    %if !member($(ITEM),$(TMP_UNIQUE_MODEL_MODULES))
        #avoid multiple source inclusions
        %set TMP_UNIQUE_MODEL_MODULES += $(ITEM)
    %endif
%endfor
# overwrite original list with unique one
%set MW_MODEL_MODULES := $(TMP_UNIQUE_MODEL_MODULES)
# remove temporal macro
%undef TMP_UNIQUE_MODEL_MODULES

# -----------------------------------------------------------------------------
# DSRT target specific configuration.
# -----------------------------------------------------------------------------

# In some dsmake versions (up to 6.26) the ,A modifier (abs. path) leaves behind a trailing \ character at the end.
# The S'\\$$'' removes such trailing \ character if it exists.
%set TMP_CHECK_START_DIR := $(INTERFACE_IN_INCLUDE_FILEPATH,D,>\$(MW_RELATIVE_PATH_TO_ANCHOR),A,S'\\$$'',$(WS_DEQUOTE))
%set TMP_CHECK_MATLAB_ROOT := "$(TMP_CHECK_START_DIR)\ml"
%if !(exists("$(TMP_CHECK_MATLAB_ROOT,A,$(WS_DEQUOTE))"))
   %set USE_LOCAL_SOURCES = no
%else
   %set USE_LOCAL_SOURCES = yes
%endif

%if '$(USE_LOCAL_SOURCES)' == 'yes'
%  set START_DIR := $(INTERFACE_IN_INCLUDE_FILEPATH,D,>\$(MW_RELATIVE_PATH_TO_ANCHOR),A,S'\\$$'',$(WS_DEQUOTE))
%  set MATLAB_ROOT := $(START_DIR)\ml
%endif

MODEL_MAKEFILE_BUILD_DIRPATH  = $(INTERFACE_IN_INCLUDE_FILEPATH,D)
MODEL_MAKEFILE_WORK_DIRPATH   = $(MODEL_MAKEFILE_BUILD_DIRPATH, >\$(MW_RELATIVE_PATH_TO_ANCHOR),A)

%ifdef CFG_VERSION_POSTFIX
% if $(CFG_VERSION_POSTFIX) != 1 
    QNX_VERSION_POSTFIX = _$(CFG_VERSION_POSTFIX)
% endif
%endif

DSRT_TARGET = $(SYS_TARGET_FILE,B)

WS_ESC = \\=\\\
WS_WILD = .=\.

# -----------------------------------------------------------------------------
# Model referencing settings.
# -----------------------------------------------------------------------------

# Evaluate Target Type for Model Referencing.

%if     '$(MW_MODELREF_TARGET_TYPE)' == 'NONE'
   # Root Model or no Model Referencing
%  set   _DSRT_IS_ROOT_MODEL = 1
%elseif '$(MW_MODELREF_TARGET_TYPE)' == 'RTW'
   # Referenced Model for Model Referencing
%  undef _DSRT_IS_ROOT_MODEL
%endif

%if !null(MW_MODELREFS)
   # This model includes other models/model libraries.
%  set   _DSRT_HAS_MODELREFS = 1
%else
   # No models referenced by this model.
%  undef _DSRT_HAS_MODELREFS
%endif

# -----------------------------------------------------------------------------
# Common search directories.
# -----------------------------------------------------------------------------

%set DSRT_COMMON_HDR_DIRPATHS := $(MODEL_MAKEFILE_BUILD_DIRPATH)
%set DSRT_COMMON_HDR_DIRPATHS += $(MODEL_MAKEFILE_WORK_DIRPATH,D)
%set DSRT_COMMON_HDR_DIRPATHS += "$(MATLAB_ROOT)\simulink\include"
%set DSRT_COMMON_HDR_DIRPATHS += "$(MATLAB_ROOT)\extern\include"
%set DSRT_COMMON_HDR_DIRPATHS += "$(MATLAB_ROOT)\rtw\c\src"
%set DSRT_COMMON_HDR_DIRPATHS += "$(MATLAB_ROOT)\rtw\c\src\ext_mode\common"
%set DSRT_COMMON_HDR_DIRPATHS += \
    "$(START_DIR)" \
    "$(START_DIR)\slprj\dsrt\_sharedutils" \
    "$(MATLAB_ROOT)\extern\include" \
    "$(MATLAB_ROOT)\simulink\include" \
    "$(MATLAB_ROOT)\rtw\c\src" \
    "$(MATLAB_ROOT)\rtw\c\src\ext_mode\common" \
    "F:\05_dspace_Work_Files\11_HWA_Project\Git_ADAS_Store\projcct\adas_project\McuEQ4Parse\src" \
    "F:\05_dspace_Work_Files\11_HWA_Project\Git_ADAS_Store\projcct\adas_project\RoadFusion_L3\src" \
    "$(MATLAB_ROOT)\toolbox\shared\can\src\scanutil"

%if !null(MW_MODELREF_INC_PATH) 
%set DSRT_COMMON_HDR_DIRPATHS    += $(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(MW_MODELREF_INC_PATH))
%elseif dir($(MODEL_MAKEFILE_BUILD_DIRPATH,>\referenced_model_includes))
# in MATLAB R2019a the MW_MODELREF_INC_PATH macro is always empty
# Temporal Fix/Hack for MATLAB 2019a It is assumed that the folder with all referenced model header is called \referenced_model_includes
%set DSRT_COMMON_HDR_DIRPATHS    += $(MODEL_MAKEFILE_BUILD_DIRPATH,>\referenced_model_includes)
%endif

%if !null(MW_SHARED_LIB_SRCS_DIR) 
%if !(%exists("$(MW_SHARED_LIB_SRCS_DIR,$(WS_DEQUOTE))"))
%set DSRT_COMMON_HDR_DIRPATHS    += $(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(MW_SHARED_LIB_SRCS_DIR))
%else
%set DSRT_COMMON_HDR_DIRPATHS    += "$(MW_SHARED_LIB_SRCS_DIR,$(WS_DEQUOTE))"
%endif
%endif

%set DSRT_COMMON_SRC_DIRPATHS := $(DSRT_COMMON_HDR_DIRPATHS)
%set DSRT_COMMON_SRC_DIRPATHS +=

%if '$(USE_LOCAL_SOURCES)' == 'yes'
%  set DSRT_COMMON_HDR_DIRPATHS += "$(START_DIR)\otherFiles"
%  set DSRT_COMMON_HDR_DIRPATHS += "$(START_DIR)\PI\misc"
%  set DSRT_COMMON_SRC_DIRPATHS += "$(START_DIR)\otherFiles"
%  set DSRT_COMMON_SRC_DIRPATHS += "$(START_DIR)\PI\misc"
%  set TMP_START_DIR = $(START_DIR,$(WS_ESC))
%  set TMP_START_DIR = $(TMP_START_DIR,$(WS_WILD))
%  set DSRT_COMMON_HDR_DIRPATHS = $(DSRT_COMMON_HDR_DIRPATHS,M^$(TMP_START_DIR))
%  set DSRT_COMMON_SRC_DIRPATHS = $(DSRT_COMMON_SRC_DIRPATHS,M^$(TMP_START_DIR))
%endif

# -----------------------------------------------------------------------------
# Common compiler defines.
# -----------------------------------------------------------------------------

TMP_INTERFACE_CC_ADD_DEFINES    = USE_RTMODEL
TMP_INTERFACE_CC_ADD_DEFINES   += MODEL=$(MW_MODEL)
TMP_INTERFACE_CC_ADD_DEFINES   += MT=$(MW_MULTITASKING)
TMP_INTERFACE_CC_ADD_DEFINES   += RT
TMP_INTERFACE_CC_ADD_DEFINES   += NUMST=$(MW_NUMST)
TMP_INTERFACE_CC_ADD_DEFINES   += NCSTATES=$(MW_NCSTATES)
TMP_INTERFACE_CC_ADD_DEFINES   += NO_PRINTF
TMP_INTERFACE_CC_ADD_DEFINES   += TID01EQ=$(MW_TID01EQ)

# -----------------------------------------------------------------------------
# Shared library for utility code
# -----------------------------------------------------------------------------
%if !null(_DSRT_IS_ROOT_MODEL)
%if !null(MW_SHARED_LIB_SRCS_DIR)
%if !null(MW_SHARED_LIB)
%set MW_SHARED_LIB_BASENAME := $(MW_SHARED_LIB,B)

# MMPAP: Rename shared library "basename" if already present in INTERFACE_IN_LIB_TARGETS
%foreach ITEM in $(INTERFACE_IN_LIB_TARGETS)
%    if member($(MW_SHARED_LIB_BASENAME), $(INTERFACE_IN_LIB_TARGETS))
%        set MW_SHARED_LIB_BASENAME = $(MW_SHARED_LIB_BASENAME)_1
%    else
%        break
%    endif
%endfor

%set MW_SHARED_LIB_FILEPATH =$(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(MW_SHARED_LIB))
# add renamed basename to the INTERFACE_LIB_TARGET list.
%set INTERFACE_LIB_TARGET +=$(MW_SHARED_LIB_BASENAME)
# save shared library in the model folder. Do not use renamed MW_SHARED_LIB_BASENAME, use MW_SHARED_LIB instead.
# Generate macros to build MW_SHARED_LIB_BASENAME library.
%set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_FILELOCATION     =$(MW_SHARED_LIB_FILEPATH)
%set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_FILES     =$(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(MW_SHARED_LIB_SRCS_WILD),A,*F)
%if !(%exists("$(MW_SHARED_LIB_SRCS_DIR,$(WS_DEQUOTE))"))
%   set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_DIRPATHS  =$(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(MW_SHARED_LIB_SRCS_DIR),A)
%else
%   set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_DIRPATHS  ="$(MW_SHARED_LIB_SRCS_DIR,$(WS_DEQUOTE))"
%endif
%set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_HDR_DIRPATHS  =$(DSRT_COMMON_HDR_DIRPATHS)
%set INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_ADD_DEFINES   =$(TMP_INTERFACE_CC_ADD_DEFINES)
%endif

%endif
%ifdef DEBUG_ON
% echo DEBUG: INTERFACE_LIB_TARGET $(INTERFACE_LIB_TARGET)
% echo DEBUG: INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_FILELOCATION $(INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_FILELOCATION)
% echo DEBUG: INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_FILES $(INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_FILES)
% echo DEBUG: INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_DIRPATHS $(INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_SRC_DIRPATHS)
% echo DEBUG: INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_HDR_DIRPATHS $(INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_HDR_DIRPATHS)
% echo DEBUG: INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_ADD_DEFINES $(INTERFACE_LIB_$(MW_SHARED_LIB_BASENAME)_CC_ADD_DEFINES)
%endif
%endif # _DSRT_IS_ROOT_MODEL

# -----------------------------------------------------------------------------
# Sources and objects for RTW Custom Run-Time libraries
# -----------------------------------------------------------------------------

%if !null(_DSRT_IS_ROOT_MODEL)

# List of RTW Custom Run-Time Libraries and related sources.


# RTW Custom Run-Time Libraries from rtwmakecfg.m (to be built).


# RTW Custom Run-Time Libraries from rtwmakecfg.m (pre-compiled, locally build if unavailable).


%endif # _DSRT_IS_ROOT_MODEL

# -----------------------------------------------------------------------------
# Interface macros for root/main model.
# -----------------------------------------------------------------------------
%if !null(_DSRT_IS_ROOT_MODEL)

%set LIB_BASENAME = rtwshared

% foreach ITEM in $(INTERFACE_IN_LIB_TARGETS)
%    if member($(LIB_BASENAME), $(INTERFACE_IN_LIB_TARGETS))
%        set LIB_BASENAME = $(LIB_BASENAME)_1
%    else
%        break
%    endif
% endfor

% set INTERFACE_LIB_TARGET += $(LIB_BASENAME)
% set INTERFACE_LIB_MAIN_TARGET = $(LIB_BASENAME)
% set INTERFACE_IMPLEMENTATION_TYPE = SimulinkImplementation
% set INTERFACE_LIB_$(LIB_BASENAME)_FILELOCATION = $(MODEL_MAKEFILE_BUILD_DIRPATH,>\$(LIB_BASENAME).$(CFG_LIB_FILE_EXT))

# Search path for header files and include path.
INTERFACE_LIB_$(LIB_BASENAME)_CC_HDR_DIRPATHS := $(DSRT_COMMON_HDR_DIRPATHS)
INTERFACE_CC_HDR_DIRPATHS := $(DSRT_COMMON_HDR_DIRPATHS)

# Search path for source files.
INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_DIRPATHS := $(DSRT_COMMON_SRC_DIRPATHS)

# Interface macros for integration with ConfigurationDesk.
INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES := rtwshared.$(MW_TARGET_LANG_EXT) 
INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES += $(MW_MODEL_MODULES)
INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES += $(MW_S_FUNCTIONS)

INTERFACE_LIB_$(LIB_BASENAME)_CC_ADD_DEFINES := $(TMP_INTERFACE_CC_ADD_DEFINES)

INTERFACE_OBJ_FILEPATHS +=


%endif # _DSRT_IS_ROOT_MODEL

# -----------------------------------------------------------------------------
# Interface macros for library targets of referenced models.
# -----------------------------------------------------------------------------

%if null(_DSRT_IS_ROOT_MODEL)

% set LIB_BASENAME = $(MW_MODELLIB,B)

% foreach ITEM in $(INTERFACE_IN_LIB_TARGETS)
%    if member($(LIB_BASENAME), $(INTERFACE_IN_LIB_TARGETS))
%        set LIB_BASENAME = $(LIB_BASENAME)_1
%    else
%        break
%    endif
% endfor

# Library targets of referenced models.
% set INTERFACE_LIB_TARGET                 += $(LIB_BASENAME)

% set TMP_REF_MODEL_BUILD_DIR := $(INTERFACE_IN_INCLUDE_FILEPATH,D)

% set INTERFACE_LIB_$(LIB_BASENAME)_FILELOCATION     := $(TMP_REF_MODEL_BUILD_DIR,>\$(LIB_BASENAME)$(MW_MODELLIB,E))
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES     := $(MW_MODEL_MODULES)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_FILES     += $(MW_S_FUNCTIONS)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_SRC_DIRPATHS  := $(DSRT_COMMON_SRC_DIRPATHS)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_HDR_DIRPATHS  := $(DSRT_COMMON_HDR_DIRPATHS)
% set INTERFACE_LIB_$(LIB_BASENAME)_CC_ADD_DEFINES   := $(TMP_INTERFACE_CC_ADD_DEFINES)

%endif # !_DSRT_IS_ROOT_MODEL

local_start_$(MW_MODEL):
%if '$(DS_PROTECTION)' == 'ON'
    %echo $(BUILD_SUCCESS)
%endif
# [EOF]
