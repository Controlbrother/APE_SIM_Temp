#ifndef _HDR_FUSIONAPI
#define _HDR_FUSIONAPI

#include "Object_Api.h"
#include "fusion_api.h"
void object_fusion_init();
void object_fusion_main(

/****************fusion_line***********/
        
RFM_LINE_BUS	*rfm_LaneL1,
RFM_LINE_BUS	*rfm_LaneR1,
RFM_LINE_BUS	*rfm_LaneL2,
RFM_LINE_BUS	*rfm_LaneR2,
RFM_LINE_BUS	*rfm_LaneL3,
RFM_LINE_BUS	*rfm_LaneR3,
RFM_LINE_BUS	*rfm_LaneCL,
RFM_LINE_BUS	*rfm_LaneLB,
RFM_LINE_BUS	*rfm_LaneRB,
RFM_LINE_BUS	*rfm_LanePRED,
RFM_LINE_BUS	*rfm_LaneFLB,        
RFM_LINE_BUS	*rfm_LaneFRB,        
/********************MRR*****************/

MRR_HDR_BUS		*mrr_pack_hdr,
MRR_OBJ_BUS		*mrr_pack_obj,

/********************CR*****************/
CR_HDR_BUS		*cr_L_pack_hdr,
CR_OBJ_BUS		*cr_L_pack_obj,
CR_HDR_BUS		*cr_R_pack_hdr,
CR_OBJ_BUS		*cr_R_pack_obj,


/********************BR*****************/


RSDS_HDR_BUS	*rsds_R_pack_hdr,
RSDS_OBJ_BUS	*rsds_R_pack_obj,
RSDS_HDR_BUS	*rsds_L_pack_hdr,
RSDS_OBJ_BUS	*rsds_L_pack_obj,       
        
/********************EQ4*****************/
EQ4_OBJ_BUS		*eq4_obj,
EQ4_FS_BUS		*eq4_fs,

        
/****************time******************/
unsigned int			*ofm_Cur_Time,

/********************EGO*****************/

float         *axvRefMs2,
float         *vxvRefMs,
float         *axvRoadSlopeMs2,
float         *axRefMs2,
float         *axRefDt,
float         *psiDtOpt,
float         *ayvRefMs2,
float         *alpSideSlipAngle,
float         *kapTraj,
float         *SteerAngleOffset_deg,
        
unsigned int         *cnt,
/****************obj_result************/

OFM_OBJ_BUS		*objResult

);


#endif
