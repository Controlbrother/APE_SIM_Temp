#include "Object_Api.h"
#include "fusion_api.h"
#include "ego_pack.h"
#ifdef LOG_MATCH
#include "performance.h"
#endif
#include "DTC.h"
#include "embedded_perf.h"

EgoPack ego_pack;
RFM_LINE_BUS RFM_LaneBus[12];
//autosar_swc_objfusion_B_SubOFM objFusion;
unsigned long OFM_SW_VERSION = 201203030412;
#if LOG_MATCH
PERFORMANCE_TEST_DEFINE(oneStep);
#endif

EMBEDDED_PERFORMANCE_TEST_DEFINE(data_load);
EMBEDDED_PERFORMANCE_TEST_DEFINE(fuse_api);

void OFM_Init(void)
{
    init_obstacle_fusion_api();
}

void OFM_Stop(void)
{
    stop_obstacle_fusion_api();
}

#ifdef AUTOSAR_PLATFORM
void OFM_OneStep(autosar_swc_objfusion_B_SubOFM* localB) 
{
    #if LOG_MATCH
    PERFORMANCE_TEST_START(oneStep);
    #endif
    static unsigned long ofm_counter = 0;
    ego_pack.axvRefMs2 = localB->IM_axvRefMs2;
    ego_pack.vxvRefMs = localB->IM_vxvRefMs;
    ego_pack.axvRoadSlopeMs2 = localB->IM_axvRoadSlopeMs2;
    ego_pack.axRefMs2 = localB->IM_axRefMs2;
    ego_pack.axRefDt = localB->IM_axRefDt;
    ego_pack.psiDtOpt = localB->IM_psiDtOpt;
    ego_pack.ayvRefMs2 = localB->IM_ayvRefMs2;
    ego_pack.alpSideSlipAngle = localB->IM_alpSideSlipAngle;
    ego_pack.kapTraj = localB->IM_kapTraj;
    ego_pack.SteerAngleOffset_deg = localB->IM_SteerAngleOffset_deg;
    RFM_LaneBus[0] = localB->IM_RFM_LINE_L1;
    RFM_LaneBus[1] = localB->IM_RFM_LINE_R1;
    RFM_LaneBus[2] = localB->IM_RFM_LINE_L2;
    RFM_LaneBus[3] = localB->IM_RFM_LINE_R2;
    RFM_LaneBus[4] = localB->IM_RFM_LINE_L3;
    RFM_LaneBus[5] = localB->IM_RFM_LINE_R3;
    RFM_LaneBus[6] = localB->IM_RFM_LINE_CL;
    RFM_LaneBus[7] = localB->IM_RFM_LINE_LB;
    RFM_LaneBus[8] = localB->IM_RFM_LINE_RB;
    RFM_LaneBus[9] = localB->IM_RFM_LINE_PRED;
    RFM_LaneBus[10] = localB->IM_RFM_LINEF_LB;
    RFM_LaneBus[11] = localB->IM_RFM_LINEF_RB;

    add_vehicle_info_api(&ego_pack);
    add_camera_object_frame_api(&localB->IM_EQ4_OBJ, &localB->IM_EQ4_FS);
    add_bose_radar_object_frame_api(&localB->IM_MRR_HDR, localB->IM_MRR_OBJS,
        &localB->IM_CR_R_HDR, localB->IM_CR_R_OBJS,
        &localB->IM_CR_L_HDR, localB->IM_CR_L_OBJS,
        &localB->IM_RSDS_L_HDR, localB->IM_RSDS_L_OBJS,
        &localB->IM_RSDS_R_HDR, localB->IM_RSDS_R_OBJS);

    fuse_objects_api(localB->IM_SysCurrTimeMs, &localB->OC_OFM_OBJS);
    ofm_counter++;
    localB->OC_OFM_UpdateCnt = ofm_counter;
    #if LOG_MATCH
    PERFORMANCE_TEST_END(oneStep, "OFM_OneStep");
    #endif
}
#endif


#ifdef AUTOBOX_PLATFORM

void OFM_OneStep(const RFM_LINE_BUS* ofm_RFM_LINE_L1, const RFM_LINE_BUS* ofm_RFM_LINE_R1,
    const RFM_LINE_BUS* ofm_RFM_LINE_L2, const RFM_LINE_BUS* ofm_RFM_LINE_R2,
    const RFM_LINE_BUS* ofm_RFM_LINE_L3, const RFM_LINE_BUS* ofm_RFM_LINE_R3,
    const RFM_LINE_BUS* ofm_RFM_LINE_CL, const RFM_LINE_BUS* ofm_RFM_LINE_LB,
    const RFM_LINE_BUS* ofm_RFM_LINE_RB, const RFM_LINE_BUS* ofm_RFM_LINE_PRED,
    const RFM_LINE_BUS* ofm_RFM_LINEF_LB, const RFM_LINE_BUS* ofm_RFM_LINEF_RB,
    const EQ4_OBJ_BUS* ofm_EQ4_OBJ, const EQ4_FS_BUS* ofm_EQ4_FS,
    const MRR_HDR_BUS* ofm_MRR_HDR, const MRR_OBJ_BUS ofm_MRR_OBJS[32],
    const CR_HDR_BUS* ofm_CR_L_HDR, const CR_OBJ_BUS ofm_CR_L_OBJS[6],
    const CR_HDR_BUS* ofm_CR_R_HDR, const CR_OBJ_BUS ofm_CR_R_OBJS[6],
    const RSDS_HDR_BUS* ofm_RSDS_L_HDR, const RSDS_OBJ_BUS ofm_RSDS_L_OBJS[6],
    const RSDS_HDR_BUS* ofm_RSDS_R_HDR, const RSDS_OBJ_BUS ofm_RSDS_R_OBJS[6],
    uint32_T ofm_SysCurrTimeMs, real32_T ofm_axvRefMs2, real32_T ofm_vxvRefMs,
    real32_T ofm_axvRoadSlopeMs2, real32_T ofm_axRefMs2, real32_T ofm_axRefDt,
    real32_T ofm_psiDtOpt, real32_T ofm_ayvRefMs2,
    real32_T ofm_alpSideSlipAngle, real32_T ofm_kapTraj,
    real32_T ofm_SteerAngleOffset_deg, uint32_T* ofm_counter,
    OFM_OBJ_BUS* ofm_fusion_objects)
{
    ego_pack.axvRefMs2 = (float)ofm_axvRefMs2;
    ego_pack.vxvRefMs = (float)ofm_vxvRefMs;
    ego_pack.axvRoadSlopeMs2 = (float)ofm_axvRoadSlopeMs2;
    ego_pack.axRefMs2 = (float)ofm_axRefMs2;
    ego_pack.axRefDt = (float)ofm_axRefDt;
    ego_pack.psiDtOpt = (float)ofm_psiDtOpt;
    ego_pack.ayvRefMs2 = (float)ofm_ayvRefMs2;
    ego_pack.alpSideSlipAngle = (float)ofm_alpSideSlipAngle;
    ego_pack.kapTraj = (float)ofm_kapTraj;
    ego_pack.SteerAngleOffset_deg = (float)ofm_SteerAngleOffset_deg;
    add_vehicle_info_api(&ego_pack);
    add_camera_object_frame_api(ofm_EQ4_OBJ, ofm_EQ4_FS);
    add_bose_radar_object_frame_api(ofm_MRR_HDR, ofm_MRR_OBJS, ofm_CR_R_HDR,
        ofm_CR_R_OBJS, ofm_CR_L_HDR, ofm_CR_L_OBJS,
        ofm_RSDS_L_HDR, ofm_RSDS_L_OBJS,
        ofm_RSDS_R_HDR, ofm_RSDS_R_OBJS);
    uint32_T cur_stamp = ofm_SysCurrTimeMs ;
    fuse_objects_api(cur_stamp, ofm_fusion_objects);
    (*ofm_counter)++;

    printf("ReceiveEQ4Syncid::%d",ofm_EQ4_OBJ->EQ4_OBJ_HDR.OBJ_Sync_ID);
    return;
}

#endif
