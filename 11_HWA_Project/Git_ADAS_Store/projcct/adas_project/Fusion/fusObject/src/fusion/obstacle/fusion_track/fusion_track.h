#ifndef __FUSION_TRACK_H_
#define __FUSION_TRACK_H_

#include "track.h"
#include "Object_Api.h"
#include "circular_buffer.h"

#define HEADING_ANGLE_ENABLE 0

#define MAX_COAST_AGE 12
#define MAX_OBSERVATION 2
#define MAX_OB_DURATION 6

DECLARE_CIRCULAT_BUFFER(TrackIdBuffer, unsigned char, MAX_OBSTACLE_CNT)

extern FusionTrackFrame fusion_track_frame_;
extern TrackIdBuffer fusion_track_id_buffer_;

void init_fusion_tracks(void);

int create_fusion_track_from_camera(CameraObject *object);
int create_fusion_track_from_radar(ERadarType radar_type, RadarObject *object);
void create_fusion_track_from_lidar(LidarObject *object);
void prepare_fusion_track_for_camera(void);
void update_fusion_track_from_camera(CameraObject *object, FusionTrack *track);
void prepare_fusion_tracks_for_radar(ERadarType radar_type);
static inline void prepare_update_track_from_radar(ERadarType radar_type, FusionTrack *track) {
  clear_array(track->radar_ids[radar_type]);
}

void update_untracked_track_info_of_camera(FusionTrack* pTrack);
void update_untracked_track_info_of_radar(FusionTrack* pTrack, ERadarType radar_type);

void update_fusion_track_from_radar(ERadarType radar_type, RadarObject *object,FusionTrack *track);
void update_fusion_track_from_lidar(LidarObject *object, FusionTrack *track);
void update_untracked_fusion_track(ESensorType sensor_type, FusionTrack *track);
void remove_lost_fusion_tracks(void);
void remove_all_fusion_tracks(void);
void get_fusion_track_frame(FusionTrackFrame **track_frame);
const CameraObject *get_track_camera_object(unsigned char id);
const RadarObject *get_track_radar_object(ERadarType radar_type, unsigned char id);

#endif