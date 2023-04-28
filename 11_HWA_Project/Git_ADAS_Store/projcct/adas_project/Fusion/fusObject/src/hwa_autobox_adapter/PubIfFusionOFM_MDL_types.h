/*
 * File: PubIfFusionOFM_MDL_types.h
 *
 * Code generated for Simulink model 'PubIfFusionOFM_MDL'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Mon Sep 21 20:23:31 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfFusionOFM_MDL_types_h_
#define RTW_HEADER_PubIfFusionOFM_MDL_types_h_
#include "..\hwa_autobox_adapter\rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_

typedef struct {
  uint8_T bIsLineExist;
  real32_T dC0V;
  real32_T dC1V;
  real32_T dC2V;
  real32_T dC3V;
  real32_T dLaneWidth;
  uint8_T eLineType;
  real32_T dDisStart;
  real32_T dDisFront;
  real32_T dQuality;
  uint8_T eColour;
  uint8_T eFuType;
  uint8_T nTrackAge;
} RFM_LINE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MRR_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_MRR_HDR_BUS_

typedef struct {
  /* Error status of radar */
  uint8_T MRR_hdr_ErrorStatus;

  /* Time taken for the object data to be processed (difference between receiving radar reflections, and sending objects on CAN). */
  real32_T MRR_hdr_TimeStamp;
  uint8_T MRR_hdr_TimeStampStatus;
  uint8_T MRR_ABM_ErrorStatus;
  uint8_T MRR_ESP_ErrorStatus;
  uint8_T MRR_SAS_ErrorStatus;
  uint32_T MRR_hdr_AutosarTimeStamp;
} MRR_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MRR_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_MRR_OBJ_BUS_

typedef struct {
  /* ID is an identifier number that allows for tracking of persistent objects over time. */
  uint8_T MRR_ObjID;

  /* The probability of an object to exist in reality. */
  real32_T MRR_ObjExistProb;

  /* The probability of an object being an obstacle. */
  real32_T MRR_ObjObstacleProb;

  /* Position of target vehicle in x-direction. */
  real32_T MRR_ObjDistX;

  /* Position of target vehicle in y-direction. */
  real32_T MRR_ObjDistY;

  /* Relative target object velocity in x-direction. */
  real32_T MRR_ObjRelVelX;

  /* Relative target object velocity in y-direction. */
  real32_T MRR_ObjRelVelY;

  /* Relative target object acceleration in x-direction. */
  real32_T MRR_ObjRelAccelX;

  /* Relative target object acceleration in y-direction. */
  real32_T MRR_ObjRelAccelY;

  /* Standard deviation of distance X */
  real32_T MRR_ObjDistXStd;

  /* Standard deviation of distance Y */
  real32_T MRR_ObjDistYStd;

  /* Standard deviation of Relative velocity X */
  real32_T MRR_ObjRelVelXStd;

  /* Standard deviation of Relative velocity Y */
  real32_T MRR_ObjRelVelYStd;

  /* Standard deviation of Relative Acceleration X */
  real32_T MRR_ObjRAccelXStd;

  /* Standard deviation of Relative Acceleration Y */
  real32_T MRR_ObjRAccelYStd;

  /* Class of object type. */
  uint8_T MRR_ObjType;

  /* Motion type of object */
  uint8_T MRR_ObjMotionType;

  /* Width of the object */
  real32_T VFC_ObjWidth;

  /* Length of the object */
  real32_T VFC_ObjLength;

  /* Height of the object */
  real32_T VFC_ObjHeight;

  /* Motion direction of object */
  uint8_T VFC_ObjMotionDirection;
} MRR_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CR_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_CR_HDR_BUS_

typedef struct {
  /* Error status of radar */
  uint8_T CR_hdr_ErrorStatus;

  /* Time taken for the object data to be processed (difference between receiving radar reflections, and sending objects on CAN). */
  real32_T CR_hdr_TimeStamp;

  /* <undefined> */
  uint8_T CR_hdr_TimeStampStatus;

  /* <undefined> */
  uint8_T CR_ABM_ErrorStatus;

  /* <undefined> */
  uint8_T CR_ESP_ErrorStatus;

  /* <undefined> */
  uint8_T CR_SAS_ErrorStatus;

  /* <undefined> */
  uint32_T CR_hdr_AutosarTimeStamp;
} CR_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CR_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_CR_OBJ_BUS_

typedef struct {
  /* ID is an identifier number that allows for tracking of persistent objects over time. */
  uint8_T CR_ObjID;

  /* The probability of an object to exist in reality. */
  real32_T CR_ObjExistProb;

  /* The probability of an object being an obstacle. */
  real32_T CR_ObjObstacleProb;

  /* Position of target vehicle in x-direction. */
  real32_T CR_ObjDistX;

  /* Position of target vehicle in y-direction. */
  real32_T CR_ObjDistY;

  /* Relative target object velocity in x-direction. */
  real32_T CR_ObjRelVelX;

  /* Relative target object velocity in y-direction. */
  real32_T CR_ObjRelVelY;

  /* Relative target object acceleration in x-direction. */
  real32_T CR_ObjRelAccelX;

  /* Relative target object acceleration in y-direction. */
  real32_T CR_ObjRelAccelY;

  /* Standard deviation of distance X */
  real32_T CR_ObjDistXStd;

  /* Standard deviation of distance Y */
  real32_T CR_ObjDistYStd;

  /* Standard deviation of Relative velocity X */
  real32_T CR_ObjRelVelXStd;

  /* Standard deviation of Relative velocity Y */
  real32_T CR_ObjRelVelYStd;

  /* Standard deviation of Relative Acceleration X */
  real32_T CR_ObjRAccelXStd;

  /* Standard deviation of Relative Acceleration Y */
  real32_T CR_ObjRAccelYStd;

  /* Width of the object */
  real32_T CR_VFC_ObjWidth;

  /* Length of the object */
  real32_T CR_VFC_ObjLength;
} CR_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RSDS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_RSDS_HDR_BUS_

typedef struct {
  /* Error status of radar */
  uint8_T RSDS_hdr_ErrorStatus;

  /* Time taken for the object data to be processed (difference between receiving radar reflections, and sending objects on CAN). */
  real32_T RSDS_hdr_TimeStamp;

  /* <undefined> */
  uint8_T RSDS_hdr_TimeStampStatus;

  /* <undefined> */
  uint8_T RSDS_ABM_ErrorStatus;

  /* <undefined> */
  uint8_T RSDS_ESP_ErrorStatus;

  /* <undefined> */
  uint8_T RSDS_SAS_ErrorStatus;

  /* <undefined> */
  uint32_T RSDS_hdr_AutosarTimeStamp;
} RSDS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RSDS_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_RSDS_OBJ_BUS_

typedef struct {
  /* ID is an identifier number that allows for tracking of persistent objects over time. */
  uint8_T RSDS_ObjID;

  /* The probability of an object to exist in reality. */
  real32_T RSDS_ObjExistProb;

  /* The probability of an object being an obstacle. */
  real32_T RSDS_ObjObstacleProb;

  /* Position of target vehicle in x-direction. */
  real32_T RSDS_ObjDistX;

  /* Position of target vehicle in y-direction. */
  real32_T RSDS_ObjDistY;

  /* Relative target object velocity in x-direction. */
  real32_T RSDS_ObjRelVelX;

  /* Relative target object velocity in y-direction. */
  real32_T RSDS_ObjRelVelY;

  /* Relative target object acceleration in x-direction. */
  real32_T RSDS_ObjRelAccelX;

  /* Relative target object acceleration in y-direction. */
  real32_T RSDS_ObjRelAccelY;

  /* Standard deviation of distance X */
  real32_T RSDS_ObjDistXStd;

  /* Standard deviation of distance Y */
  real32_T RSDS_ObjDistYStd;

  /* Standard deviation of Relative velocity X */
  real32_T RSDS_ObjRelVelXStd;

  /* Standard deviation of Relative velocity Y */
  real32_T RSDS_ObjRelVelYStd;

  /* Standard deviation of Relative Acceleration X */
  real32_T RSDS_ObjRAccelXStd;

  /* Standard deviation of Relative Acceleration Y */
  real32_T RSDS_ObjRAccelYStd;

  /* Width of the object */
  real32_T RSDS_VFC_ObjWidth;

  /* Length of the object */
  real32_T RSDS_VFC_ObjLength;
} RSDS_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_

typedef struct {
  uint32_T APP_SyncTs;
  uint8_T APP_SyncTsValid;
  uint8_T APP_E2EStatus;
} EQ4_APPINFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_OBJ_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_OBJ_HDR_BUS_

typedef struct {
  /* in case set to FF message is not available. */
  uint8_T OBJ_Zero_byte;
  uint8_T Reserved_1;

  /* CRC calculated over all header values. */
  uint32_T OBJ_Header_CRC;

  /* Denotes the protocol version */
  uint8_T OBJ_Protocol_Version;

  /* The ID of the Sync message, used to synchronize between signals in the system. Every new frame promotes the sync ID by one. */
  uint8_T OBJ_Sync_ID;

  /* The number of recognized Vulnerable Road Users (pedestrians, bicycles) in the scene. */
  uint8_T OBJ_VRU_Count;

  /* The number of recognized vehicles in the scene. */
  uint8_T OBJ_VD_Count;

  /* The number of recognized General Objects in the scene. */
  uint8_T OBJ_General_OBJ_Count;
  uint8_T Reserved_2;

  /* The number of recognized animals in the scene. */
  uint8_T OBJ_Animal_Count;

  /* The ID of the closet VD object to the left of the host. */
  uint8_T OBJ_VD_NIV_Left;

  /* The ID of the closet VD object to the right of the host. */
  uint8_T OBJ_VD_NIV_Right;

  /* The Current In Path Vehicle (CIPV) object ID. */
  uint8_T OBJ_VD_CIPV_ID;

  /* Reports a CIPV loss that cannot be explained to initiate a take over request. */
  uint8_T OBJ_VD_CIPV_Lost;

  /* This signal is intended to suppress acceleration in stop and go ACC scenarios when we suspect something is in our way. */
  uint8_T OBJ_VD_Allow_Acc;

  /* Indicates whether the left side is blocked for lane change. */
  uint8_T OBJ_Is_Blocked_Left;

  /* Indicates whether the right side is blocked for lane change. */
  uint8_T OBJ_Is_Blocked_Right;
  uint8_T Reserved_3;
} EQ4_OBJ_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_OBJ_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_OBJ_ELEM_BUS_

typedef struct {
  /* Calculated over each object signal */
  uint32_T OBJ_CRC;

  /* The detected object ID. Range is 1-255, while 0 indicates that the field in unfilled. */
  uint8_T OBJ_ID;

  /* The existence probability of the vehicle */
  real32_T OBJ_Existence_Probability;

  /* sources ids used for fusion */
  uint16_T OBJ_Fusion_Source;

  /* Indicates whether the object has trigered the SDM (Safety Diagnostic Manager) alert. */
  uint8_T OBJ_Triggered_SDM;

  /* Relevant for VD only. Full description of values can be found at the ACC guide. */
  uint8_T OBJ_Motion_Category;
  real32_T OBJ_Buffer_C0;

  /* The number of frames in which the object was recognized. */
  uint16_T OBJ_Object_Age;

  /* Measurment status. Old vs New marks if this is the first frame in which the object is reported. Predicted vs Measured marks if the report is raw or has been predicted forward in time using the measured dynamics and ego motion. */
  uint8_T OBJ_Measuring_Status;

  /* Indicates the object type. Uncertain is outputted in case the probability that a vehicle is a truck is very similar to the probability that it is a car. */
  uint8_T OBJ_Object_Class;
  uint8_T Reserved_4;

  /* The probability of this type classification. */
  real32_T OBJ_Class_Probability;
  real32_T OBJ_Buffer_C1;
  real32_T OBJ_Buffer_C2;
  real32_T OBJ_Buffer_C3;

  /* The camera in which this object was detected (best choice). */
  uint8_T OBJ_Camera_Source;

  /* MOVING - the object is moving
     STATIONARY - the object was never seen moving
     STOPPED -  the object was moving and has stopped
     MOVING_SLOWLY - the object is moving very slowly */
  uint8_T OBJ_Motion_Status;

  /* The direction of the targets heading compared to the host. */
  uint8_T OBJ_Motion_Orientation;

  /* Indicates whether the object cut the host's (right or left) lane. In case there are no lanes, indicates whether the objects is at most 1 meters away from the host. */
  uint8_T OBJ_Has_Cut_Lane;

  /* Indicates whether the object is in the host's path. */
  uint8_T OBJ_Has_Cut_Path;

  /* Indication for brake lights */
  uint8_T OBJ_Brake_Light;

  /* Indication for blinking right light. */
  uint8_T OBJ_Turn_Indicator_Right;

  /* Indication for blinking left light */
  uint8_T OBJ_Turn_Indicator_Left;

  /* Validator for light indicators */
  uint8_T OBJ_Light_Indicator_Validity;

  /* Indicates whether the measurment are predicted out of the right side of the image bounderies. */
  uint8_T OBJ_Right_Out_Of_Image;

  /* Indicates whether if measurment are predicted out of  the left side of the image bounderies */
  uint8_T OBJ_Left_Out_Of_Image;

  /* validator */
  uint8_T OBJ_Right_Out_Of_Image_V;

  /* validator */
  uint8_T OBJ_Left_Out_Of_Image_V;

  /* Indicates whether if measurment are predicted out of  the top of the image bounderies */
  uint8_T OBJ_Top_Out_Of_Image;

  /* Indicates whether if measurment are predicted out of  the bottom of the image bounderies */
  uint8_T OBJ_Bottom_Out_Of_Image;

  /* validator */
  uint8_T OBJ_Top_Out_Of_Image_V;

  /* validator */
  uint8_T OBJ_Bottom_Out_Of_Image_V;

  /* The object's lane relative to the host lane. */
  uint8_T OBJ_Lane_Assignment;

  /* Validator for lane assignment */
  uint8_T OBJ_Lane_Assignment_V;

  /* Time in seconds in which the object was recognized. */
  uint8_T OBJ_Age_Seconds;

  /* Validator for object age */
  uint8_T OBJ_Age_Seconds_V;

  /* The width of the target vehicle in the world (not to be mistaken with the width of the visible part of the vehicle). */
  real32_T OBJ_Width;

  /* Validator for object width */
  uint8_T OBJ_Width_V;

  /* Standard deviation for object width */
  real32_T OBJ_Width_STD;

  /* Validator for the standard deviation of object width */
  uint8_T OBJ_Width_STD_V;

  /* The length of the vehicle in the world. For crossing bicycles it gives the viewed length of the bicycle. */
  real32_T OBJ_Length;

  /* Validator for object length. */
  uint8_T OBJ_Length_V;

  /* Standard deviation for object length. */
  real32_T OBJ_Length_STD;

  /* Validator for the standard deviation of object length. */
  uint8_T OBJ_Length_STD_V;

  /* Radar Object ID of the Fused Object, Only relvant when OBJ_Fusion_Source is not Camera only */
  uint8_T OBJ_Radar_ID;

  /* The height of the object in the world. */
  real32_T OBJ_Height;

  /* Validator for object height. */
  uint8_T OBJ_Height_V;
  uint8_T Reserved_5;

  /* Standard deviation for object height. */
  real32_T OBJ_Height_STD;

  /* Validator for the standard deviation of object height. */
  uint8_T OBJ_Height_STD_V;

  /* Absolute longitudinal velocity. */
  real32_T OBJ_Abs_Long_Velocity;

  /* Validator for absolute longitudinal velocity. */
  uint8_T OBJ_Abs_Long_Velocity_V;
  uint8_T Reserved_6;

  /* Standard deviation of absolute longitudinal velocity. */
  real32_T OBJ_Abs_Long_Velocity_STD;

  /* Validator for the standard deviation of the absolute longitudinal velocity. */
  uint8_T OBJ_Abs_Long_Vel_STD_V;

  /* The lateral ground speed of the object. */
  real32_T OBJ_Abs_Lat_Velocity;

  /* Validator for the lateral ground speed of the object. */
  uint8_T OBJ_Abs_Lat_Velocity_V;
  uint8_T Reserved_7;

  /* STD of the lateral ground speed of the object. */
  real32_T OBJ_Abs_Lat_Velocity_STD;

  /* Validator for the STD of the lateral ground speed of the object. */
  uint8_T OBJ_Abs_Lat_Vel_STD_V;

  /* The longitudinal ground acceleration of the object. */
  real32_T OBJ_Abs_Long_Acc;

  /* Validator for the longitudinal ground acceleration of the object. */
  uint8_T OBJ_Abs_Long_Acc_V;
  uint8_T Reserved_8;

  /* STD of the longitudinal ground acceleration of the object. */
  real32_T OBJ_Abs_Long_Acc_STD;

  /* Validator for the STD of the longitudinal ground acceleration of the object. */
  uint8_T OBJ_Abs_Long_Acc_STD_V;

  /* The lateral ground acceleration of the object. */
  real32_T OBJ_Abs_Lat_Acc;

  /* Validator for the lateral ground acceleration of the object. */
  uint8_T OBJ_Abs_Lat_Acc_V;

  /* STD of the lateral ground acceleration of the object. */
  real32_T OBJ_Abs_Lat_Acc_STD;

  /* Validator for the STD of the lateral ground acceleration of the object. */
  uint8_T OBJ_Abs_Lat_Acc_STD_V;

  /* The absolute ground acceleration in the target's heading direction. */
  real32_T OBJ_Abs_Acceleration;

  /* Validator for the absolute ground acceleration. */
  uint8_T OBJ_Abs_Acceleration_V;

  /* STD of the absolute ground acceleration. */
  real32_T OBJ_Abs_Acc_STD;

  /* Validator for the STD of the absolute ground acceleration. */
  uint8_T OBJ_Abs_Acc_STD_V;

  /* Inverse TTC (time to collision). */
  real32_T OBJ_Inv_TTC;

  /* Validator for Inverse TTC. */
  uint8_T OBJ_Inv_TTC_V;

  /* STD for inverse TTC . */
  real32_T OBJ_Inv_TTC_STD;

  /* Validator for the STD for inverse TTC . */
  uint8_T OBJ_Inv_TTC_STD_V;

  /* The relative lateral ground acceleration of the object. */
  real32_T OBJ_Relative_Long_Acc;

  /* Validator for the relative lateral ground acceleration of the object. */
  uint8_T OBJ_Relative_Long_Acc_V;
  uint8_T Reserved_9;

  /* STD of the relative lateral ground acceleration of the object. */
  real32_T OBJ_Relative_Long_Acc_STD;

  /* Validator for the STD of the relative lateral ground acceleration. */
  uint8_T OBJ_Rel_Long_Acc_STD_V;

  /* The relative longtitudinal speed between the target and ego vehicle. */
  real32_T OBJ_Relative_Long_Velocity;

  /* Validator for the relative longtitudinal speed. */
  uint8_T OBJ_Relative_Long_Velocity_V;
  uint8_T Reserved_10;

  /* STD of the relative longtitudinal speed. */
  real32_T OBJ_Relative_Long_Vel_STD;

  /* Validator for the STD of the relative longtitudinal speed. */
  uint8_T OBJ_Rel_Long_Vel_STD_V;

  /* The relative lateral speed between the target and ego vehicle. */
  real32_T OBJ_Relative_Lat_Velocity;

  /* Validator for the relative lateral speed. */
  uint8_T OBJ_Relative_Lat_Velocity_V;
  uint8_T Reserved_11;

  /* STD of the relative lateral speed. */
  real32_T OBJ_Relative_Lat_Velocity_STD;

  /* Validator for the STD of the relative lateral speed. */
  uint8_T OBJ_Rel_Lat_Vel_STD_V;

  /* The longtitudinal distance from the object to middle of the rear bumper (middle of the RL and RR corners) of the target. */
  real32_T OBJ_Long_Distance;

  /* Validator of the longtitudinal distance field */
  uint8_T OBJ_Long_Distance_V;
  uint8_T Reserved_12;

  /* STD of the  longtitudinal distance. */
  real32_T OBJ_Long_Distance_STD;

  /* Validator for the STD of the  longtitudinal distance. */
  uint8_T OBJ_Long_Distance_STD_V;

  /* Lateral distance to the middle of the RL and RR corners. */
  real32_T OBJ_Lat_Distance;

  /* Validator for the lateral distance of the object. */
  uint8_T OBJ_Lat_Distance_V;
  uint8_T Reserved_13;

  /* STD of the lateral distance of the object. */
  real32_T OBJ_Lat_Distance_STD;

  /* Validator for the STD of the lateral distance of the object. */
  uint8_T OBJ_Lat_Distance_STD_V;

  /* The absolute ground speed in the targets' heading direction. */
  real32_T OBJ_Absolute_Speed;

  /* Validator for the absolute ground speed. */
  uint8_T OBJ_Absolute_Speed_V;
  uint8_T Reserved_14;

  /* STD of the absolute ground speed. */
  real32_T OBJ_Absolute_Speed_STD;

  /* Validator for the STD of the absolute ground speed. */
  uint8_T OBJ_Absolute_Speed_STD_V;

  /* The angle beetweenthe host longitudinal axis and target's heading (clockwise, e.g. PI/2 is a target crossing from left to right). */
  real32_T OBJ_Heading;

  /* Validator for the object heading. */
  uint8_T OBJ_Heading_V;
  uint8_T Reserved_15;

  /* STD of the object heading. */
  real32_T OBJ_Heading_STD;

  /* Validator for the STD of the object heading. */
  uint8_T OBJ_Heading_STD_V;

  /* Standard deviation of the angular speed. (radians) */
  real32_T OBJ_Angle_Rate_STD;

  /* Validator for the STD of the angular speed. */
  uint8_T OBJ_Angle_Rate_STD_V;

  /* The momentary angular speed of the object. (radians) */
  real32_T OBJ_Angle_Rate;

  /* Validator for the angular speed. */
  uint8_T OBJ_Angle_Rate_V;

  /* The angle between the host longitudinal axis and the right side of the front / rear of the target (the visible one). The positive side is to the host's right. */
  real32_T OBJ_Angle_Right;

  /* Validator for angleRight */
  uint8_T OBJ_Angle_Right_V;
  uint8_T Reserved_16;

  /* Standard deviation of angleRight */
  real32_T OBJ_Angle_Right_STD;

  /* Validator for the standard deviation of angleRight. */
  uint8_T OBJ_Angle_Right_STD_V;

  /* The angle between the host longitudinal axis and the left side of the front / rear of the target (the visible one). The positive side is to the host's right. */
  real32_T OBJ_Angle_Left;

  /* Validator for angleLeft. */
  uint8_T OBJ_Angle_Left_V;
  uint8_T Reserved_17;

  /* Standard deviation of angleLeft. */
  real32_T OBJ_Angle_Left_STD;

  /* Validator for the standard deviation of angleLeft. */
  uint8_T OBJ_Angle_Left_STD_V;

  /* The angle between the host longitudinal axis and the far visible edge - the visible edge of the front / rear of the target that is not visible. Currently supported for vehicles only. */
  real32_T OBJ_Angle_Side;

  /* Validator for angleSide. */
  uint8_T OBJ_Angle_Side_V;
  uint8_T Reserved_18;

  /* Standard deviation of angleSide. */
  real32_T OBJ_Angle_Side_STD;

  /* Validator for the STD of angleSide. */
  uint8_T OBJ_Angle_Side_STD_V;

  /* Validator for angleMid. */
  uint8_T OBJ_Angle_Mid_V;

  /* The angle between the host longitudinal axis and the middle of the front / rear of the target (the visible one). The positive side is to the host's right. */
  real32_T OBJ_Angle_Mid;
  uint8_T Reserved_19;

  /* Standard deviation of angleMid. */
  real32_T OBJ_Angle_Mid_STD;

  /* Validator for the STD of angleMid. */
  uint8_T OBJ_Angle_Mid_STD_V;

  /* Validator for OBJAngle_Bottom. */
  uint8_T OBJ_Angle_Bottom_V;

  /* The angle between the longitudinal axis and the Bottom of the front / rear of the target (the visible one). The positive side is to the host's bottom */
  real32_T OBJ_Angle_Bottom;
  uint8_T Reserved_20;

  /* STD for OBJAngle_Bottom. */
  real32_T OBJ_Angle_Bottom_STD;

  /* Validator for OBJAngle_Bottom_STD. */
  uint8_T OBJ_Angle_Bottom_STD_V;

  /* Currently Supported for VD only */
  uint8_T OBJ_Visibility_Side_V;

  /* From what car  side is the object visible */
  uint8_T OBJ_Visibility_Side;

  /* Indicates whether the target is in a driveable area. */
  uint8_T OBJ_Is_In_Drivable_Area;

  /* Validator for OBJ_Is_In_Drivable_Area. */
  uint8_T OBJ_Is_In_Drivable_Area_V;

  /* Validator for OBJ_Is_VeryClose. */
  uint8_T OBJ_Is_VeryClose_V;

  /* Indicates whether the target is very close to the host such that it is hard to measure its distance. Currently relevant for peds only */
  uint8_T OBJ_Is_VeryClose;
  uint8_T OBJ_Buffer_C4;
  uint8_T OBJ_Buffer_C5;
  uint8_T OBJ_Buffer_C6;
  uint8_T OBJ_Buffer_C7;
  uint8_T Reserved_21;
  real32_T OBJ_Buffer_C8;
  real32_T OBJ_Buffer_C9;

  /* Is Object an Emergency Vehicle */
  uint8_T OBJ_Is_EMERGENCY_VCL;

  /* Emergency Color */
  uint8_T OBJ_EMERGENCY_LIGHT_COLOR;

  /* Are OBJ_Is_EMERGENCY_VCL and OBJ_EMERGENCY_LIGHT_COLOR Valid */
  uint8_T OBJ_EMERGENCY_V;
  uint8_T Reserved_22;
} EQ4_OBJ_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_OBJ_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_OBJ_HDR_BUS EQ4_OBJ_HDR;
  EQ4_OBJ_ELEM_BUS EQ4_OBJ_ELEM[20];
} EQ4_OBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_HDR_BUS_

typedef struct {
  /* in case set to FF message is not available. */
  uint8_T FSP_Zero_byte;
  uint8_T Reserved_1;

  /* Calculated over all header values */
  uint32_T FS_Header_CRC;

  /* Version number of failsafe message */
  uint8_T FS_Protocol_Version;

  /* The ID of the Sync message, used to synchronize between signals in the system. Every new frame promotes the sync ID by one. */
  uint8_T FS_Sync_ID;

  /* Number of FS available cameras */
  uint8_T FS_Cameras_Number;

  /* Specific TSR Out-of-Calib Signal */
  uint8_T FS_TSR_Out_OF_Calib;

  /* Vision detected that the calibration camera to world exceede level 0 40 px tollerance  from the baseline calibration (Auto Fix). */
  uint8_T FS_Out_Of_Calib;
  uint8_T Reserved_2;

  /* Impacted technologies from detected fail safes according to the fail-safe ME schema */
  uint16_T FS_Impacted_Technologies;

  /* Detection of precipitation. */
  uint8_T FS_Rain;

  /* Detection of fog. */
  uint8_T FS_Fog;

  /* Road Model misalignment */
  uint8_T FS_Calibration_Misalignment;

  /* Not Implemented yet
     The Out Of Range (OOR) FS signal will indicate that the current Cam2World extrinsic calibration found exceeded the allowed system tolerance defined by the OEM using the min/max Yaw/Horizon and MaxRoll ranges definitions */
  uint8_T FS_C2W_OOR;
  uint8_T Reserved_3;
} EQ4_FS_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_ELEM_BUS_

typedef struct {
  /* Calculated over each object signal */
  uint32_T FS_CRC;

  /* The relevant camera. */
  uint8_T FS_Camera_ID;

  /* False until free sight is approved */
  uint8_T FS_Free_Sight;

  /* The lower edges of vehicles cannot be detected due to water spray, a.k.a. splashes. */
  uint8_T FS_Splashes;

  /* Strong glare due to micro scratches on windshield. */
  uint8_T FS_Sun_Ray;

  /* Sun glare which disrupts the image. The sun appears over the FOE. */
  uint8_T FS_Low_Sun;

  /* Issued when visibility on the image is lowered such that detection of objects inside the Danger Zone (in-path and next lanes up-to some level) cannot be fully performed */
  uint8_T FS_Blur_Image;

  /* Low visibility due to partially covered lens. */
  uint8_T FS_Partial_Blockage;

  /* No visibility due to fully covered lens. Takes 50 frames with no edges. Recovery is very quick (max 50 frames). Will be on when standing at night with no headlights. */
  uint8_T FS_Full_Blockage;

  /* Significant failsafe indicating windshield is frozen. This will impact on all technologies. */
  uint8_T FS_Frozen_Windshield_Lens;

  /* Vision detected that the focus calibration is not correct. */
  uint8_T FS_Out_Of_Focus;

  /* Vision detected that  reported  camera to main  camera  calibration, can't be corrected (Auto Fix). */
  uint8_T FS_C2C_Out_Of_Calib;
} EQ4_FS_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FS_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FS_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_FS_HDR_BUS EQ4_FS_HDR;
  EQ4_FS_ELEM_BUS EQ4_FS_ELEM[15];
} EQ4_FS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_OFM_OBJ_BUS_
#define DEFINED_TYPEDEF_FOR_OFM_OBJ_BUS_

typedef struct {
  /* Ŀ���Ƿ����ں�,���������ͣ�FC��������ͷ��FR����ǰ�״CL��������״CR�����ҽ��״BL������ä���״BR������ä���״ */
  uint8_T Object_Fus_Type[80];

  /* �ں�׷�ٴ�����Ŀ���ID */
  uint8_T Object_ID[80];

  /* Ŀ������ͣ����ˡ�С����������...�� */
  uint8_T Object_Type[80];

  /* Ŀ��ĳ��� */
  real32_T Object_Length[80];

  /* Ŀ��Ŀ��� */
  real32_T Object_Width[80];

  /* Ŀ��ĸ߶� */
  real32_T Object_Hight[80];

  /* ����ϵ��, Ŀ�꺽��� */
  real32_T Object_HeadingAngle[80];

  /* ����ϵ��, Ŀ��ķ�λ�� */
  real32_T Object_YawAngle[80];

  /* Ŀ����˶�״̬(��ֹ���˶�...) */
  uint8_T Object_MovingState[80];

  /* Ŀ����˶�����(ͬ�򡢶��򡢺ᴩ...) */
  uint8_T Object_Orientation[80];

  /* ��������ϵ�£��Գ���Ŀ��������Ծ��� */
  real32_T Object_DX[80];

  /* ��������ϵ�£��Գ���Ŀ�������Ծ��� */
  real32_T Object_DY[80];

  /* Ŀ���  �����  �ٶ� */
  real32_T Object_VX[80];

  /* Ŀ���  �����  �ٶ� */
  real32_T Object_VY[80];

  /* Ŀ���  �����  ���ٶȵķ��� */
  real32_T Object_Std_AX[80];

  /* Ŀ���  �����  ���ٶȵķ��� */
  real32_T Object_Std_AY[80];

  /* Ŀ���  �����  ����ķ��� */
  real32_T Object_Std_DX[80];

  /* Ŀ���  �����  ����ķ��� */
  real32_T Object_Std_DY[80];

  /* Ŀ���  �����  �ٶȵķ��� */
  real32_T Object_Std_VX[80];

  /* Ŀ���  �����  �ٶȵķ��� */
  real32_T Object_Std_VY[80];

  /* Ŀ���  �����  ���ٶ� */
  real32_T Object_AX[80];

  /* Ŀ���  �����  ���ٶ� */
  real32_T Object_AY[80];

  /* Ŀ�곤�ȵķ��� */
  real32_T Object_Std_Length[80];

  /* Ŀ����ȵķ��� */
  real32_T Object_Std_Width[80];

  /* Ŀ��ĺ���ǵķ��� */
  real32_T Object_Std_HeadingAngle[80];

  /* Ŀ���Ӧ���͵ĸ���ֵ */
  real32_T Object_Type_Prob[80];

  /* Ŀ����ڵĸ���ֵ */
  real32_T Object_ExistProb[80];

  /* Ŀ���Ϊ�ϰ���ĸ���ֵ */
  real32_T Object_ObstacleProb[80];

  /* Ŀ������������� */
  uint16_T Object_Age[80];
} OFM_OBJ_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct PubIfFusionOFM_MDL_tag_RTM PubIfFusionOFM_MDL_RT_MODEL;

#endif                              /* RTW_HEADER_PubIfFusionOFM_MDL_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
