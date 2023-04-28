#include "Fusion_autobox.h"
void object_fusion_init()
{
	OFM_Init();
}
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
unsigned int	*ofm_Cur_Time,

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
        
unsigned int  *cnt,
/****************obj_result************/

OFM_OBJ_BUS		*objResult

)
{
OFM_OneStep(
        rfm_LaneL1,rfm_LaneR1,rfm_LaneL2,rfm_LaneR2,
        rfm_LaneL3,rfm_LaneR3,rfm_LaneCL,rfm_LaneLB,
        rfm_LaneRB,rfm_LanePRED,rfm_LaneFLB,rfm_LaneFRB,
        eq4_obj,eq4_fs,
        mrr_pack_hdr,mrr_pack_obj,
        cr_L_pack_hdr,cr_L_pack_obj,
        cr_R_pack_hdr,cr_R_pack_obj,
        rsds_L_pack_hdr,rsds_L_pack_obj,
        rsds_R_pack_hdr,rsds_R_pack_obj,
        *ofm_Cur_Time,
        *axvRefMs2,
        *vxvRefMs,
        *axvRoadSlopeMs2,
        *axRefMs2,
        *axRefDt,
        *psiDtOpt,
        *ayvRefMs2,
        *alpSideSlipAngle,
        *kapTraj,
        *SteerAngleOffset_deg,
        cnt,
        objResult);
}