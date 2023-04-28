#ifndef _RADAR_H
#define _RADAR_H

#include "radar_type.h"

#include "PubIfFusionOFM_MDL_types.h"

//#include "Rte_type.h"

#include "object.h"

extern RadarObjectFrameQueue radar_frame_queue_array[RADAR_CNT];
extern unsigned char radar_frame_cnt[RADAR_CNT];

void init_radar_object_container(void);
void add_mrr_object_frame(const MRR_HDR_BUS* header, const MRR_OBJ_BUS* pack);
void add_cr_object_frame(ERadarType radar_type, const CR_HDR_BUS* header, const CR_OBJ_BUS* pack);
void add_rsds_object_frame(ERadarType radar_type, const RSDS_HDR_BUS* header, const RSDS_OBJ_BUS* pack);
int get_latest_radar_object_frame(ERadarType radar_type, RadarObjectFrame** object_frame);
void get_radar_object_frames(ObjectFrameArray* object_frame_array);

#endif // !_RADAR_H
