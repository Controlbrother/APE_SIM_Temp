#ifndef __OBJECT_API_H
#define __OBJECT_API_H
 
#define USE_EQ4                   //EQ4 chip
//#define AUTOSAR_PLATFORM          //also for simulation platform
#define AUTOBOX_PLATFORM

#ifdef AUTOSAR_PLATFORM
#include "autosar_swc_objfusion_SubOFM.h"

//extern EgoPack ego_pack;
extern RFM_LINE_BUS RFM_LaneBus[12];
extern autosar_swc_objfusion_B_SubOFM objFusion;
void OFM_OneStep(autosar_swc_objfusion_B_SubOFM* localB);

#endif // AUTOSAR_PLATFORM

#ifdef AUTOBOX_PLATFORM
#include "../hwa_autobox_adapter/PubIfFusionOFM_MDL_types.h"
#include "../hwa_autobox_adapter/rtwtypes.h"
#ifndef EQ4_TIME_COEFFICIENT
#define EQ4_TIME_COEFFICIENT (0.001f)
#endif
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
    OFM_OBJ_BUS* ofm_fusion_objects);

#endif //AUTOBOX_PLATFORM

void OFM_Init(void);
void OFM_Stop();

#endif
