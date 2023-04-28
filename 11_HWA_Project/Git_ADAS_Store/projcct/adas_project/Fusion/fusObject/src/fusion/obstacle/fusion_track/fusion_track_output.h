#ifndef __FUSION_TRACK_OUTPUT_H
#define __FUDION_TRACK_OUTPUT_H

#include "track.h"
#include "Object_Api.h"
#include "vehicle_info_container.h"
#include "fusion_track.h"
#include "DTC.h"
#include "fusion_track_logger.h"
#include "vehicle_dynamic.h"

#define MAX_OFM_OBJ_CNT 80

void get_fusion_tracks(unsigned long pack_stamp, OFM_OBJ_BUS* fused_track_pack);

#endif