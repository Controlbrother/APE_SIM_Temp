#ifndef __FUSION_TRACK_LOGGER_H_
#define __FUSION_TRACK_LOGGER_H_

#include "track.h"
#include "assignment_type.h"

#define LOG_MATCH 0
#define LOG_KF_FILTER 0

#define BLOCK_COST 0
#define BLOCK_FRAME 0

#if LOG_MATCH
void log_time_stamp_error(float delta_t);
void log_track_title(void);
void log_single_track_status(const FusionTrack* track);
void log_single_output_track_status(const OFM_OBJ_BUS* fused_track_pack, unsigned char idx);
void log_track_status(const FusionTrackFrame* track_frame);
void log_track_status_with_id(const UCharArray64* track_idxs, const FusionTrackFrame* track_frame);
void log_unassigned_track(const UCharArray64* unassigned_track_idxs, const FusionTrackFrame* track_frame);
void log_track_status_with_id(const UCharArray64* track_idxs, const FusionTrackFrame* track_frame);
void log_single_camera_object(const CameraObject* object);
void log_unassigned_camera_object(const UCharArray64* unassigned_object_idxs, const CameraObjectFrame* object_frame);
void log_single_radar_object(const RadarObject* object);
void log_unassigned_radar_object(const UCharArray64* unassigned_object_idxs, const RadarObjectFrame* object_frame);
void log_frame_complete(const FusionTrackFrame* track_frame);
void log_yawrate(float yaw_rate, float delta_t, float angle);
#else
#define log_time_stamp_error(...)
#define log_track_title(...)
#define log_single_track_status(...)
#define log_single_output_track_status(...)
#define log_track_status(...)
#define log_unassigned_track(...)
#define  log_track_status_with_id(...)
#define log_single_camera_object(...)
#define log_unassigned_camera_object(...)
#define log_single_radar_object(...)
#define log_unassigned_radar_object(...)
#define log_frame_complete(...)
#define log_yawrate(...)
#endif


#if LOG_SWITCH 
void log_matcher_assignment(AssigmentArray* assigned_idxs, UCharArray64* unassigned_track_idxs, UCharArray64* unassigned_object_idxs);
void log_matcher_tracks_assignment(TrackAssigmentArray* assigned_idxs, UCharArray64* pure_camera_track_idxs, UCharArray64* pure_radar_track_idxs);
void log_mk_assignment(UCharPairArray64* assigned_idxs);
void log_radar_break_from_track(const float cost, const RadarObject* object, FusionTrack* track);
void log_camera_break_from_track(const float cost, const CameraObject* object, FusionTrack* track);
void log_track_fusion_result(unsigned char pure_camera_track_idx, unsigned char pure_radar_track_idx);
void log_camera_frame_info(const CameraObjectFrame* object_frame);
void log_radar_frame_info(const RadarObjectFrame* object_frame);
#else

#define log_matcher_assignment(...)
#define log_matcher_tracks_assignment(...)
#define log_mk_assignment(...)
#define log_track_id_buffer(...)
#define log_fusion_track(...)
#define log_fusion_track_simple(...)
#define log_fusion_track_frame(...)
#define log_fusion_track_frame_simple(...)
#define log_fusion_track_sensor_frame_simple(...)
#define log_radar_break_from_track(...)
#define log_camera_break_from_track(...)
#define log_track_fusion_result(...)
#define log_camera_frame_info(...)
#define log_radar_frame_info(...)

#endif


#endif
