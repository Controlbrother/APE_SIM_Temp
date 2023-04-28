#pragma once
/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_hwp_eth2soc"
   ARXML schema: "4.3"
   File generated on: "18-Oct-2020 19:19:23"  */

#ifndef mcuEQ4_h
#define mcuEQ4_h

//#include "Platform_Types.h"
#include "rtwtypes.h"
#include "stdio.h"
#define SOC_ALIGN


#ifdef SOC_ALIGN
#pragma pack(2)
#else
#pragma pack 2
#endif

/* AUTOSAR Implementation data types, specific to software component */
//typedef struct{uint32_T H;uint32_T L;} UFIX64;

/* AUTOSAR Structure Types */


#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_APPINFO_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_APPINFO_BUS_

#pragma pack(push)
#ifdef SOC_ALIGN
#pragma pack(4)
#else
#pragma pack 4
#endif
typedef struct {
    //UFIX64 APP_SyncTs;
    uint32_T H;uint32_T L;
    uint8_T APP_SyncTsValid;
    uint8_T APP_E2EStatus;
} SPI_EQ4_APPINFO_BUS;
#ifdef SOC_ALIGN
#pragma pack(pop)
#else
#pragma pack 0
#endif

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_APP_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_APP_HDR_BUS_

typedef struct {
    uint8_T APP_Zero_Byte;
    uint8_T Application_Message_Version;
    uint8_T APP_Main_State;
    uint8_T APP_Sub_State;
    uint32_T APP_EyeQ_Process_Index;
    uint32_T APP_EyeQ_Timestamp;
    uint32_T APP_EyeQ_Current_Timestamp;
    uint16_T APP_Diagnostics_part_1;
    uint16_T APP_Diagnostics_part_2;
    uint8_T APP_Fatal_Error;
    uint8_T App_RSRV_1;
    uint16_T APP_Minor_Error;
    int16_T APP_EyeQTemperature1;
    int16_T APP_EyeQTemperature2;
    int8_T APP_Temperature_DDR;
    uint8_T App_RSRV_2;
    uint16_T App_RSRV_3;
    uint8_T App_RSRV_4;
    uint8_T APP_spiErrors;
    uint8_T APP_Valid_second_cam_temp_info;
    uint8_T APP_Valid_cameras_information;
    int16_T APP_Camera1_temperature_1;
    int16_T APP_Camera2_temperature_1;
    int16_T APP_Camera3_temperature_1;
    int16_T APP_Camera1_temperature_2;
    int16_T APP_Camera2_temperature_2;
    int16_T APP_Camera3_temperature_2;
    int16_T App_RSRV_5;
    int16_T App_RSRV_6;
    uint8_T APP_Camera1_VideoErrorRange;
    uint8_T APP_Camera2_VideoErrorRange;
    uint8_T APP_Camera3_VideoErrorRange;
    uint8_T App_RSRV_7;
    uint8_T App_RSRV_8;
    uint8_T App_RSRV_9;
    uint8_T App_RSRV_10;
    uint8_T App_RSRV_11;
    uint32_T APP_Camera1_VideoErrorFlags_pt1;
    uint32_T APP_Camera2_VideoErrorFlags_pt1;
    uint32_T APP_Camera3_VideoErrorFlags_pt1;
    uint32_T APP_Brain_drops_counter;
    uint32_T APP_appMode;
    uint32_T APP_Application_ver;
    uint32_T App_RSRV_12;
    uint32_T App_RSRV_13;
    uint32_T APP_Camera1_VideoErrorFlags_pt2;
    uint32_T APP_Camera2_VideoErrorFlags_pt2;
    uint32_T APP_Camera3_VideoErrorFlags_pt2;
    uint32_T APP_SPI_Bus_Load_Tx;
    uint32_T APP_SPI_Bus_Load_Rx;
    uint32_T APP_SPI_Retransmit_Tx;
    uint32_T App_RSRV_14;
    uint32_T App_CRC32;
} SPI_EQ4_APP_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_COM_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_COM_HDR_BUS_

#pragma pack(push)
#ifdef SOC_ALIGN
#pragma pack(4)
#else
#pragma pack 4
#endif
typedef struct {
    uint8_T COM_Zero_byte;
    uint8_T Reserved_1;
    uint32_T COM_CRC;
    uint8_T COM_Protocol_Version;
    uint8_T COM_Sync_Frame_ID;
    uint8_T Reserved_2;
    //UFIX64 COM_Frame_MCU_TS_Start;
    uint32_T COM_Frame_MCU_TS_Start;uint32_T L;
    //UFIX64 COM_Last_MCU_Sync_TS;
    uint32_T COM_Last_MCU_Sync_TS;uint32_T L2;
    int32_T COM_Last_Clock_Sync_Skew;
    uint8_T COM_Last_Clock_Sync_Error;
    uint8_T Reserved_3;
    uint32_T COM_EyeQ_Frame_ID;
    uint32_T COM_Cam_Frame_ID;
    uint8_T COM_DayTime_Indicator;
    uint8_T COM_HIL_Mode_Status;
    uint8_T COM_Exposure_Type;
    uint8_T COM_Region_Code_V;
    uint8_T COM_Region_Code;
    uint8_T COM_Driving_Side_V;
    uint8_T COM_Driving_Side;
    uint8_T COM_Is_HighSpeed_Road_V;
    uint8_T COM_Is_HighSpeed_Road;
    uint8_T COM_Buffer_C1;
    float COM_Buffer_C2;
    //  uint8_T Reserved_4;
} SPI_EQ4_COM_HDR_BUS;
#ifdef SOC_ALIGN
#pragma pack(pop)
#else
#pragma pack 0
#endif

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_HDR_BUS_

typedef struct {
    uint8_T FSPX_Zero_byte;
    uint8_T FSPX_Protocol_Version;
    uint8_T FSPX_Sync_ID;
    uint8_T FSPX_Header_Buffer;
} SPI_EQ4_FSPX_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_ELEM_BUS_

typedef struct {
    uint8_T FSPX_Is_Valid;
    float FSPX_Existence_Prob_B0;
    uint8_T FSPX_Mobility_Status_B0;
    float FSPX_Classification_Conf_B0;
    uint8_T FSPX_Classification_Type_B0;
    uint8_T FSPX_Lane_Assginment_B0;
    uint8_T Reserved_1;
    uint8_T FSPX_Obsticle_ID_B0;
    float FSPX_Elevation_Angle_B0;
    float FSPX_Range_STD_B0;
    uint8_T Reserved_2;
    float FSPX_Height_B0;
    float FSPX_Height_STD_B0;
    float FSPX_Azimuth_Angle_B0;
    float FSPX_Azimuth_Angle_STD_B0;
    float FSPX_Range_B0;
    uint8_T Reserved_3;
} SPI_EQ4_FSPX_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_HDR_BUS_

typedef struct {
    uint8_T FSP_Zero_byte;
    uint8_T Reserved_1;
    uint32_T FS_Header_CRC;
    uint8_T FS_Protocol_Version;
    uint8_T FS_Sync_ID;
    uint8_T FS_Cameras_Number;
    uint8_T FS_TSR_Out_OF_Calib;
    uint8_T FS_Out_Of_Calib;
    uint8_T Reserved_2;
    uint16_T FS_Impacted_Technologies;
    uint8_T FS_Rain;
    uint8_T FS_Fog;
    uint8_T FS_Calibration_Misalignment;
    uint8_T FS_C2W_OOR;
    uint8_T Reserved_3;
} SPI_EQ4_FS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_ELEM_BUS_

typedef struct {
    uint32_T FS_CRC;
    uint8_T FS_Camera_ID;
    uint8_T FS_Free_Sight;
    uint8_T FS_Splashes;
    uint8_T FS_Sun_Ray;
    uint8_T FS_Low_Sun;
    uint8_T FS_Blur_Image;
    uint8_T FS_Partial_Blockage;
    uint8_T FS_Full_Blockage;
    uint8_T FS_Frozen_Windshield_Lens;
    uint8_T FS_Out_Of_Focus;
    uint8_T FS_C2C_Out_Of_Calib;
} SPI_EQ4_FS_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_HDR_BUS_

typedef struct {
    uint8_T LAP_Zero_byte;
    uint8_T LAP_Protocol_Version;
    uint8_T LAP_Sync_ID;
    uint8_T LAP_Is_Construction_Area;
    uint8_T LAP_Buffer_C0;
    uint8_T LAP_INTP_Available;
    uint8_T LAP_INTP_Count;
    uint8_T LAP_Exit_Merge_Available;
    uint8_T LAP_Is_Highway_Merge_Left;
    uint8_T LAP_Is_Highway_Merge_Right;
    uint8_T LAP_Is_Highway_Exit_Left;
    uint8_T LAP_Is_Highway_Exit_Right;
    uint8_T LAP_Vertical_Surface_Available;
    float LAP_Vertical_Surface_VR_End;
    uint8_T Reserved_1;
    float LAP_Vertical_Surface_C0;
    float LAP_Vertical_Surface_C1;
    float LAP_Vertical_Surface_C2;
    float LAP_Vertical_Surface_C3;
    uint32_T LAP_Path_Pred_CRC;
    uint8_T LAP_Path_Pred_Available;
    uint8_T LAP_Path_Pred_First_Valid;
    uint8_T LAP_Path_Pred_Second_Valid;
    float LAP_Path_Pred_Half_Width;
    float LAP_Path_Pred_Conf;
    uint8_T LAP_Is_Triggered_SDM_Model;
    uint8_T Reserved_2;
    float LAP_Path_Pred_First_VR_End;
    float LAP_Path_Pred_second_VR_End;
    uint8_T Reserved_3;
    float LAP_Path_Pred_First_C0;
    float LAP_Path_Pred_First_C1;
    float LAP_Path_Pred_First_C2;
    float LAP_Path_Pred_First_C3;
    float LAP_Path_Pred_Second_C0;
    float LAP_Path_Pred_Second_C1;
    float LAP_Path_Pred_Second_C2;
    float LAP_Path_Pred_Second_C3;
} SPI_EQ4_LAP_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_ELEM_BUS_

typedef struct {
    uint8_T LAP_INTP_ID;
    uint8_T LAP_INTP_Distance_Age;
    float LAP_INTP_Confidence;
    uint8_T LAP_INTP_Is_Valid;
    uint8_T LAP_INTP_Type;
    uint8_T LAP_INTP_Is_Start;
    uint8_T Reserved_4;
    float LAP_INTP_Lat_Distance;
    float LAP_INTP_Long_Distance;
    uint8_T Reserved_5;
    uint8_T LAP_Buffer_C1;
    uint8_T LAP_Buffer_C2;
    uint8_T Reserved_6;
    uint16_T Reserved_7;
} SPI_EQ4_LAP_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_HDR_BUS_

typedef struct {
    uint8_T LA_Zero_byte;
    uint8_T LA_Protocol_Version;
    uint8_T LA_Sync_ID;
    uint8_T LA_Adjacent_Count;
    uint8_T Reserved_1;
    uint8_T Reserved_2;
    uint16_T Reserved_3;
} SPI_EQ4_LA_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_ELEM_BUS_

typedef struct {
    uint8_T LA_Lane_Track_ID;
    uint8_T LA_Age;
    float LA_Confidence;
    uint8_T LA_Color;
    float LA_Color_Conf;
    uint8_T LA_Prediction_Reason;
    uint8_T LA_Availability_State;
    float LA_View_Range_Start;
    uint8_T Reserved_2;
    float LA_View_Range_End;
    float LA_Measured_VR_End;
    uint8_T Reserved_3;
    uint8_T LA_Lanemark_Type;
    uint8_T LA_DLM_Type;
    float LA_Lanemark_Type_Conf;
    uint8_T LA_Line_Side;
    float LA_Marker_Width;
    uint8_T Reserved_4;
    float LA_Marker_Width_STD;
    uint8_T Reserved_5;
    float LA_Line_C3;
    float LA_Line_C2;
    float LA_Line_C1;
    float LA_Line_C0;
    uint8_T LH_Buffer_C1;
    uint8_T Reserved_6;
} SPI_EQ4_LA_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_HDR_BUS_

typedef struct {
    uint8_T LH_Zero_byte;
    uint8_T LH_Protocol_Version;
    uint8_T LH_Sync_ID;
    uint8_T LH_Lanes_Count;
    uint8_T Reserved_1;
    float LH_Estimated_Width;
    uint8_T Reserved_2;
} SPI_EQ4_LH_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_ELEM_BUS_

typedef struct {
    uint32_T LH_CRC;
    uint8_T LH_Is_Triggered_SDM_Type;
    uint8_T LH_Is_Triggered_SDM_Model;
    uint8_T LH_Track_ID;
    uint8_T LH_Age;
    float LH_Confidence;
    uint8_T Reserved_3;
    uint8_T LH_Prediction_Reason;
    uint8_T LH_Availability_State;
    uint8_T LH_Color;
    float LH_Color_Confidence;
    uint8_T LH_Lanemark_Type;
    uint8_T LH_DLM_Type;
    uint8_T LH_DECEL_Type;
    uint8_T Reserved_4;
    float LH_Lanemark_Type_Conf;
    uint8_T LH_Side;
    uint8_T LH_Crossing;
    float LH_Marker_Width;
    float LH_Marker_Width_STD;
    uint8_T Reserved_5;
    float LH_Dash_Average_Length;
    float LH_Dash_Average_Gap;
    uint8_T LH_Is_Multi_Clothoid;
    uint8_T Reserved_6;
    float LH_Line_First_C0;
    float LH_Line_First_C1;
    float LH_Line_First_C2;
    float LH_Line_First_C3;
    float LH_First_VR_Start;
    float LH_First_VR_End;
    uint8_T Reserved_7;
    float LH_First_Measured_VR_End;
    float LH_Second_Measured_VR_End;
    uint8_T Reserved_8;
    float LH_Line_Second_C0;
    float LH_Line_Second_C1;
    float LH_Line_Second_C2;
    float LH_Line_Second_C3;
    float LH_Second_VR_Start;
    float LH_Second_VR_End;
    uint8_T LH_Buffer_C3;
} SPI_EQ4_LH_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_HDR_BUS_

typedef struct {
    uint8_T LRE_Zero_byte;
    uint8_T Reserved_1;
    uint32_T LRE_CRC;
    uint8_T LRE_Protocol_Version;
    uint8_T LRE_Sync_ID;
    uint8_T LRE_Count;
    uint8_T LRE_Header_Buffer;
    uint16_T Reserved_2;
} SPI_EQ4_LRE_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_ELEM_BUS_

typedef struct {
    uint8_T LRE_ID;
    uint8_T LRE_Age;
    float LRE_Confidence;
    uint8_T LRE_Type;
    uint8_T Reserved_2;
    uint8_T LRE_Prediction_Reason;
    uint8_T LRE_Availability_State;
    float LRE_Height;
    float LRE_Height_STD;
    uint8_T Reserved_3;
    float LRE_View_Range_Start;
    float LRE_View_Range_End;
    uint8_T Reserved_4;
    float LRE_Measured_VR_End;
    uint8_T LRE_Side;
    uint8_T LRE_Is_Triggered_SDM_Model;
    uint8_T Reserved_5;
    float LRE_Line_C3;
    float LRE_Line_C2;
    float LRE_Line_C1;
    float LRE_Line_C0;
    uint8_T LRE_Detection_Source;
    uint8_T Reserved_6;
} SPI_EQ4_LRE_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_HDR_BUS_

typedef struct {
    uint8_T OBJ_Zero_byte;
    uint8_T Reserved_1;
    uint32_T OBJ_Header_CRC;
    uint8_T OBJ_Protocol_Version;
    uint8_T OBJ_Sync_ID;
    uint8_T OBJ_VRU_Count;
    uint8_T OBJ_VD_Count;
    uint8_T OBJ_General_OBJ_Count;
    uint8_T Reserved_2;
    uint8_T OBJ_Animal_Count;
    uint8_T OBJ_VD_NIV_Left;
    uint8_T OBJ_VD_NIV_Right;
    uint8_T OBJ_VD_CIPV_ID;
    uint8_T OBJ_VD_CIPV_Lost;
    uint8_T OBJ_VD_Allow_Acc;
    uint8_T OBJ_Is_Blocked_Left;
    uint8_T OBJ_Is_Blocked_Right;
    uint8_T Reserved_3;
    uint16_T Reserved_4;
} SPI_EQ4_OBJ_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_ELEM_BUS_

typedef struct {
    uint32_T OBJ_CRC;
    uint8_T OBJ_ID;
    float OBJ_Existence_Probability;
    uint16_T OBJ_Fusion_Source;
    uint8_T OBJ_Triggered_SDM;
    uint8_T OBJ_Motion_Category;
    float OBJ_Buffer_C0;
    uint16_T OBJ_Object_Age;
    uint8_T OBJ_Measuring_Status;
    uint8_T OBJ_Object_Class;
    uint8_T Reserved_4;
    float OBJ_Class_Probability;
    float OBJ_Buffer_C1;
    float OBJ_Buffer_C2;
    float OBJ_Buffer_C3;
    uint8_T OBJ_Camera_Source;
    uint8_T OBJ_Motion_Status;
    uint8_T OBJ_Motion_Orientation;
    uint8_T OBJ_Has_Cut_Lane;
    uint8_T OBJ_Has_Cut_Path;
    uint8_T OBJ_Brake_Light;
    uint8_T OBJ_Turn_Indicator_Right;
    uint8_T OBJ_Turn_Indicator_Left;
    uint8_T OBJ_Light_Indicator_Validity;
    uint8_T OBJ_Right_Out_Of_Image;
    uint8_T OBJ_Left_Out_Of_Image;
    uint8_T OBJ_Right_Out_Of_Image_V;
    uint8_T OBJ_Left_Out_Of_Image_V;
    uint8_T OBJ_Top_Out_Of_Image;
    uint8_T OBJ_Bottom_Out_Of_Image;
    uint8_T OBJ_Top_Out_Of_Image_V;
    uint8_T OBJ_Bottom_Out_Of_Image_V;
    uint8_T OBJ_Lane_Assignment;
    uint8_T OBJ_Lane_Assignment_V;
    uint8_T OBJ_Age_Seconds;
    uint8_T OBJ_Age_Seconds_V;
    float OBJ_Width;
    uint8_T OBJ_Width_V;
    float OBJ_Width_STD;
    uint8_T OBJ_Width_STD_V;
    float OBJ_Length;
    uint8_T OBJ_Length_V;
    float OBJ_Length_STD;
    uint8_T OBJ_Length_STD_V;
    uint8_T OBJ_Radar_ID;
    float OBJ_Height;
    uint8_T OBJ_Height_V;
    uint8_T Reserved_5;
    float OBJ_Height_STD;
    uint8_T OBJ_Height_STD_V;
    float OBJ_Abs_Long_Velocity;
    uint8_T OBJ_Abs_Long_Velocity_V;
    uint8_T Reserved_6;
    float OBJ_Abs_Long_Velocity_STD;
    uint8_T OBJ_Abs_Long_Vel_STD_V;
    float OBJ_Abs_Lat_Velocity;
    uint8_T OBJ_Abs_Lat_Velocity_V;
    uint8_T Reserved_7;
    float OBJ_Abs_Lat_Velocity_STD;
    uint8_T OBJ_Abs_Lat_Vel_STD_V;
    float OBJ_Abs_Long_Acc;
    uint8_T OBJ_Abs_Long_Acc_V;
    uint8_T Reserved_8;
    float OBJ_Abs_Long_Acc_STD;
    uint8_T OBJ_Abs_Long_Acc_STD_V;
    float OBJ_Abs_Lat_Acc;
    uint8_T OBJ_Abs_Lat_Acc_V;
    float OBJ_Abs_Lat_Acc_STD;
    uint8_T OBJ_Abs_Lat_Acc_STD_V;
    float OBJ_Abs_Acceleration;
    uint8_T OBJ_Abs_Acceleration_V;
    float OBJ_Abs_Acc_STD;
    uint8_T OBJ_Abs_Acc_STD_V;
    float OBJ_Inv_TTC;
    uint8_T OBJ_Inv_TTC_V;
    float OBJ_Inv_TTC_STD;
    uint8_T OBJ_Inv_TTC_STD_V;
    float OBJ_Relative_Long_Acc;
    uint8_T OBJ_Relative_Long_Acc_V;
    uint8_T Reserved_9;
    float OBJ_Relative_Long_Acc_STD;
    uint8_T OBJ_Rel_Long_Acc_STD_V;
    float OBJ_Relative_Long_Velocity;
    uint8_T OBJ_Relative_Long_Velocity_V;
    uint8_T Reserved_10;
    float OBJ_Relative_Long_Vel_STD;
    uint8_T OBJ_Rel_Long_Vel_STD_V;
    float OBJ_Relative_Lat_Velocity;
    uint8_T OBJ_Relative_Lat_Velocity_V;
    uint8_T Reserved_11;
    float OBJ_Relative_Lat_Velocity_STD;
    uint8_T OBJ_Rel_Lat_Vel_STD_V;
    float OBJ_Long_Distance;
    uint8_T OBJ_Long_Distance_V;
    uint8_T Reserved_12;
    float OBJ_Long_Distance_STD;
    uint8_T OBJ_Long_Distance_STD_V;
    float OBJ_Lat_Distance;
    uint8_T OBJ_Lat_Distance_V;
    uint8_T Reserved_13;
    float OBJ_Lat_Distance_STD;
    uint8_T OBJ_Lat_Distance_STD_V;
    float OBJ_Absolute_Speed;
    uint8_T OBJ_Absolute_Speed_V;
    uint8_T Reserved_14;
    float OBJ_Absolute_Speed_STD;
    uint8_T OBJ_Absolute_Speed_STD_V;
    float OBJ_Heading;
    uint8_T OBJ_Heading_V;
    uint8_T Reserved_15;
    float OBJ_Heading_STD;
    uint8_T OBJ_Heading_STD_V;
    float OBJ_Angle_Rate_STD;
    uint8_T OBJ_Angle_Rate_STD_V;
    float OBJ_Angle_Rate;
    uint8_T OBJ_Angle_Rate_V;
    float OBJ_Angle_Right;
    uint8_T OBJ_Angle_Right_V;
    uint8_T Reserved_16;
    float OBJ_Angle_Right_STD;
    uint8_T OBJ_Angle_Right_STD_V;
    float OBJ_Angle_Left;
    uint8_T OBJ_Angle_Left_V;
    uint8_T Reserved_17;
    float OBJ_Angle_Left_STD;
    uint8_T OBJ_Angle_Left_STD_V;
    float OBJ_Angle_Side;
    uint8_T OBJ_Angle_Side_V;
    uint8_T Reserved_18;
    float OBJ_Angle_Side_STD;
    uint8_T OBJ_Angle_Side_STD_V;
    uint8_T OBJ_Angle_Mid_V;
    float OBJ_Angle_Mid;
    uint8_T Reserved_19;
    float OBJ_Angle_Mid_STD;
    uint8_T OBJ_Angle_Mid_STD_V;
    uint8_T OBJ_Angle_Bottom_V;
    float OBJ_Angle_Bottom;
    uint8_T Reserved_20;
    float OBJ_Angle_Bottom_STD;
    uint8_T OBJ_Angle_Bottom_STD_V;
    uint8_T OBJ_Visibility_Side_V;
    uint8_T OBJ_Visibility_Side;
    uint8_T OBJ_Is_In_Drivable_Area;
    uint8_T OBJ_Is_In_Drivable_Area_V;
    uint8_T OBJ_Is_VeryClose_V;
    uint8_T OBJ_Is_VeryClose;
    uint8_T OBJ_Buffer_C4;
    uint8_T OBJ_Buffer_C5;
    uint8_T OBJ_Buffer_C6;
    uint8_T OBJ_Buffer_C7;
    uint8_T Reserved_21;
    float OBJ_Buffer_C8;
    float OBJ_Buffer_C9;
    uint8_T OBJ_Is_EMERGENCY_VCL;
    uint8_T OBJ_EMERGENCY_LIGHT_COLOR;
    uint8_T OBJ_EMERGENCY_V;
    uint8_T Reserved_22;
} SPI_EQ4_OBJ_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_HDR_BUS_

typedef struct {
    uint8_T SD_Zero_byte;
    uint8_T Reserved_1;
    uint32_T SD_CRC;
    uint8_T SD_Protocol_Version;
    uint8_T SD_Sync_ID;
    uint8_T SD_Challenge_Response1;
    uint8_T SD_Challenge_Response2;
    uint8_T SD_Challenge_Response3;
    uint8_T SD_Challenge_Response4;
    uint8_T SD_Challenge_Identifier;
    uint8_T Reserved_2;
    uint16_T Reserved_3;
} SPI_EQ4_SD_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_ELEM_BUS_

typedef struct {
    uint8_T SD_Bit;
} SPI_EQ4_SD_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_HDR_BUS_

typedef struct {
    uint8_T TFL_Spot_Zero_byte;
    uint8_T TFL_Spot_Protocol_Version;
    uint8_T TFL_Spot_Sync_ID;
    uint8_T TFL_Spot_Number_Of_Objects;
    uint8_T Reserved_1;
    uint8_T Reserved_2;
    uint16_T Reserved_3;
} SPI_EQ4_TFL_SPOTS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_ELEM_BUS_

typedef struct {
    uint8_T TFL_Spot_Spot_ID;
    uint8_T TFL_Spot_Structure_ID;
    uint8_T TFL_Spot_Color;
    float TFL_Spot_Red_Probability;
    float TFL_Spot_Orange_Probability;
    float TFL_Spot_Green_Probability;
    uint8_T TFL_Spot_Mode;
    uint8_T TFL_Spot_Shape;
    float TFL_Spot_Shape_Probability;
    float TFL_Spot_Relevancy;
    uint8_T TFL_Spot_Buffer_C0;
    uint8_T Reserved_2;
    float TFL_Spot_Buffer_C1;
    uint8_T TFL_Spot_Buffer_C2;
    uint8_T Reserved_3;
    uint16_T Reserved_4;
} SPI_EQ4_TFL_SPOTS_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_HDR_BUS_

typedef struct {
    uint8_T TFL_Struct_Zero_byte;
    uint8_T TFL_Struct_Protocol_Version;
    uint8_T TFL_Struct_Sync_ID;
    uint8_T TFL_Struct_Count;
    uint8_T TFL_Struct_Buffer_C9;
    uint8_T Reserved_1;
    uint16_T Reserved_2;
} SPI_EQ4_TFL_STRUCT_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_ELEM_BUS_

typedef struct {
    uint8_T TFL_Struct_ID;
    uint8_T TFL_Struct_Age;
    uint8_T TFL_Struct_State;
    uint8_T TFL_Struct_State_Age;
    uint8_T TFL_Struct_State_Confidence;
    float TFL_Struct_Relevancy_Score;
    uint8_T TFL_Struct_Detection_Camera;
    uint16_T TFL_Struct_Type;
    uint8_T Reserved_2;
    float TFL_Struct_Type_Conf;
    float TFL_Struct_Lat_Distance;
    float TFL_Struct_Lat_Distance_STD;
    uint8_T Reserved_3;
    float TFL_Struct_Rel_Height;
    float TFL_Struct_Rel_Height_STD;
    float TFL_Struct_Long_Distance;
    uint8_T Reserved_4;
    float TFL_Struct_Long_Distance_STD;
    float TFL_Struct_Buffer_C0;
    uint8_T Reserved_5;
    float TFL_Struct_Buffer_C1;
    uint8_T TFL_Struct_Image_Status;
    uint8_T TFL_Struct_Buffer_C2;
    float TFL_Struct_Buffer_C3;
    float TFL_Struct_Buffer_C4;
    uint8_T Reserved_6;
    float TFL_Struct_Buffer_C5;
    float TFL_Struct_Buffer_C6;
    float TFL_Struct_Buffer_C7;
    uint8_T TFL_Struct_Buffer_C8;
    uint8_T Reserved_7;
} SPI_EQ4_TFL_STRUCT_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_APP_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_APP_BUS_

#pragma pack(push)
#pragma pack(4)

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_APP_HDR_BUS EQ4_APP_HDR;
} SPI_EQ4_APP_BUS;

#pragma pack(pop)

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_COM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_COM_BUS_

#pragma pack(push)
#pragma pack(4)

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_COM_HDR_BUS EQ4_COM_HDR;
} SPI_EQ4_COM_BUS;

#pragma pack(pop)
#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_HDR_BUS_

typedef struct {
    uint8_T TSR_Zero_byte;
    uint8_T TSR_Protocol_Version;
    uint8_T TSR_Sync_ID;
    uint8_T TSR_Approved_Sign_Count;
    uint8_T TSR_Filtered_Sign_Count;
    uint8_T TSR_UnderTracking_Sign_Count;
    uint8_T Reserved_1;
} SPI_EQ4_TSR_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_ELEM_BUS_

typedef struct {
    uint8_T TSR_ID;
    uint8_T TSR_Camera_Source;
    uint16_T TSR_Sign_Name;
    uint8_T TSR_Relevancy;
    uint8_T Reserved_2;
    uint8_T TSR_Filter_Type;
    uint8_T TSR_Sup1_SignName;
    float TSR_Sup1_Confidence;
    uint8_T TSR_Sup1_Position;
    uint8_T TSR_Sup2_SignName;
    uint8_T Reserved_3;
    float TSR_Sup2_Confidence;
    uint8_T TSR_Sup2_Position;
    float TSR_Confidence;
    uint8_T TSR_Sign_Shape;
    uint8_T TSR_Sign_Structure;
    uint8_T Reserved_4;
    uint16_T TSR_Tracking_Age;
    float TSR_Sign_Long_Distance;
    uint8_T Reserved_5;
    float TSR_Sign_Long_Distance_STD;
    float TSR_Sign_Lateral_Distance;
    uint8_T Reserved_6;
    float TSR_Sign_Lat_Distance_STD;
    float TSR_Sign_Height;
    uint8_T Reserved_7;
    float TSR_Sign_Panel_Height_STD;
    float TSR_Sign_Height_STD;
    uint8_T Reserved_8;
    float TSR_Sign_Panel_Width;
    float TSR_Sign_Panel_Height;
    float TSR_Sign_Panel_Width_STD;
    uint8_T Reserved_9;
    uint8_T TSR_Measurement_Status;
    float TSR_AngleZ;
    float TSR_Relevancy_Confidence;
    uint8_T Reserved_10;
} SPI_EQ4_TSR_ELEM_BUS;

#endif


#pragma pack(push)
#pragma pack(4)
#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FSPX_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_FSPX_HDR_BUS EQ4_FSPX_HDR;
    SPI_EQ4_FSPX_ELEM_BUS EQ4_FSPX_ELEM[72];
} SPI_EQ4_FSPX_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_FS_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_FS_HDR_BUS EQ4_FS_HDR;
    SPI_EQ4_FS_ELEM_BUS EQ4_FS_ELEM[15];
} SPI_EQ4_FS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LAP_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_LAP_HDR_BUS EQ4_LAP_HDR;
    SPI_EQ4_LAP_ELEM_BUS EQ4_LAP_ELEM[8];
} SPI_EQ4_LAP_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LA_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_LA_HDR_BUS EQ4_LA_HDR;
    SPI_EQ4_LA_ELEM_BUS EQ4_LA_ELEM[4];
} SPI_EQ4_LA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LH_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_LH_HDR_BUS EQ4_LH_HDR;
    SPI_EQ4_LH_ELEM_BUS EQ4_LH_ELEM[2];
} SPI_EQ4_LH_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_LRE_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_LRE_HDR_BUS EQ4_LRE_HDR;
    SPI_EQ4_LRE_ELEM_BUS EQ4_LRE_ELEM[2];
} SPI_EQ4_LRE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_OBJ_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_OBJ_HDR_BUS EQ4_OBJ_HDR;
    SPI_EQ4_OBJ_ELEM_BUS EQ4_OBJ_ELEM[20];
} SPI_EQ4_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_SD_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_SD_HDR_BUS EQ4_SD_HDR;
    SPI_EQ4_SD_ELEM_BUS EQ4_SD_ELEM[64];
} SPI_EQ4_SD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_SPOTS_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_TFL_SPOTS_HDR_BUS EQ4_TFL_SPOTS_HDR;
    SPI_EQ4_TFL_SPOTS_ELEM_BUS EQ4_TFL_SPOTS_ELEM[50];
} SPI_EQ4_TFL_SPOTS_BUS;

#endif


#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TFL_STRUCT_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_TFL_STRUCT_HDR_BUS EQ4_TFL_STRUCT_HDR;
    SPI_EQ4_TFL_STRUCT_ELEM_BUS EQ4_TFL_STRUCT_ELEM[20];
} SPI_EQ4_TFL_STRUCT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_SPI_EQ4_TSR_BUS_

typedef struct {
    SPI_EQ4_APPINFO_BUS EQ4_APPINFO;
    SPI_EQ4_TSR_HDR_BUS EQ4_TSR_HDR;
    SPI_EQ4_TSR_ELEM_BUS EQ4_TSR_ELEM[10];
} SPI_EQ4_TSR_BUS;

#endif

#pragma pack(pop)


#ifndef DEFINED_TYPEDEF_FOR_SPI2SOC_VISIONS_BUS_
#define DEFINED_TYPEDEF_FOR_SPI2SOC_VISIONS_BUS_

#pragma pack(4)
typedef struct {
    SPI_EQ4_APP_BUS EQ4_APP;
    SPI_EQ4_COM_BUS EQ4_COM;
    SPI_EQ4_FS_BUS EQ4_FS;
    SPI_EQ4_SD_BUS EQ4_SD;
    SPI_EQ4_FSPX_BUS EQ4_FSPX;
    SPI_EQ4_LA_BUS EQ4_LA;
    SPI_EQ4_LAP_BUS EQ4_LAP;
    SPI_EQ4_LH_BUS EQ4_LH;
    SPI_EQ4_LRE_BUS EQ4_LRE;
    SPI_EQ4_OBJ_BUS EQ4_OBJ;
    SPI_EQ4_TFL_SPOTS_BUS EQ4_TFL_SPOTS;
    SPI_EQ4_TFL_STRUCT_BUS EQ4_TFL_STRUCT;
    SPI_EQ4_TSR_BUS EQ4_TSR;
} SPI2SOC_VISIONS_BUS;
#pragma pack()

#endif


#ifdef SOC_ALIGN
#pragma pack()
#else
#pragma pack 0
#endif

struct UDP_HEADER {
	uint32_T frame_counter;
	uint16_T total_pack_count;
	uint16_T pack_counter;
	uint16_T data_id;
	uint16_T reserved;
};
typedef enum {
	RADARS = 1,
	VISIONS = 2,
	VCAN_IMU = 3,
	DPINFO = 6
} msg_type_t;

void udpParse(uint8_T *inputdata, uint32_T *inputSize,
			  uint8_T *msgComplite,
			  SPI2SOC_VISIONS_BUS *outMsg
			 );
#endif
