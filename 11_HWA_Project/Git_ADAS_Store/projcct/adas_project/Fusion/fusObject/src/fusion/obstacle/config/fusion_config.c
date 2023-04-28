#include "fusion_config.h"


SensorFrameOffsetConfig P_Globle_sensor_frame_offset_config_ = {
    .camera_in_body_x = 1.817f,
    .camera_in_body_y = 0.,
    .front_radar_in_body_x = 0.,
    .front_radar_in_body_y = 0.,
    .corner_radar_in_body_x = 0.,
    .corner_radar_in_body_y = 0.,
};

FusionMatchConfig P_OFM_fusion_match_config_ = {
    .camera =
        {
            .max_x_diff = 4.f,
            .max_y_diff = 0.6f,
            .max_vx_diff = 5.,
            .max_vy_diff = 2.5f,
            .scale_factor = 0.2f,
            .dist_coefficient = 0.02f           //with x distance equals to 100m, object's torlence is 3 times bigger
        },
    .radar =
        {
            .max_x_diff = 4.,
            .max_y_diff = 1.,
            .max_vx_diff = 1.5f,
            .max_vy_diff = 2.5f,
            .dist_coefficient = 0.02f           //with x distance equals to 100m, object's torlence is 3 times bigger
        },
    .distinct_radar =
        {
            .max_x_diff = 3.,
            .max_y_diff = 2.0f,
            .max_vx_diff = 3.,
            .max_vy_diff = 5.,
            .dist_coefficient = 0.03f           //with x distance equals to 100m, object's torlence is 4 times bigger
        },
    .track = 
        {
            .max_x_diff = 4.f,
            .max_y_diff = 0.6f,
            .max_vx_diff = 2.5f,
            .max_vy_diff = 2.5f,
            .dist_coefficient = 0.02f           //with x distance equals to 100m, object's torlence is 3 times bigger
        }
};