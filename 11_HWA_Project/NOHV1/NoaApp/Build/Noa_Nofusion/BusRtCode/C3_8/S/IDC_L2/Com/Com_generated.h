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

/* File ID: dc176bab-b915-4ee9-af7a-96113d846195 */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "Com_Types.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

#define COM_DEV_ERROR_DETECT       STD_OFF

/* Definition of the I-PDUs that are available in the COM module. */
#define Com_ADAS_AD1_209079_119553_232436 0 
#define Com_CR_L_AD1_209080_119553_232436 1 
#define Com_CR_L_AD2_209081_119553_232436 2 
#define Com_CR_L_AD3_209082_119553_232436 3 
#define Com_CR_R_AD1_209083_119553_232436 4 
#define Com_CR_R_AD2_209084_119553_232436 5 
#define Com_CR_R_AD3_209085_119553_232436 6 

/* Signal definition for the COM module. */
#define Com_X_Inst_1136_Sync_CRC_197578_119553_232436 0
#define Com_X_Inst_1136_Sync_OVS_197579_119553_232436 1
#define Com_X_Inst_1136_Sync_Resd_197580_119553_232436 2
#define Com_X_Inst_1136_Sync_Counter_197581_119553_232436 3
#define Com_X_Inst_1136_Sync_SGW_197582_119553_232436 4
#define Com_X_Inst_1136_Sync_SyncTime_197583_119553_232436 5
#define Com_X_Inst_1136_Sync_TimeDomain_197584_119553_232436 6
#define Com_X_Inst_1136_Sync_Type_197585_119553_232436 7
#define Com_X_Inst_1094_CR_L_hdr_AutoSarTimeStamp_197586_119553_232436 8
#define Com_X_Inst_1094_CR_L_hdr_ErrorStatus_197587_119553_232436 9
#define Com_X_Inst_1094_CR_L_hdr_TimeStamp_197588_119553_232436 10
#define Com_X_Inst_1094_CR_L_ObjID_1_197589_119553_232436 11
#define Com_X_Inst_1094_CR_L_ObjExistProb_1_197590_119553_232436 12
#define Com_X_Inst_1094_CR_L_ObjObstacleProb_1_197591_119553_232436 13
#define Com_X_Inst_1094_CR_L_ObjDistX_1_197592_119553_232436 14
#define Com_X_Inst_1094_CR_L_ObjDistY_1_197593_119553_232436 15
#define Com_X_Inst_1094_CR_L_ObjRelVelX_1_197594_119553_232436 16
#define Com_X_Inst_1094_CR_L_ObjRelVelY_1_197595_119553_232436 17
#define Com_X_Inst_1094_CR_L_ObjRelAccelX_1_197596_119553_232436 18
#define Com_X_Inst_1094_CR_L_ObjRelAccelY_1_197597_119553_232436 19
#define Com_X_Inst_1094_CR_L_ObjDistXStd_1_197598_119553_232436 20
#define Com_X_Inst_1094_CR_L_ObjDistYStd_1_197599_119553_232436 21
#define Com_X_Inst_1094_CR_L_ObjRelVelXStd_1_197600_119553_232436 22
#define Com_X_Inst_1094_CR_L_ObjRelVelYStd_1_197601_119553_232436 23
#define Com_X_Inst_1094_CR_L_ObjRAccelXStd_1_197602_119553_232436 24
#define Com_X_Inst_1094_CR_L_ObjRAccelYStd_1_197603_119553_232436 25
#define Com_X_Inst_1094_CR_L_VFC_ObjWidth_1_197604_119553_232436 26
#define Com_X_Inst_1094_CR_L_VFC_ObjLength_1_197605_119553_232436 27
#define Com_X_Inst_1094_CR_L_ObjID_2_197606_119553_232436 28
#define Com_X_Inst_1094_CR_L_ObjExistProb_2_197607_119553_232436 29
#define Com_X_Inst_1094_CR_L_ObjObstacleProb_2_197608_119553_232436 30
#define Com_X_Inst_1094_CR_L_ObjDistX_2_197609_119553_232436 31
#define Com_X_Inst_1094_CR_L_ObjDistY_2_197610_119553_232436 32
#define Com_X_Inst_1094_CR_L_ObjRelVelX_2_197611_119553_232436 33
#define Com_X_Inst_1094_CR_L_ObjRelVelY_2_197612_119553_232436 34
#define Com_X_Inst_1094_CR_L_ObjRelAccelX_2_197613_119553_232436 35
#define Com_X_Inst_1094_CR_L_ObjRelAccelY_2_197614_119553_232436 36
#define Com_X_Inst_1094_CR_L_ObjDistXStd_2_197615_119553_232436 37
#define Com_X_Inst_1094_CR_L_ObjDistYStd_2_197616_119553_232436 38
#define Com_X_Inst_1094_CR_L_ObjRelVelXStd_2_197617_119553_232436 39
#define Com_X_Inst_1094_CR_L_ObjRelVelYStd_2_197618_119553_232436 40
#define Com_X_Inst_1094_CR_L_ObjRAccelXStd_2_197619_119553_232436 41
#define Com_X_Inst_1094_CR_L_ObjRAccelYStd_2_197620_119553_232436 42
#define Com_X_Inst_1094_CR_L_VFC_ObjWidth_2_197621_119553_232436 43
#define Com_X_Inst_1094_CR_L_VFC_ObjLength_2_197622_119553_232436 44
#define Com_X_Inst_1094_Checksum1_197623_119553_232436 45
#define Com_X_Inst_1094_Checksum2_197624_119553_232436 46
#define Com_X_Inst_1094_Checksum3_197625_119553_232436 47
#define Com_X_Inst_1094_Checksum4_197626_119553_232436 48
#define Com_X_Inst_1094_Checksum5_197627_119553_232436 49
#define Com_X_Inst_1094_Checksum6_197628_119553_232436 50
#define Com_X_Inst_1094_Checksum7_197629_119553_232436 51
#define Com_X_Inst_1094_RollingCounter1_197630_119553_232436 52
#define Com_X_Inst_1094_RollingCounter2_197631_119553_232436 53
#define Com_X_Inst_1094_RollingCounter3_197632_119553_232436 54
#define Com_X_Inst_1094_RollingCounter4_197633_119553_232436 55
#define Com_X_Inst_1094_RollingCounter5_197634_119553_232436 56
#define Com_X_Inst_1094_RollingCounter6_197635_119553_232436 57
#define Com_X_Inst_1094_RollingCounter7_197636_119553_232436 58
#define Com_X_Inst_1094_CR_L_hdr_TimerStempStatus_197637_119553_232436 59
#define Com_X_Inst_1094_CR_L_ESP_ErrorStatus_197638_119553_232436 60
#define Com_X_Inst_1094_CR_L_SAS_ErrorStatus_197639_119553_232436 61
#define Com_X_Inst_1094_CR_L_ABM_ErrorStatus_197640_119553_232436 62
#define Com_X_Inst_1094_BlockCounter1_197641_119553_232436 63
#define Com_X_Inst_1095_CR_L_ObjID_3_197642_119553_232436 64
#define Com_X_Inst_1095_CR_L_ObjExistProb_3_197643_119553_232436 65
#define Com_X_Inst_1095_CR_L_ObjObstacleProb_3_197644_119553_232436 66
#define Com_X_Inst_1095_CR_L_ObjDistX_3_197645_119553_232436 67
#define Com_X_Inst_1095_CR_L_ObjDistY_3_197646_119553_232436 68
#define Com_X_Inst_1095_CR_L_ObjRelVelX_3_197647_119553_232436 69
#define Com_X_Inst_1095_CR_L_ObjRelVelY_3_197648_119553_232436 70
#define Com_X_Inst_1095_CR_L_ObjRelAccelX_3_197649_119553_232436 71
#define Com_X_Inst_1095_CR_L_ObjRelAccelY_3_197650_119553_232436 72
#define Com_X_Inst_1095_CR_L_ObjDistXStd_3_197651_119553_232436 73
#define Com_X_Inst_1095_CR_L_ObjDistYStd_3_197652_119553_232436 74
#define Com_X_Inst_1095_CR_L_ObjRelVelXStd_3_197653_119553_232436 75
#define Com_X_Inst_1095_CR_L_ObjRelVelYStd_3_197654_119553_232436 76
#define Com_X_Inst_1095_CR_L_ObjRAccelXStd_3_197655_119553_232436 77
#define Com_X_Inst_1095_CR_L_ObjRAccelYStd_3_197656_119553_232436 78
#define Com_X_Inst_1095_CR_L_VFC_ObjWidth_3_197657_119553_232436 79
#define Com_X_Inst_1095_CR_L_VFC_ObjLength_3_197658_119553_232436 80
#define Com_X_Inst_1095_CR_L_ObjID_4_197659_119553_232436 81
#define Com_X_Inst_1095_CR_L_ObjExistProb_4_197660_119553_232436 82
#define Com_X_Inst_1095_CR_L_ObjObstacleProb_4_197661_119553_232436 83
#define Com_X_Inst_1095_CR_L_ObjDistX_4_197662_119553_232436 84
#define Com_X_Inst_1095_CR_L_ObjDistY_4_197663_119553_232436 85
#define Com_X_Inst_1095_CR_L_ObjRelVelX_4_197664_119553_232436 86
#define Com_X_Inst_1095_CR_L_ObjRelVelY_4_197665_119553_232436 87
#define Com_X_Inst_1095_CR_L_ObjRelAccelX_4_197666_119553_232436 88
#define Com_X_Inst_1095_CR_L_ObjRelAccelY_4_197667_119553_232436 89
#define Com_X_Inst_1095_CR_L_ObjDistXStd_4_197668_119553_232436 90
#define Com_X_Inst_1095_CR_L_ObjDistYStd_4_197669_119553_232436 91
#define Com_X_Inst_1095_CR_L_ObjRelVelXStd_4_197670_119553_232436 92
#define Com_X_Inst_1095_CR_L_ObjRelVelYStd_4_197671_119553_232436 93
#define Com_X_Inst_1095_CR_L_ObjRAccelXStd_4_197672_119553_232436 94
#define Com_X_Inst_1095_CR_L_ObjRAccelYStd_4_197673_119553_232436 95
#define Com_X_Inst_1095_CR_L_VFC_ObjWidth_4_197674_119553_232436 96
#define Com_X_Inst_1095_CR_L_VFC_ObjLength_4_197675_119553_232436 97
#define Com_X_Inst_1095_Checksum8_197676_119553_232436 98
#define Com_X_Inst_1095_Checksum9_197677_119553_232436 99
#define Com_X_Inst_1095_Checksum10_197678_119553_232436 100
#define Com_X_Inst_1095_Checksum12_197679_119553_232436 101
#define Com_X_Inst_1095_Checksum13_197680_119553_232436 102
#define Com_X_Inst_1095_Checksum14_197681_119553_232436 103
#define Com_X_Inst_1095_RollingCounter8_197682_119553_232436 104
#define Com_X_Inst_1095_RollingCounter9_197683_119553_232436 105
#define Com_X_Inst_1095_RollingCounter10_197684_119553_232436 106
#define Com_X_Inst_1095_RollingCounter12_197685_119553_232436 107
#define Com_X_Inst_1095_RollingCounter13_197686_119553_232436 108
#define Com_X_Inst_1095_RollingCounter14_197687_119553_232436 109
#define Com_X_Inst_1095_Checksum11_197688_119553_232436 110
#define Com_X_Inst_1095_Rollingcounter11_197689_119553_232436 111
#define Com_X_Inst_1095_BlockCounter2_197690_119553_232436 112
#define Com_X_Inst_1096_CR_L_ObjID_5_197691_119553_232436 113
#define Com_X_Inst_1096_CR_L_ObjExistProb_5_197692_119553_232436 114
#define Com_X_Inst_1096_CR_L_ObjObstacleProb_5_197693_119553_232436 115
#define Com_X_Inst_1096_CR_L_ObjDistX_5_197694_119553_232436 116
#define Com_X_Inst_1096_CR_L_ObjDistY_5_197695_119553_232436 117
#define Com_X_Inst_1096_CR_L_ObjRelVelX_5_197696_119553_232436 118
#define Com_X_Inst_1096_CR_L_ObjRelVelY_5_197697_119553_232436 119
#define Com_X_Inst_1096_CR_L_ObjRelAccelX_5_197698_119553_232436 120
#define Com_X_Inst_1096_CR_L_ObjRelAccelY_5_197699_119553_232436 121
#define Com_X_Inst_1096_CR_L_ObjDistXStd_5_197700_119553_232436 122
#define Com_X_Inst_1096_CR_L_ObjDistYStd_5_197701_119553_232436 123
#define Com_X_Inst_1096_CR_L_ObjRelVelXStd_5_197702_119553_232436 124
#define Com_X_Inst_1096_CR_L_ObjRelVelYStd_5_197703_119553_232436 125
#define Com_X_Inst_1096_CR_L_ObjRAccelXStd_5_197704_119553_232436 126
#define Com_X_Inst_1096_CR_L_ObjRAccelYStd_5_197705_119553_232436 127
#define Com_X_Inst_1096_CR_L_VFC_ObjWidth_5_197706_119553_232436 128
#define Com_X_Inst_1096_CR_L_VFC_ObjLength_5_197707_119553_232436 129
#define Com_X_Inst_1096_CR_L_ObjID_6_197708_119553_232436 130
#define Com_X_Inst_1096_CR_L_ObjExistProb_6_197709_119553_232436 131
#define Com_X_Inst_1096_CR_L_ObjObstacleProb_6_197710_119553_232436 132
#define Com_X_Inst_1096_CR_L_ObjDistX_6_197711_119553_232436 133
#define Com_X_Inst_1096_CR_L_ObjDistY_6_197712_119553_232436 134
#define Com_X_Inst_1096_CR_L_ObjRelVelX_6_197713_119553_232436 135
#define Com_X_Inst_1096_CR_L_ObjRelVelY_6_197714_119553_232436 136
#define Com_X_Inst_1096_CR_L_ObjRelAccelX_6_197715_119553_232436 137
#define Com_X_Inst_1096_CR_L_ObjRelAccelY_6_197716_119553_232436 138
#define Com_X_Inst_1096_CR_L_ObjDistXStd_6_197717_119553_232436 139
#define Com_X_Inst_1096_CR_L_ObjDistYStd_6_197718_119553_232436 140
#define Com_X_Inst_1096_CR_L_ObjRelVelXStd_6_197719_119553_232436 141
#define Com_X_Inst_1096_CR_L_ObjRelVelYStd_6_197720_119553_232436 142
#define Com_X_Inst_1096_CR_L_ObjRAccelXStd_6_197721_119553_232436 143
#define Com_X_Inst_1096_CR_L_ObjRAccelYStd_6_197722_119553_232436 144
#define Com_X_Inst_1096_CR_L_VFC_ObjWidth_6_197723_119553_232436 145
#define Com_X_Inst_1096_CR_L_VFC_ObjLength_6_197724_119553_232436 146
#define Com_X_Inst_1096_Checksum15_197725_119553_232436 147
#define Com_X_Inst_1096_Checksum16_197726_119553_232436 148
#define Com_X_Inst_1096_Checksum17_197727_119553_232436 149
#define Com_X_Inst_1096_Checksum19_197728_119553_232436 150
#define Com_X_Inst_1096_Checksum20_197729_119553_232436 151
#define Com_X_Inst_1096_Checksum21_197730_119553_232436 152
#define Com_X_Inst_1096_RollingCounter15_197731_119553_232436 153
#define Com_X_Inst_1096_RollingCounter16_197732_119553_232436 154
#define Com_X_Inst_1096_RollingCounter17_197733_119553_232436 155
#define Com_X_Inst_1096_RollingCounter19_197734_119553_232436 156
#define Com_X_Inst_1096_RollingCounter20_197735_119553_232436 157
#define Com_X_Inst_1096_RollingCounter21_197736_119553_232436 158
#define Com_X_Inst_1096_Checksum18_197737_119553_232436 159
#define Com_X_Inst_1096_Rollingcounter18_197738_119553_232436 160
#define Com_X_Inst_1096_BlockCounter3_197739_119553_232436 161
#define Com_X_Inst_1097_CR_R_hdr_AutoSarTimeStamp_197740_119553_232436 162
#define Com_X_Inst_1097_CR_R_hdr_ErrorStatus_197741_119553_232436 163
#define Com_X_Inst_1097_CR_R_hdr_TimeStamp_197742_119553_232436 164
#define Com_X_Inst_1097_CR_R_ObjID_1_197743_119553_232436 165
#define Com_X_Inst_1097_CR_R_ObjExistProb_1_197744_119553_232436 166
#define Com_X_Inst_1097_CR_R_ObjObstacleProb_1_197745_119553_232436 167
#define Com_X_Inst_1097_CR_R_ObjDistX_1_197746_119553_232436 168
#define Com_X_Inst_1097_CR_R_ObjDistY_1_197747_119553_232436 169
#define Com_X_Inst_1097_CR_R_ObjRelVelX_1_197748_119553_232436 170
#define Com_X_Inst_1097_CR_R_ObjRelVelY_1_197749_119553_232436 171
#define Com_X_Inst_1097_CR_R_ObjRelAccelX_1_197750_119553_232436 172
#define Com_X_Inst_1097_CR_R_ObjRelAccelY_1_197751_119553_232436 173
#define Com_X_Inst_1097_CR_R_ObjDistXStd_1_197752_119553_232436 174
#define Com_X_Inst_1097_CR_R_ObjDistYStd_1_197753_119553_232436 175
#define Com_X_Inst_1097_CR_R_ObjRelVelXStd_1_197754_119553_232436 176
#define Com_X_Inst_1097_CR_R_ObjRelVelYStd_1_197755_119553_232436 177
#define Com_X_Inst_1097_CR_R_ObjRAccelXStd_1_197756_119553_232436 178
#define Com_X_Inst_1097_CR_R_ObjRAccelYStd_1_197757_119553_232436 179
#define Com_X_Inst_1097_CR_R_VFC_ObjWidth_1_197758_119553_232436 180
#define Com_X_Inst_1097_CR_R_VFC_ObjLength_1_197759_119553_232436 181
#define Com_X_Inst_1097_CR_R_ObjID_2_197760_119553_232436 182
#define Com_X_Inst_1097_CR_R_ObjExistProb_2_197761_119553_232436 183
#define Com_X_Inst_1097_CR_R_ObjObstacleProb_2_197762_119553_232436 184
#define Com_X_Inst_1097_CR_R_ObjDistX_2_197763_119553_232436 185
#define Com_X_Inst_1097_CR_R_ObjDistY_2_197764_119553_232436 186
#define Com_X_Inst_1097_CR_R_ObjRelVelX_2_197765_119553_232436 187
#define Com_X_Inst_1097_CR_R_ObjRelVelY_2_197766_119553_232436 188
#define Com_X_Inst_1097_CR_R_ObjRelAccelX_2_197767_119553_232436 189
#define Com_X_Inst_1097_CR_R_ObjRelAccelY_2_197768_119553_232436 190
#define Com_X_Inst_1097_CR_R_ObjDistXStd_2_197769_119553_232436 191
#define Com_X_Inst_1097_CR_R_ObjDistYStd_2_197770_119553_232436 192
#define Com_X_Inst_1097_CR_R_ObjRelVelXStd_2_197771_119553_232436 193
#define Com_X_Inst_1097_CR_R_ObjRelVelYStd_2_197772_119553_232436 194
#define Com_X_Inst_1097_CR_R_ObjRAccelXStd_2_197773_119553_232436 195
#define Com_X_Inst_1097_CR_R_ObjRAccelYStd_2_197774_119553_232436 196
#define Com_X_Inst_1097_CR_R_VFC_ObjWidth_2_197775_119553_232436 197
#define Com_X_Inst_1097_CR_R_VFC_ObjLength_2_197776_119553_232436 198
#define Com_X_Inst_1097_Checksum22_197777_119553_232436 199
#define Com_X_Inst_1097_Checksum23_197778_119553_232436 200
#define Com_X_Inst_1097_Checksum24_197779_119553_232436 201
#define Com_X_Inst_1097_Checksum26_197780_119553_232436 202
#define Com_X_Inst_1097_Checksum27_197781_119553_232436 203
#define Com_X_Inst_1097_Checksum28_197782_119553_232436 204
#define Com_X_Inst_1097_RollingCounter22_197783_119553_232436 205
#define Com_X_Inst_1097_RollingCounter23_197784_119553_232436 206
#define Com_X_Inst_1097_RollingCounter24_197785_119553_232436 207
#define Com_X_Inst_1097_RollingCounter26_197786_119553_232436 208
#define Com_X_Inst_1097_RollingCounter27_197787_119553_232436 209
#define Com_X_Inst_1097_RollingCounter28_197788_119553_232436 210
#define Com_X_Inst_1097_CR_R_hdr_TimerStempStatus_197789_119553_232436 211
#define Com_X_Inst_1097_Checksum25_197790_119553_232436 212
#define Com_X_Inst_1097_Rollingcounter25_197791_119553_232436 213
#define Com_X_Inst_1097_CR_R_ESP_ErrorStatus_197792_119553_232436 214
#define Com_X_Inst_1097_CR_R_SAS_ErrorStatus_197793_119553_232436 215
#define Com_X_Inst_1097_CR_R_ABM_ErrorStatus_197794_119553_232436 216
#define Com_X_Inst_1097_BlockCounter4_197795_119553_232436 217
#define Com_X_Inst_1098_CR_R_ObjID_3_197796_119553_232436 218
#define Com_X_Inst_1098_CR_R_ObjExistProb_3_197797_119553_232436 219
#define Com_X_Inst_1098_CR_R_ObjObstacleProb_3_197798_119553_232436 220
#define Com_X_Inst_1098_CR_R_ObjDistX_3_197799_119553_232436 221
#define Com_X_Inst_1098_CR_R_ObjDistY_3_197800_119553_232436 222
#define Com_X_Inst_1098_CR_R_ObjRelVelX_3_197801_119553_232436 223
#define Com_X_Inst_1098_CR_R_ObjRelVelY_3_197802_119553_232436 224
#define Com_X_Inst_1098_CR_R_ObjRelAccelX_3_197803_119553_232436 225
#define Com_X_Inst_1098_CR_R_ObjRelAccelY_3_197804_119553_232436 226
#define Com_X_Inst_1098_CR_R_ObjDistXStd_3_197805_119553_232436 227
#define Com_X_Inst_1098_CR_R_ObjDistYStd_3_197806_119553_232436 228
#define Com_X_Inst_1098_CR_R_ObjRelVelXStd_3_197807_119553_232436 229
#define Com_X_Inst_1098_CR_R_ObjRelVelYStd_3_197808_119553_232436 230
#define Com_X_Inst_1098_CR_R_ObjRAccelXStd_3_197809_119553_232436 231
#define Com_X_Inst_1098_CR_R_ObjRAccelYStd_3_197810_119553_232436 232
#define Com_X_Inst_1098_CR_R_VFC_ObjWidth_3_197811_119553_232436 233
#define Com_X_Inst_1098_CR_R_VFC_ObjLength_3_197812_119553_232436 234
#define Com_X_Inst_1098_CR_R_ObjID_4_197813_119553_232436 235
#define Com_X_Inst_1098_CR_R_ObjExistProb_4_197814_119553_232436 236
#define Com_X_Inst_1098_CR_R_ObjObstacleProb_4_197815_119553_232436 237
#define Com_X_Inst_1098_CR_R_ObjDistX_4_197816_119553_232436 238
#define Com_X_Inst_1098_CR_R_ObjDistY_4_197817_119553_232436 239
#define Com_X_Inst_1098_CR_R_ObjRelVelX_4_197818_119553_232436 240
#define Com_X_Inst_1098_CR_R_ObjRelVelY_4_197819_119553_232436 241
#define Com_X_Inst_1098_CR_R_ObjRelAccelX_4_197820_119553_232436 242
#define Com_X_Inst_1098_CR_R_ObjRelAccelY_4_197821_119553_232436 243
#define Com_X_Inst_1098_CR_R_ObjDistXStd_4_197822_119553_232436 244
#define Com_X_Inst_1098_CR_R_ObjDistYStd_4_197823_119553_232436 245
#define Com_X_Inst_1098_CR_R_ObjRelVelXStd_4_197824_119553_232436 246
#define Com_X_Inst_1098_CR_R_ObjRelVelYStd_4_197825_119553_232436 247
#define Com_X_Inst_1098_CR_R_ObjRAccelXStd_4_197826_119553_232436 248
#define Com_X_Inst_1098_CR_R_ObjRAccelYStd_4_197827_119553_232436 249
#define Com_X_Inst_1098_CR_R_VFC_ObjWidth_4_197828_119553_232436 250
#define Com_X_Inst_1098_CR_R_VFC_ObjLength_4_197829_119553_232436 251
#define Com_X_Inst_1098_Checksum29_197830_119553_232436 252
#define Com_X_Inst_1098_Checksum30_197831_119553_232436 253
#define Com_X_Inst_1098_Checksum31_197832_119553_232436 254
#define Com_X_Inst_1098_Checksum33_197833_119553_232436 255
#define Com_X_Inst_1098_Checksum34_197834_119553_232436 256
#define Com_X_Inst_1098_Checksum35_197835_119553_232436 257
#define Com_X_Inst_1098_RollingCounter29_197836_119553_232436 258
#define Com_X_Inst_1098_RollingCounter30_197837_119553_232436 259
#define Com_X_Inst_1098_RollingCounter31_197838_119553_232436 260
#define Com_X_Inst_1098_RollingCounter33_197839_119553_232436 261
#define Com_X_Inst_1098_RollingCounter34_197840_119553_232436 262
#define Com_X_Inst_1098_RollingCounter35_197841_119553_232436 263
#define Com_X_Inst_1098_Checksum32_197842_119553_232436 264
#define Com_X_Inst_1098_Rollingcounter32_197843_119553_232436 265
#define Com_X_Inst_1098_BlockCounter5_197844_119553_232436 266
#define Com_X_Inst_1099_CR_R_ObjID_5_197845_119553_232436 267
#define Com_X_Inst_1099_CR_R_ObjExistProb_5_197846_119553_232436 268
#define Com_X_Inst_1099_CR_R_ObjObstacleProb_5_197847_119553_232436 269
#define Com_X_Inst_1099_CR_R_ObjDistX_5_197848_119553_232436 270
#define Com_X_Inst_1099_CR_R_ObjDistY_5_197849_119553_232436 271
#define Com_X_Inst_1099_CR_R_ObjRelVelX_5_197850_119553_232436 272
#define Com_X_Inst_1099_CR_R_ObjRelVelY_5_197851_119553_232436 273
#define Com_X_Inst_1099_CR_R_ObjRelAccelX_5_197852_119553_232436 274
#define Com_X_Inst_1099_CR_R_ObjRelAccelY_5_197853_119553_232436 275
#define Com_X_Inst_1099_CR_R_ObjDistXStd_5_197854_119553_232436 276
#define Com_X_Inst_1099_CR_R_ObjDistYStd_5_197855_119553_232436 277
#define Com_X_Inst_1099_CR_R_ObjRelVelXStd_5_197856_119553_232436 278
#define Com_X_Inst_1099_CR_R_ObjRelVelYStd_5_197857_119553_232436 279
#define Com_X_Inst_1099_CR_R_ObjRAccelXStd_5_197858_119553_232436 280
#define Com_X_Inst_1099_CR_R_ObjRAccelYStd_5_197859_119553_232436 281
#define Com_X_Inst_1099_CR_R_VFC_ObjWidth_5_197860_119553_232436 282
#define Com_X_Inst_1099_CR_R_VFC_ObjLength_5_197861_119553_232436 283
#define Com_X_Inst_1099_CR_R_ObjID_6_197862_119553_232436 284
#define Com_X_Inst_1099_CR_R_ObjExistProb_6_197863_119553_232436 285
#define Com_X_Inst_1099_CR_R_ObjObstacleProb_6_197864_119553_232436 286
#define Com_X_Inst_1099_CR_R_ObjDistX_6_197865_119553_232436 287
#define Com_X_Inst_1099_CR_R_ObjDistY_6_197866_119553_232436 288
#define Com_X_Inst_1099_CR_R_ObjRelVelX_6_197867_119553_232436 289
#define Com_X_Inst_1099_CR_R_ObjRelVelY_6_197868_119553_232436 290
#define Com_X_Inst_1099_CR_R_ObjRelAccelX_6_197869_119553_232436 291
#define Com_X_Inst_1099_CR_R_ObjRelAccelY_6_197870_119553_232436 292
#define Com_X_Inst_1099_CR_R_ObjDistXStd_6_197871_119553_232436 293
#define Com_X_Inst_1099_CR_R_ObjDistYStd_6_197872_119553_232436 294
#define Com_X_Inst_1099_CR_R_ObjRelVelXStd_6_197873_119553_232436 295
#define Com_X_Inst_1099_CR_R_ObjRelVelYStd_6_197874_119553_232436 296
#define Com_X_Inst_1099_CR_R_ObjRAccelXStd_6_197875_119553_232436 297
#define Com_X_Inst_1099_CR_R_ObjRAccelYStd_6_197876_119553_232436 298
#define Com_X_Inst_1099_CR_R_VFC_ObjWidth_6_197877_119553_232436 299
#define Com_X_Inst_1099_CR_R_VFC_ObjLength_6_197878_119553_232436 300
#define Com_X_Inst_1099_Checksum36_197879_119553_232436 301
#define Com_X_Inst_1099_Checksum37_197880_119553_232436 302
#define Com_X_Inst_1099_Checksum38_197881_119553_232436 303
#define Com_X_Inst_1099_Checksum40_197882_119553_232436 304
#define Com_X_Inst_1099_Checksum41_197883_119553_232436 305
#define Com_X_Inst_1099_Checksum42_197884_119553_232436 306
#define Com_X_Inst_1099_RollingCounter36_197885_119553_232436 307
#define Com_X_Inst_1099_RollingCounter37_197886_119553_232436 308
#define Com_X_Inst_1099_RollingCounter38_197887_119553_232436 309
#define Com_X_Inst_1099_RollingCounter40_197888_119553_232436 310
#define Com_X_Inst_1099_RollingCounter41_197889_119553_232436 311
#define Com_X_Inst_1099_RollingCounter42_197890_119553_232436 312
#define Com_X_Inst_1099_Checksum39_197891_119553_232436 313
#define Com_X_Inst_1099_Rollingcounter39_197892_119553_232436 314
#define Com_X_Inst_1099_BlockCounter6_197893_119553_232436 315

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

