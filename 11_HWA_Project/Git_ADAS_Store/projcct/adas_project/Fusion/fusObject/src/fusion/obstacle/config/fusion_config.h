#ifndef __FUSION_CONFIG_H_
#define __FUSION_CONFIG_H_

#define P_OFM_CORNER_SPEED_X_THVEL (2.0f)
#define P_OFM_CORNER_SPEED_Y_THVEL (0.5f)
#define P_Globle_PI (3.14159265358979323846f)
#define P_OFM_THVEL (2.5f)
#define P_OFM_COMPENSATION_TIME (0.05f)
#define P_OFM_FILTER_MATRIX_ROWS (6)
#define P_OFM_FILTER_MATRIX_COLS (6)
#define P_OFM_STOP_SPEED_THRESHOLD (0.8)
typedef struct {
  float camera_in_body_x;
  float camera_in_body_y;
  float front_radar_in_body_x;
  float front_radar_in_body_y;
  float corner_radar_in_body_x;
  float corner_radar_in_body_y;
} SensorFrameOffsetConfig;

typedef struct {
  float min_x_diff;
  float max_x_diff;
  float max_y_diff;
  float max_vx_diff;
  float max_vy_diff;
  float scale_factor;
  float dist_coefficient;			//tune this number to give bigger torlerance according to x distance
} LinearConfig;

typedef struct {
  float max_x_diff;
  float max_y_diff;
  float max_vx_diff;
  float max_vy_diff;
  float dist_coefficient;
} FixConfig;

typedef struct {
  LinearConfig camera;
  FixConfig radar;
  FixConfig distinct_radar;
  FixConfig track;
} FusionMatchConfig;

extern FusionMatchConfig P_OFM_fusion_match_config_;
extern SensorFrameOffsetConfig P_Globle_sensor_frame_offset_config_;

#endif