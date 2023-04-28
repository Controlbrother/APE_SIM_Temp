/** <!------------------------------------------------------------------------->
*
*  @file Com_generated.h  
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief 
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

/* File ID: 418a2215-b370-4c81-8ffb-fc5fbdb35a88 */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "Com_Types.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

#define COM_DEV_ERROR_DETECT       STD_OFF

/* Definition of the I-PDUs that are available in the COM module. */
#define Com_ADAS_AD1_209087_119558_232435 0 
#define Com_RSDS_L_AD1_209088_119558_232435 1 
#define Com_RSDS_L_AD2_209089_119558_232435 2 
#define Com_RSDS_L_AD3_209090_119558_232435 3 
#define Com_RSDS_R_AD1_209091_119558_232435 4 
#define Com_RSDS_R_AD2_209092_119558_232435 5 
#define Com_RSDS_R_AD3_209093_119558_232435 6 

/* Signal definition for the COM module. */
#define Com_X_Inst_1136_Sync_CRC_197911_119558_232435 0
#define Com_X_Inst_1136_Sync_OVS_197912_119558_232435 1
#define Com_X_Inst_1136_Sync_Resd_197913_119558_232435 2
#define Com_X_Inst_1136_Sync_Counter_197914_119558_232435 3
#define Com_X_Inst_1136_Sync_SGW_197915_119558_232435 4
#define Com_X_Inst_1136_Sync_SyncTime_197916_119558_232435 5
#define Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232435 6
#define Com_X_Inst_1136_Sync_Type_197918_119558_232435 7
#define Com_X_Inst_1088_RSDS_L_hdr_AutoSarTimeStamp_197919_119558_232435 8
#define Com_X_Inst_1088_RSDS_L_hdr_ErrorStatus_197920_119558_232435 9
#define Com_X_Inst_1088_RSDS_L_hdr_TimeStamp_197921_119558_232435 10
#define Com_X_Inst_1088_RSDS_L_ObjID_1_197922_119558_232435 11
#define Com_X_Inst_1088_RSDS_L_ObjExistProb_1_197923_119558_232435 12
#define Com_X_Inst_1088_RSDS_L_ObjObstacleProb_1_197924_119558_232435 13
#define Com_X_Inst_1088_RSDS_L_ObjDistX_1_197925_119558_232435 14
#define Com_X_Inst_1088_RSDS_L_ObjDistY_1_197926_119558_232435 15
#define Com_X_Inst_1088_RSDS_L_ObjRelVelX_1_197927_119558_232435 16
#define Com_X_Inst_1088_RSDS_L_ObjRelVelY_1_197928_119558_232435 17
#define Com_X_Inst_1088_RSDS_L_ObjRelAccelX_1_197929_119558_232435 18
#define Com_X_Inst_1088_RSDS_L_ObjRelAccelY_1_197930_119558_232435 19
#define Com_X_Inst_1088_RSDS_L_ObjDistXStd_1_197931_119558_232435 20
#define Com_X_Inst_1088_RSDS_L_ObjDistYStd_1_197932_119558_232435 21
#define Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_1_197933_119558_232435 22
#define Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_1_197934_119558_232435 23
#define Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_1_197935_119558_232435 24
#define Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_1_197936_119558_232435 25
#define Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_1_197937_119558_232435 26
#define Com_X_Inst_1088_RSDS_L_VFC_ObjLength_1_197938_119558_232435 27
#define Com_X_Inst_1088_RSDS_L_ObjID_2_197939_119558_232435 28
#define Com_X_Inst_1088_RSDS_L_ObjExistProb_2_197940_119558_232435 29
#define Com_X_Inst_1088_RSDS_L_ObjObstacleProb_2_197941_119558_232435 30
#define Com_X_Inst_1088_RSDS_L_ObjDistX_2_197942_119558_232435 31
#define Com_X_Inst_1088_RSDS_L_ObjDistY_2_197943_119558_232435 32
#define Com_X_Inst_1088_RSDS_L_ObjRelVelX_2_197944_119558_232435 33
#define Com_X_Inst_1088_RSDS_L_ObjRelVelY_2_197945_119558_232435 34
#define Com_X_Inst_1088_RSDS_L_ObjRelAccelX_2_197946_119558_232435 35
#define Com_X_Inst_1088_RSDS_L_ObjRelAccelY_2_197947_119558_232435 36
#define Com_X_Inst_1088_RSDS_L_ObjDistXStd_2_197948_119558_232435 37
#define Com_X_Inst_1088_RSDS_L_ObjDistYStd_2_197949_119558_232435 38
#define Com_X_Inst_1088_RSDS_L_ObjRelVelXStd_2_197950_119558_232435 39
#define Com_X_Inst_1088_RSDS_L_ObjRelVelYStd_2_197951_119558_232435 40
#define Com_X_Inst_1088_RSDS_L_ObjRAccelXStd_2_197952_119558_232435 41
#define Com_X_Inst_1088_RSDS_L_ObjRAccelYStd_2_197953_119558_232435 42
#define Com_X_Inst_1088_RSDS_L_VFC_ObjWidth_2_197954_119558_232435 43
#define Com_X_Inst_1088_RSDS_L_VFC_ObjLength_2_197955_119558_232435 44
#define Com_X_Inst_1088_Checksum1_197956_119558_232435 45
#define Com_X_Inst_1088_Checksum2_197957_119558_232435 46
#define Com_X_Inst_1088_Checksum3_197958_119558_232435 47
#define Com_X_Inst_1088_Checksum4_197959_119558_232435 48
#define Com_X_Inst_1088_Checksum5_197960_119558_232435 49
#define Com_X_Inst_1088_Checksum6_197961_119558_232435 50
#define Com_X_Inst_1088_Checksum7_197962_119558_232435 51
#define Com_X_Inst_1088_RollingCounter1_197963_119558_232435 52
#define Com_X_Inst_1088_RollingCounter2_197964_119558_232435 53
#define Com_X_Inst_1088_RollingCounter3_197965_119558_232435 54
#define Com_X_Inst_1088_RollingCounter4_197966_119558_232435 55
#define Com_X_Inst_1088_RollingCounter5_197967_119558_232435 56
#define Com_X_Inst_1088_RollingCounter6_197968_119558_232435 57
#define Com_X_Inst_1088_RollingCounter7_197969_119558_232435 58
#define Com_X_Inst_1088_RSDS_L_hdr_TimerStempStatus_197970_119558_232435 59
#define Com_X_Inst_1088_RSDS_L_ESP_ErrorStatus_197971_119558_232435 60
#define Com_X_Inst_1088_RSDS_L_SAS_ErrorStatus_197972_119558_232435 61
#define Com_X_Inst_1088_RSDS_L_ABM_ErrorStatus_197973_119558_232435 62
#define Com_X_Inst_1088_BlockCounter1_197974_119558_232435 63
#define Com_X_Inst_1089_RSDS_L_ObjID_3_197975_119558_232435 64
#define Com_X_Inst_1089_RSDS_L_ObjExistProb_3_197976_119558_232435 65
#define Com_X_Inst_1089_RSDS_L_ObjObstacleProb_3_197977_119558_232435 66
#define Com_X_Inst_1089_RSDS_L_ObjDistX_3_197978_119558_232435 67
#define Com_X_Inst_1089_RSDS_L_ObjDistY_3_197979_119558_232435 68
#define Com_X_Inst_1089_RSDS_L_ObjRelVelX_3_197980_119558_232435 69
#define Com_X_Inst_1089_RSDS_L_ObjRelVelY_3_197981_119558_232435 70
#define Com_X_Inst_1089_RSDS_L_ObjRelAccelX_3_197982_119558_232435 71
#define Com_X_Inst_1089_RSDS_L_ObjRelAccelY_3_197983_119558_232435 72
#define Com_X_Inst_1089_RSDS_L_ObjDistXStd_3_197984_119558_232435 73
#define Com_X_Inst_1089_RSDS_L_ObjDistYStd_3_197985_119558_232435 74
#define Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_3_197986_119558_232435 75
#define Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_3_197987_119558_232435 76
#define Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_3_197988_119558_232435 77
#define Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_3_197989_119558_232435 78
#define Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_3_197990_119558_232435 79
#define Com_X_Inst_1089_RSDS_L_VFC_ObjLength_3_197991_119558_232435 80
#define Com_X_Inst_1089_RSDS_L_ObjID_4_197992_119558_232435 81
#define Com_X_Inst_1089_RSDS_L_ObjExistProb_4_197993_119558_232435 82
#define Com_X_Inst_1089_RSDS_L_ObjObstacleProb_4_197994_119558_232435 83
#define Com_X_Inst_1089_RSDS_L_ObjDistX_4_197995_119558_232435 84
#define Com_X_Inst_1089_RSDS_L_ObjDistY_4_197996_119558_232435 85
#define Com_X_Inst_1089_RSDS_L_ObjRelVelX_4_197997_119558_232435 86
#define Com_X_Inst_1089_RSDS_L_ObjRelVelY_4_197998_119558_232435 87
#define Com_X_Inst_1089_RSDS_L_ObjRelAccelX_4_197999_119558_232435 88
#define Com_X_Inst_1089_RSDS_L_ObjRelAccelY_4_198000_119558_232435 89
#define Com_X_Inst_1089_RSDS_L_ObjDistXStd_4_198001_119558_232435 90
#define Com_X_Inst_1089_RSDS_L_ObjDistYStd_4_198002_119558_232435 91
#define Com_X_Inst_1089_RSDS_L_ObjRelVelXStd_4_198003_119558_232435 92
#define Com_X_Inst_1089_RSDS_L_ObjRelVelYStd_4_198004_119558_232435 93
#define Com_X_Inst_1089_RSDS_L_ObjRAccelXStd_4_198005_119558_232435 94
#define Com_X_Inst_1089_RSDS_L_ObjRAccelYStd_4_198006_119558_232435 95
#define Com_X_Inst_1089_RSDS_L_VFC_ObjWidth_4_198007_119558_232435 96
#define Com_X_Inst_1089_RSDS_L_VFC_ObjLength_4_198008_119558_232435 97
#define Com_X_Inst_1089_Checksum8_198009_119558_232435 98
#define Com_X_Inst_1089_Checksum9_198010_119558_232435 99
#define Com_X_Inst_1089_Checksum10_198011_119558_232435 100
#define Com_X_Inst_1089_Checksum12_198012_119558_232435 101
#define Com_X_Inst_1089_Checksum13_198013_119558_232435 102
#define Com_X_Inst_1089_Checksum14_198014_119558_232435 103
#define Com_X_Inst_1089_RollingCounter8_198015_119558_232435 104
#define Com_X_Inst_1089_RollingCounter9_198016_119558_232435 105
#define Com_X_Inst_1089_RollingCounter10_198017_119558_232435 106
#define Com_X_Inst_1089_RollingCounter12_198018_119558_232435 107
#define Com_X_Inst_1089_RollingCounter13_198019_119558_232435 108
#define Com_X_Inst_1089_RollingCounter14_198020_119558_232435 109
#define Com_X_Inst_1089_Checksum11_198021_119558_232435 110
#define Com_X_Inst_1089_Rollingcounter11_198022_119558_232435 111
#define Com_X_Inst_1089_BlockCounter2_198023_119558_232435 112
#define Com_X_Inst_1090_RSDS_L_ObjID_5_198024_119558_232435 113
#define Com_X_Inst_1090_RSDS_L_ObjExistProb_5_198025_119558_232435 114
#define Com_X_Inst_1090_RSDS_L_ObjObstacleProb_5_198026_119558_232435 115
#define Com_X_Inst_1090_RSDS_L_ObjDistX_5_198027_119558_232435 116
#define Com_X_Inst_1090_RSDS_L_ObjDistY_5_198028_119558_232435 117
#define Com_X_Inst_1090_RSDS_L_ObjRelVelX_5_198029_119558_232435 118
#define Com_X_Inst_1090_RSDS_L_ObjRelVelY_5_198030_119558_232435 119
#define Com_X_Inst_1090_RSDS_L_ObjRelAccelX_5_198031_119558_232435 120
#define Com_X_Inst_1090_RSDS_L_ObjRelAccelY_5_198032_119558_232435 121
#define Com_X_Inst_1090_RSDS_L_ObjDistXStd_5_198033_119558_232435 122
#define Com_X_Inst_1090_RSDS_L_ObjDistYStd_5_198034_119558_232435 123
#define Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_5_198035_119558_232435 124
#define Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_5_198036_119558_232435 125
#define Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_5_198037_119558_232435 126
#define Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_5_198038_119558_232435 127
#define Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_5_198039_119558_232435 128
#define Com_X_Inst_1090_RSDS_L_VFC_ObjLength_5_198040_119558_232435 129
#define Com_X_Inst_1090_RSDS_L_ObjID_6_198041_119558_232435 130
#define Com_X_Inst_1090_RSDS_L_ObjExistProb_6_198042_119558_232435 131
#define Com_X_Inst_1090_RSDS_L_ObjObstacleProb_6_198043_119558_232435 132
#define Com_X_Inst_1090_RSDS_L_ObjDistX_6_198044_119558_232435 133
#define Com_X_Inst_1090_RSDS_L_ObjDistY_6_198045_119558_232435 134
#define Com_X_Inst_1090_RSDS_L_ObjRelVelX_6_198046_119558_232435 135
#define Com_X_Inst_1090_RSDS_L_ObjRelVelY_6_198047_119558_232435 136
#define Com_X_Inst_1090_RSDS_L_ObjRelAccelX_6_198048_119558_232435 137
#define Com_X_Inst_1090_RSDS_L_ObjRelAccelY_6_198049_119558_232435 138
#define Com_X_Inst_1090_RSDS_L_ObjDistXStd_6_198050_119558_232435 139
#define Com_X_Inst_1090_RSDS_L_ObjDistYStd_6_198051_119558_232435 140
#define Com_X_Inst_1090_RSDS_L_ObjRelVelXStd_6_198052_119558_232435 141
#define Com_X_Inst_1090_RSDS_L_ObjRelVelYStd_6_198053_119558_232435 142
#define Com_X_Inst_1090_RSDS_L_ObjRAccelXStd_6_198054_119558_232435 143
#define Com_X_Inst_1090_RSDS_L_ObjRAccelYStd_6_198055_119558_232435 144
#define Com_X_Inst_1090_RSDS_L_VFC_ObjWidth_6_198056_119558_232435 145
#define Com_X_Inst_1090_RSDS_L_VFC_ObjLength_6_198057_119558_232435 146
#define Com_X_Inst_1090_Checksum15_198058_119558_232435 147
#define Com_X_Inst_1090_Checksum16_198059_119558_232435 148
#define Com_X_Inst_1090_Checksum17_198060_119558_232435 149
#define Com_X_Inst_1090_Checksum19_198061_119558_232435 150
#define Com_X_Inst_1090_Checksum20_198062_119558_232435 151
#define Com_X_Inst_1090_Checksum21_198063_119558_232435 152
#define Com_X_Inst_1090_RollingCounter15_198064_119558_232435 153
#define Com_X_Inst_1090_RollingCounter16_198065_119558_232435 154
#define Com_X_Inst_1090_RollingCounter17_198066_119558_232435 155
#define Com_X_Inst_1090_RollingCounter19_198067_119558_232435 156
#define Com_X_Inst_1090_RollingCounter20_198068_119558_232435 157
#define Com_X_Inst_1090_RollingCounter21_198069_119558_232435 158
#define Com_X_Inst_1090_Checksum18_198070_119558_232435 159
#define Com_X_Inst_1090_Rollingcounter18_198071_119558_232435 160
#define Com_X_Inst_1090_BlockCounter3_198072_119558_232435 161
#define Com_X_Inst_1091_RSDS_R_hdr_AutoSarTimeStamp_198073_119558_232435 162
#define Com_X_Inst_1091_RSDS_R_hdr_ErrorStatus_198074_119558_232435 163
#define Com_X_Inst_1091_RSDS_R_hdr_TimeStamp_198075_119558_232435 164
#define Com_X_Inst_1091_RSDS_R_ObjID_1_198076_119558_232435 165
#define Com_X_Inst_1091_RSDS_R_ObjExistProb_1_198077_119558_232435 166
#define Com_X_Inst_1091_RSDS_R_ObjObstacleProb_1_198078_119558_232435 167
#define Com_X_Inst_1091_RSDS_R_ObjDistX_1_198079_119558_232435 168
#define Com_X_Inst_1091_RSDS_R_ObjDistY_1_198080_119558_232435 169
#define Com_X_Inst_1091_RSDS_R_ObjRelVelX_1_198081_119558_232435 170
#define Com_X_Inst_1091_RSDS_R_ObjRelVelY_1_198082_119558_232435 171
#define Com_X_Inst_1091_RSDS_R_ObjRelAccelX_1_198083_119558_232435 172
#define Com_X_Inst_1091_RSDS_R_ObjRelAccelY_1_198084_119558_232435 173
#define Com_X_Inst_1091_RSDS_R_ObjDistXStd_1_198085_119558_232435 174
#define Com_X_Inst_1091_RSDS_R_ObjDistYStd_1_198086_119558_232435 175
#define Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_1_198087_119558_232435 176
#define Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_1_198088_119558_232435 177
#define Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_1_198089_119558_232435 178
#define Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_1_198090_119558_232435 179
#define Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_1_198091_119558_232435 180
#define Com_X_Inst_1091_RSDS_R_VFC_ObjLength_1_198092_119558_232435 181
#define Com_X_Inst_1091_RSDS_R_ObjID_2_198093_119558_232435 182
#define Com_X_Inst_1091_RSDS_R_ObjExistProb_2_198094_119558_232435 183
#define Com_X_Inst_1091_RSDS_R_ObjObstacleProb_2_198095_119558_232435 184
#define Com_X_Inst_1091_RSDS_R_ObjDistX_2_198096_119558_232435 185
#define Com_X_Inst_1091_RSDS_R_ObjDistY_2_198097_119558_232435 186
#define Com_X_Inst_1091_RSDS_R_ObjRelVelX_2_198098_119558_232435 187
#define Com_X_Inst_1091_RSDS_R_ObjRelVelY_2_198099_119558_232435 188
#define Com_X_Inst_1091_RSDS_R_ObjRelAccelX_2_198100_119558_232435 189
#define Com_X_Inst_1091_RSDS_R_ObjRelAccelY_2_198101_119558_232435 190
#define Com_X_Inst_1091_RSDS_R_ObjDistXStd_2_198102_119558_232435 191
#define Com_X_Inst_1091_RSDS_R_ObjDistYStd_2_198103_119558_232435 192
#define Com_X_Inst_1091_RSDS_R_ObjRelVelXStd_2_198104_119558_232435 193
#define Com_X_Inst_1091_RSDS_R_ObjRelVelYStd_2_198105_119558_232435 194
#define Com_X_Inst_1091_RSDS_R_ObjRAccelXStd_2_198106_119558_232435 195
#define Com_X_Inst_1091_RSDS_R_ObjRAccelYStd_2_198107_119558_232435 196
#define Com_X_Inst_1091_RSDS_R_VFC_ObjWidth_2_198108_119558_232435 197
#define Com_X_Inst_1091_RSDS_R_VFC_ObjLength_2_198109_119558_232435 198
#define Com_X_Inst_1091_Checksum22_198110_119558_232435 199
#define Com_X_Inst_1091_Checksum23_198111_119558_232435 200
#define Com_X_Inst_1091_Checksum24_198112_119558_232435 201
#define Com_X_Inst_1091_Checksum26_198113_119558_232435 202
#define Com_X_Inst_1091_Checksum27_198114_119558_232435 203
#define Com_X_Inst_1091_Checksum28_198115_119558_232435 204
#define Com_X_Inst_1091_RollingCounter22_198116_119558_232435 205
#define Com_X_Inst_1091_RollingCounter23_198117_119558_232435 206
#define Com_X_Inst_1091_RollingCounter24_198118_119558_232435 207
#define Com_X_Inst_1091_RollingCounter26_198119_119558_232435 208
#define Com_X_Inst_1091_RollingCounter27_198120_119558_232435 209
#define Com_X_Inst_1091_RollingCounter28_198121_119558_232435 210
#define Com_X_Inst_1091_RSDS_R_hdr_TimerStempStatus_198122_119558_232435 211
#define Com_X_Inst_1091_Checksum25_198123_119558_232435 212
#define Com_X_Inst_1091_Rollingcounter25_198124_119558_232435 213
#define Com_X_Inst_1091_RSDS_R_ESP_ErrorStatus_198125_119558_232435 214
#define Com_X_Inst_1091_RSDS_R_SAS_ErrorStatus_198126_119558_232435 215
#define Com_X_Inst_1091_RSDS_R_ABM_ErrorStatus_198127_119558_232435 216
#define Com_X_Inst_1091_BlockCounter4_198128_119558_232435 217
#define Com_X_Inst_1092_RSDS_R_ObjID_3_198129_119558_232435 218
#define Com_X_Inst_1092_RSDS_R_ObjExistProb_3_198130_119558_232435 219
#define Com_X_Inst_1092_RSDS_R_ObjObstacleProb_3_198131_119558_232435 220
#define Com_X_Inst_1092_RSDS_R_ObjDistX_3_198132_119558_232435 221
#define Com_X_Inst_1092_RSDS_R_ObjDistY_3_198133_119558_232435 222
#define Com_X_Inst_1092_RSDS_R_ObjRelVelX_3_198134_119558_232435 223
#define Com_X_Inst_1092_RSDS_R_ObjRelVelY_3_198135_119558_232435 224
#define Com_X_Inst_1092_RSDS_R_ObjRelAccelX_3_198136_119558_232435 225
#define Com_X_Inst_1092_RSDS_R_ObjRelAccelY_3_198137_119558_232435 226
#define Com_X_Inst_1092_RSDS_R_ObjDistXStd_3_198138_119558_232435 227
#define Com_X_Inst_1092_RSDS_R_ObjDistYStd_3_198139_119558_232435 228
#define Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_3_198140_119558_232435 229
#define Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_3_198141_119558_232435 230
#define Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_3_198142_119558_232435 231
#define Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_3_198143_119558_232435 232
#define Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_3_198144_119558_232435 233
#define Com_X_Inst_1092_RSDS_R_VFC_ObjLength_3_198145_119558_232435 234
#define Com_X_Inst_1092_RSDS_R_ObjID_4_198146_119558_232435 235
#define Com_X_Inst_1092_RSDS_R_ObjExistProb_4_198147_119558_232435 236
#define Com_X_Inst_1092_RSDS_R_ObjObstacleProb_4_198148_119558_232435 237
#define Com_X_Inst_1092_RSDS_R_ObjDistX_4_198149_119558_232435 238
#define Com_X_Inst_1092_RSDS_R_ObjDistY_4_198150_119558_232435 239
#define Com_X_Inst_1092_RSDS_R_ObjRelVelX_4_198151_119558_232435 240
#define Com_X_Inst_1092_RSDS_R_ObjRelVelY_4_198152_119558_232435 241
#define Com_X_Inst_1092_RSDS_R_ObjRelAccelX_4_198153_119558_232435 242
#define Com_X_Inst_1092_RSDS_R_ObjRelAccelY_4_198154_119558_232435 243
#define Com_X_Inst_1092_RSDS_R_ObjDistXStd_4_198155_119558_232435 244
#define Com_X_Inst_1092_RSDS_R_ObjDistYStd_4_198156_119558_232435 245
#define Com_X_Inst_1092_RSDS_R_ObjRelVelXStd_4_198157_119558_232435 246
#define Com_X_Inst_1092_RSDS_R_ObjRelVelYStd_4_198158_119558_232435 247
#define Com_X_Inst_1092_RSDS_R_ObjRAccelXStd_4_198159_119558_232435 248
#define Com_X_Inst_1092_RSDS_R_ObjRAccelYStd_4_198160_119558_232435 249
#define Com_X_Inst_1092_RSDS_R_VFC_ObjWidth_4_198161_119558_232435 250
#define Com_X_Inst_1092_RSDS_R_VFC_ObjLength_4_198162_119558_232435 251
#define Com_X_Inst_1092_Checksum29_198163_119558_232435 252
#define Com_X_Inst_1092_Checksum30_198164_119558_232435 253
#define Com_X_Inst_1092_Checksum31_198165_119558_232435 254
#define Com_X_Inst_1092_Checksum33_198166_119558_232435 255
#define Com_X_Inst_1092_Checksum34_198167_119558_232435 256
#define Com_X_Inst_1092_Checksum35_198168_119558_232435 257
#define Com_X_Inst_1092_RollingCounter29_198169_119558_232435 258
#define Com_X_Inst_1092_RollingCounter30_198170_119558_232435 259
#define Com_X_Inst_1092_RollingCounter31_198171_119558_232435 260
#define Com_X_Inst_1092_RollingCounter33_198172_119558_232435 261
#define Com_X_Inst_1092_RollingCounter34_198173_119558_232435 262
#define Com_X_Inst_1092_RollingCounter35_198174_119558_232435 263
#define Com_X_Inst_1092_Checksum32_198175_119558_232435 264
#define Com_X_Inst_1092_Rollingcounter32_198176_119558_232435 265
#define Com_X_Inst_1092_BlockCounter5_198177_119558_232435 266
#define Com_X_Inst_1093_RSDS_R_ObjID_5_198178_119558_232435 267
#define Com_X_Inst_1093_RSDS_R_ObjExistProb_5_198179_119558_232435 268
#define Com_X_Inst_1093_RSDS_R_ObjObstacleProb_5_198180_119558_232435 269
#define Com_X_Inst_1093_RSDS_R_ObjDistX_5_198181_119558_232435 270
#define Com_X_Inst_1093_RSDS_R_ObjDistY_5_198182_119558_232435 271
#define Com_X_Inst_1093_RSDS_R_ObjRelVelX_5_198183_119558_232435 272
#define Com_X_Inst_1093_RSDS_R_ObjRelVelY_5_198184_119558_232435 273
#define Com_X_Inst_1093_RSDS_R_ObjRelAccelX_5_198185_119558_232435 274
#define Com_X_Inst_1093_RSDS_R_ObjRelAccelY_5_198186_119558_232435 275
#define Com_X_Inst_1093_RSDS_R_ObjDistXStd_5_198187_119558_232435 276
#define Com_X_Inst_1093_RSDS_R_ObjDistYStd_5_198188_119558_232435 277
#define Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_5_198189_119558_232435 278
#define Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_5_198190_119558_232435 279
#define Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_5_198191_119558_232435 280
#define Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_5_198192_119558_232435 281
#define Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_5_198193_119558_232435 282
#define Com_X_Inst_1093_RSDS_R_VFC_ObjLength_5_198194_119558_232435 283
#define Com_X_Inst_1093_RSDS_R_ObjID_6_198195_119558_232435 284
#define Com_X_Inst_1093_RSDS_R_ObjExistProb_6_198196_119558_232435 285
#define Com_X_Inst_1093_RSDS_R_ObjObstacleProb_6_198197_119558_232435 286
#define Com_X_Inst_1093_RSDS_R_ObjDistX_6_198198_119558_232435 287
#define Com_X_Inst_1093_RSDS_R_ObjDistY_6_198199_119558_232435 288
#define Com_X_Inst_1093_RSDS_R_ObjRelVelX_6_198200_119558_232435 289
#define Com_X_Inst_1093_RSDS_R_ObjRelVelY_6_198201_119558_232435 290
#define Com_X_Inst_1093_RSDS_R_ObjRelAccelX_6_198202_119558_232435 291
#define Com_X_Inst_1093_RSDS_R_ObjRelAccelY_6_198203_119558_232435 292
#define Com_X_Inst_1093_RSDS_R_ObjDistXStd_6_198204_119558_232435 293
#define Com_X_Inst_1093_RSDS_R_ObjDistYStd_6_198205_119558_232435 294
#define Com_X_Inst_1093_RSDS_R_ObjRelVelXStd_6_198206_119558_232435 295
#define Com_X_Inst_1093_RSDS_R_ObjRelVelYStd_6_198207_119558_232435 296
#define Com_X_Inst_1093_RSDS_R_ObjRAccelXStd_6_198208_119558_232435 297
#define Com_X_Inst_1093_RSDS_R_ObjRAccelYStd_6_198209_119558_232435 298
#define Com_X_Inst_1093_RSDS_R_VFC_ObjWidth_6_198210_119558_232435 299
#define Com_X_Inst_1093_RSDS_R_VFC_ObjLength_6_198211_119558_232435 300
#define Com_X_Inst_1093_Checksum36_198212_119558_232435 301
#define Com_X_Inst_1093_Checksum37_198213_119558_232435 302
#define Com_X_Inst_1093_Checksum38_198214_119558_232435 303
#define Com_X_Inst_1093_Checksum40_198215_119558_232435 304
#define Com_X_Inst_1093_Checksum41_198216_119558_232435 305
#define Com_X_Inst_1093_Checksum42_198217_119558_232435 306
#define Com_X_Inst_1093_RollingCounter36_198218_119558_232435 307
#define Com_X_Inst_1093_RollingCounter37_198219_119558_232435 308
#define Com_X_Inst_1093_RollingCounter38_198220_119558_232435 309
#define Com_X_Inst_1093_RollingCounter40_198221_119558_232435 310
#define Com_X_Inst_1093_RollingCounter41_198222_119558_232435 311
#define Com_X_Inst_1093_RollingCounter42_198223_119558_232435 312
#define Com_X_Inst_1093_Checksum39_198224_119558_232435 313
#define Com_X_Inst_1093_Rollingcounter39_198225_119558_232435 314
#define Com_X_Inst_1093_BlockCounter6_198226_119558_232435 315

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 


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
extern void Com_Init(const Com_ConfigType * config);

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
extern void Com_DeInit(void);

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
extern void Com_VariableInitialize(void);

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
extern void Com_OnStart(void);

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
extern Std_ReturnType Com_TriggerTransmit(PduIdType ComTxPduId, PduInfoType * PduInfoPtr);

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
extern uint8 Com_SendSignal(Com_SignalIdType SignalId, const void * SignalDataPtr);

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
extern uint8 Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId);

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
extern void Com_UpdateShadowSignal(Com_SignalIdType SignalId, const void * SignalDataPtr);

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
extern uint8 Com_InvalidateSignal(Com_SignalIdType SignalId);

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
extern void Com_InvalidateShadowSignal(Com_SignalIdType SignalId);

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
extern uint8 Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId);

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
extern void Com_TxConfirmation(PduIdType ComTxPduId);

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
extern uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void * SignalDataPtr);

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
extern uint8 Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId);

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
extern void Com_ReceiveShadowSignal(Com_SignalIdType SignalId, void * SignalDataPtr);

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
extern void Com_RxIndication(PduIdType ComRxPduId, const PduInfoType * PduInfoPtr);

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
extern Com_StatusType Com_GetStatus(void);

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
extern Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId);

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
extern Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId);

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
extern BufReq_ReturnType Com_StartOfReception(PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr);

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
extern void Com_TpRxIndication(PduIdType id, Std_ReturnType result);

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
extern void Com_TpTxConfirmation(PduIdType id, Std_ReturnType result);

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
extern BufReq_ReturnType Com_CopyRxData(PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr);

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
 ***     PduLengthType*       availableDataPtr Available receive buffer after data has been copied.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data has been copied to the transmit buffer completely as requested.
 ***                        BUFREQ_E_BUSY: Request could not be fulfilled, because the required amount of Tx data is not available.
 ***                                       The lower layer module may retry this call later on. No data has been copied.
 ***                        BUFREQ_E_NOT_OK: Data has not been copied. Request failed.
\**************************************************************************************************/
extern BufReq_ReturnType Com_CopyTxData(PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr);

#ifdef __cplusplus
}
#endif /* __cplusplus */ 

