/** <!------------------------------------------------------------------------->
*
*  @file Com_generated.c 
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Definition of AUTOSAR COM header.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*------------------------------------------------------------------------------------------------*\
  INCLUDES 
\*------------------------------------------------------------------------------------------------*/
#include "Com.h"
#include "Com_Cbk.h"
#include "EncodeDecode.h"
#include "PduR_Com.h"
#include <float.h>
#include <limits.h>
#include <string.h>
#include "StateManager_generated.h"
#include "RSDS_PCANFD_232435_external.h"
#include "Rte_generated.h"
#if (PDUR_J1939TP_SUPPORT == STD_ON)
#include "Feature_Types.h"
#endif
#include "Feature_Com.h"
#include "BusManager_RSDS_PCANFD_9.h"
#include "BinaryHeap.h"




/* Profiler */
#ifdef COM_ENABLE_PROFILING
#ifndef COM_MAINFUNCTIONTX_ENABLE_PROFILING
#define COM_MAINFUNCTIONTX_ENABLE_PROFILING
#endif
#ifndef COM_TRIGGERIPDU_ENABLE_PROFILING
#define COM_TRIGGERIPDU_ENABLE_PROFILING
#endif
#ifndef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
#define COM_TRIGGERIPDUSEND_ENABLE_PROFILING
#endif
#endif

#if defined(COM_MAINFUNCTIONTX_ENABLE_PROFILING) || defined(COM_TRIGGERIPDU_ENABLE_PROFILING) || defined(COM_TRIGGERIPDUSEND_ENABLE_PROFILING)
#include <DsApplicationInterface.h>
#endif

#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
static DsTProfilerSource Com_MainFunctionTx_PROFILER_SRC;
#endif
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
static DsTProfilerSource Com_TriggerIPDU_PROFILER_SRC;
#endif
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
static DsTProfilerSource Com_TriggerIPDUSend_PROFILER_SRC;
#endif

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/
/* Definition of the TX and RX I-PDUs and ISignals that are available in the COM module. */
static uint8 Com_Frame_TX_Com_ADAS_AD1_209087_119558_232435 [16];
static PduInfoType Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435;
uint8 Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val;
uint32 Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val;
uint8 Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val;

 
static uint8 Com_Frame_RX_Com_RSDS_L_AD1_209088_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435;
uint32 Com_RX_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435_sgn_val;
uint32 Com_RX_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435_sgn_val;
uint16 Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum1_197956_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum2_197957_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum3_197958_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum4_197959_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum5_197960_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum6_197961_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_Checksum7_197962_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter1_197963_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter2_197964_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter3_197965_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter4_197966_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter5_197967_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter6_197968_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RollingCounter7_197969_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435_sgn_val;
uint8 Com_RX_Inst_1088_BlockCounter1_197974_119558_232435_sgn_val;

static uint8 Com_Frame_RX_Com_RSDS_L_AD2_209089_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435;
uint8 Com_RX_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435_sgn_val;
uint16 Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum8_198009_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum9_198010_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum10_198011_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum12_198012_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum13_198013_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum14_198014_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter8_198015_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter9_198016_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter10_198017_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter12_198018_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter13_198019_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_RollingCounter14_198020_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Checksum11_198021_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_Rollingcounter11_198022_119558_232435_sgn_val;
uint8 Com_RX_Inst_1089_BlockCounter2_198023_119558_232435_sgn_val;

static uint8 Com_Frame_RX_Com_RSDS_L_AD3_209090_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435;
uint8 Com_RX_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435_sgn_val;
uint16 Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum15_198058_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum16_198059_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum17_198060_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum19_198061_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum20_198062_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum21_198063_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter15_198064_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter16_198065_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter17_198066_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter19_198067_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter20_198068_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_RollingCounter21_198069_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Checksum18_198070_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_Rollingcounter18_198071_119558_232435_sgn_val;
uint8 Com_RX_Inst_1090_BlockCounter3_198072_119558_232435_sgn_val;

static uint8 Com_Frame_RX_Com_RSDS_R_AD1_209091_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435;
uint32 Com_RX_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435_sgn_val;
uint32 Com_RX_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435_sgn_val;
uint16 Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum22_198110_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum23_198111_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum24_198112_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum26_198113_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum27_198114_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum28_198115_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter22_198116_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter23_198117_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter24_198118_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter26_198119_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter27_198120_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RollingCounter28_198121_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Checksum25_198123_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_Rollingcounter25_198124_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435_sgn_val;
uint8 Com_RX_Inst_1091_BlockCounter4_198128_119558_232435_sgn_val;

static uint8 Com_Frame_RX_Com_RSDS_R_AD2_209092_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435;
uint8 Com_RX_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435_sgn_val;
uint16 Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum29_198163_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum30_198164_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum31_198165_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum33_198166_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum34_198167_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum35_198168_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter29_198169_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter30_198170_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter31_198171_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter33_198172_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter34_198173_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_RollingCounter35_198174_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Checksum32_198175_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_Rollingcounter32_198176_119558_232435_sgn_val;
uint8 Com_RX_Inst_1092_BlockCounter5_198177_119558_232435_sgn_val;

static uint8 Com_Frame_RX_Com_RSDS_R_AD3_209093_119558_232435 [64];
static PduInfoType Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435;
uint8 Com_RX_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435_sgn_val;
uint16 Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum36_198212_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum37_198213_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum38_198214_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum40_198215_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum41_198216_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum42_198217_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter36_198218_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter37_198219_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter38_198220_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter40_198221_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter41_198222_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_RollingCounter42_198223_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Checksum39_198224_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_Rollingcounter39_198225_119558_232435_sgn_val;
uint8 Com_RX_Inst_1093_BlockCounter6_198226_119558_232435_sgn_val;



/* The communication status of the COM module. */
static Com_StatusType Com_Status = COM_UNINIT;


/* The current simulation time. Incremented by a certain period with every call to the Com main function. */
static sint64 currentTime;

/* Define a new comparator function, which takes the priority into account.
* This function is used for the normal usage of the binary heap (for insertion and removal).
* Since the heap should be ordered by the timeout, we just compare the timeouts of both parameters.
*/
GENERIC_COMPARE_FUNCTION(CyclicCompare, Com_CyclicHeapEntry, return (sint32)((b->Timeout<a->Timeout) - (a->Timeout<b->Timeout)))

/* Create a new priority queue using the previously defined CyclicCompare comparator */
static BinaryHeap timingQueue_10 = BINARY_HEAP_CREATE(Com_CyclicHeapEntry, CyclicCompare);


/*------------------------------------------------------------------------------------------------*\
  PROTOTYPES
\*------------------------------------------------------------------------------------------------*/
static void ComControllerStateChanged10(uint32 index, uint8 newState, uint8 oldState);

/*------------------------------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_Schedule_CyclicTimingPdus
 *** 
 *** DESCRIPTION:
 ***     Schedules the given pdu for transmit.
 ***
 *** PARAMETERS:
 ***     PduIdType  pdu             The I-PDU ID to be scheduled for cyclic triggering.
 ***     sint64     timeout         timeout for triggering. 
 ***     uint32     period          period of PDU for triggering. 
 ***
\**************************************************************************************************/
static void Com_Schedule_CyclicTimingPdus(BinaryHeap *timingQueue, PduIdType pdu, sint64 timeout, uint32 period) {
    Com_CyclicHeapEntry cyclicPdu;
    cyclicPdu.Pdu = pdu;
    cyclicPdu.Timeout = currentTime + timeout;
    cyclicPdu.Period = period;
    BinaryHeapPush(timingQueue, &cyclicPdu); /* copies the CyclicPdu into the heap */
}


/**************************************************************************************************\
 *** FUNCTION:
 ***     ComControllerStateChanged10
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables for cyclic timing of pdus.
 ***     This function is called from the StateManager in case of ComControllerEnable state changed
 ***
 *** PARAMETERS:
 ***     uint32 index    index of the state which has caused this state to change.
 ***     uint8  newState current state of the objects in the state table (managed by the StateManager)
 ***     uint8  oldState old state of the objects in the state table (managed by the StateManager)
 ***
\**************************************************************************************************/
static void ComControllerStateChanged10(uint32 index, uint8 newState, uint8 oldState)
{
    INTENDED_UNREFERENCED_PARAMETER(index);
    INTENDED_UNREFERENCED_PARAMETER(oldState);

    if (newState > 0)
    {
        /* clear all cyclic timing entries, and schedule afterwards with offset (and period for the schedules after the initial one) */
        BinaryHeapClear(&timingQueue_10);
        Com_Schedule_CyclicTimingPdus(&timingQueue_10,Com_ADAS_AD1_209087_119558_232435, 0LL, 500000L);
    }
}

 


/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_Init
 *** 
 *** DESCRIPTION:
 ***     Initializes internal and external interfaces and variables of the AUTOSAR COM layer for
 ***     further processing. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     const Com_ConfigType *  config  Pointer to the COM configuration data.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_Init(const Com_ConfigType* config)
{
    INTENDED_UNREFERENCED_PARAMETER(config);

#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
    Com_MainFunctionTx_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_MainFunctionTx");
#endif
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
    Com_TriggerIPDU_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_TriggerIPDU");
#endif
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
    Com_TriggerIPDUSend_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_TriggerIPDUSend");
#endif

    /* Initialization of the TX I-PDU data structs */
    Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr = Com_Frame_TX_Com_ADAS_AD1_209087_119558_232435;
    Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduLength  = 16;
    Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.MetaDataPtr = NULL_PTR;

    /* Initialization of the RX I-PDU data structs */
    Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_L_AD1_209088_119558_232435;
    Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.MetaDataPtr = NULL_PTR;
    Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_L_AD2_209089_119558_232435;
    Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.MetaDataPtr = NULL_PTR;
    Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_L_AD3_209090_119558_232435;
    Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.MetaDataPtr = NULL_PTR;
    Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_R_AD1_209091_119558_232435;
    Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.MetaDataPtr = NULL_PTR;
    Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_R_AD2_209092_119558_232435;
    Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.MetaDataPtr = NULL_PTR;
    Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr = Com_Frame_RX_Com_RSDS_R_AD3_209093_119558_232435;
    Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduLength  = 64;
    Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.MetaDataPtr = NULL_PTR;


    /* Register callback for ComControllerEnable state */
    StateManager_RegisterCallback(10, ComControllerStateChanged10);


    Com_Status = COM_INIT;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_DeInit
 *** 
 *** DESCRIPTION:
 ***     This service stops the inter-ECU communication. All started I-PDU groups are stopped and
 ***     have to be started again, if needed, after Com_Init is called.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_DeInit(void)
{
    Com_Status = COM_UNINIT;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. Depending on InitialValueUsage parameter, it is called either in OnInit
 ***    or OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_VariableInitialize(void)
{
    /* Initialization of the TX I-PDUs with unused bit pattern */
    memset(Com_Frame_TX_Com_ADAS_AD1_209087_119558_232435, 0x00, sizeof(Com_Frame_TX_Com_ADAS_AD1_209087_119558_232435));
    /* Initialization of the TX signals and triggers */
    Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_CRC_197911_119558_232435, 1);
    /* Signal: Sync_CRC */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[1]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[1 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_OVS_197912_119558_232435, 1);
    /* Signal: Sync_OVS */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val) & (uint8)0x3) << 0;
                uint8 mask = (uint8)0x3 << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_Resd_197913_119558_232435, 1);
    /* Signal: Sync_Resd */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val) & (uint8)0x1F) << 3;
                uint8 mask = (uint8)0x1F << 3;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_Counter_197914_119558_232435, 1);
    /* Signal: Sync_Counter */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val) & (uint8)0xF) << 0;
                uint8 mask = (uint8)0xF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_SGW_197915_119558_232435, 1);
    /* Signal: Sync_SGW */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val) & (uint8)0x1) << 2;
                uint8 mask = (uint8)0x1 << 2;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val = (uint32) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_SyncTime_197916_119558_232435, 1);
    /* Signal: Sync_SyncTime */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint32 shiftData = ((uint32)READ32(&Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val) & (uint32)0xFFFFFFFF) << 0;
                uint32 mask = (uint32)0xFFFFFFFF << 0;
                uint32 resultMask = INT32_TO_BE(~mask);
                uint32 resultData = INT32_TO_BE(shiftData);
                resultData = (READ32(&destData[4]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 4; copyCounter++)
                    destData[4 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232435, 1);
    /* Signal: Sync_TimeDomain */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val) & (uint8)0xF) << 4;
                uint8 mask = (uint8)0xF << 4;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

    Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val = (uint8) 0;
    Rte_SetCodedValue(Com_X_Inst_1136_Sync_Type_197918_119558_232435, 1);
    /* Signal: Sync_Type */
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[0]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[0 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }


    /* Initialization of the RX I-PDUs with unused bit pattern */
    memset(Com_Frame_RX_Com_RSDS_L_AD1_209088_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_L_AD1_209088_119558_232435));
    memset(Com_Frame_RX_Com_RSDS_L_AD2_209089_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_L_AD2_209089_119558_232435));
    memset(Com_Frame_RX_Com_RSDS_L_AD3_209090_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_L_AD3_209090_119558_232435));
    memset(Com_Frame_RX_Com_RSDS_R_AD1_209091_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_R_AD1_209091_119558_232435));
    memset(Com_Frame_RX_Com_RSDS_R_AD2_209092_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_R_AD2_209092_119558_232435));
    memset(Com_Frame_RX_Com_RSDS_R_AD3_209093_119558_232435, 0x00, sizeof(Com_Frame_RX_Com_RSDS_R_AD3_209093_119558_232435));
    /* Initialization of the RX signals and triggers */
    Com_RX_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435_sgn_val = (uint32) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435_sgn_val = (uint32) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435, 1);
    Com_RX_Inst_1088_Checksum1_197956_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum1_197956_119558_232435, 1);
    Com_RX_Inst_1088_Checksum2_197957_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum2_197957_119558_232435, 1);
    Com_RX_Inst_1088_Checksum3_197958_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum3_197958_119558_232435, 1);
    Com_RX_Inst_1088_Checksum4_197959_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum4_197959_119558_232435, 1);
    Com_RX_Inst_1088_Checksum5_197960_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum5_197960_119558_232435, 1);
    Com_RX_Inst_1088_Checksum6_197961_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum6_197961_119558_232435, 1);
    Com_RX_Inst_1088_Checksum7_197962_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum7_197962_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter1_197963_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter1_197963_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter2_197964_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter2_197964_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter3_197965_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter3_197965_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter4_197966_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter4_197966_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter5_197967_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter5_197967_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter6_197968_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter6_197968_119558_232435, 1);
    Com_RX_Inst_1088_RollingCounter7_197969_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter7_197969_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435, 1);
    Com_RX_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435, 1);
    Com_RX_Inst_1088_BlockCounter1_197974_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1088_BlockCounter1_197974_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435, 1);
    Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435, 1);
    Com_RX_Inst_1089_Checksum8_198009_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum8_198009_119558_232435, 1);
    Com_RX_Inst_1089_Checksum9_198010_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum9_198010_119558_232435, 1);
    Com_RX_Inst_1089_Checksum10_198011_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum10_198011_119558_232435, 1);
    Com_RX_Inst_1089_Checksum12_198012_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum12_198012_119558_232435, 1);
    Com_RX_Inst_1089_Checksum13_198013_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum13_198013_119558_232435, 1);
    Com_RX_Inst_1089_Checksum14_198014_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum14_198014_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter8_198015_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter8_198015_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter9_198016_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter9_198016_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter10_198017_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter10_198017_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter12_198018_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter12_198018_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter13_198019_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter13_198019_119558_232435, 1);
    Com_RX_Inst_1089_RollingCounter14_198020_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter14_198020_119558_232435, 1);
    Com_RX_Inst_1089_Checksum11_198021_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum11_198021_119558_232435, 1);
    Com_RX_Inst_1089_Rollingcounter11_198022_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_Rollingcounter11_198022_119558_232435, 1);
    Com_RX_Inst_1089_BlockCounter2_198023_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1089_BlockCounter2_198023_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435, 1);
    Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435, 1);
    Com_RX_Inst_1090_Checksum15_198058_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum15_198058_119558_232435, 1);
    Com_RX_Inst_1090_Checksum16_198059_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum16_198059_119558_232435, 1);
    Com_RX_Inst_1090_Checksum17_198060_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum17_198060_119558_232435, 1);
    Com_RX_Inst_1090_Checksum19_198061_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum19_198061_119558_232435, 1);
    Com_RX_Inst_1090_Checksum20_198062_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum20_198062_119558_232435, 1);
    Com_RX_Inst_1090_Checksum21_198063_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum21_198063_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter15_198064_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter15_198064_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter16_198065_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter16_198065_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter17_198066_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter17_198066_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter19_198067_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter19_198067_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter20_198068_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter20_198068_119558_232435, 1);
    Com_RX_Inst_1090_RollingCounter21_198069_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter21_198069_119558_232435, 1);
    Com_RX_Inst_1090_Checksum18_198070_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum18_198070_119558_232435, 1);
    Com_RX_Inst_1090_Rollingcounter18_198071_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_Rollingcounter18_198071_119558_232435, 1);
    Com_RX_Inst_1090_BlockCounter3_198072_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1090_BlockCounter3_198072_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435_sgn_val = (uint32) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435_sgn_val = (uint32) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435, 1);
    Com_RX_Inst_1091_Checksum22_198110_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum22_198110_119558_232435, 1);
    Com_RX_Inst_1091_Checksum23_198111_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum23_198111_119558_232435, 1);
    Com_RX_Inst_1091_Checksum24_198112_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum24_198112_119558_232435, 1);
    Com_RX_Inst_1091_Checksum26_198113_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum26_198113_119558_232435, 1);
    Com_RX_Inst_1091_Checksum27_198114_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum27_198114_119558_232435, 1);
    Com_RX_Inst_1091_Checksum28_198115_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum28_198115_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter22_198116_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter22_198116_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter23_198117_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter23_198117_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter24_198118_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter24_198118_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter26_198119_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter26_198119_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter27_198120_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter27_198120_119558_232435, 1);
    Com_RX_Inst_1091_RollingCounter28_198121_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter28_198121_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435, 1);
    Com_RX_Inst_1091_Checksum25_198123_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum25_198123_119558_232435, 1);
    Com_RX_Inst_1091_Rollingcounter25_198124_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_Rollingcounter25_198124_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435, 1);
    Com_RX_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435, 1);
    Com_RX_Inst_1091_BlockCounter4_198128_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1091_BlockCounter4_198128_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435, 1);
    Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435, 1);
    Com_RX_Inst_1092_Checksum29_198163_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum29_198163_119558_232435, 1);
    Com_RX_Inst_1092_Checksum30_198164_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum30_198164_119558_232435, 1);
    Com_RX_Inst_1092_Checksum31_198165_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum31_198165_119558_232435, 1);
    Com_RX_Inst_1092_Checksum33_198166_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum33_198166_119558_232435, 1);
    Com_RX_Inst_1092_Checksum34_198167_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum34_198167_119558_232435, 1);
    Com_RX_Inst_1092_Checksum35_198168_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum35_198168_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter29_198169_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter29_198169_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter30_198170_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter30_198170_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter31_198171_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter31_198171_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter33_198172_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter33_198172_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter34_198173_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter34_198173_119558_232435, 1);
    Com_RX_Inst_1092_RollingCounter35_198174_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter35_198174_119558_232435, 1);
    Com_RX_Inst_1092_Checksum32_198175_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum32_198175_119558_232435, 1);
    Com_RX_Inst_1092_Rollingcounter32_198176_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_Rollingcounter32_198176_119558_232435, 1);
    Com_RX_Inst_1092_BlockCounter5_198177_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1092_BlockCounter5_198177_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435_sgn_val = (uint16) 1024;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435_sgn_val = (uint16) 4102;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435_sgn_val = (uint16) 512;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435, 1);
    Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435, 1);
    Com_RX_Inst_1093_Checksum36_198212_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum36_198212_119558_232435, 1);
    Com_RX_Inst_1093_Checksum37_198213_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum37_198213_119558_232435, 1);
    Com_RX_Inst_1093_Checksum38_198214_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum38_198214_119558_232435, 1);
    Com_RX_Inst_1093_Checksum40_198215_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum40_198215_119558_232435, 1);
    Com_RX_Inst_1093_Checksum41_198216_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum41_198216_119558_232435, 1);
    Com_RX_Inst_1093_Checksum42_198217_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum42_198217_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter36_198218_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter36_198218_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter37_198219_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter37_198219_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter38_198220_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter38_198220_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter40_198221_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter40_198221_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter41_198222_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter41_198222_119558_232435, 1);
    Com_RX_Inst_1093_RollingCounter42_198223_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter42_198223_119558_232435, 1);
    Com_RX_Inst_1093_Checksum39_198224_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum39_198224_119558_232435, 1);
    Com_RX_Inst_1093_Rollingcounter39_198225_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_Rollingcounter39_198225_119558_232435, 1);
    Com_RX_Inst_1093_BlockCounter6_198226_119558_232435_sgn_val = (uint8) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1093_BlockCounter6_198226_119558_232435, 1);

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_OnStart
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. It is called in OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_OnStart(void)
{
    currentTime = 0;

    /* Initial timing offset for cyclic Pdus */
    ComControllerStateChanged10(10, 1, 0);

}



/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDUSend
 *** 
 *** DESCRIPTION:
 ***     Trigger the I-PDU with the specified ID for transmission.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
static inline Std_ReturnType Com_TriggerIPDUSend_PROFILED(PduIdType ComTxPduId);

Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId)
{
    Std_ReturnType rval;

    dsProfilerWriteEvent (Com_TriggerIPDUSend_PROFILER_SRC, UserTimespanStart, 0, ComTxPduId);
    rval = Com_TriggerIPDUSend_PROFILED(ComTxPduId);
    dsProfilerWriteEvent (Com_TriggerIPDUSend_PROFILER_SRC, UserTimespanEnd, 0, 0);

    return rval;
}

static inline Std_ReturnType Com_TriggerIPDUSend_PROFILED(PduIdType ComTxPduId)
#else
Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId)
#endif
{
    Std_ReturnType result = E_NOT_OK;
    if (Com_Status != COM_INIT)
    {
        return result;
    }
    switch (ComTxPduId)
    {
        case Com_ADAS_AD1_209087_119558_232435:
        { /* Pdu: ADAS_AD1 */
            /* Signal: Sync_CRC */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_CRC_197911_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[1]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[1 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_OVS */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_OVS_197912_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val) & (uint8)0x3) << 0;
                uint8 mask = (uint8)0x3 << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Resd */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Resd_197913_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val) & (uint8)0x1F) << 3;
                uint8 mask = (uint8)0x1F << 3;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Counter */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Counter_197914_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val) & (uint8)0xF) << 0;
                uint8 mask = (uint8)0xF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_SGW */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_SGW_197915_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val) & (uint8)0x1) << 2;
                uint8 mask = (uint8)0x1 << 2;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_SyncTime */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_SyncTime_197916_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint32 shiftData = ((uint32)READ32(&Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val) & (uint32)0xFFFFFFFF) << 0;
                uint32 mask = (uint32)0xFFFFFFFF << 0;
                uint32 resultMask = INT32_TO_BE(~mask);
                uint32 resultData = INT32_TO_BE(shiftData);
                resultData = (READ32(&destData[4]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 4; copyCounter++)
                    destData[4 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_TimeDomain */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val) & (uint8)0xF) << 4;
                uint8 mask = (uint8)0xF << 4;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Type */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Type_197918_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[0]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[0 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }


            /* call to PDU feature before transmission */
            if (Feature_ComPreparePduSend(Feature_ADAS_AD1_209087_119558_232435_TX, &Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435) != E_OK)
            {
                result = E_DISABLED;
            }

            if (result != E_DISABLED)
            {
                result = PduR_ComTransmit(PDUR_TX_ADAS_AD1_119558_232435, &Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435);
            }
            return result;
        }
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerTransmit
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer when an AUTOSAR COM I-PDU must be transmitted.
 ***     In this function, AUTOSAR COM copies the contents of its I-PDU transmit buffer to the
 ***     L-PDU buffer specified by SduDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 ***     PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and a
 ***                                pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
Std_ReturnType Com_TriggerTransmit(PduIdType ComTxPduId, PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);
    
    switch (ComTxPduId)
    {
        case Com_ADAS_AD1_209087_119558_232435:
        { /* Pdu: ADAS_AD1 */
            /* Signal: Sync_CRC */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_CRC_197911_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[1]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[1 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_OVS */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_OVS_197912_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val) & (uint8)0x3) << 0;
                uint8 mask = (uint8)0x3 << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Resd */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Resd_197913_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val) & (uint8)0x1F) << 3;
                uint8 mask = (uint8)0x1F << 3;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Counter */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Counter_197914_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val) & (uint8)0xF) << 0;
                uint8 mask = (uint8)0xF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_SGW */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_SGW_197915_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val) & (uint8)0x1) << 2;
                uint8 mask = (uint8)0x1 << 2;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[3]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[3 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_SyncTime */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_SyncTime_197916_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint32 shiftData = ((uint32)READ32(&Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val) & (uint32)0xFFFFFFFF) << 0;
                uint32 mask = (uint32)0xFFFFFFFF << 0;
                uint32 resultMask = INT32_TO_BE(~mask);
                uint32 resultData = INT32_TO_BE(shiftData);
                resultData = (READ32(&destData[4]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 4; copyCounter++)
                    destData[4 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_TimeDomain */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val) & (uint8)0xF) << 4;
                uint8 mask = (uint8)0xF << 4;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[2]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[2 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }

            /* Signal: Sync_Type */
#if !defined(HOST_DEBUG)
            if (Rte_SetCodedValue(Com_X_Inst_1136_Sync_Type_197918_119558_232435, 0))
#endif
            {
                int copyCounter;
                uint8* destData = (uint8*)Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr;
                uint8 shiftData = ((uint8)READ8(&Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val) & (uint8)0xFF) << 0;
                uint8 mask = (uint8)0xFF << 0;
                uint8 resultMask = INT8_TO_BE(~mask);
                uint8 resultData = INT8_TO_BE(shiftData);
                resultData = (READ8(&destData[0]) & resultMask) | resultData;
                for(copyCounter = 0; copyCounter < 1; copyCounter++)
                    destData[0 + copyCounter] = ((uint8*)&resultData)[copyCounter];
            }


            /* call to PDU feature before transmission */
            Feature_ComPreparePduSend(Feature_ADAS_AD1_209087_119558_232435_TX, &Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435);
            if (PduInfoPtr != NULL_PTR)
            {
                PduInfoPtr->SduLength = Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduLength;
                if(PduInfoPtr->SduDataPtr != Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr)
                {
                    memcpy(PduInfoPtr->SduDataPtr, Com_Pdu_TX_Com_ADAS_AD1_209087_119558_232435.SduDataPtr, PduInfoPtr->SduLength);
                }
            }

            return E_OK;
        }
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDU
 *** 
 *** DESCRIPTION:
 ***     This function is called by all IPDU triggers coming from the COM module.
 ***     The function routes the trigger command to the right trigger function depending on the used protocol.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
static inline Std_ReturnType Com_TriggerIPDU_PROFILED(PduIdType ComTxPduId);

Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId)
{
    Std_ReturnType rval;

    dsProfilerWriteEvent(Com_TriggerIPDU_PROFILER_SRC, UserTimespanStart, 0, ComTxPduId);
    rval = Com_TriggerIPDU_PROFILED(ComTxPduId);
    dsProfilerWriteEvent(Com_TriggerIPDU_PROFILER_SRC, UserTimespanEnd, 0, 0);

    return rval;
}

static inline Std_ReturnType Com_TriggerIPDU_PROFILED(PduIdType ComTxPduId)
#else
Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId)
#endif
{
    Std_ReturnType result = E_NOT_OK;
    if (Com_Status != COM_INIT || StateManager_GetState(9) != 1)
    {
        return result;
    }
    switch (ComTxPduId)
    {
        case Com_ADAS_AD1_209087_119558_232435:
        { /* Pdu: ADAS_AD1 */
            return Com_TriggerIPDUSend(ComTxPduId);
        }
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_GetStatus
 *** 
 *** DESCRIPTION:
 ***     Returns the status of the AUTOSAR COM module.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     Com_StatusType    The status code of the function call.
\**************************************************************************************************/
Com_StatusType Com_GetStatus(void)
{
    return Com_Status;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_SendSignal(Com_SignalIdType SignalId, const void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    switch (SignalId)
    {
        case Com_X_Inst_1136_Sync_CRC_197911_119558_232435:
        {
            Com_TX_Inst_1136_Sync_CRC_197911_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_OVS_197912_119558_232435:
        {
            Com_TX_Inst_1136_Sync_OVS_197912_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_Resd_197913_119558_232435:
        {
            Com_TX_Inst_1136_Sync_Resd_197913_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_Counter_197914_119558_232435:
        {
            Com_TX_Inst_1136_Sync_Counter_197914_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_SGW_197915_119558_232435:
        {
            Com_TX_Inst_1136_Sync_SGW_197915_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_SyncTime_197916_119558_232435:
        {
            Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232435_sgn_val = *((uint32*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232435:
        {
            Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
        case Com_X_Inst_1136_Sync_Type_197918_119558_232435:
        {
            Com_TX_Inst_1136_Sync_Type_197918_119558_232435_sgn_val = *((uint8*) SignalDataPtr);
            return E_OK;
        }
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_UpdateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Updates a group signal with the data referenced by SignalDataPtr. The group signal data is
 ***     updated in the shadow buffer, not in the I-PDU. To send out the shadow buffer,
 ***     Com_SendSignalGroup has to be called.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_UpdateShadowSignal(Com_SignalIdType SignalId, const void * SignalDataPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(SignalDataPtr);
    switch (SignalId)
    {
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the signal.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_InvalidateSignal(Com_SignalIdType SignalId)
{
    switch (SignalId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the group signal, e.g., the sensor is faulty.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_InvalidateShadowSignal(Com_SignalIdType SignalId)
{
    switch (SignalId)
    {
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignalGroup
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that cannot provide
 ***     a valid value for the signal group.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}


/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CheckHeapAndSend    
 ***        
 *** DESCRIPTION:
 ***     Takes due entries from binary heap and sends PDU
 *** 
 *** PARAMETERS:
 ***     Type                 Name                  Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     BinaryHeap           timingQueue           Queue to work on
 ***     sint64               period                Com main function period
 ***     sint32               creditCounterIndex    StateManager index for credit counter
 ***
 *** RETURNS:
 ***     void
\**************************************************************************************************/
static void Com_CheckHeapAndSend(BinaryHeap *timingQueue, sint64 period, sint32 creditCounterIndex)
{
    Std_ReturnType result;
    Com_CyclicHeapEntry pdu;
    while (BinaryHeapPeek(timingQueue, &pdu) && currentTime+period/2 >= pdu.Timeout) {
        /* remove first element and trigger it */
        BinaryHeapPop(timingQueue, &pdu);
        result = Com_TriggerIPDU (pdu.Pdu); 
        if (result == E_NOT_OK) {
            /* Schedule again for next cycle ("Versendesteuerung"), NEVER do a Schedule(pdu, 0, period) inside of a trigger! */
            Com_Schedule_CyclicTimingPdus(timingQueue, pdu.Pdu, period/2+1, pdu.Period); 
        }
        else {
            if (pdu.Period > 0) 
            {   /* Schedule again with period, but only if period is defined for this pdu (not one-time sends at start) 
                   and period not faster than task-period/2 */
                Com_Schedule_CyclicTimingPdus(timingQueue, pdu.Pdu, MAX(pdu.Period, period), pdu.Period); 
            }
        }
        
        /* Check credit counters for used (and eventually combined) I/O function block */
        if (creditCounterIndex >= 0 && StateManager_GetState(creditCounterIndex) == 0) break; 
    }
}


/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_MainFunctionTx
 *** 
 *** DESCRIPTION:
 ***     This function processes the AUTOSAR COM transmission activities that are not directly
 ***     initiated by the calls from the RTE and PDU-R.
 *** 
 *** PARAMETERS:
 ***     sint64 period      Com main function period
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
static inline void Com_MainFunctionTx_PROFILED(sint64 period); 

void Com_MainFunctionTx(sint64 period)
{
    dsProfilerWriteEvent (Com_MainFunctionTx_PROFILER_SRC, UserTimespanStart , 0, 0);
    Com_MainFunctionTx_PROFILED(period);
    dsProfilerWriteEvent (Com_MainFunctionTx_PROFILER_SRC, UserTimespanEnd , 0, 0);
}

static inline void Com_MainFunctionTx_PROFILED(sint64 period)
#else
void Com_MainFunctionTx(sint64 period)
#endif
{
    POSSIBLE_UNREFERENCED_PARAMETER(period);

    if (Com_Status != COM_INIT)
    {
       return;
    }
    /* Check if the heap is not empty and if so, that the timeout has elapsed.
    * Since we are working on a heap, the foremost element is guaranteed to be minimal,
    * so if the first element is not due, we are immediately done without checking any other element.
    * If its timeout has elapsed, we remove it and trigger it. Afterwards the root node is again the minimal element.
    */
    Com_CheckHeapAndSend(&timingQueue_10, period, 2);
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after the PDU has been transmitted on the
 ***     network.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TxConfirmation(PduIdType ComTxPduId)
{
    INTENDED_UNREFERENCED_PARAMETER(ComTxPduId);
    if (Com_Status != COM_INIT)
    {
        return;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    switch (SignalId)
    {
        case Com_X_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435:
        {
            *((uint32*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435:
        {
            *((uint32*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum1_197956_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum1_197956_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum2_197957_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum2_197957_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum3_197958_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum3_197958_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum4_197959_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum4_197959_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum5_197960_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum5_197960_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum6_197961_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum6_197961_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_Checksum7_197962_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_Checksum7_197962_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter1_197963_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter1_197963_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter2_197964_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter2_197964_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter3_197965_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter3_197965_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter4_197966_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter4_197966_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter5_197967_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter5_197967_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter6_197968_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter6_197968_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RollingCounter7_197969_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RollingCounter7_197969_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1088_BlockCounter1_197974_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1088_BlockCounter1_197974_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum8_198009_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum8_198009_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum9_198010_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum9_198010_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum10_198011_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum10_198011_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum12_198012_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum12_198012_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum13_198013_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum13_198013_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum14_198014_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum14_198014_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter8_198015_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter8_198015_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter9_198016_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter9_198016_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter10_198017_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter10_198017_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter12_198018_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter12_198018_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter13_198019_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter13_198019_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_RollingCounter14_198020_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_RollingCounter14_198020_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Checksum11_198021_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Checksum11_198021_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_Rollingcounter11_198022_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_Rollingcounter11_198022_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1089_BlockCounter2_198023_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1089_BlockCounter2_198023_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum15_198058_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum15_198058_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum16_198059_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum16_198059_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum17_198060_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum17_198060_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum19_198061_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum19_198061_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum20_198062_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum20_198062_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum21_198063_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum21_198063_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter15_198064_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter15_198064_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter16_198065_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter16_198065_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter17_198066_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter17_198066_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter19_198067_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter19_198067_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter20_198068_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter20_198068_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_RollingCounter21_198069_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_RollingCounter21_198069_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Checksum18_198070_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Checksum18_198070_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_Rollingcounter18_198071_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_Rollingcounter18_198071_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1090_BlockCounter3_198072_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1090_BlockCounter3_198072_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435:
        {
            *((uint32*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435:
        {
            *((uint32*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum22_198110_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum22_198110_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum23_198111_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum23_198111_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum24_198112_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum24_198112_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum26_198113_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum26_198113_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum27_198114_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum27_198114_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum28_198115_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum28_198115_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter22_198116_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter22_198116_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter23_198117_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter23_198117_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter24_198118_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter24_198118_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter26_198119_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter26_198119_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter27_198120_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter27_198120_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RollingCounter28_198121_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RollingCounter28_198121_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Checksum25_198123_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Checksum25_198123_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_Rollingcounter25_198124_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_Rollingcounter25_198124_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1091_BlockCounter4_198128_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1091_BlockCounter4_198128_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum29_198163_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum29_198163_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum30_198164_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum30_198164_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum31_198165_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum31_198165_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum33_198166_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum33_198166_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum34_198167_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum34_198167_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum35_198168_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum35_198168_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter29_198169_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter29_198169_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter30_198170_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter30_198170_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter31_198171_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter31_198171_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter33_198172_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter33_198172_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter34_198173_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter34_198173_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_RollingCounter35_198174_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_RollingCounter35_198174_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Checksum32_198175_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Checksum32_198175_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_Rollingcounter32_198176_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_Rollingcounter32_198176_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1092_BlockCounter5_198177_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1092_BlockCounter5_198177_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum36_198212_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum36_198212_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum37_198213_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum37_198213_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum38_198214_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum38_198214_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum40_198215_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum40_198215_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum41_198216_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum41_198216_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum42_198217_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum42_198217_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter36_198218_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter36_198218_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter37_198219_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter37_198219_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter38_198220_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter38_198220_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter40_198221_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter40_198221_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter41_198222_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter41_198222_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_RollingCounter42_198223_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_RollingCounter42_198223_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Checksum39_198224_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Checksum39_198224_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_Rollingcounter39_198225_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_Rollingcounter39_198225_119558_232435_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1093_BlockCounter6_198226_119558_232435:
        {
            *((uint8*) SignalDataPtr) = Com_RX_Inst_1093_BlockCounter6_198226_119558_232435_sgn_val;
            return E_OK;
        }
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the received signal group from the I-PDU to the shadow buffer. After
 ***     this call, the group signals can be copied from the shadow buffer to the upper layer by
 ***     calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveShadowSignal
 *** 
 *** DESCRIPTION:
 ***     The function updates the group signal which is referenced by SignalDataPtr with the data
 ***     in the shadow buffer. The data in the shadow buffer should be updated by calling the
 ***     Com_ReceiveSignalGroup service before calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_ReceiveShadowSignal(Com_SignalIdType SignalId, void * SignalDataPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(SignalDataPtr);
    INTENDED_UNREFERENCED_PARAMETER(SignalId);
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_MainFunctionRx
 *** 
 *** DESCRIPTION:
 ***     This function performs the AUTOSAR COM receive processes that are not directly initiated
 ***     by the calls from the RTE and PDU-R.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_MainFunctionRx(void)
{
    if (Com_Status != COM_INIT)
    {
        return;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_RxIndication
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after an I-PDU has been received.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            ComRxPduId  ID of AUTOSAR COM I-PDU that has been received.
 ***                                      Identifies the data that has been received.
 ***     const PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and
 ***                                      a pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#elif _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4189 ) // initialized, but unreferenced variable (multiplexed/container variables)
#pragma warning( disable : 4101 ) // unreferenced variable (multiplexed/container variables)
#endif

void Com_RxIndication(PduIdType ComRxPduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if (Com_Status != COM_INIT)
    {
        return;
    }
	switch (ComRxPduId)
	{
	case Com_RSDS_L_AD1_209088_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* Scalar signal: RSDS_L_hdr_AutoSarTimeStamp */
	if (copyLength >= 37)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 4; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[33 + copyCounter];
	        *((uint32*)(&Com_RX_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435_sgn_val)) = (uint32)((INT32_FROM_BE(tempResult) >> 6) & (uint32)0x3FFFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435, 0);
	/* Scalar signal: RSDS_L_hdr_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435, 0);
	/* Scalar signal: RSDS_L_hdr_TimeStamp */
	if (copyLength >= 29)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 4; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[25 + copyCounter];
	        *((uint32*)(&Com_RX_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435_sgn_val)) = (uint32)((INT32_FROM_BE(tempResult) >> 5) & (uint32)0x7FFFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjID_1 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_1 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_1 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_1 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_1 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_1 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_1 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_1 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_1 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_1 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_1 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_1 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_1 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_1 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_1 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_1 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_1 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjID_2 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_2 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_2 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_2 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_2 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_2 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_2 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_2 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_2 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_2 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_2 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_2 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_2 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_2 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_2 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_2 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_2 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435, 0);
	/* Scalar signal: Checksum1 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum1_197956_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum1_197956_119558_232435, 0);
	/* Scalar signal: Checksum2 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum2_197957_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum2_197957_119558_232435, 0);
	/* Scalar signal: Checksum3 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum3_197958_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum3_197958_119558_232435, 0);
	/* Scalar signal: Checksum4 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum4_197959_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum4_197959_119558_232435, 0);
	/* Scalar signal: Checksum5 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum5_197960_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum5_197960_119558_232435, 0);
	/* Scalar signal: Checksum6 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum6_197961_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum6_197961_119558_232435, 0);
	/* Scalar signal: Checksum7 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_Checksum7_197962_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_Checksum7_197962_119558_232435, 0);
	/* Scalar signal: RollingCounter1 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter1_197963_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter1_197963_119558_232435, 0);
	/* Scalar signal: RollingCounter2 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter2_197964_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter2_197964_119558_232435, 0);
	/* Scalar signal: RollingCounter3 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter3_197965_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter3_197965_119558_232435, 0);
	/* Scalar signal: RollingCounter4 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter4_197966_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter4_197966_119558_232435, 0);
	/* Scalar signal: RollingCounter5 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter5_197967_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter5_197967_119558_232435, 0);
	/* Scalar signal: RollingCounter6 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter6_197968_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter6_197968_119558_232435, 0);
	/* Scalar signal: RollingCounter7 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RollingCounter7_197969_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RollingCounter7_197969_119558_232435, 0);
	/* Scalar signal: RSDS_L_hdr_TimerStempStatus */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[28 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435, 0);
	/* Scalar signal: RSDS_L_ESP_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435, 0);
	/* Scalar signal: RSDS_L_SAS_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435, 0);
	/* Scalar signal: RSDS_L_ABM_ErrorStatus */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 7) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435, 0);
	/* Scalar signal: BlockCounter1 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD1_209088_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1088_BlockCounter1_197974_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1088_BlockCounter1_197974_119558_232435, 0);
	}
	break;
	case Com_RSDS_L_AD2_209089_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* Scalar signal: RSDS_L_ObjID_3 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_3 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_3 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_3 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_3 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_3 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_3 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_3 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_3 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_3 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_3 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_3 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_3 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_3 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_3 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_3 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_3 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjID_4 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_4 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_4 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_4 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_4 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_4 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_4 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_4 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_4 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_4 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_4 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_4 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_4 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_4 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_4 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_4 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_4 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435, 0);
	/* Scalar signal: Checksum8 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum8_198009_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum8_198009_119558_232435, 0);
	/* Scalar signal: Checksum9 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum9_198010_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum9_198010_119558_232435, 0);
	/* Scalar signal: Checksum10 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum10_198011_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum10_198011_119558_232435, 0);
	/* Scalar signal: Checksum12 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum12_198012_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum12_198012_119558_232435, 0);
	/* Scalar signal: Checksum13 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum13_198013_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum13_198013_119558_232435, 0);
	/* Scalar signal: Checksum14 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum14_198014_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum14_198014_119558_232435, 0);
	/* Scalar signal: RollingCounter8 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter8_198015_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter8_198015_119558_232435, 0);
	/* Scalar signal: RollingCounter9 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter9_198016_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter9_198016_119558_232435, 0);
	/* Scalar signal: RollingCounter10 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter10_198017_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter10_198017_119558_232435, 0);
	/* Scalar signal: RollingCounter12 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter12_198018_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter12_198018_119558_232435, 0);
	/* Scalar signal: RollingCounter13 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter13_198019_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter13_198019_119558_232435, 0);
	/* Scalar signal: RollingCounter14 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_RollingCounter14_198020_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_RollingCounter14_198020_119558_232435, 0);
	/* Scalar signal: Checksum11 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Checksum11_198021_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Checksum11_198021_119558_232435, 0);
	/* Scalar signal: Rollingcounter11 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_Rollingcounter11_198022_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_Rollingcounter11_198022_119558_232435, 0);
	/* Scalar signal: BlockCounter2 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD2_209089_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1089_BlockCounter2_198023_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1089_BlockCounter2_198023_119558_232435, 0);
	}
	break;
	case Com_RSDS_L_AD3_209090_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* call to PDU Features on RxIndication */
	Feature_ComReworkPduRec(Feature_RSDS_L_AD3_209090_119558_232435_RX, PduInfoPtr);
	/* Scalar signal: RSDS_L_ObjID_5 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_5 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_5 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_5 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_5 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_5 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_5 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_5 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_5 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_5 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_5 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_5 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_5 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_5 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_5 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_5 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_5 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjID_6 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjExistProb_6 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjObstacleProb_6 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistX_6 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistY_6 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelX_6 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelY_6 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelX_6 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelAccelY_6 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistXStd_6 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjDistYStd_6 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelXStd_6 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRelVelYStd_6 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelXStd_6 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435, 0);
	/* Scalar signal: RSDS_L_ObjRAccelYStd_6 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjWidth_6 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435, 0);
	/* Scalar signal: RSDS_L_VFC_ObjLength_6 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435, 0);
	/* Scalar signal: Checksum15 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum15_198058_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum15_198058_119558_232435, 0);
	/* Scalar signal: Checksum16 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum16_198059_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum16_198059_119558_232435, 0);
	/* Scalar signal: Checksum17 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum17_198060_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum17_198060_119558_232435, 0);
	/* Scalar signal: Checksum19 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum19_198061_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum19_198061_119558_232435, 0);
	/* Scalar signal: Checksum20 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum20_198062_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum20_198062_119558_232435, 0);
	/* Scalar signal: Checksum21 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum21_198063_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum21_198063_119558_232435, 0);
	/* Scalar signal: RollingCounter15 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter15_198064_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter15_198064_119558_232435, 0);
	/* Scalar signal: RollingCounter16 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter16_198065_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter16_198065_119558_232435, 0);
	/* Scalar signal: RollingCounter17 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter17_198066_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter17_198066_119558_232435, 0);
	/* Scalar signal: RollingCounter19 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter19_198067_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter19_198067_119558_232435, 0);
	/* Scalar signal: RollingCounter20 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter20_198068_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter20_198068_119558_232435, 0);
	/* Scalar signal: RollingCounter21 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_RollingCounter21_198069_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_RollingCounter21_198069_119558_232435, 0);
	/* Scalar signal: Checksum18 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Checksum18_198070_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Checksum18_198070_119558_232435, 0);
	/* Scalar signal: Rollingcounter18 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_Rollingcounter18_198071_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_Rollingcounter18_198071_119558_232435, 0);
	/* Scalar signal: BlockCounter3 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_L_AD3_209090_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1090_BlockCounter3_198072_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1090_BlockCounter3_198072_119558_232435, 0);
	}
	break;
	case Com_RSDS_R_AD1_209091_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* Scalar signal: RSDS_R_hdr_AutoSarTimeStamp */
	if (copyLength >= 37)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 4; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[33 + copyCounter];
	        *((uint32*)(&Com_RX_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435_sgn_val)) = (uint32)((INT32_FROM_BE(tempResult) >> 6) & (uint32)0x3FFFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435, 0);
	/* Scalar signal: RSDS_R_hdr_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435, 0);
	/* Scalar signal: RSDS_R_hdr_TimeStamp */
	if (copyLength >= 29)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 4; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[25 + copyCounter];
	        *((uint32*)(&Com_RX_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435_sgn_val)) = (uint32)((INT32_FROM_BE(tempResult) >> 5) & (uint32)0x7FFFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjID_1 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_1 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_1 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_1 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_1 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_1 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_1 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_1 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_1 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_1 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_1 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_1 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_1 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_1 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_1 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_1 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_1 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjID_2 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_2 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_2 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_2 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_2 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_2 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_2 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_2 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_2 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_2 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_2 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_2 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_2 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_2 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_2 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_2 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_2 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435, 0);
	/* Scalar signal: Checksum22 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum22_198110_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum22_198110_119558_232435, 0);
	/* Scalar signal: Checksum23 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum23_198111_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum23_198111_119558_232435, 0);
	/* Scalar signal: Checksum24 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum24_198112_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum24_198112_119558_232435, 0);
	/* Scalar signal: Checksum26 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum26_198113_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum26_198113_119558_232435, 0);
	/* Scalar signal: Checksum27 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum27_198114_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum27_198114_119558_232435, 0);
	/* Scalar signal: Checksum28 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum28_198115_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum28_198115_119558_232435, 0);
	/* Scalar signal: RollingCounter22 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter22_198116_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter22_198116_119558_232435, 0);
	/* Scalar signal: RollingCounter23 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter23_198117_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter23_198117_119558_232435, 0);
	/* Scalar signal: RollingCounter24 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter24_198118_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter24_198118_119558_232435, 0);
	/* Scalar signal: RollingCounter26 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter26_198119_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter26_198119_119558_232435, 0);
	/* Scalar signal: RollingCounter27 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter27_198120_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter27_198120_119558_232435, 0);
	/* Scalar signal: RollingCounter28 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RollingCounter28_198121_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RollingCounter28_198121_119558_232435, 0);
	/* Scalar signal: RSDS_R_hdr_TimerStempStatus */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[28 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435, 0);
	/* Scalar signal: Checksum25 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Checksum25_198123_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Checksum25_198123_119558_232435, 0);
	/* Scalar signal: Rollingcounter25 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_Rollingcounter25_198124_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_Rollingcounter25_198124_119558_232435, 0);
	/* Scalar signal: RSDS_R_ESP_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435, 0);
	/* Scalar signal: RSDS_R_SAS_ErrorStatus */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[22 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435, 0);
	/* Scalar signal: RSDS_R_ABM_ErrorStatus */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 7) & (uint8)0x1);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435, 0);
	/* Scalar signal: BlockCounter4 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD1_209091_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1091_BlockCounter4_198128_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1091_BlockCounter4_198128_119558_232435, 0);
	}
	break;
	case Com_RSDS_R_AD2_209092_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* Scalar signal: RSDS_R_ObjID_3 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_3 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_3 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_3 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_3 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_3 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_3 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_3 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_3 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_3 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_3 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_3 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_3 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_3 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_3 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_3 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_3 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjID_4 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_4 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_4 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_4 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_4 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_4 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_4 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_4 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_4 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_4 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_4 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_4 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_4 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_4 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_4 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_4 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_4 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435, 0);
	/* Scalar signal: Checksum29 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum29_198163_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum29_198163_119558_232435, 0);
	/* Scalar signal: Checksum30 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum30_198164_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum30_198164_119558_232435, 0);
	/* Scalar signal: Checksum31 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum31_198165_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum31_198165_119558_232435, 0);
	/* Scalar signal: Checksum33 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum33_198166_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum33_198166_119558_232435, 0);
	/* Scalar signal: Checksum34 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum34_198167_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum34_198167_119558_232435, 0);
	/* Scalar signal: Checksum35 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum35_198168_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum35_198168_119558_232435, 0);
	/* Scalar signal: RollingCounter29 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter29_198169_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter29_198169_119558_232435, 0);
	/* Scalar signal: RollingCounter30 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter30_198170_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter30_198170_119558_232435, 0);
	/* Scalar signal: RollingCounter31 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter31_198171_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter31_198171_119558_232435, 0);
	/* Scalar signal: RollingCounter33 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter33_198172_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter33_198172_119558_232435, 0);
	/* Scalar signal: RollingCounter34 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter34_198173_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter34_198173_119558_232435, 0);
	/* Scalar signal: RollingCounter35 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_RollingCounter35_198174_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_RollingCounter35_198174_119558_232435, 0);
	/* Scalar signal: Checksum32 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Checksum32_198175_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Checksum32_198175_119558_232435, 0);
	/* Scalar signal: Rollingcounter32 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_Rollingcounter32_198176_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_Rollingcounter32_198176_119558_232435, 0);
	/* Scalar signal: BlockCounter5 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD2_209092_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1092_BlockCounter5_198177_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1092_BlockCounter5_198177_119558_232435, 0);
	}
	break;
	case Com_RSDS_R_AD3_209093_119558_232435:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduLength;
	memcpy(Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* call to PDU Features on RxIndication */
	Feature_ComReworkPduRec(Feature_RSDS_R_AD3_209093_119558_232435_RX, PduInfoPtr);
	/* Scalar signal: RSDS_R_ObjID_5 */
	if (copyLength >= 2)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[1 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_5 */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_5 */
	if (copyLength >= 4)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[2 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_5 */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_5 */
	if (copyLength >= 7)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[4 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_5 */
	if (copyLength >= 11)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[9 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_5 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[10 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_5 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[6 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_5 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[17 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_5 */
	if (copyLength >= 13)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[12 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_5 */
	if (copyLength >= 14)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_5 */
	if (copyLength >= 15)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[13 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_5 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[14 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_5 */
	if (copyLength >= 19)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[18 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_5 */
	if (copyLength >= 20)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_5 */
	if (copyLength >= 21)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[19 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_5 */
	if (copyLength >= 23)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[21 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjID_6 */
	if (copyLength >= 42)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[41 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjExistProb_6 */
	if (copyLength >= 43)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 3) & (uint8)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjObstacleProb_6 */
	if (copyLength >= 44)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[42 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x1F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistX_6 */
	if (copyLength >= 45)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[43 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 2) & (uint16)0xFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistY_6 */
	if (copyLength >= 47)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[44 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 7) & (uint32)0x7FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelX_6 */
	if (copyLength >= 51)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[49 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 3) & (uint16)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelY_6 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[50 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435_sgn_val)) = (uint16)(((INT32_FROM_BE(tempResult << 8)) >> 6) & (uint32)0x1FFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelX_6 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[46 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 5) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelAccelY_6 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[57 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistXStd_6 */
	if (copyLength >= 53)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[52 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjDistYStd_6 */
	if (copyLength >= 54)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelXStd_6 */
	if (copyLength >= 55)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[53 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 4) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRelVelYStd_6 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[54 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435_sgn_val)) = (uint8)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelXStd_6 */
	if (copyLength >= 59)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[58 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435, 0);
	/* Scalar signal: RSDS_R_ObjRAccelYStd_6 */
	if (copyLength >= 60)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 2) & (uint8)0x3F);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjWidth_6 */
	if (copyLength >= 61)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[59 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435, 0);
	/* Scalar signal: RSDS_R_VFC_ObjLength_6 */
	if (copyLength >= 63)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[61 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 6) & (uint16)0x3FF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435, 0);
	/* Scalar signal: Checksum36 */
	if (copyLength >= 1)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum36_198212_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum36_198212_119558_232435, 0);
	/* Scalar signal: Checksum37 */
	if (copyLength >= 9)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[8 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum37_198213_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum37_198213_119558_232435, 0);
	/* Scalar signal: Checksum38 */
	if (copyLength >= 17)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[16 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum38_198214_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum38_198214_119558_232435, 0);
	/* Scalar signal: Checksum40 */
	if (copyLength >= 41)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[40 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum40_198215_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum40_198215_119558_232435, 0);
	/* Scalar signal: Checksum41 */
	if (copyLength >= 49)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[48 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum41_198216_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum41_198216_119558_232435, 0);
	/* Scalar signal: Checksum42 */
	if (copyLength >= 57)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[56 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum42_198217_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum42_198217_119558_232435, 0);
	/* Scalar signal: RollingCounter36 */
	if (copyLength >= 8)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[7 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter36_198218_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter36_198218_119558_232435, 0);
	/* Scalar signal: RollingCounter37 */
	if (copyLength >= 16)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[15 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter37_198219_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter37_198219_119558_232435, 0);
	/* Scalar signal: RollingCounter38 */
	if (copyLength >= 24)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[23 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter38_198220_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter38_198220_119558_232435, 0);
	/* Scalar signal: RollingCounter40 */
	if (copyLength >= 48)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[47 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter40_198221_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter40_198221_119558_232435, 0);
	/* Scalar signal: RollingCounter41 */
	if (copyLength >= 56)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[55 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter41_198222_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter41_198222_119558_232435, 0);
	/* Scalar signal: RollingCounter42 */
	if (copyLength >= 64)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[63 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_RollingCounter42_198223_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_RollingCounter42_198223_119558_232435, 0);
	/* Scalar signal: Checksum39 */
	if (copyLength >= 25)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[24 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Checksum39_198224_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Checksum39_198224_119558_232435, 0);
	/* Scalar signal: Rollingcounter39 */
	if (copyLength >= 32)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[31 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_Rollingcounter39_198225_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 0) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_Rollingcounter39_198225_119558_232435, 0);
	/* Scalar signal: BlockCounter6 */
	if (copyLength >= 30)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_RSDS_R_AD3_209093_119558_232435.SduDataPtr;
	        uint8 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 1; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[29 + copyCounter];
	        *((uint8*)(&Com_RX_Inst_1093_BlockCounter6_198226_119558_232435_sgn_val)) = (uint8)((INT8_FROM_BE(tempResult) >> 1) & (uint8)0xF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1093_BlockCounter6_198226_119558_232435, 0);
	}
	break;
	}
	
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#elif _MSC_VER
#pragma warning( pop )
#endif

#if (PDUR_J1939TP_SUPPORT == STD_ON)
/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_StartOfReception
 *** 
 *** DESCRIPTION:
 ***     This function is called at the start of receiving an N-SDU. The N-SDU might be fragmented into 
 ***     multiple N-PDUs (FF with one or more following CFs) or might consist of a single N-PDU (SF).
 ***     The service shall provide the currently available maximum buffer size when invoked with TpSduLength equal to 0.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the I-PDU.
 ***     const PduInfoType* info          Pointer to a PduInfoType structure containing the payload data (without protocol information) 
 ***                                      and payload length of the first frame or single frame of a transport protocol I-PDU reception, 
 ***                                      and the MetaData related to this PDU.
 ***                                      If neither first/single frame data nor MetaData are available, this parameter is set to NULL_PTR.
 ***     PduLengthType      TpSduLength   Total length of the N-SDU to be received.
 ***     PduLengthType*     bufferSizePtr Available receive buffer in the receiving module.
 ***                                      This parameter will be used to compute the Block Size (BS) in the transport protocol module.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Connection has been accepted. bufferSizePtr indicates the available receive buffer; reception is continued.
 ***                                   If no buffer of the requested size is available, a receive buffer size of 0 shall be indicated by bufferSizePtr.
 ***                        BUFREQ_E_NOT_OK: Connection has been rejected; reception is aborted. bufferSizePtr remains unchanged.
 ***                        BUFREQ_E_OVFL: No buffer of the required length can be provided; reception is aborted. bufferSizePtr remains unchanged.
\**************************************************************************************************/
BufReq_ReturnType Com_StartOfReception(PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(TpSduLength);
    POSSIBLE_UNREFERENCED_PARAMETER(bufferSizePtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_START_OF_RECEPTION,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_START_OF_RECEPTION,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpRxIndication
 *** 
 *** DESCRIPTION:
 ***     Called after an I-PDU has been received via the TP API, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the received I-PDU.
 ***     Std_ReturnType       result      Result of the reception.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TpRxIndication(PduIdType id, Std_ReturnType result)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(result);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_TP_RX_INDICATION,
                         COM_E_UNINIT);
#endif
        return;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_TP_RX_INDICATION,
                             COM_E_PDU_ID_INVALID);
#endif
            break;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpTxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called after the I-PDU has been transmitted on its network, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the transmitted I-PDU.
 ***     Std_ReturnType       result      Result of the transmission of the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TpTxConfirmation(PduIdType id, Std_ReturnType result)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(result);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_TP_TX_CONFIRMATION,
                         COM_E_UNINIT);
#endif
        return;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_TP_TX_CONFIRMATION,
                             COM_E_PDU_ID_INVALID);
#endif
            break;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyRxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to provide the received data of an I-PDU segment (N-PDU) to the upper layer.
 ***     Each call to this function provides the next part of the I-PDU data.
 ***     The size of the remaining buffer is written to the position indicated by bufferSizePtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the received I-PDU.
 ***     const PduInfoType* info          Provides the source buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                      An SduLength of 0 can be used to query the current amount of available buffer in the upper layer module.
 ***                                      In this case, the SduDataPtr may be a NULL_PTR.
 ***     PduLengthType*     bufferSizePtr Available receive buffer after data has been copied.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data copied successfully.
 ***                        BUFREQ_E_NOT_OK: Data was not copied because an error occurred.
\**************************************************************************************************/
BufReq_ReturnType Com_CopyRxData(PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(bufferSizePtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_COPY_RX_DATA,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_COPY_RX_DATA,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyTxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to acquire the transmit data of an I-PDU segment (N-PDU).
 ***     Each call to this function provides the next part of the I-PDU data unless retry->TpDataState is TP_DATARETRY.
 ***     In this case the function restarts to copy the data beginning at the offset from the current position indicated by retry->TxTpDataCnt.
 ***     The size of the remaining data is written to the position indicated by availableDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name               Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id               Identification of the transmitted I-PDU.
 ***     const PduInfoType*   info             Provides the destination buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                           If not enough transmit data is available, no data is copied by the upper layer module and BUFREQ_E_BUSY is returned.
 ***                                           The lower layer module may retry the call. An SduLength of 0 can be used to indicate state changes in the retry parameter 
 ***                                           or to query the current amount of available data in the upper layer module. In this case, the SduDataPtr may be a NULL_PTR.
 ***     const RetryInfoType* retry            This parameter is used to acknowledge transmitted data or to retransmit data after transmission problems.
 ***                                           If the retry parameter is a NULL_PTR, it indicates that the transmit data can be removed from the buffer immediately after it has been copied.
 ***                                           Otherwise, the retry parameter must point to a valid RetryInfoType element.
 ***                                           If TpDataState indicates TP_CONFPENDING, the previously copied data must remain in the TP buffer to be available for error recovery.
 ***                                           TP_DATACONF indicates that all data that has been copied before this call is confirmed and can be removed from the TP buffer.
 ***                                           Data copied by this API call is excluded and will be confirmed later.
 ***                                           TP_DATARETRY indicates that this API call shall copy previously copied data in order to recover from an error.
 ***                                           In this case TxTpDataCnt specifies the offset in bytes from the current data copy position.
 ***     PduLengthType*       availableDataPtr Indicates the remaining number of bytes that are available in the upper layer module's Tx buffer.
 ***                                           availableDataPtr can be used by TP modules that support dynamic payload lengths to determine the size of the following CFs.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data has been copied to the transmit buffer completely as requested.
 ***                        BUFREQ_E_BUSY: Request could not be fulfilled, because the required amount of Tx data is not available.
 ***                                       The lower layer module may retry this call later on. No data has been copied.
 ***                        BUFREQ_E_NOT_OK: Data has not been copied. Request failed.
\**************************************************************************************************/
BufReq_ReturnType Com_CopyTxData(PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(retry);
    POSSIBLE_UNREFERENCED_PARAMETER(availableDataPtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_COPY_TX_DATA,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_COPY_TX_DATA,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

#endif /* PDUR_J1939TP_SUPPORT */

void Com_MainFunction(sint64 period)
{
    if (BM_RSDS_PCANFD_9_IDC_L2__CreditCountersAvailable() > 0) 
    {
        /* Trigger Tx Function */
        Com_MainFunctionTx(period);
    }

    /* Trigger Rx Function */
    Com_MainFunctionRx();

 
    /* Update our time */
    currentTime += period;
}

