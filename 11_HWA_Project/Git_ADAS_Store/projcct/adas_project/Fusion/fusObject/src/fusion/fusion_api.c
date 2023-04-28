#include "fusion_api.h"
#include "Object_Api.h"
#include "DTC.h"
#include "fusion_track_output.h"
#include "embedded_perf.h"

EMBEDDED_PERFORMANCE_TEST_DEFINE(obstacle_fusion);
EMBEDDED_PERFORMANCE_TEST_DEFINE(output_tracks);
EMBEDDED_PERFORMANCE_TEST_DEFINE(add_camera);
EMBEDDED_PERFORMANCE_TEST_DEFINE(add_radar);

int init_obstacle_fusion_api(void) { return init_obstacle_fusion(); }

int start_obstacle_fusion_api(void) { return start_obstacle_fusion(); }

int stop_obstacle_fusion_api(void) { return stop_obstacle_fusion(); }

void reset_obstacle_fusion_api(void) { reset_obstacle_fusion(); }

void do_obstacle_fusion_api(void) { do_obstacle_fusion(); }

void get_fusion_track_frame_api(FusionTrackFrame** track_frame) 
{
    get_fusion_track_frame(track_frame);
}

void add_camera_object_frame_api(const EQ4_OBJ_BUS* pack, const EQ4_FS_BUS* eq4_fs_) {
    //if (eq4_fs_->EQ4_APPINFO.APP_E2EStatus == 0) {
    EMBEDDED_PERFORMANCE_TEST_START(add_camera);
    add_camera_object_frame(pack);
    EMBEDDED_PERFORMANCE_TEST_END(add_camera);
    //}
}

void add_bose_radar_object_frame_api(
    const MRR_HDR_BUS* mrr_header, const MRR_OBJ_BUS* mrr_objects,
    const CR_HDR_BUS* radar_fr_header, const CR_OBJ_BUS* radar_fr_objects,
    const CR_HDR_BUS* radar_fl_header, const CR_OBJ_BUS* radar_fl_objects,
    const RSDS_HDR_BUS* radar_rl_header, const RSDS_OBJ_BUS* radar_rl_objects,
    const RSDS_HDR_BUS* radar_rr_header, const RSDS_OBJ_BUS* radar_rr_objects) {
    EMBEDDED_PERFORMANCE_TEST_START(add_radar);
    //if (mrr_header->MRR_hdr_ErrorStatus == 0) {
    add_mrr_object_frame(mrr_header, mrr_objects);
    //}
    //if (radar_fr_header->CR_hdr_ErrorStatus == 0) {
    add_cr_object_frame(RADAR_FL, radar_fl_header, radar_fl_objects);
    //}
    //if (radar_fl_header->CR_hdr_ErrorStatus == 0) {
    add_cr_object_frame(RADAR_FR, radar_fr_header, radar_fr_objects);
    //}
    //if (radar_rl_header->RSDS_hdr_ErrorStatus == 0) {
    add_rsds_object_frame(RADAR_RL, radar_rl_header, radar_rl_objects);
    //}
    //if (radar_rr_header->RSDS_hdr_ErrorStatus == 0) {
    add_rsds_object_frame(RADAR_RR, radar_rr_header, radar_rr_objects);
    //}
    EMBEDDED_PERFORMANCE_TEST_END(add_radar);
}

// change by perry 20201005, remove  add_lines_api
//void add_lines_api(const RFM_LINE_BUS *line_pack) { add_line_infos(line_pack); }

void add_system_time_frame_api(unsigned long api_sys_time) {
    add_system_time_frame(0.001f * api_sys_time);
    return;
}

void add_vehicle_info_api(const EgoPack* vehicle_info_pack) {
    add_can_vehicle_info(vehicle_info_pack);
}

void get_latest_camera_object_frame_api(CameraObjectFrame** object_frame) {
    get_latest_camera_object_frame(object_frame);
}

void get_latest_radar_object_frame_api(ERadarType radar_type, RadarObjectFrame** object_frame) {
    get_latest_radar_object_frame(radar_type, object_frame);
}

void get_latest_vehicle_info_api(VehicleInfo** vehicle_info) {
    get_latest_vehicle_info(vehicle_info);
}

int fuse_objects_api(unsigned long pack_stamp, OFM_OBJ_BUS* fused_obstacle_pack) {
    EMBEDDED_PERFORMANCE_TEST_START(obstacle_fusion);
    do_obstacle_fusion();
    EMBEDDED_PERFORMANCE_TEST_END(obstacle_fusion);
    EMBEDDED_PERFORMANCE_TEST_START(output_tracks);
    get_fusion_tracks(pack_stamp, fused_obstacle_pack);
    EMBEDDED_PERFORMANCE_TEST_END(output_tracks);
    return 0;
}
