/*********************** dSPACE target specific implementation file ********************
   Implementation file Noa_Nofusion_dsmpb_bd.c:

   Implementation file for API vs. 2 access points and size functions.

   Wed Mar  9 12:18:59 2022

   (c) Copyright 2020, dSPACE GmbH. All rights reserved.

 ****************************************************************************************/

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)
#include "Noa_Nofusion.h"

void InitializeBusStructs(void)
{
  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj, port: 1 */
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_1 =
    Noa_Nofusion_B.CR_L_ObjID_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_2 =
    Noa_Nofusion_B.CR_L_ObjExistProb_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_3 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_4 =
    Noa_Nofusion_B.CR_L_ObjDistX_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_5 =
    Noa_Nofusion_B.CR_L_ObjDistY_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_6 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_7 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_8 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_9 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_10 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_11 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_12 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_13 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_14 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_15 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_16 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_17 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_1Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_18 =
    Noa_Nofusion_B.CR_L_ObjID_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_19 =
    Noa_Nofusion_B.CR_L_ObjExistProb_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_20 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_21 =
    Noa_Nofusion_B.CR_L_ObjDistX_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_22 =
    Noa_Nofusion_B.CR_L_ObjDistY_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_23 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_24 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_25 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_26 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_27 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_28 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_29 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_30 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_31 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_32 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_33 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_34 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_2Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_35 =
    Noa_Nofusion_B.CR_L_ObjID_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_36 =
    Noa_Nofusion_B.CR_L_ObjExistProb_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_37 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_38 =
    Noa_Nofusion_B.CR_L_ObjDistX_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_39 =
    Noa_Nofusion_B.CR_L_ObjDistY_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_40 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_41 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_42 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_43 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_44 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_45 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_46 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_47 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_48 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_49 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_50 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_51 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_3Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_52 =
    Noa_Nofusion_B.CR_L_ObjID_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_53 =
    Noa_Nofusion_B.CR_L_ObjExistProb_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_54 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_55 =
    Noa_Nofusion_B.CR_L_ObjDistX_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_56 =
    Noa_Nofusion_B.CR_L_ObjDistY_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_57 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_58 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_59 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_60 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_61 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_62 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_63 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_64 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_65 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_66 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_67 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_68 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_4Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_69 =
    Noa_Nofusion_B.CR_L_ObjID_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_70 =
    Noa_Nofusion_B.CR_L_ObjExistProb_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_71 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_72 =
    Noa_Nofusion_B.CR_L_ObjDistX_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_73 =
    Noa_Nofusion_B.CR_L_ObjDistY_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_74 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_75 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_76 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_77 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_78 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_79 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_80 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_81 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_82 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_83 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_84 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_85 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_5Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_86 =
    Noa_Nofusion_B.CR_L_ObjID_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_87 =
    Noa_Nofusion_B.CR_L_ObjExistProb_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_88 =
    Noa_Nofusion_B.CR_L_ObjObstacleProb_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_89 =
    Noa_Nofusion_B.CR_L_ObjDistX_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_90 =
    Noa_Nofusion_B.CR_L_ObjDistY_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_91 =
    Noa_Nofusion_B.CR_L_ObjRelVelX_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_92 =
    Noa_Nofusion_B.CR_L_ObjRelVelY_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_93 =
    Noa_Nofusion_B.CR_L_ObjRelAccelX_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_94 =
    Noa_Nofusion_B.CR_L_ObjRelAccelY_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_95 =
    Noa_Nofusion_B.CR_L_ObjDistXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_96 =
    Noa_Nofusion_B.CR_L_ObjDistYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_97 =
    Noa_Nofusion_B.CR_L_ObjRelVelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_98 =
    Noa_Nofusion_B.CR_L_ObjRelVelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_99 =
    Noa_Nofusion_B.CR_L_ObjRAccelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_100 =
    Noa_Nofusion_B.CR_L_ObjRAccelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_101 =
    Noa_Nofusion_B.CR_L_VFC_ObjWidth_6Value;
  Bus_read_Noa_Nofusion_DataInport4_P1.BusElement_102 =
    Noa_Nofusion_B.CR_L_VFC_ObjLength_6Value;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj, port: 1 */
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_1 =
    Noa_Nofusion_B.CR_R_ObjID_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_2 =
    Noa_Nofusion_B.CR_R_ObjExistProb_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_3 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_4 =
    Noa_Nofusion_B.CR_R_ObjDistX_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_5 =
    Noa_Nofusion_B.CR_R_ObjDistY_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_6 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_7 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_8 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_9 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_10 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_11 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_12 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_13 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_14 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_15 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_16 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_17 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_1Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_18 =
    Noa_Nofusion_B.CR_R_ObjID_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_19 =
    Noa_Nofusion_B.CR_R_ObjExistProb_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_20 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_21 =
    Noa_Nofusion_B.CR_R_ObjDistX_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_22 =
    Noa_Nofusion_B.CR_R_ObjDistY_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_23 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_24 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_25 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_26 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_27 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_28 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_29 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_30 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_31 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_32 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_33 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_34 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_2Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_35 =
    Noa_Nofusion_B.CR_R_ObjID_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_36 =
    Noa_Nofusion_B.CR_R_ObjExistProb_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_37 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_38 =
    Noa_Nofusion_B.CR_R_ObjDistX_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_39 =
    Noa_Nofusion_B.CR_R_ObjDistY_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_40 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_41 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_42 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_43 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_44 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_45 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_46 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_47 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_48 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_49 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_50 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_51 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_3Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_52 =
    Noa_Nofusion_B.CR_R_ObjID_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_53 =
    Noa_Nofusion_B.CR_R_ObjExistProb_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_54 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_55 =
    Noa_Nofusion_B.CR_R_ObjDistX_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_56 =
    Noa_Nofusion_B.CR_R_ObjDistY_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_57 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_58 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_59 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_60 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_61 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_62 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_63 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_64 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_65 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_66 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_67 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_68 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_4Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_69 =
    Noa_Nofusion_B.CR_R_ObjID_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_70 =
    Noa_Nofusion_B.CR_R_ObjExistProb_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_71 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_72 =
    Noa_Nofusion_B.CR_R_ObjDistX_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_73 =
    Noa_Nofusion_B.CR_R_ObjDistY_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_74 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_75 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_76 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_77 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_78 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_79 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_80 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_81 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_82 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_83 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_84 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_85 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_5Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_86 =
    Noa_Nofusion_B.CR_R_ObjID_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_87 =
    Noa_Nofusion_B.CR_R_ObjExistProb_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_88 =
    Noa_Nofusion_B.CR_R_ObjObstacleProb_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_89 =
    Noa_Nofusion_B.CR_R_ObjDistX_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_90 =
    Noa_Nofusion_B.CR_R_ObjDistY_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_91 =
    Noa_Nofusion_B.CR_R_ObjRelVelX_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_92 =
    Noa_Nofusion_B.CR_R_ObjRelVelY_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_93 =
    Noa_Nofusion_B.CR_R_ObjRelAccelX_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_94 =
    Noa_Nofusion_B.CR_R_ObjRelAccelY_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_95 =
    Noa_Nofusion_B.CR_R_ObjDistXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_96 =
    Noa_Nofusion_B.CR_R_ObjDistYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_97 =
    Noa_Nofusion_B.CR_R_ObjRelVelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_98 =
    Noa_Nofusion_B.CR_R_ObjRelVelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_99 =
    Noa_Nofusion_B.CR_R_ObjRAccelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_100 =
    Noa_Nofusion_B.CR_R_ObjRAccelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_101 =
    Noa_Nofusion_B.CR_R_VFC_ObjWidth_6Value;
  Bus_read_Noa_Nofusion_DataInport6_P1.BusElement_102 =
    Noa_Nofusion_B.CR_R_VFC_ObjLength_6Value;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj, port: 1 */
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_1 =
    Noa_Nofusion_B.RSDS_L_ObjID_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_2 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_3 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_4 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_5 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_6 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_7 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_8 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_9 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_10 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_11 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_12 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_13 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_14 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_15 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_16 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_17 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_1Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_18 =
    Noa_Nofusion_B.RSDS_L_ObjID_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_19 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_20 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_21 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_22 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_23 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_24 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_25 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_26 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_27 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_28 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_29 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_30 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_31 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_32 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_33 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_34 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_2Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_35 =
    Noa_Nofusion_B.RSDS_L_ObjID_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_36 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_37 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_38 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_39 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_40 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_41 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_42 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_43 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_44 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_45 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_46 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_47 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_48 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_49 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_50 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_51 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_3Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_52 =
    Noa_Nofusion_B.RSDS_L_ObjID_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_53 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_54 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_55 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_56 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_57 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_58 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_59 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_60 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_61 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_62 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_63 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_64 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_65 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_66 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_67 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_68 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_4Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_69 =
    Noa_Nofusion_B.RSDS_L_ObjID_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_70 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_71 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_72 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_73 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_74 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_75 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_76 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_77 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_78 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_79 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_80 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_81 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_82 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_83 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_84 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_85 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_5Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_86 =
    Noa_Nofusion_B.RSDS_L_ObjID_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_87 =
    Noa_Nofusion_B.RSDS_L_ObjExistProb_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_88 =
    Noa_Nofusion_B.RSDS_L_ObjObstacleProb_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_89 =
    Noa_Nofusion_B.RSDS_L_ObjDistX_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_90 =
    Noa_Nofusion_B.RSDS_L_ObjDistY_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_91 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelX_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_92 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelY_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_93 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelX_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_94 =
    Noa_Nofusion_B.RSDS_L_ObjRelAccelY_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_95 =
    Noa_Nofusion_B.RSDS_L_ObjDistXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_96 =
    Noa_Nofusion_B.RSDS_L_ObjDistYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_97 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_98 =
    Noa_Nofusion_B.RSDS_L_ObjRelVelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_99 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_100 =
    Noa_Nofusion_B.RSDS_L_ObjRAccelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_101 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjWidth_6Value;
  Bus_read_Noa_Nofusion_DataInport8_P1.BusElement_102 =
    Noa_Nofusion_B.RSDS_L_VFC_ObjLength_6Value;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj, port: 1 */
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_1 =
    Noa_Nofusion_B.RSDS_R_ObjID_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_2 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_3 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_4 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_5 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_6 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_7 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_8 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_9 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_10 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_11 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_12 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_13 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_14 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_15 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_16 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_17 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_1Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_18 =
    Noa_Nofusion_B.RSDS_R_ObjID_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_19 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_20 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_21 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_22 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_23 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_24 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_25 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_26 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_27 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_28 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_29 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_30 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_31 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_32 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_33 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_34 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_2Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_35 =
    Noa_Nofusion_B.RSDS_R_ObjID_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_36 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_37 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_38 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_39 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_40 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_41 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_42 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_43 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_44 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_45 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_46 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_47 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_48 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_49 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_50 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_51 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_3Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_52 =
    Noa_Nofusion_B.RSDS_R_ObjID_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_53 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_54 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_55 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_56 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_57 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_58 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_59 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_60 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_61 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_62 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_63 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_64 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_65 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_66 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_67 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_68 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_4Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_69 =
    Noa_Nofusion_B.RSDS_R_ObjID_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_70 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_71 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_72 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_73 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_74 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_75 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_76 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_77 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_78 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_79 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_80 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_81 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_82 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_83 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_84 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_85 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_5Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_86 =
    Noa_Nofusion_B.RSDS_R_ObjID_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_87 =
    Noa_Nofusion_B.RSDS_R_ObjExistProb_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_88 =
    Noa_Nofusion_B.RSDS_R_ObjObstacleProb_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_89 =
    Noa_Nofusion_B.RSDS_R_ObjDistX_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_90 =
    Noa_Nofusion_B.RSDS_R_ObjDistY_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_91 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelX_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_92 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelY_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_93 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelX_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_94 =
    Noa_Nofusion_B.RSDS_R_ObjRelAccelY_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_95 =
    Noa_Nofusion_B.RSDS_R_ObjDistXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_96 =
    Noa_Nofusion_B.RSDS_R_ObjDistYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_97 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_98 =
    Noa_Nofusion_B.RSDS_R_ObjRelVelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_99 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelXStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_100 =
    Noa_Nofusion_B.RSDS_R_ObjRAccelYStd_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_101 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjWidth_6Value;
  Bus_read_Noa_Nofusion_DataInport10_P1.BusElement_102 =
    Noa_Nofusion_B.RSDS_R_VFC_ObjLength_6Value;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/RFM_Road, port: 1 */
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_1 = Noa_Nofusion_B.nLaneID;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_2 = Noa_Nofusion_B.nLaneNum;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_3 =
    Noa_Nofusion_B.dCurrentLaneWidth;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_4 =
    Noa_Nofusion_B.dLeftLaneWidth;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_5 =
    Noa_Nofusion_B.dRightLaneWidth;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_6 =
    Noa_Nofusion_B.bCurrentLaneFree;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_7 =
    Noa_Nofusion_B.fCurrentLaneFreeDis;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_8 =
    Noa_Nofusion_B.bLeftLaneFree;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_9 =
    Noa_Nofusion_B.fLeftLaneFreeDis;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_10 =
    Noa_Nofusion_B.bRightLaneFree;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_11 =
    Noa_Nofusion_B.fRighLaneFreeDis;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_12 = Noa_Nofusion_B.b_toll;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_13 =
    Noa_Nofusion_B.f_toll_distance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_14 = Noa_Nofusion_B.b_tunnel;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_15 =
    Noa_Nofusion_B.f_tunnel_distance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_16 = Noa_Nofusion_B.b_bridge;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_17 =
    Noa_Nofusion_B.f_bridge_distance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_18 =
    Noa_Nofusion_B.b_traffic_jam;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_19 =
    Noa_Nofusion_B.f_distance_to_jam;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_20 =
    Noa_Nofusion_B.b_traffic_accident;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_21 =
    Noa_Nofusion_B.f_distance_to_accident;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_22 =
    Noa_Nofusion_B.en_weather;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_23 =
    Noa_Nofusion_B.i_mapvalid;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_24 =
    Noa_Nofusion_B.i_on_nav_path;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_25 =
    Noa_Nofusion_B.i_road_curvature;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_26 =
    Noa_Nofusion_B.i_road_curvature_far;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_27 =
    Noa_Nofusion_B.i_road_curvature_far_distance;
  memcpy(&(Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_28[0]),
         &(Noa_Nofusion_B.i_road_curvature_value_matrix[0]), sizeof
         (Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_28));
  memcpy(&(Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_29[0]),
         &(Noa_Nofusion_B.i_road_curvature_distance_matrix[0]), sizeof
         (Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_29));
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_30 =
    Noa_Nofusion_B.i_road_curvature_matrix_size;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_31 = Noa_Nofusion_B.FUSSts;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_32 =
    Noa_Nofusion_B.RFframe_count;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_33 = Noa_Nofusion_B.CtryType;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_34 = Noa_Nofusion_B.RoadType;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_35 =
    Noa_Nofusion_B.SPL_TypeCurRoad;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_36 =
    Noa_Nofusion_B.SPL_ValueCurRoad;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_37 =
    Noa_Nofusion_B.VehToTrafEyeDist;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_38 = Noa_Nofusion_B.SPL_Unit;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_39 = Noa_Nofusion_B.SPL_End;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_40 =
    Noa_Nofusion_B.SPL_noSupp_Value;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_41 =
    Noa_Nofusion_B.SPL_whSupp_Value;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_42 =
    Noa_Nofusion_B.SPL_Sup1_SignName;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_43 =
    Noa_Nofusion_B.SPL_Sup1_Confidence;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_44 =
    Noa_Nofusion_B.SPL_Sup2_SignName;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_45 =
    Noa_Nofusion_B.SPL_Sup2_Confidence;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_46 =
    Noa_Nofusion_B.SPL_noSupp_LongDistance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_47 =
    Noa_Nofusion_B.SPL_whSupp_LongDistance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_48 =
    Noa_Nofusion_B.SPL_LeftLaneValue;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_49 =
    Noa_Nofusion_B.SPL_RightLaneValue;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_50 = Noa_Nofusion_B.TSR_ID;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_51 =
    Noa_Nofusion_B.TS_SignName;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_52 =
    Noa_Nofusion_B.TS_Confidence;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_53 =
    Noa_Nofusion_B.TS_LongDistance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_54 =
    Noa_Nofusion_B.VehInLeftmostLane;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_55 =
    Noa_Nofusion_B.VehInRightmostLane;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_56 =
    Noa_Nofusion_B.SPL_LaneChanged;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_57 =
    Noa_Nofusion_B.TSR_Sign_Long_Distance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_58 =
    Noa_Nofusion_B.TSR_Sign_Lateral_Distance;
  Bus_read_Noa_Nofusion_DataInport12_P1.BusElement_59 =
    Noa_Nofusion_B.RFM_UpdateCnt;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/ifLaneBus_out_In, port: 1 */
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_1 =
    Noa_Nofusion_B.bIsLineExist;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_2 = Noa_Nofusion_B.dC0V;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_3 = Noa_Nofusion_B.dC1V;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_4 = Noa_Nofusion_B.dC2V;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_5 = Noa_Nofusion_B.dC3V;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_6 = Noa_Nofusion_B.dLaneWidth;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_7 = Noa_Nofusion_B.eLineType;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_8 = Noa_Nofusion_B.dDisStart;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_9 = Noa_Nofusion_B.dDisFront;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_10 = Noa_Nofusion_B.dQuality;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_11 = Noa_Nofusion_B.eColour;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_12 = Noa_Nofusion_B.eFuType;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_13 = Noa_Nofusion_B.nTrackAge;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_14 =
    Noa_Nofusion_B.bIsLineExist_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_15 = Noa_Nofusion_B.dC0V_d;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_16 = Noa_Nofusion_B.dC1V_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_17 = Noa_Nofusion_B.dC2V_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_18 = Noa_Nofusion_B.dC3V_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_19 =
    Noa_Nofusion_B.dLaneWidth_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_20 =
    Noa_Nofusion_B.eLineType_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_21 =
    Noa_Nofusion_B.dDisStart_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_22 =
    Noa_Nofusion_B.dDisFront_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_23 =
    Noa_Nofusion_B.dQuality_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_24 = Noa_Nofusion_B.eColour_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_25 = Noa_Nofusion_B.eFuType_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_26 =
    Noa_Nofusion_B.nTrackAge_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_27 =
    Noa_Nofusion_B.bIsLineExist_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_28 = Noa_Nofusion_B.dC0V_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_29 = Noa_Nofusion_B.dC1V_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_30 = Noa_Nofusion_B.dC2V_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_31 = Noa_Nofusion_B.dC3V_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_32 =
    Noa_Nofusion_B.dLaneWidth_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_33 =
    Noa_Nofusion_B.eLineType_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_34 =
    Noa_Nofusion_B.dDisStart_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_35 =
    Noa_Nofusion_B.dDisFront_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_36 =
    Noa_Nofusion_B.dQuality_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_37 = Noa_Nofusion_B.eColour_a;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_38 = Noa_Nofusion_B.eFuType_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_39 =
    Noa_Nofusion_B.nTrackAge_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_40 =
    Noa_Nofusion_B.bIsLineExist_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_41 = Noa_Nofusion_B.dC0V_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_42 = Noa_Nofusion_B.dC1V_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_43 = Noa_Nofusion_B.dC2V_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_44 = Noa_Nofusion_B.dC3V_ja;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_45 =
    Noa_Nofusion_B.dLaneWidth_be;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_46 =
    Noa_Nofusion_B.eLineType_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_47 =
    Noa_Nofusion_B.dDisStart_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_48 =
    Noa_Nofusion_B.dDisFront_j1;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_49 =
    Noa_Nofusion_B.dQuality_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_50 =
    Noa_Nofusion_B.eColour_b1;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_51 = Noa_Nofusion_B.eFuType_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_52 =
    Noa_Nofusion_B.nTrackAge_fx;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_53 =
    Noa_Nofusion_B.bIsLineExist_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_54 = Noa_Nofusion_B.dC0V_dc;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_55 = Noa_Nofusion_B.dC1V_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_56 = Noa_Nofusion_B.dC2V_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_57 = Noa_Nofusion_B.dC3V_p;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_58 =
    Noa_Nofusion_B.dLaneWidth_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_59 =
    Noa_Nofusion_B.eLineType_gj;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_60 =
    Noa_Nofusion_B.dDisStart_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_61 =
    Noa_Nofusion_B.dDisFront_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_62 =
    Noa_Nofusion_B.dQuality_ff;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_63 = Noa_Nofusion_B.eColour_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_64 = Noa_Nofusion_B.eFuType_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_65 =
    Noa_Nofusion_B.nTrackAge_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_66 =
    Noa_Nofusion_B.bIsLineExist_i4;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_67 = Noa_Nofusion_B.dC0V_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_68 = Noa_Nofusion_B.dC1V_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_69 = Noa_Nofusion_B.dC2V_d;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_70 = Noa_Nofusion_B.dC3V_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_71 =
    Noa_Nofusion_B.dLaneWidth_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_72 =
    Noa_Nofusion_B.eLineType_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_73 =
    Noa_Nofusion_B.dDisStart_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_74 =
    Noa_Nofusion_B.dDisFront_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_75 =
    Noa_Nofusion_B.dQuality_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_76 = Noa_Nofusion_B.eColour_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_77 =
    Noa_Nofusion_B.eFuType_hd;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_78 =
    Noa_Nofusion_B.nTrackAge_a;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_79 =
    Noa_Nofusion_B.bIsLineExist_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_80 = Noa_Nofusion_B.dC0V_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_81 = Noa_Nofusion_B.dC1V_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_82 = Noa_Nofusion_B.dC2V_a;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_83 = Noa_Nofusion_B.dC3V_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_84 =
    Noa_Nofusion_B.dLaneWidth_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_85 =
    Noa_Nofusion_B.eLineType_jq;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_86 =
    Noa_Nofusion_B.dDisStart_ct;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_87 =
    Noa_Nofusion_B.dDisFront_es;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_88 =
    Noa_Nofusion_B.dQuality_a;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_89 = Noa_Nofusion_B.eColour_j;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_90 = Noa_Nofusion_B.eFuType_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_91 =
    Noa_Nofusion_B.nTrackAge_p;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_92 =
    Noa_Nofusion_B.bIsLineExist_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_93 = Noa_Nofusion_B.dC0V_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_94 = Noa_Nofusion_B.dC1V_hx;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_95 = Noa_Nofusion_B.dC2V_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_96 = Noa_Nofusion_B.dC3V_d;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_97 =
    Noa_Nofusion_B.dLaneWidth_kw;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_98 =
    Noa_Nofusion_B.eLineType_ol;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_99 =
    Noa_Nofusion_B.dDisStart_fr;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_100 =
    Noa_Nofusion_B.dDisFront_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_101 =
    Noa_Nofusion_B.dQuality_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_102 =
    Noa_Nofusion_B.eColour_b3;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_103 =
    Noa_Nofusion_B.eFuType_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_104 =
    Noa_Nofusion_B.nTrackAge_pk;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_105 =
    Noa_Nofusion_B.bIsLineExist_d;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_106 = Noa_Nofusion_B.dC0V_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_107 = Noa_Nofusion_B.dC1V_ms;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_108 = Noa_Nofusion_B.dC2V_l4;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_109 = Noa_Nofusion_B.dC3V_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_110 =
    Noa_Nofusion_B.dLaneWidth_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_111 =
    Noa_Nofusion_B.eLineType_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_112 =
    Noa_Nofusion_B.dDisStart_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_113 =
    Noa_Nofusion_B.dDisFront_jg;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_114 =
    Noa_Nofusion_B.dQuality_kk;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_115 =
    Noa_Nofusion_B.eColour_cn;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_116 =
    Noa_Nofusion_B.eFuType_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_117 =
    Noa_Nofusion_B.nTrackAge_ke;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_118 =
    Noa_Nofusion_B.bIsLineExist_m1;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_119 = Noa_Nofusion_B.dC0V_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_120 = Noa_Nofusion_B.dC1V_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_121 = Noa_Nofusion_B.dC2V_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_122 = Noa_Nofusion_B.dC3V_g1;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_123 =
    Noa_Nofusion_B.dLaneWidth_kl;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_124 =
    Noa_Nofusion_B.eLineType_a;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_125 =
    Noa_Nofusion_B.dDisStart_mm;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_126 =
    Noa_Nofusion_B.dDisFront_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_127 =
    Noa_Nofusion_B.dQuality_g;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_128 =
    Noa_Nofusion_B.eColour_b4;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_129 =
    Noa_Nofusion_B.eFuType_hp;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_130 =
    Noa_Nofusion_B.nTrackAge_d;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_131 =
    Noa_Nofusion_B.bIsLineExist_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_132 = Noa_Nofusion_B.dC0V_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_133 = Noa_Nofusion_B.dC1V_mb;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_134 = Noa_Nofusion_B.dC2V_hf;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_135 = Noa_Nofusion_B.dC3V_ps;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_136 =
    Noa_Nofusion_B.dLaneWidth_p;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_137 =
    Noa_Nofusion_B.eLineType_a0;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_138 =
    Noa_Nofusion_B.dDisStart_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_139 =
    Noa_Nofusion_B.dDisFront_k;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_140 =
    Noa_Nofusion_B.dQuality_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_141 =
    Noa_Nofusion_B.eColour_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_142 =
    Noa_Nofusion_B.eFuType_hj;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_143 =
    Noa_Nofusion_B.nTrackAge_de;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_144 =
    Noa_Nofusion_B.bIsLineExist_cs;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_145 = Noa_Nofusion_B.dC0V_f1;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_146 = Noa_Nofusion_B.dC1V_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_147 = Noa_Nofusion_B.dC2V_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_148 = Noa_Nofusion_B.dC3V_l;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_149 =
    Noa_Nofusion_B.dLaneWidth_i;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_150 =
    Noa_Nofusion_B.eLineType_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_151 =
    Noa_Nofusion_B.dDisStart_kh;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_152 =
    Noa_Nofusion_B.dDisFront_cc;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_153 =
    Noa_Nofusion_B.dQuality_ko;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_154 =
    Noa_Nofusion_B.eColour_m;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_155 =
    Noa_Nofusion_B.eFuType_kl;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_156 =
    Noa_Nofusion_B.nTrackAge_d5;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_157 =
    Noa_Nofusion_B.bIsLineExist_f;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_158 = Noa_Nofusion_B.dC0V_ge;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_159 = Noa_Nofusion_B.dC1V_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_160 = Noa_Nofusion_B.dC2V_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_161 = Noa_Nofusion_B.dC3V_dm;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_162 =
    Noa_Nofusion_B.dLaneWidth_bt;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_163 =
    Noa_Nofusion_B.eLineType_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_164 =
    Noa_Nofusion_B.dDisStart_hj;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_165 =
    Noa_Nofusion_B.dDisFront_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_166 =
    Noa_Nofusion_B.dQuality_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_167 =
    Noa_Nofusion_B.eColour_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_168 =
    Noa_Nofusion_B.eFuType_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_169 =
    Noa_Nofusion_B.nTrackAge_n;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_170 =
    Noa_Nofusion_B.bIsLineExist_o;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_171 = Noa_Nofusion_B.dC0V_ld;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_172 = Noa_Nofusion_B.dC1V_en;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_173 = Noa_Nofusion_B.dC2V_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_174 = Noa_Nofusion_B.dC3V_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_175 =
    Noa_Nofusion_B.dLaneWidth_e;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_176 =
    Noa_Nofusion_B.eLineType_ac;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_177 =
    Noa_Nofusion_B.dDisStart_b;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_178 =
    Noa_Nofusion_B.dDisFront_ll;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_179 =
    Noa_Nofusion_B.dQuality_c;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_180 =
    Noa_Nofusion_B.eColour_h;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_181 =
    Noa_Nofusion_B.eFuType_mf;
  Bus_read_Noa_Nofusion_DataInport13_P1.BusElement_182 =
    Noa_Nofusion_B.nTrackAge_c;

  /* Initialization of struct for untyped bus signal of Data Inport block Noa_Nofusion/IfRFM_LANES_In, port: 1 */
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_1 =
    Noa_Nofusion_B.b_is_avalible;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_2 =
    Noa_Nofusion_B.en_lane_type;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_3 =
    Noa_Nofusion_B.i_speed_max;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_4 =
    Noa_Nofusion_B.f_spd_change_dis;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_5 =
    Noa_Nofusion_B.i_change_spd_max;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_6 = Noa_Nofusion_B.f_width;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_7 =
    Noa_Nofusion_B.b_vanish_valid;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_8 =
    Noa_Nofusion_B.f_vanish_pt_dis;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_9 =
    Noa_Nofusion_B.b_is_avalible_b;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_10 =
    Noa_Nofusion_B.en_lane_type_n;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_11 =
    Noa_Nofusion_B.i_speed_max_i;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_12 =
    Noa_Nofusion_B.f_spd_change_dis_n;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_13 =
    Noa_Nofusion_B.i_change_spd_max_j;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_14 = Noa_Nofusion_B.f_width_f;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_15 =
    Noa_Nofusion_B.b_vanish_valid_a;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_16 =
    Noa_Nofusion_B.f_vanish_pt_dis_n;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_17 =
    Noa_Nofusion_B.b_is_avalible_e;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_18 =
    Noa_Nofusion_B.en_lane_type_h;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_19 =
    Noa_Nofusion_B.i_speed_max_o;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_20 =
    Noa_Nofusion_B.f_spd_change_dis_k;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_21 =
    Noa_Nofusion_B.i_change_spd_max_e;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_22 = Noa_Nofusion_B.f_width_e;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_23 =
    Noa_Nofusion_B.b_vanish_valid_g;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_24 =
    Noa_Nofusion_B.f_vanish_pt_dis_n2;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_25 =
    Noa_Nofusion_B.b_is_avalible_eh;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_26 =
    Noa_Nofusion_B.en_lane_type_f;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_27 =
    Noa_Nofusion_B.i_speed_max_f;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_28 =
    Noa_Nofusion_B.f_spd_change_dis_h;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_29 =
    Noa_Nofusion_B.i_change_spd_max_l;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_30 = Noa_Nofusion_B.f_width_k;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_31 =
    Noa_Nofusion_B.b_vanish_valid_j;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_32 =
    Noa_Nofusion_B.f_vanish_pt_dis_c;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_33 =
    Noa_Nofusion_B.b_is_available;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_34 =
    Noa_Nofusion_B.f_start_distance;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_35 =
    Noa_Nofusion_B.f_end_distance;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_36 =
    Noa_Nofusion_B.en_direction;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_37 = Noa_Nofusion_B.en_type;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_38 =
    Noa_Nofusion_B.b_available;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_39 =
    Noa_Nofusion_B.f_turning_angle;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_40 =
    Noa_Nofusion_B.en_RoadClass;
  Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_41 =
    Noa_Nofusion_B.i_rec_lanes_num;
  memcpy(&(Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_42[0]),
         &(Noa_Nofusion_B.i_rec_lanes[0]), sizeof
         (Bus_read_Noa_Nofusion_DataInport14_P1.BusElement_42));
}

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj, Port:  1 */
read_Noa_Nofusion_DataInport4_P1 Bus_read_Noa_Nofusion_DataInport4_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj, Port:  1 */
read_Noa_Nofusion_DataInport6_P1 Bus_read_Noa_Nofusion_DataInport6_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj, Port:  1 */
read_Noa_Nofusion_DataInport8_P1 Bus_read_Noa_Nofusion_DataInport8_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj, Port:  1 */
read_Noa_Nofusion_DataInport10_P1 Bus_read_Noa_Nofusion_DataInport10_P1;

/* Definition of bus struct for block Noa_Nofusion/Common/Data Outport, Port:  1 */
write_Noa_Nofusion_DataOutport1_P1 Bus_write_Noa_Nofusion_DataOutport1_P1;

/* Definition of bus struct for block Noa_Nofusion/Common/Data Outport1, Port:  1 */
write_Noa_Nofusion_DataOutport2_P1 Bus_write_Noa_Nofusion_DataOutport2_P1;

/* Definition of bus struct for block Noa_Nofusion/RFM_Road, Port:  1 */
read_Noa_Nofusion_DataInport12_P1 Bus_read_Noa_Nofusion_DataInport12_P1;

/* Definition of bus struct for block Noa_Nofusion/ifLaneBus_out_In, Port:  1 */
read_Noa_Nofusion_DataInport13_P1 Bus_read_Noa_Nofusion_DataInport13_P1;

/* Definition of bus struct for block Noa_Nofusion/IfRFM_LANES_In, Port:  1 */
read_Noa_Nofusion_DataInport14_P1 Bus_read_Noa_Nofusion_DataInport14_P1;

#endif
