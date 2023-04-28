################################################################################
### Template file         : CoreMakeManagement_ext.tmk
### File                  : Noa_Nofusion_ext.mk
### Compatibility         : DSMAKE 6.12
### Description           : Application specific makefile.
###
### Copyright 2015, dSPACE GmbH. ALL rights reserved.
###
################################################################################

#-------------------------------------------------------------------------------
# APPL Specific Settings
#-------------------------------------------------------------------------------

OUTPUT_FILE_NAME              = Noa_Nofusion
OUTPUT_FILE_TYPE              = APPLICATION

# Application variants.
APPL_VARS                          =

# Variant: DEFAULT
APPL_VARS                         += DEFAULT
APPL_VAR_NAME_DEFAULT              = Noa_Nofusion_DEFAULT
APPL_VAR_OPT_Linkage_DEFAULT       = DEFAULT
APPL_VAR_RESULT_DIRPATH_DEFAULT    = "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Build\Results.tmp"



#-------------------------------------------------------------------------------
# Interface Settings
#-------------------------------------------------------------------------------

INTERFACE_CC_SRC_FILES        += \
 mdladapter_mdlfunctions.cpp \
 mdlCode_ap.cpp \
 data_in_ap.cpp \
 data_out_ap.cpp \
 fm_entry_ap.cpp \
 fm_exit_ap.cpp \
 dssimengine_accesspoint.cpp \
 dssimengine_api.cpp \
 dssimengine_main.cpp \
 rtosal_task.cpp \
 rtosal_taskap.cpp \
 rtosal_simengineap.cpp \
 IOCode_Data.cpp \
 dssimengine_accesspoint_UDP_Receive.cpp \
 dssimengine_accesspoint_Ethernet_Setup.cpp \
 dssimengine_accesspoint_CAN.cpp \
 BusManager_ADAS_CAN_22.cpp \
 BusManager_ADAS_CAN_23.cpp \
 BusManager_ADAS_CAN_24.cpp \
 DsBusCustomCode.c \
 DsBusCustomCode_PduUserCode.c \
 BusManager_RSDS_PCANFD_8.cpp \
 BusManager_RSDS_PCANFD_9.cpp \
 BusManager_CR_PCANFD_8.cpp \
 BusManager_CR_PCANFD_9.cpp \
 BusManager_PT_CAN_23.cpp \
 ADAS_CAN.cpp \
 RSDS_PCANFD.cpp \
 CR_PCANFD.cpp \
 PT_CAN.cpp \
 StateManager_generated.c \
 ScalingFunctions.c \
 BinaryHeap.c \
 ArrayList.c \
 ConvertHwTimeToSimTime.cpp \
 UserChecksum.c \
 UserChecksum_ACCFD2.c \
 fcn_checksum.c \
 UserTimeSync.c \
 UserTimeSync2.c \
 fcn_getTime.cpp \
 aes_cbc_cmac.c \
 TI_aes_128.c \
 secoc_fvm.c

INTERFACE_CC_SRC_DIRPATHS     += \
 ".\..\SysIntCode" \
 "D:\Program Files\dSPACE RCPHIL 2020-B\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 ".\..\BusRtCode\C1_22" \
 ".\..\BusRtCode\C1_23" \
 ".\..\BusRtCode\C1_24" \
 ".\..\BusCustomCode" \
 ".\..\BusRtCode" \
 ".\..\BusRtCode\C2_8" \
 ".\..\BusRtCode\C2_9" \
 ".\..\BusRtCode\C3_8" \
 ".\..\BusRtCode\C3_9" \
 ".\..\BusRtCode\C4_23" \
 ".\..\BusRtCode\Utils" \
 ".\..\BusRtCode\Utils\DataStructures" \
 ".\..\BusRtCode\Utils\StateManager" \
 ".\..\..\..\..\CustomFunctions"

INTERFACE_CC_HDR_DIRPATHS     += \
 ".\..\SysIntCode" \
 "D:\Program Files\dSPACE RCPHIL 2020-B\ConfigurationDesk\Implementation\EmbeddedSW\Src" \
 ".\..\BusRtCode\C1_22" \
 ".\..\BusRtCode\C1_23" \
 ".\..\BusRtCode\C1_24" \
 ".\..\BusCustomCode" \
 ".\..\BusRtCode" \
 ".\..\BusRtCode\C2_8" \
 ".\..\BusRtCode\C2_9" \
 ".\..\BusRtCode\C3_8" \
 ".\..\BusRtCode\C3_9" \
 ".\..\BusRtCode\C4_23" \
 ".\..\BusRtCode\Utils" \
 ".\..\BusRtCode\Utils\DataStructures" \
 ".\..\BusRtCode\Utils\StateManager" \
 ".\..\..\..\..\CustomFunctions"

INTERFACE_LIB_DIRPATHS        +=

INTERFACE_CUSTOM_DIRPATHS     += \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil"

INTERFACE_OBJ_FILEPATHS       +=

INTERFACE_LIB_FILEPATHS       +=

INTERFACE_LIB_FILES           += \
 "dsethernetinterfacemanagementdrv" \
 "dsimbscandrv" \
 "dscandrv" \
 "dslindrv"

INTERFACE_CC_ADD_OPTS         += 

INTERFACE_CPP_ADD_OPTS        += 

INTERFACE_CC_ADD_DEFINES      += DATA_PORT_ACCESS_POINT_API_VERSION=2

INTERFACE_CC_ADD_UNDEFS       +=

INTERFACE_CC_OPT_SET          = Custom

INTERFACE_CC_CUSTOM_OPT_OPTS  = -O0


# Clear Macros
# Don't use $() here!
INTERFACE_CLEAR_MACROS        +=


#-------------------------------------------------------------------------------
# Dependencies
#-------------------------------------------------------------------------------

dssimengine_accesspoint.cpp : dssimengine_accesspoint.h

dssimengine_api.cpp : dssimengine_api.h

dssimengine_main.cpp : dssimengine_main.h

dssimengine_api.cpp : dssimengine_main.h

dssimengine_accesspoint.cpp : dssimengine_defines.h




# [EOF]
