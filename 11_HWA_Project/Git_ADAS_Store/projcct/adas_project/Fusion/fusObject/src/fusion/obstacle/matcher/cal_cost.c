/*
    calculate the cost of matrix 
    recalled by: fusion_matcher
*/

#include "cal_cost.h"
#include "mal_dist.h"
#include "fusion_track.h"
#include "fusion_config.h"


#define X_DIFF_LIMIT (0.01f)
#define Y_DIFF_LIMIT (0.01f)
#define VX_DIFF_LIMIT (0.1f)
#define VY_DIFF_LIMIT (0.1f)

#define MAX_X_DIFF (20.0f)
#define MAX_Y_DIFF (4.0f)

float thres_by_type(EObjectType type, float vx, float vy)
{
    float rtn;
    if (type == OBJECT_TYPE_BICYCLE || type == OBJECT_TYPE_PEDESTRIAN)
    {
        rtn = 1 + 1.5f * fabsf(vy) +0.1f * fabsf(vx);
    }
    else
    {
        rtn = 1;
    }
    return rtn;
}

float cost_of_track_to_camera(const FusionTrack *track, const CameraObject *camera_object) 
{
    float dist_coefficient = 1 + P_OFM_fusion_match_config_.camera.dist_coefficient * track->rel_pos.x;
    float x_diff = fabsf(track->rel_pos.x - camera_object->rel_pos.x);
    if (x_diff > P_OFM_fusion_match_config_.camera.max_x_diff * dist_coefficient * (1 + 0.1f * fabsf(track->rel_vel.x)) || x_diff > MAX_X_DIFF) {
        return (float)INVALID_COST_DX;
    }
    float y_diff = fabsf(track->rel_pos.y - camera_object->rel_pos.y);
    if (y_diff > P_OFM_fusion_match_config_.camera.max_y_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y) || y_diff > MAX_Y_DIFF) {
        return (float)INVALID_COST_DY;
    }
    float vx_diff = fabsf(track->rel_vel.x - camera_object->rel_vel.x);
    if (vx_diff > P_OFM_fusion_match_config_.camera.max_vx_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)){
        return (float)INVALID_COST_VX;
    }
    float vy_diff = fabsf(track->rel_vel.y - camera_object->rel_vel.y);
    if (vy_diff > P_OFM_fusion_match_config_.camera.max_vy_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)) {
        return (float)INVALID_COST_VY;
    }
    //if the difference is very small, return 0 cost to reduce calculation
    if (x_diff < X_DIFF_LIMIT && y_diff < Y_DIFF_LIMIT && vx_diff < VX_DIFF_LIMIT && vy_diff < VY_DIFF_LIMIT)
        return 0;
    else
        return track_camera_mal_dist(track, camera_object);
}

float cost_of_track_to_radar(const FusionTrack *track, ERadarType new_radar_type, const RadarObject *radar_object) 
{
  float dist_coefficient = 1 + fabsf(P_OFM_fusion_match_config_.radar.dist_coefficient * track->rel_pos.x);
  float x_diff = fabsf(track->rel_pos.x - radar_object->rel_pos.x);
  if (x_diff > P_OFM_fusion_match_config_.radar.max_x_diff * dist_coefficient * (1 + 0.1f * fabsf(track->rel_vel.x)) || x_diff > MAX_X_DIFF) {
    return (float)INVALID_COST_DX;
  }
  float y_diff = fabsf(track->rel_pos.y - radar_object->rel_pos.y);
  if (y_diff > P_OFM_fusion_match_config_.radar.max_y_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y) || y_diff > MAX_Y_DIFF) {
    return (float)INVALID_COST_DY;
  }
  float vx_diff = fabsf(track->rel_vel.x - radar_object->rel_vel.x);
  if (vx_diff > P_OFM_fusion_match_config_.radar.max_vx_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)) {
    return (float)INVALID_COST_VX;
  }
  float vy_diff = fabsf(track->rel_vel.y - radar_object->rel_vel.y);
  if (vy_diff > P_OFM_fusion_match_config_.radar.max_vy_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)) {
    return (float)INVALID_COST_VY;
  }
  //if it has a perfect match smaller than sensor measurement covariance, no need to calculate mal_dist
  if (x_diff < X_DIFF_LIMIT && y_diff < Y_DIFF_LIMIT && vx_diff < VX_DIFF_LIMIT && vy_diff < VY_DIFF_LIMIT) 
      return 0;
  else
    //return track_radar_mal_dist(track, radar_object, new_radar_type);
    return track_radar_mal_dist(track, new_radar_type, radar_object);
}


float cost_of_track_to_track(const FusionTrack* track, const FusionTrack* track2) {
    float dist_coefficient = 1 + P_OFM_fusion_match_config_.track.dist_coefficient * track->rel_pos.x;
    float x_diff = fabsf(track->rel_pos.x - track2->rel_pos.x);
    if (x_diff > P_OFM_fusion_match_config_.track.max_x_diff * dist_coefficient * (1 + 0.1f * fabsf(track->rel_vel.x)) || x_diff > MAX_X_DIFF) {
        return (float)INVALID_COST_DX;
    }
    float y_diff = fabsf(track->rel_pos.y - track2->rel_pos.y);
    if (y_diff >(P_OFM_fusion_match_config_.track.max_y_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y))|| y_diff > MAX_Y_DIFF) {
        return (float)INVALID_COST_DY;
    }
    float vx_diff = fabsf(track->rel_vel.x - track2->rel_vel.x);
    if (vx_diff > P_OFM_fusion_match_config_.track.max_vx_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)) {
        return (float)INVALID_COST_VX;
    }
    float vy_diff = fabsf(track->rel_vel.y - track2->rel_vel.y);
    if (vy_diff > P_OFM_fusion_match_config_.track.max_vy_diff * dist_coefficient * thres_by_type(track->type, track->rel_vel.x, track->rel_vel.y)) {
        return (float)INVALID_COST_VY;
    }
    //if it has a perfect match smaller than sensor measurement covariance, no need to calculate mal_dist
    if (x_diff < X_DIFF_LIMIT && y_diff < Y_DIFF_LIMIT && vx_diff < VX_DIFF_LIMIT && vy_diff < VY_DIFF_LIMIT)
        return 0;
    else if ((track->status =='N' && track->duration < MAX_OB_DURATION) || (track->status == 'N' && track2->duration < MAX_OB_DURATION))
        return (float)INVALID_COST_NEW_TRACK;
    else
        return track_track_mal_dist(track, track2);
}
                                                                                                                                                          
void calc_cost_matrix_by_camera(UCharArray64 *unassigned_track_idxs, const FusionTrackFrame *tracks,
                                UCharArray64 *unassigned_object_idxs, const CameraObjectFrame *objects) 
{
  unsigned char track_idx, object_idx;
  for (unsigned char i = 0; i < (unassigned_track_idxs)->size; i++) 
  {
    for (unsigned char j = 0; j < (unassigned_object_idxs)->size; j++) 
    {
      track_idx = (unassigned_track_idxs)->elems[i];
      object_idx = (unassigned_object_idxs)->elems[j];
      cost_matrix_.data[i][j] = cost_of_track_to_camera(&(tracks->elems[track_idx]), &(objects->elems[object_idx]));
    }
  }
}

void calc_cost_matrix_by_radar(UCharArray64 *unassigned_track_idxs, const FusionTrackFrame *tracks,
                               UCharArray64 *unassigned_object_idxs, const RadarObjectFrame *objects) 
{
  unsigned char track_idx, object_idx;
  for (unsigned char i = 0; i < (unassigned_track_idxs)->size; i++) 
  {
    for (unsigned char j = 0; j < (unassigned_object_idxs)->size; j++) 
    {
      track_idx = (unassigned_track_idxs)->elems[i];
      object_idx = (unassigned_object_idxs)->elems[j];
      cost_matrix_.data[i][j] = cost_of_track_to_radar(&(tracks->elems[track_idx]), objects->radar_type, &(objects->elems[object_idx]));
    }
  }
}

void calc_cost_matrix_by_track(UCharArray64* pure_camera_track_idxs, UCharArray64* pure_radar_track_idxs,
                               const FusionTrackFrame* tracks) 
{
    unsigned char track_idx, track2_idx;
    for (unsigned char i = 0; i < (pure_camera_track_idxs)->size; i++) 
    {
        for (unsigned char j = 0; j < (pure_radar_track_idxs)->size; j++) 
        {
            track_idx = (pure_camera_track_idxs)->elems[i];       //elems[i] stores the track's ID
            track2_idx = (pure_radar_track_idxs)->elems[j];
            //input sequence is (pure_camera_track_idxs, pure_radar_track_idxs)
            cost_matrix_.data[i][j] = cost_of_track_to_track(&(tracks->elems[track_idx]), &(tracks->elems[track2_idx]));
        }
    }
}


