% Simulink.importExternalCTypes('Rte_Type.h');

def = legacy_code('initialize');
def.SFunctionName = 'sfun_Fusion_road';
def.SourceFiles = {'FusionApi.c'
'HWAapi.c'
'HWA_R.c'
'HWAafRoadArithm.c'
'HWABoundary.c'
'HWABoundaryLinePredicted.c'
'HWALineFusion.c'
'HWAObejctManage.c'
'HWARoadLayout.c'
'HWARoadPreprocess.c'
'HWARoadSceneRecognition.c'
'HWASpeedLimit.c'
'HWAOutputSendCallback.c'
};
def.HeaderFiles = {'FusionApi.h',};
def.IncPaths={

'.\HWA_Road_Api'
% '.\HWA_Road_Api\autobox'
'.\HWA_Road_Api\autosar_swc_infofusion_autosar_rtw'
'.\HWA_Road\include'
'.\HWA_Road\include\HWAApi'
'.\HWA_Road\include\HWAMsg'
'.\HWA_Road\include\HWAPack'
'.\HWA_Road\source'
'.\HWA_Road\source\Road'
};
def.SrcPaths=def.IncPaths;
% def.OutputFcnSpec = 'void FusionTest(EQ4_LA u1[1],EQ4_LH u2[1],EQ4_LRE u3[1],HWAIFVPack y1[1]);';
% def.OutputFcnSpec ='void Fusion_Road_Main( EHRV2_ROAD_ATTR_INFO_BUS u1[1],EHRV2_CTRL_INFO_BUS u2[1],uint8 u3[1],MRR_HDR_BUS  u4[1],MRR_OBJ_BUS  u5[32],EQ4_FSPX_BUS u6[1],	EQ4_LA_BUS  u7[1],EQ4_LAP_BUS  u8[1],	EQ4_LH_BUS  u9[1],EQ4_LRE_BUS  u10[1],	EQ4_TFL_SPOTS_BUS  u11[1],	EQ4_TFL_STRUCT_BUS  u12[1],	EQ4_TSR_BUS u13[1],	EQ4_FS_BUS u14[1],	single  u15[1],single  u16[1],single  u17[1],single  u18[1],	single  u19[1],single  u20[1],single  u21[1],single  u22[1],single  u23[1],single  u24[1],uint32  u25[1],StbM_TimeStampExtendedType  u26[1],StbM_UserDataType u27[1],uint8  u28[1], RFM_ROAD_BUS y1[1],		RFM_TSR_BUS y2[1],		uint32 y3[1],		RFM_LINE_BUS y4[1],		RFM_LINE_BUS y5[1],		RFM_LINE_BUS y6[1],		RFM_LINE_BUS y7[1],		RFM_LINE_BUS y8[1],		RFM_LINE_BUS y9[1],		RFM_LINE_BUS y10[1],		RFM_LINE_BUS y11[1],		RFM_LINE_BUS y12[1],		RFM_LINE_BUS y13[1],		RFM_LINE_BUS y14[1],		RFM_LINE_BUS y15[1])';
def.OutputFcnSpec ='void Fusion_Road_Main( EHRV2_ROAD_ATTR_INFO_BUS u1[1],EHRV2_CTRL_INFO_BUS u2[1],uint8 u3[1],MRR_HDR_BUS  u4[1],MRR_OBJ_BUS  u5[32],EQ4_FSPX_BUS u6[1],	EQ4_LA_BUS  u7[1],EQ4_LAP_BUS  u8[1],	EQ4_LH_BUS  u9[1],EQ4_LRE_BUS  u10[1],	EQ4_TFL_SPOTS_BUS  u11[1],	EQ4_TFL_STRUCT_BUS  u12[1],	EQ4_TSR_BUS u13[1],	EQ4_FS_BUS u14[1],	single  u15[1],single  u16[1],single  u17[1],single  u18[1],	single  u19[1],single  u20[1],single  u21[1],single  u22[1],single  u23[1],single  u24[1],uint32  u25[1],StbM_TimeStampExtendedType u26[1],StbM_UserDataType u27[1],uint8 u28[1],RFM_ROAD_BUS y1[1],		RFM_TSR_BUS y2[1],	uint32 y3[1],RFM_LANE_BUS y4[1],RFM_LANE_BUS y5[1],RFM_LANE_BUS y6[1],RFM_LANE_BUS y7[1],RFM_INTERSEC_ALERT_BUS y8[1],RFM_BRANCH_BUS y9[1],RFM_REC_LANES_BUS y10[1],RFM_LINE_BUS y11[1],		RFM_LINE_BUS y12[1],		RFM_LINE_BUS y13[1],		RFM_LINE_BUS y14[1],		RFM_LINE_BUS y15[1],		RFM_LINE_BUS y16[1],		RFM_LINE_BUS y17[1],		RFM_LINE_BUS y18[1],		RFM_LINE_BUS y19[1],		RFM_LINE_BUS y20[1],		RFM_LINE_BUS y21[1],		RFM_LINE_BUS y22[1],RFM_LINE_BUS y23[1],RFM_LINE_BUS y24[1])';
def.StartFcnSpec='void Fusion_Road_Init()';
legacy_code('generate_for_sim',def);