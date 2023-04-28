#ifndef __FUSION_API_H_
#define __FUSION_API_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "track.h"
#include "object_container.h"
#include "obstacle_fusion.h"
#include "vehicle_info_container.h"
#include "Object_Api.h"
#include "fusion_track.h"

int init_obstacle_fusion_api(void);
int start_obstacle_fusion_api(void);
int stop_obstacle_fusion_api(void);
void reset_obstacle_fusion_api(void);
void do_obstacle_fusion_api(void);
void get_fusion_track_frame_api(FusionTrackFrame** track_frame);
void add_camera_object_frame_api(const EQ4_OBJ_BUS* pack, const EQ4_FS_BUS* eq4_fs_);
void add_bose_radar_object_frame_api(
        const MRR_HDR_BUS* mrr_header, const MRR_OBJ_BUS* mrr_objects,
        const CR_HDR_BUS* radar_fr_header, const CR_OBJ_BUS* radar_fr_objects,
        const CR_HDR_BUS* radar_fl_header, const CR_OBJ_BUS* radar_fl_objects,
        const RSDS_HDR_BUS* radar_rl_header, const RSDS_OBJ_BUS* radar_rl_objects,
        const RSDS_HDR_BUS* radar_rr_header, const RSDS_OBJ_BUS* radar_rr_objects);

void add_system_time_frame_api(unsigned long api_sys_time);
void add_vehicle_info_api(const EgoPack* vehicle_info_pack);
void get_latest_camera_object_frame_api(CameraObjectFrame** object_frame);
void get_latest_radar_object_frame_api(ERadarType radar_type, RadarObjectFrame** object_frame);
void get_latest_vehicle_info_api(VehicleInfo** vehicle_info);
int fuse_objects_api(unsigned long pack_stamp, OFM_OBJ_BUS* fused_obstacle_pack);

#ifdef __cplusplus
}
#endif

#endif