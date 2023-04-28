#include "vehicle_dynamic.h"
#include "fusion_config.h"

float car_x, car_y, car_vx, car_vy, temp_cdis, temp_cangle, temp_x, temp_y;

void update_orientation_info(VehicleInfo* vehicle_info, FusionTrack* track) {
    if (track->camera_object && (track->camera_object->type == 1 || track->camera_object->type == 2)) {
        if ((track->heading >= -45.0) && (track->heading <= 45.0))
        {
            track->orientation = 9;
        }
        else if (((track->heading > -135.0) && (track->heading < -45.0)) ||
            ((track->heading < 135.0) && (track->heading > 45.0)))
        {
            track->orientation = 3;
        }
        else
        {
            track->orientation = 5;
        }
    }
    else {
        float move_angle = atan2f(track->abs_vel.y, track->abs_vel.x) * 180 / P_Globle_PI;
        if ((move_angle >= -45.0) && (move_angle <= 45.0)) {
            track->orientation = 9;
        }
        else if (((move_angle > -135.0) && (move_angle < -45.0)) ||
            ((move_angle < 135.0) && (move_angle > 45.0))) {

            track->orientation = 3;
        }
        else {
            track->orientation = 5;
        }
    }

}

void update_track_information(FusionTrack* track) {
    VehicleInfo* vehicle_info;
    get_latest_vehicle_info(&vehicle_info);
    float rel_dis = sqrtf(track->rel_pos.x * track->rel_pos.x + track->rel_pos.y * track->rel_pos.y);
    track->abs_vel.x = track->rel_vel.x + vehicle_info->speed - rel_dis * vehicle_info->yaw_rate * (track->rel_pos.y / rel_dis);
    track->abs_vel.y = track->rel_vel.y + rel_dis * vehicle_info->yaw_rate * (track->rel_pos.x / rel_dis);
}