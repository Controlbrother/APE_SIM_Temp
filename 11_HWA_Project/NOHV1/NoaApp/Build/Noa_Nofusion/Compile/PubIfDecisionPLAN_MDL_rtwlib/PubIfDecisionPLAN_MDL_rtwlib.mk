CC_OPT_SET_SUPPORTED_VALUES = DEFAULT NONE CUSTOM 
INCLUDE_MAKEFILE_VERSION    = 2 
LIB_TARGET                  = PubIfDecisionPLAN_MDL_rtwlib 
SRCS= PubIfDecisionPLAN_MDL.c PubIfDecisionPLAN_MDL_data.c
MRK_FILES                   = PubIfDecisionPLAN_MDL.mrk PubIfDecisionPLAN_MDL_data.mrk  
OBJS= PubIfDecisionPLAN_MDL.oarm PubIfDecisionPLAN_MDL_data.oarm
CC_SRC_DIRPATHS = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\src" 
 
CC_HDR_DIRPATHS = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils 
 
CC_LIB_FILE                 = F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\PubIfDecisionPLAN_MDL_rtwlib.lib 
LIB_DIRPATHS                =                    
CUSTOM_DIRPATHS             =                  D:\Matlab2020b\Polyspace\R2020b\extern\include D:\Matlab2020b\Polyspace\R2020b\simulink\include D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
CC_ADD_OPTS                 =                    
CPP_ADD_OPTS                =                    
CC_ADD_DEFINES              = DATA_PORT_ACCESS_POINT_API_VERSION=2 USE_RTMODEL MODEL=PubIfDecisionPLAN_MDL MT=0 RT NUMST=1 NCSTATES=0 NO_PRINTF TID01EQ=0 
CC_ADD_UNDEFS               =  
CC_OPT_SET                  = Custom 
CC_CUSTOM_OPT_OPTS          = -O0 

all : MakeLib 

depend : 

%include ..\Configuration.mk 
%include ..\LibraryRules.mk 
%include ..\CommonRules.mk 

CC_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -ffast-math \
 -fomit-frame-pointer \
 -funwind-tables \
 -mcpu=cortex-a15 \
 -mfpu=neon-vfpv4 \
 -mfloat-abi=hard \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0\arm-linux-gnueabihf" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\include" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include-fixed" \
 -Werror-implicit-function-declaration \
 -D_DS1403 \
 -D_DS1403CN \
 -DDS_PLATFORM_ARM \
 -DDS_PLATFORM_ARMV7 \
 -DDS_PLATFORM_KEYSTONE \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTBOX \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""BDJS-CND110024K"\" \
 -D__INTEGRATION__=\""5.0.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=0 \
 -DDS_LINUX_VERSION=440 \
 -DLINUX_VERSION=4.4.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O0 \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -I"D:\Program Files\dSPACE RCPHIL 2020-B\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DUSE_RTMODEL \
 -DMODEL=PubIfDecisionPLAN_MDL \
 -DMT=0 \
 -DRT \
 -DNUMST=1 \
 -DNCSTATES=0 \
 -DNO_PRINTF \
 -DTID01EQ=0 
 
CPP_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -ffast-math \
 -fomit-frame-pointer \
 -funwind-tables \
 -mcpu=cortex-a15 \
 -mfpu=neon-vfpv4 \
 -mfloat-abi=hard \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\arm-linux-gnueabihf\include\c++\5.5.0\arm-linux-gnueabihf" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\include" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include" \
 -isystem"D:\Program Files\dSPACE RCPHIL 2020-B\Compiler\Linux440_550\target\arm-linux-gnueabihf\lib\gcc\arm-linux-gnueabihf\5.5.0\include-fixed" \
 -fno-operator-names \
 -Wall \
 -D_DS1403 \
 -D_DS1403CN \
 -DDS_PLATFORM_ARM \
 -DDS_PLATFORM_ARMV7 \
 -DDS_PLATFORM_KEYSTONE \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTBOX \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""BDJS-CND110024K"\" \
 -D__INTEGRATION__=\""5.0.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=0 \
 -DDS_LINUX_VERSION=440 \
 -DLINUX_VERSION=4.4.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O0 \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -I"D:\Program Files\dSPACE RCPHIL 2020-B\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DUSE_RTMODEL \
 -DMODEL=PubIfDecisionPLAN_MDL \
 -DMT=0 \
 -DRT \
 -DNUMST=1 \
 -DNCSTATES=0 \
 -DNO_PRINTF \
 -DTID01EQ=0 
 
# ============================================================================= 
# MKMF Section 
# ============================================================================= 

# ----------------------------------------------------------------------------- 
# MKMF Configuration 
# ----------------------------------------------------------------------------- 

.TYPE.C   = .c .cpp 
.TYPE.OBJ = .oarm .oarm 

.PATH.c = \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\src; 
 
.PATH.cpp = \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\src; 
 
.PATH.h = \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; 
 

.HDRPATH.c = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 | \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
 
.HDRPATH.cpp = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 | \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfDecisionPLAN_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
 

.CDEFINES.c  = -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\BDJS-CND110024K\ -D__INTEGRATION__=\5.0.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=0 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  
.CDEFINES.cpp = -D__cplusplus -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\BDJS-CND110024K\ -D__INTEGRATION__=\5.0.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=0 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  

MKMF_SRCS  = PubIfDecisionPLAN_MDL.c PubIfDecisionPLAN_MDL_data.c  
MKMF_LINELEN = 118 
MKMF_TABLEN  = 2 

# ----------------------------------------------------------------------------- 
# MKMF Replacements 
# ----------------------------------------------------------------------------- 

HDRS= tmwtypes.h rtw_continuous.h rtw_extmode.h rtw_matlogging.h rtw_solver.h simstruc_types.h sl_sample_time_defs.h \
		  sl_types_def.h sysran_types.h ifWhileCond_5kpBgavU.h Interpol_Un9SFRZd.h Interpol_zjiXKfGp.h \
		  intrp1d_fu32fga_pw.h intrp2d_fu32fl_pw.h local_ismember_ubQD6XDC.h look1_binlcpw.h look1_iflf_binlcapw.h \
		  look1_iflf_binlcpw.h look1_iflf_binlxpw.h look2_iflf_binlcpw.h look2_iu8fbfflftf_binlcpw.h \
		  LookUp_real32_T_real32_T.h mldivide_eM7gRv4h.h mod_1AYEMF5H.h multiword_types.h NumMin_uz5e5ZqN.h \
		  plook_u32ff_binc.h plook_u32ff_evenca.h plook_u32u8ff_binc.h rt_nonfinite.h rt_powf_snf.h rtwtypes.h \
		  valueMax_xItBCuOH.h valueMin_cV8T4AKr.h xzgetrf_qoSwvruO.h PubIfDecisionPLAN_MDL.h \
		  PubIfDecisionPLAN_MDL_private.h PubIfDecisionPLAN_MDL_types.h

EXTHDRS=

# [EOF] 
 
### OPUS MKMF:  Do not remove this line!  Generated dependencies follow.

PubIfDecisionPLAN_MDL.oarm: PubIfDecisionPLAN_MDL.c \
	 PubIfDecisionPLAN_MDL.h \
		 rtwtypes.h \
			 tmwtypes.h \
			 simstruc_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
					 # simstruc_types.h \
				 sl_types_def.h \
					 rtwtypes.h \
						 # tmwtypes.h \
						 # simstruc_types.h \
				 rtw_matlogging.h \
					 sl_types_def.h \
						 # rtwtypes.h \
				 rtw_extmode.h \
				 rtw_continuous.h \
					 rtwtypes.h \
						 # tmwtypes.h \
						 # simstruc_types.h \
				 rtw_solver.h \
					 rtw_continuous.h \
						 # rtwtypes.h \
				 sysran_types.h \
				 sl_sample_time_defs.h \
		 rtw_continuous.h \
			 # rtwtypes.h \
		 rtw_solver.h \
			 # rtw_continuous.h \
		 PubIfDecisionPLAN_MDL_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
	 PubIfDecisionPLAN_MDL_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
		 PubIfDecisionPLAN_MDL.h \
			 # rtwtypes.h \
			 # rtw_continuous.h \
			 # rtw_solver.h \
			 # PubIfDecisionPLAN_MDL_types.h \
			 # multiword_types.h \
			 # rt_nonfinite.h \
	 LookUp_real32_T_real32_T.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 Interpol_Un9SFRZd.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 Interpol_zjiXKfGp.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 NumMin_uz5e5ZqN.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 ifWhileCond_5kpBgavU.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 intrp1d_fu32fga_pw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 intrp2d_fu32fl_pw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 local_ismember_ubQD6XDC.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look1_binlcpw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look1_iflf_binlcapw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look1_iflf_binlcpw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look1_iflf_binlxpw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look2_iflf_binlcpw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 look2_iu8fbfflftf_binlcpw.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 mldivide_eM7gRv4h.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 mod_1AYEMF5H.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 plook_u32ff_binc.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 plook_u32ff_evenca.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 plook_u32u8ff_binc.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 rt_powf_snf.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 valueMax_xItBCuOH.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 valueMin_cV8T4AKr.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 xzgetrf_qoSwvruO.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h

PubIfDecisionPLAN_MDL_data.oarm: PubIfDecisionPLAN_MDL_data.c \
	 PubIfDecisionPLAN_MDL.h \
		 rtwtypes.h \
			 tmwtypes.h \
			 simstruc_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
					 # simstruc_types.h \
				 sl_types_def.h \
					 rtwtypes.h \
						 # tmwtypes.h \
						 # simstruc_types.h \
				 rtw_matlogging.h \
					 sl_types_def.h \
						 # rtwtypes.h \
				 rtw_extmode.h \
				 rtw_continuous.h \
					 rtwtypes.h \
						 # tmwtypes.h \
						 # simstruc_types.h \
				 rtw_solver.h \
					 rtw_continuous.h \
						 # rtwtypes.h \
				 sysran_types.h \
				 sl_sample_time_defs.h \
		 rtw_continuous.h \
			 # rtwtypes.h \
		 rtw_solver.h \
			 # rtw_continuous.h \
		 PubIfDecisionPLAN_MDL_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
	 PubIfDecisionPLAN_MDL_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
		 PubIfDecisionPLAN_MDL.h \
			 # rtwtypes.h \
			 # rtw_continuous.h \
			 # rtw_solver.h \
			 # PubIfDecisionPLAN_MDL_types.h \
			 # multiword_types.h \
			 # rt_nonfinite.h
