CC_OPT_SET_SUPPORTED_VALUES = DEFAULT NONE CUSTOM 
INCLUDE_MAKEFILE_VERSION    = 2 
LIB_TARGET                  = PubIfControlLONC_MDL_rtwlib 
SRCS= PubIfControlLONC_MDL.c PubIfControlLONC_MDL_data.c
MRK_FILES                   = PubIfControlLONC_MDL.mrk PubIfControlLONC_MDL_data.mrk  
OBJS= PubIfControlLONC_MDL.oarm PubIfControlLONC_MDL_data.oarm
CC_SRC_DIRPATHS = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\src" 
 
CC_HDR_DIRPATHS = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils 
 
CC_LIB_FILE                 = F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\PubIfControlLONC_MDL_rtwlib.lib 
LIB_DIRPATHS                =                    
CUSTOM_DIRPATHS             =                  D:\Matlab2020b\Polyspace\R2020b\extern\include D:\Matlab2020b\Polyspace\R2020b\simulink\include D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
CC_ADD_OPTS                 =                    
CPP_ADD_OPTS                =                    
CC_ADD_DEFINES              = DATA_PORT_ACCESS_POINT_API_VERSION=2 USE_RTMODEL MODEL=PubIfControlLONC_MDL MT=0 RT NUMST=1 NCSTATES=0 NO_PRINTF TID01EQ=0 
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
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -I"D:\Program Files\dSPACE RCPHIL 2020-B\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DUSE_RTMODEL \
 -DMODEL=PubIfControlLONC_MDL \
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
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 -ID:\Matlab2020b\Polyspace\R2020b\extern\include \
 -ID:\Matlab2020b\Polyspace\R2020b\simulink\include \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src \
 -ID:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -IF:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils \
 -I"D:\Program Files\dSPACE RCPHIL 2020-B\DS1403\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DUSE_RTMODEL \
 -DMODEL=PubIfControlLONC_MDL \
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
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
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
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
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
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL; \
 D:\Matlab2020b\Polyspace\R2020b\extern\include; \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src; \
 D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils; 
 

.HDRPATH.c = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 | \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
 
.HDRPATH.cpp = \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil \
 | \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL" \
 "D:\Matlab2020b\Polyspace\R2020b\extern\include" \
 "D:\Matlab2020b\Polyspace\R2020b\simulink\include" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src" \
 "D:\Matlab2020b\Polyspace\R2020b\rtw\c\src\ext_mode\common" \
 "F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\_sharedutils" \
 F:\05_dspace_Work_Files\11_HWA_Project\NOHV1\NoaApp\Components\Noa_Nofusion\slprj\dsrt\PubIfControlLONC_MDL\..\..\..\slprj\dsrt\_sharedutils \
 D:\Matlab2020b\Polyspace\R2020b\extern\include \
 D:\Matlab2020b\Polyspace\R2020b\simulink\include \
 D:\Matlab2020b\Polyspace\R2020b\toolbox\shared\can\src\scanutil 
 

.CDEFINES.c  = -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\BDJS-CND110024K\ -D__INTEGRATION__=\5.0.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=0 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  
.CDEFINES.cpp = -D__cplusplus -D_DS1403 -D_DS1403CN -DDS_PLATFORM_ARM -DDS_PLATFORM_ARMV7 -DDS_PLATFORM_KEYSTONE -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTBOX -DDS_PLATFORM_SMP -D__HOSTNAME__=\BDJS-CND110024K\ -D__INTEGRATION__=\5.0.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=0 -DDS_LINUX_VERSION=440 -DLINUX_VERSION=4.4.0 -D_FILE_OFFSET_BITS=64  

MKMF_SRCS  = PubIfControlLONC_MDL.c PubIfControlLONC_MDL_data.c  
MKMF_LINELEN = 118 
MKMF_TABLEN  = 2 

# ----------------------------------------------------------------------------- 
# MKMF Replacements 
# ----------------------------------------------------------------------------- 

HDRS= tmwtypes.h rtw_continuous.h rtw_extmode.h rtw_matlogging.h rtw_solver.h simstruc_types.h sl_sample_time_defs.h \
		  sl_types_def.h sysran_types.h look1_iflf_binlcapw.h look1_iflf_binlcpw.h LookUp_real32_T_real32_T.h \
		  LookUp_real_Treal32_T_real32_T.h multiword_types.h rtwtypes.h PubIfControlLONC_MDL.h \
		  PubIfControlLONC_MDL_private.h PubIfControlLONC_MDL_types.h

EXTHDRS=

# [EOF] 
 
### OPUS MKMF:  Do not remove this line!  Generated dependencies follow.

PubIfControlLONC_MDL.oarm: PubIfControlLONC_MDL.c \
	 PubIfControlLONC_MDL.h \
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
		 PubIfControlLONC_MDL_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
	 PubIfControlLONC_MDL_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
	 LookUp_real32_T_real32_T.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
	 LookUp_real_Treal32_T_real32_T.h \
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
			 # simstruc_types.h

PubIfControlLONC_MDL_data.oarm: PubIfControlLONC_MDL_data.c \
	 PubIfControlLONC_MDL.h \
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
		 PubIfControlLONC_MDL_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
		 multiword_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
				 # simstruc_types.h \
	 PubIfControlLONC_MDL_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
			 # simstruc_types.h \
		 multiword_types.h \
			 # rtwtypes.h