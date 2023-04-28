/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "autosar_swc_infofusion"
   ARXML schema: "4.3"
   File generated on: "23-Nov-2020 10:58:50"  */

#ifndef RFM_Rte_Type_h
#define RFM_Rte_Type_h
#include "rtwtypes.h"
#include "Platform_Types_Road.h"
/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
typedef uint8 StbM_TimeBaseStatusType;
typedef uint8 Std_ReturnType;

/* AUTOSAR Structure Types */
#ifndef DEFINED_TYPEDEF_FOR_EHRV2_CTRL_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_EHRV2_CTRL_INFO_BUS_

typedef struct {
  UInt8 SpeedLimit;
  UInt8 SpeedLimitType;
  UInt8 SpeedUnit;
  UInt16 ElectronicEyeDistance;
  UInt8 ElectronicEyeSpeedLimit;
  Float RoadCurvature;
  Float RoadCurvatureFar;
  UInt16 RoadCurvatureFarDistance;
  Float RoadSlope;
  Float RoadSlopeFar;
  Float RoadCurvatureValueMatrix[10];
  Float RoadCurvatureDistanceMatrix[10];
  UInt8 RoadCurvatureMatrixSize;
  Float RoadSlopeValueMatrix[10];
  Float RoadSlopeDistanceMatrix[10];
  UInt8 RoadSlopeMatrixSize;
  UInt16 MultiWayIntersectionDistance;
} EHRV2_CTRL_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EHRV2_ROAD_ATTR_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_EHRV2_ROAD_ATTR_INFO_BUS_

typedef struct {
  UInt8 DrivingOnHighWay;
  UInt8 FormOfWay;
  UInt16 TunnelDistance;
  UInt8 EnterTunnelInfo;
  UInt16 BridgeDistance;
  UInt8 EnterBridgeInfo;
  UInt16 RampDistance;
  UInt16 RampInDistance;
  UInt16 RampOutDistance;
  UInt8 NumOfLaneDrvDir;
  UInt16 TrafficSignDistance;
  UInt8 TrafficSignValue;
  UInt8 WeatherType;
  SInt8 Temperature;
  UInt16 TrafficJamDistance;
  UInt16 TrafficJamDistanceHold;
  UInt16 RepairRoadPointDistance;
  UInt16 CtrlPointDistance;
  UInt8 FuncRoadClass;
  UInt8 BuildUpArea;
  UInt16 CmplxInsctDistance;
  UInt16 CountryCode;
  UInt8 Stub_Type;
  UInt8 StubRamp_Dir;
  UInt8 Ramp_Type;
  UInt8 OnNavPath;
} EHRV2_ROAD_ATTR_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_

typedef struct {
  UInt32 APP_SyncTs;
  UInt8 APP_SyncTsValid;
  UInt8 APP_E2EStatus;
} EQ4_APPINFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FSPX_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FSPX_HDR_BUS_

typedef struct {
  UInt8 FSPX_Zero_byte;
  UInt8 FSPX_Protocol_Version;
  UInt8 FSPX_Sync_ID;
  UInt8 FSPX_Header_Buffer;
} EQ4_FSPX_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FSPX_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FSPX_ELEM_BUS_

typedef struct {
  UInt8 FSPX_Is_Valid;
  Float FSPX_Existence_Prob_B0;
  UInt8 FSPX_Mobility_Status_B0;
  Float FSPX_Classification_Conf_B0;
  UInt8 FSPX_Classification_Type_B0;
  UInt8 FSPX_Lane_Assginment_B0;
  UInt8 Reserved_1;
  UInt8 FSPX_Obsticle_ID_B0;
  Float FSPX_Elevation_Angle_B0;
  Float FSPX_Range_STD_B0;
  UInt8 Reserved_2;
  Float FSPX_Height_B0;
  Float FSPX_Height_STD_B0;
  Float FSPX_Azimuth_Angle_B0;
  Float FSPX_Azimuth_Angle_STD_B0;
  Float FSPX_Range_B0;
  UInt8 Reserved_3;
} EQ4_FSPX_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_HDR_BUS_

typedef struct {
  UInt8 FSP_Zero_byte;
  UInt8 Reserved_1;
  UInt32 FS_Header_CRC;
  UInt8 FS_Protocol_Version;
  UInt8 FS_Sync_ID;
  UInt8 FS_Cameras_Number;
  UInt8 FS_TSR_Out_OF_Calib;
  UInt8 FS_Out_Of_Calib;
  UInt8 Reserved_2;
  UInt16 FS_Impacted_Technologies;
  UInt8 FS_Rain;
  UInt8 FS_Fog;
  UInt8 FS_Calibration_Misalignment;
  UInt8 FS_C2W_OOR;
  UInt8 Reserved_3;
} EQ4_FS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_ELEM_BUS_

typedef struct {
  UInt32 FS_CRC;
  UInt8 FS_Camera_ID;
  UInt8 FS_Free_Sight;
  UInt8 FS_Splashes;
  UInt8 FS_Sun_Ray;
  UInt8 FS_Low_Sun;
  UInt8 FS_Blur_Image;
  UInt8 FS_Partial_Blockage;
  UInt8 FS_Full_Blockage;
  UInt8 FS_Frozen_Windshield_Lens;
  UInt8 FS_Out_Of_Focus;
  UInt8 FS_C2C_Out_Of_Calib;
} EQ4_FS_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_HDR_BUS_

typedef struct {
  UInt8 LAP_Zero_byte;
  UInt8 LAP_Protocol_Version;
  UInt8 LAP_Sync_ID;
  UInt8 LAP_Is_Construction_Area;
  UInt8 LAP_Buffer_C0;
  UInt8 LAP_INTP_Available;
  UInt8 LAP_INTP_Count;
  UInt8 LAP_Exit_Merge_Available;
  UInt8 LAP_Is_Highway_Merge_Left;
  UInt8 LAP_Is_Highway_Merge_Right;
  UInt8 LAP_Is_Highway_Exit_Left;
  UInt8 LAP_Is_Highway_Exit_Right;
  UInt8 LAP_Vertical_Surface_Available;
  Float LAP_Vertical_Surface_VR_End;
  UInt8 Reserved_1;
  Float LAP_Vertical_Surface_C0;
  Float LAP_Vertical_Surface_C1;
  Float LAP_Vertical_Surface_C2;
  Float LAP_Vertical_Surface_C3;
  UInt32 LAP_Path_Pred_CRC;
  UInt8 LAP_Path_Pred_Available;
  UInt8 LAP_Path_Pred_First_Valid;
  UInt8 LAP_Path_Pred_Second_Valid;
  Float LAP_Path_Pred_Half_Width;
  Float LAP_Path_Pred_Conf;
  UInt8 LAP_Is_Triggered_SDM_Model;
  UInt8 Reserved_2;
  Float LAP_Path_Pred_First_VR_End;
  Float LAP_Path_Pred_second_VR_End;
  UInt8 Reserved_3;
  Float LAP_Path_Pred_First_C0;
  Float LAP_Path_Pred_First_C1;
  Float LAP_Path_Pred_First_C2;
  Float LAP_Path_Pred_First_C3;
  Float LAP_Path_Pred_Second_C0;
  Float LAP_Path_Pred_Second_C1;
  Float LAP_Path_Pred_Second_C2;
  Float LAP_Path_Pred_Second_C3;
} EQ4_LAP_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_ELEM_BUS_

typedef struct {
  UInt8 LAP_INTP_ID;
  UInt8 LAP_INTP_Distance_Age;
  Float LAP_INTP_Confidence;
  UInt8 LAP_INTP_Is_Valid;
  UInt8 LAP_INTP_Type;
  UInt8 LAP_INTP_Is_Start;
  UInt8 Reserved_4;
  Float LAP_INTP_Lat_Distance;
  Float LAP_INTP_Long_Distance;
  UInt8 Reserved_5;
  UInt8 LAP_Buffer_C1;
  UInt8 LAP_Buffer_C2;
  UInt8 Reserved_6;
} EQ4_LAP_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_HDR_BUS_

typedef struct {
  UInt8 LA_Zero_byte;
  UInt8 LA_Protocol_Version;
  UInt8 LA_Sync_ID;
  UInt8 LA_Adjacent_Count;
  UInt8 Reserved_1;
} EQ4_LA_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_ELEM_BUS_

typedef struct {
  UInt8 LA_Lane_Track_ID;
  UInt8 LA_Age;
  Float LA_Confidence;
  UInt8 LA_Color;
  Float LA_Color_Conf;
  UInt8 LA_Prediction_Reason;
  UInt8 LA_Availability_State;
  Float LA_View_Range_Start;
  UInt8 Reserved_2;
  Float LA_View_Range_End;
  Float LA_Measured_VR_End;
  UInt8 Reserved_3;
  UInt8 LA_Lanemark_Type;
  UInt8 LA_DLM_Type;
  Float LA_Lanemark_Type_Conf;
  UInt8 LA_Line_Side;
  Float LA_Marker_Width;
  UInt8 Reserved_4;
  Float LA_Marker_Width_STD;
  UInt8 Reserved_5;
  Float LA_Line_C3;
  Float LA_Line_C2;
  Float LA_Line_C1;
  Float LA_Line_C0;
  UInt8 LH_Buffer_C1;
  UInt8 Reserved_6;
} EQ4_LA_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_HDR_BUS_

typedef struct {
  UInt8 LH_Zero_byte;
  UInt8 LH_Protocol_Version;
  UInt8 LH_Sync_ID;
  UInt8 LH_Lanes_Count;
  UInt8 Reserved_1;
  Float LH_Estimated_Width;
  UInt8 Reserved_2;
} EQ4_LH_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_ELEM_BUS_

typedef struct {
  UInt32 LH_CRC;
  UInt8 LH_Is_Triggered_SDM_Type;
  UInt8 LH_Is_Triggered_SDM_Model;
  UInt8 LH_Track_ID;
  UInt8 LH_Age;
  Float LH_Confidence;
  UInt8 Reserved_3;
  UInt8 LH_Prediction_Reason;
  UInt8 LH_Availability_State;
  UInt8 LH_Color;
  Float LH_Color_Confidence;
  UInt8 LH_Lanemark_Type;
  UInt8 LH_DLM_Type;
  UInt8 LH_DECEL_Type;
  UInt8 Reserved_4;
  Float LH_Lanemark_Type_Conf;
  UInt8 LH_Side;
  UInt8 LH_Crossing;
  Float LH_Marker_Width;
  Float LH_Marker_Width_STD;
  UInt8 Reserved_5;
  Float LH_Dash_Average_Length;
  Float LH_Dash_Average_Gap;
  UInt8 LH_Is_Multi_Clothoid;
  UInt8 Reserved_6;
  Float LH_Line_First_C0;
  Float LH_Line_First_C1;
  Float LH_Line_First_C2;
  Float LH_Line_First_C3;
  Float LH_First_VR_Start;
  Float LH_First_VR_End;
  UInt8 Reserved_7;
  Float LH_First_Measured_VR_End;
  Float LH_Second_Measured_VR_End;
  UInt8 Reserved_8;
  Float LH_Line_Second_C0;
  Float LH_Line_Second_C1;
  Float LH_Line_Second_C2;
  Float LH_Line_Second_C3;
  Float LH_Second_VR_Start;
  Float LH_Second_VR_End;
  UInt8 LH_Buffer_C3;
} EQ4_LH_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_HDR_BUS_

typedef struct {
  UInt8 LRE_Zero_byte;
  UInt8 Reserved_1;
  UInt32 LRE_CRC;
  UInt8 LRE_Protocol_Version;
  UInt8 LRE_Sync_ID;
  UInt8 LRE_Count;
  UInt8 LRE_Header_Buffer;
} EQ4_LRE_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_ELEM_BUS_

typedef struct {
  UInt8 LRE_ID;
  UInt8 LRE_Age;
  Float LRE_Confidence;
  UInt8 LRE_Type;
  UInt8 Reserved_2;
  UInt8 LRE_Prediction_Reason;
  UInt8 LRE_Availability_State;
  Float LRE_Height;
  Float LRE_Height_STD;
  UInt8 Reserved_3;
  Float LRE_View_Range_Start;
  Float LRE_View_Range_End;
  UInt8 Reserved_4;
  Float LRE_Measured_VR_End;
  UInt8 LRE_Side;
  UInt8 LRE_Is_Triggered_SDM_Model;
  UInt8 Reserved_5;
  Float LRE_Line_C3;
  Float LRE_Line_C2;
  Float LRE_Line_C1;
  Float LRE_Line_C0;
  UInt8 LRE_Detection_Source;
  UInt8 Reserved_6;
} EQ4_LRE_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_HDR_BUS_

typedef struct {
  UInt8 TFL_Spot_Zero_byte;
  UInt8 TFL_Spot_Protocol_Version;
  UInt8 TFL_Spot_Sync_ID;
  UInt8 TFL_Spot_Number_Of_Objects;
  UInt8 Reserved_1;
} EQ4_TFL_SPOTS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_ELEM_BUS_

typedef struct {
  UInt8 TFL_Spot_Spot_ID;
  UInt8 TFL_Spot_Structure_ID;
  UInt8 TFL_Spot_Color;
  Float TFL_Spot_Red_Probability;
  Float TFL_Spot_Orange_Probability;
  Float TFL_Spot_Green_Probability;
  UInt8 TFL_Spot_Mode;
  UInt8 TFL_Spot_Shape;
  Float TFL_Spot_Shape_Probability;
  Float TFL_Spot_Relevancy;
  UInt8 TFL_Spot_Buffer_C0;
  UInt8 Reserved_2;
  Float TFL_Spot_Buffer_C1;
  UInt8 TFL_Spot_Buffer_C2;
  UInt8 Reserved_3;
} EQ4_TFL_SPOTS_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_HDR_BUS_

typedef struct {
  UInt8 TFL_Struct_Zero_byte;
  UInt8 TFL_Struct_Protocol_Version;
  UInt8 TFL_Struct_Sync_ID;
  UInt8 TFL_Struct_Count;
  UInt8 TFL_Struct_Buffer_C9;
  UInt8 Reserved_1;
} EQ4_TFL_STRUCT_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_ELEM_BUS_

typedef struct {
  UInt8 TFL_Struct_ID;
  UInt8 TFL_Struct_Age;
  UInt8 TFL_Struct_State;
  UInt8 TFL_Struct_State_Age;
  UInt8 TFL_Struct_State_Confidence;
  Float TFL_Struct_Relevancy_Score;
  UInt8 TFL_Struct_Detection_Camera;
  UInt16 TFL_Struct_Type;
  UInt8 Reserved_2;
  Float TFL_Struct_Type_Conf;
  Float TFL_Struct_Lat_Distance;
  Float TFL_Struct_Lat_Distance_STD;
  UInt8 Reserved_3;
  Float TFL_Struct_Rel_Height;
  Float TFL_Struct_Rel_Height_STD;
  Float TFL_Struct_Long_Distance;
  UInt8 Reserved_4;
  Float TFL_Struct_Long_Distance_STD;
  Float TFL_Struct_Buffer_C0;
  UInt8 Reserved_5;
  Float TFL_Struct_Buffer_C1;
  UInt8 TFL_Struct_Image_Status;
  UInt8 TFL_Struct_Buffer_C2;
  Float TFL_Struct_Buffer_C3;
  Float TFL_Struct_Buffer_C4;
  UInt8 Reserved_6;
  Float TFL_Struct_Buffer_C5;
  Float TFL_Struct_Buffer_C6;
  Float TFL_Struct_Buffer_C7;
  UInt8 TFL_Struct_Buffer_C8;
  UInt8 Reserved_7;
} EQ4_TFL_STRUCT_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TSR_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TSR_HDR_BUS_

typedef struct {
  UInt8 TSR_Zero_byte;
  UInt8 TSR_Protocol_Version;
  UInt8 TSR_Sync_ID;
  UInt8 TSR_Approved_Sign_Count;
  UInt8 TSR_Filtered_Sign_Count;
  UInt8 TSR_UnderTracking_Sign_Count;
  UInt8 Reserved_1;
} EQ4_TSR_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TSR_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TSR_ELEM_BUS_

typedef struct {
  UInt8 TSR_ID;
  UInt8 TSR_Camera_Source;
  UInt16 TSR_Sign_Name;
  UInt8 TSR_Relevancy;
  UInt8 Reserved_2;
  UInt8 TSR_Filter_Type;
  UInt8 TSR_Sup1_SignName;
  Float TSR_Sup1_Confidence;
  UInt8 TSR_Sup1_Position;
  UInt8 TSR_Sup2_SignName;
  UInt8 Reserved_3;
  Float TSR_Sup2_Confidence;
  UInt8 TSR_Sup2_Position;
  Float TSR_Confidence;
  UInt8 TSR_Sign_Shape;
  UInt8 TSR_Sign_Structure;
  UInt8 Reserved_4;
  UInt16 TSR_Tracking_Age;
  Float TSR_Sign_Long_Distance;
  UInt8 Reserved_5;
  Float TSR_Sign_Long_Distance_STD;
  Float TSR_Sign_Lateral_Distance;
  UInt8 Reserved_6;
  Float TSR_Sign_Lat_Distance_STD;
  Float TSR_Sign_Height;
  UInt8 Reserved_7;
  Float TSR_Sign_Panel_Height_STD;
  Float TSR_Sign_Height_STD;
  UInt8 Reserved_8;
  Float TSR_Sign_Panel_Width;
  Float TSR_Sign_Panel_Height;
  Float TSR_Sign_Panel_Width_STD;
  UInt8 Reserved_9;
  UInt8 TSR_Measurement_Status;
  Float TSR_AngleZ;
  Float TSR_Relevancy_Confidence;
  UInt8 Reserved_10;
} EQ4_TSR_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HM_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_HM_CAN_FD_MESSAGE_BUS_

typedef struct {
  UInt8 ProtocolMode;
  UInt8 Extended;
  UInt8 Length;
  UInt8 Remote;
  UInt8 Error;
  UInt8 BRS;
  UInt8 ESI;
  UInt8 DLC;
  UInt32 ID;
  UInt32 Reserved;
  Double Timestamp;
  UInt8 Data[64];
} HM_CAN_FD_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MRR_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_MRR_HDR_BUS_

typedef struct {
  UInt8 MRR_hdr_ErrorStatus;
  Float MRR_hdr_TimeStamp;
  UInt8 MRR_hdr_TimeStampStatus;
  UInt8 MRR_ABM_ErrorStatus;
  UInt8 MRR_ESP_ErrorStatus;
  UInt8 MRR_SAS_ErrorStatus;
  UInt32 MRR_hdr_AutosarTimeStamp;
} MRR_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MRR_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_MRR_OBJ_BUS_

typedef struct {
  UInt8 MRR_ObjID;
  Float MRR_ObjExistProb;
  Float MRR_ObjObstacleProb;
  Float MRR_ObjDistX;
  Float MRR_ObjDistY;
  Float MRR_ObjRelVelX;
  Float MRR_ObjRelVelY;
  Float MRR_ObjRelAccelX;
  Float MRR_ObjRelAccelY;
  Float MRR_ObjDistXStd;
  Float MRR_ObjDistYStd;
  Float MRR_ObjRelVelXStd;
  Float MRR_ObjRelVelYStd;
  Float MRR_ObjRAccelXStd;
  Float MRR_ObjRAccelYStd;
  UInt8 MRR_ObjType;
  UInt8 MRR_ObjMotionType;
  Float VFC_ObjWidth;
  Float VFC_ObjLength;
  Float VFC_ObjHeight;
  UInt8 VFC_ObjMotionDirection;
} MRR_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_BRANCH_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_BRANCH_BUS_

typedef struct {
  UInt8 b_available;
  Float f_turning_angle;
  UInt8 en_RoadClass;
} RFM_BRANCH_BUS;

#endif
#ifndef DEFINED_TYPEDEF_FOR_RFM_INTERSEC_ALERT_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_INTERSEC_ALERT_BUS_

typedef struct {
  UInt8 b_is_available;
  Float f_distance;
  UInt8 en_direction;
  UInt8 en_type;
} RFM_INTERSEC_ALERT_BUS;

#endif
#ifndef DEFINED_TYPEDEF_FOR_RFM_LANE_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_LANE_BUS_

typedef struct {
  UInt8 b_is_avalible;
  UInt8 en_lane_type;
  UInt8 i_speed_max;
  Float f_spd_change_dis;
  UInt8 i_change_spd_max;
  Float f_width;
  UInt8 b_vanish_valid;
  Float f_vanish_pt_dis;
} RFM_LANE_BUS;

#endif
#ifndef DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_

typedef struct {
  UInt8 bIsLineExist;
  Float dC0V;
  Float dC1V;
  Float dC2V;
  Float dC3V;
  Float dLaneWidth;
  UInt8 eLineType;
  Float dDisStart;
  Float dDisFront;
  Float dQuality;
  UInt8 eColour;
  UInt8 eFuType;
  UInt8 nTrackAge;
} RFM_LINE_BUS;

#endif







#ifndef DEFINED_TYPEDEF_FOR_RFM_REC_LANES_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_REC_LANES_BUS_

typedef struct {
  UInt8 i_rec_lanes_num;
  UInt8 i_rec_lanes[8];
} RFM_REC_LANES_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_ROAD_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_ROAD_BUS_

typedef struct {
  UInt8 nLaneID;
  UInt8 nLaneNum;
  Float dCurrentLaneWidth;
  Float dLeftLaneWidth;
  Float dRightLaneWidth;
  UInt8 bCurrentLaneFree;
  Float fCurrentLaneFreeDis;
  UInt8 bLeftLaneFree;
  Float fLeftLaneFreeDis;
  UInt8 bRightLaneFree;
  Float fRighLaneFreeDis;
  UInt8 b_toll;
  Float f_toll_distance;
  UInt8 b_tunnel;
  Float f_tunnel_distance;
  UInt8 b_bridge;
  Float f_bridge_distance;
  UInt8 b_traffic_jam;
  Float f_distance_to_jam;
  UInt8 b_traffic_accident;
  Float f_distance_to_accident;
  UInt8 en_weather;
} RFM_ROAD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_TSR_BUS_

typedef struct {
  UInt8 FUSSts;
  UInt32 RFframe_count;
  UInt8 CtryType;
  UInt8 RoadType;
  UInt8 SPL_TypeCurRoad;
  UInt8 SPL_ValueCurRoad;
  UInt16 VehToTrafEyeDist;
  UInt8 SPL_Unit;
  UInt8 SPL_End;
  UInt8 SPL_noSupp_Value;
  UInt8 SPL_whSupp_Value;
  UInt8 SPL_Sup1_SignName;
  Float SPL_Sup1_Confidence;
  UInt8 SPL_Sup2_SignName;
  Float SPL_Sup2_Confidence;
  UInt8 SPL_noSupp_LongDistance;
  UInt8 SPL_whSupp_LongDistance;
  UInt8 SPL_LeftLaneValue;
  UInt8 SPL_RightLaneValue;
  UInt8 TSR_ID;
  UInt8 TS_SignName;
  Float TS_Confidence;
  UInt8 TS_LongDistance;
  UInt8 VehInLeftmostLane;
  UInt8 VehInRightmostLane;
  UInt8 SPL_LaneChanged;
  UInt32 TSR_Sign_Long_Distance;
  Float TSR_Sign_Lateral_Distance;
} RFM_TSR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_StbM_TimeStampExtendedType_
#define DEFINED_TYPEDEF_FOR_StbM_TimeStampExtendedType_

typedef struct {
  StbM_TimeBaseStatusType timeBaseStatus;
  UInt32 nanoseconds;
  UInt32 seconds;
} StbM_TimeStampExtendedType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_StbM_UserDataType_
#define DEFINED_TYPEDEF_FOR_StbM_UserDataType_

typedef struct {
  UInt8 userDataLength;
  UInt8 userByte0;
  UInt8 userByte1;
  UInt8 userByte2;
} StbM_UserDataType;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FSPX_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FSPX_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_FSPX_HDR_BUS EQ4_FSPX_HDR;
  EQ4_FSPX_ELEM_BUS EQ4_FSPX_ELEM[72];
} EQ4_FSPX_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_FS_HDR_BUS EQ4_FS_HDR;
  EQ4_FS_ELEM_BUS EQ4_FS_ELEM[15];
} EQ4_FS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LAP_HDR_BUS EQ4_LAP_HDR;
  EQ4_LAP_ELEM_BUS EQ4_LAP_ELEM[8];
} EQ4_LAP_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LA_HDR_BUS EQ4_LA_HDR;
  EQ4_LA_ELEM_BUS EQ4_LA_ELEM[4];
} EQ4_LA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LH_HDR_BUS EQ4_LH_HDR;
  EQ4_LH_ELEM_BUS EQ4_LH_ELEM[2];
} EQ4_LH_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LRE_HDR_BUS EQ4_LRE_HDR;
  EQ4_LRE_ELEM_BUS EQ4_LRE_ELEM[2];
} EQ4_LRE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_SPOTS_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_TFL_SPOTS_HDR_BUS EQ4_TFL_SPOTS_HDR;
  EQ4_TFL_SPOTS_ELEM_BUS EQ4_TFL_SPOTS_ELEM[50];
} EQ4_TFL_SPOTS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TFL_STRUCT_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_TFL_STRUCT_HDR_BUS EQ4_TFL_STRUCT_HDR;
  EQ4_TFL_STRUCT_ELEM_BUS EQ4_TFL_STRUCT_ELEM[20];
} EQ4_TFL_STRUCT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_TSR_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_TSR_HDR_BUS EQ4_TSR_HDR;
  EQ4_TSR_ELEM_BUS EQ4_TSR_ELEM[10];
} EQ4_TSR_BUS;

#endif

/* AUTOSAR Array Types */
typedef EQ4_FSPX_ELEM_BUS rt_Array_EQ4_FSPX_ELEM_BUS_72[72];
typedef EQ4_FS_ELEM_BUS rt_Array_EQ4_FS_ELEM_BUS_15[15];
typedef EQ4_LAP_ELEM_BUS rt_Array_EQ4_LAP_ELEM_BUS_8[8];
typedef EQ4_LA_ELEM_BUS rt_Array_EQ4_LA_ELEM_BUS_4[4];
typedef EQ4_LH_ELEM_BUS rt_Array_EQ4_LH_ELEM_BUS_2[2];
typedef EQ4_LRE_ELEM_BUS rt_Array_EQ4_LRE_ELEM_BUS_2[2];
typedef EQ4_TFL_SPOTS_ELEM_BUS rt_Array_EQ4_TFL_SPOTS_ELEM_BUS_50[50];
typedef EQ4_TFL_STRUCT_ELEM_BUS rt_Array_EQ4_TFL_STRUCT_ELEM_BUS_20[20];
typedef EQ4_TSR_ELEM_BUS rt_Array_EQ4_TSR_ELEM_BUS_10[10];
typedef Float rt_Array_Float_10[10];
typedef MRR_OBJ_BUS rt_Array_MRR_OBJ_BUS_32[32];
typedef UInt8 rt_Array_UInt8_64[64];
typedef void* Rte_Instance;

#endif
