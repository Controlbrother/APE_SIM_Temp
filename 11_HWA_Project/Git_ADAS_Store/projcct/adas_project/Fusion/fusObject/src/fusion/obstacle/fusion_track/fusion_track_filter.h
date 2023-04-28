#ifndef __FUSION_TRACK_FILTER_H_
#define __FUSION_TRACK_FILTER_H_

#include "track.h"

#define X_DIM (6)

extern Matrix F_;
extern Matrix P_;
extern Matrix Q_;
extern Matrix R_;
extern Vector Z_;

#define update_kf_state_transition(_deta_t)                                    \
  {                                                                            \
    float _half_square_dt = _deta_t * _deta_t * 0.5f;                          \
    F_.data[0][2] = _deta_t;                                                   \
    F_.data[1][3] = _deta_t;                                                   \
    F_.data[2][4] = _deta_t;                                                   \
    F_.data[3][5] = _deta_t;                                                   \
    F_.data[0][4] = _half_square_dt;                                           \
    F_.data[1][5] = _half_square_dt;                                           \
  }

#define update_kf_measurement_data(_pos, _vel, _accel)                     \
  Z_.rows = X_DIM;                                                             \
  Z_.cols = 1;                                                                 \
  Z_.data[0][0] = (_pos)->x;                                                   \
  Z_.data[1][0] = (_pos)->y;                                                   \
  Z_.data[2][0] = (_vel)->x;                                                   \
  Z_.data[3][0] = (_vel)->y;                                                   \
  Z_.data[4][0] = (_accel)->x;                                                 \
  Z_.data[5][0] = (_accel)->y;


//large noise introduced for Vy
#define update_kf_process_noise(_deta_t)                                       \
  Q_.data[0][0] = _deta_t ;                                                    \
  Q_.data[1][1] = _deta_t ;                                                    \
  Q_.data[2][2] = _deta_t ;                                                    \
  Q_.data[3][3] = _deta_t ;                                                    \
  Q_.data[4][4] = _deta_t ;                                                    \
  Q_.data[5][5] = _deta_t ;

void update_kf_camera_noise(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std);
void update_kf_radar_noise_front(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std);
void update_kf_radar_noise_corner(Point2F* pos_std, Vector2F* vel_std, Vector2F* accel_std);

void init_kf_filter(FusionTrackKfData* pKfData);

void init_fusion_track_filter(FusionTrack* track, ESensorType sensor_type, void* object);
void deinit_kf_filter(FusionTrackKfData* pKfData);

void process_kf_predict(FusionTrack* track, float delta_t, float stamp, ESensorType sensor_type);     //update track's info and kf info

void update_kf_without_measurement(FusionTrack* track, ESensorType sensor_type);
void update_kf_with_measurement(FusionTrack* track, ESensorType sensor_type, void* object); //update track's info and kf info
void update_track_acc_to_sensor(FusionTrack* track, ERadarType radar_type, Vector* camera_X_, Vector* radar_X_, Matrix* camera_std_, Matrix* radar_std_);
void update_track_acc_to_radars(FusionTrack* track, ERadarType radar_type, Vector* radar_front_, Vector* radar_X_, Matrix* radar_std_front, Matrix* radar_std_);
void update_track_no_radar_data(FusionTrack* track, ERadarType radar_type, Vector* radar_front_, Vector* radar_X_, Matrix* radar_std_front, Matrix* radar_std_);
void update_track_no_camera_data(FusionTrack* track, ERadarType radar_type, Vector* camera_X_, Vector* radar_X_, Matrix* camera_std_, Matrix* radar_std_);
void update_track_after_prediction(FusionTrack* track);
void update_track_after_correction(FusionTrack* track);

#endif