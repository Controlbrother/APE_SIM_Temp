#include "fusion_track_output.h"

#define PREDICT_TIME (0.05f)
#define PREDICT_TIME_SQUARE (0.0025f)
#define PREDICT_DISTANCE(_x, _v, _a, _t, _t2) (_x + _v*_t + 0.5f*_a*_t2) 
#define PREDICT_VELOCITY(_v, _a, _t) (_v + _a*_t)
#define HEAD_MARGIN (3.0f)
#define TAIL_MARGIN (3.0f)

FusionTrack* outputTrackFrame;

static void output_one_track(OFM_OBJ_BUS* fused_track_pack, unsigned char track_idx, FusionTrack* track, VehicleInfo* vehicle_info)
{
    if (track->status != 'N')                                                     //DO NOT ouput "new" status tracks to the next stage
    {
        fused_track_pack->Object_ID[track_idx] = track->id;
        fused_track_pack->Object_Age[track_idx] = (uint16_T)track->age;
        fused_track_pack->Object_Fus_Type[track_idx] = track->match_status;
        fused_track_pack->Object_Type[track_idx] = track->type;
        fused_track_pack->Object_Type_Prob[track_idx] = track->radar_ids[RADAR_RL];
        fused_track_pack->Object_ExistProb[track_idx] = track->exist_prob;
        fused_track_pack->Object_ObstacleProb[track_idx] = track->obstacle_prob;
        fused_track_pack->Object_MovingState[track_idx] = track->move_status;
        fused_track_pack->Object_Orientation[track_idx] = track->orientation;
        fused_track_pack->Object_DX[track_idx] = PREDICT_DISTANCE(track->rel_pos.x, track->rel_vel.x, track->rel_accel.x, PREDICT_TIME, PREDICT_TIME_SQUARE);
        fused_track_pack->Object_DY[track_idx] = PREDICT_DISTANCE(track->rel_pos.y, track->rel_vel.y, track->rel_accel.y, PREDICT_TIME, PREDICT_TIME_SQUARE);
        fused_track_pack->Object_VX[track_idx] = PREDICT_VELOCITY(track->rel_vel.x, track->rel_accel.x, PREDICT_TIME);
        fused_track_pack->Object_VY[track_idx] = PREDICT_VELOCITY(track->rel_vel.y, track->rel_accel.y, PREDICT_TIME);
        fused_track_pack->Object_AX[track_idx] = track->rel_accel.x;
        fused_track_pack->Object_AY[track_idx] = track->rel_accel.y;
        fused_track_pack->Object_Std_DX[track_idx] = track->rel_pos_std.x;
        fused_track_pack->Object_Std_DY[track_idx] = track->rel_pos_std.y;
        fused_track_pack->Object_Std_VX[track_idx] = track->rel_vel_std.x;
        fused_track_pack->Object_Std_VY[track_idx] = track->rel_vel_std.y;
        fused_track_pack->Object_Std_AX[track_idx] = track->camera_id;
        fused_track_pack->Object_Std_AY[track_idx] = track->radar_ids[RADAR_FRONT];
        fused_track_pack->Object_Std_Length[track_idx] = track->radar_ids[RADAR_FL];
        fused_track_pack->Object_Std_Width[track_idx] = track->radar_ids[RADAR_FR];
        fused_track_pack->Object_HeadingAngle[track_idx] = track->heading;
        fused_track_pack->Object_Std_HeadingAngle[track_idx] = track->radar_ids[RADAR_RR];
        fused_track_pack->Object_YawAngle[track_idx] = track->yaw_angle;
        //fused_track_pack->Object_Std_AX[idx] = track->rel_accel_std.x;
        //fused_track_pack->Object_Std_AY[idx] = track->rel_accel_std.y;
        fused_track_pack->Object_Length[track_idx] = track->size3d.length;
        fused_track_pack->Object_Width[track_idx] = track->size3d.width;
        fused_track_pack->Object_Hight[track_idx] = track->size3d.height;
        /*fused_track_pack->Object_Std_Length[track_idx] = track->size3d_std.x;
        fused_track_pack->Object_Std_Width[track_idx] = track->size3d_std.y;*/
        /*fused_track_pack->Object_HeadingAngle[track_idx] = track->heading;
        fused_track_pack->Object_Std_HeadingAngle[track_idx] = track->heading_std;*/
        DTC_check_fusion_object(track);

        log_single_output_track_status(fused_track_pack, track_idx);
    }
}

static bool track_in_box(FusionTrack* evl_track, FusionTrack* fused_camera_track)
{
    if ((evl_track->rel_pos.x > (fused_camera_track->rel_pos.x - HEAD_MARGIN)) && 
        (evl_track->rel_pos.x - (fused_camera_track->rel_pos.x + TAIL_MARGIN) < fused_camera_track->size3d.length))
    {
    }
    else
        return false;
    if ((evl_track->rel_pos.y > fused_camera_track->rel_pos.y - 0.5f * fused_camera_track->size3d.width) && (evl_track->rel_pos.y < fused_camera_track->rel_pos.y + 0.5 * fused_camera_track->size3d.width))
    {
        return true;
    }
    else
        return false;
}

void get_fusion_tracks(unsigned long pack_stamp, OFM_OBJ_BUS* fused_track_pack)
{
    unsigned char output_cnt = 0;
    memset(fused_track_pack, 0, sizeof(OFM_OBJ_BUS));
    
    VehicleInfo* vehicle_info;
    get_latest_vehicle_info(&vehicle_info);
    //VehicleInfo* vehicle_info = NULL;
    //if(0 == get_latest_vehicle_info(&vehicle_info))               //get ptr of vehicle_info
    //vehcile_compensate_time(0.05f, vehicle_info);

    unsigned int obj_num = fusion_track_frame_.id_array.size < MAX_OFM_OBJ_CNT ? fusion_track_frame_.id_array.size : MAX_OFM_OBJ_CNT;

    UCharArray64 fused_camera_track_idx;
    memset(&fused_camera_track_idx, 0, sizeof(UCharArray64));
    //find all the tracks with camera sensors
    for (unsigned char i = 0; i < obj_num; i++)
    {
        unsigned char track_idx = fusion_track_frame_.id_array.elems[i] - 1;
        FusionTrack* track = &fusion_track_frame_.elems[track_idx];
        if (track->camera_object)
        {
            fused_camera_track_idx.elems[fused_camera_track_idx.size] = track_idx;
            fused_camera_track_idx.size++;
            output_one_track(fused_track_pack, track_idx, track, vehicle_info);
            output_cnt++;
        }
    }
    //go through
    for (unsigned char i = 0; i < obj_num; i++)
    {
        bool in_box = false;
        unsigned char track_idx = fusion_track_frame_.id_array.elems[i] - 1;
        unsigned char idx;
        find_elem_array(fused_camera_track_idx, track_idx, idx);
        if (idx != INVALID_IDX) continue;
        FusionTrack* track = &fusion_track_frame_.elems[track_idx];                     //get single_track
        for (unsigned char j = 0; j < fused_camera_track_idx.size; j++)
        {
            unsigned char fused_camera_idx = fused_camera_track_idx.elems[j];
            FusionTrack* fused_camera_track = &fusion_track_frame_.elems[fused_camera_idx];     //get fused_camera_track
            
            if ((fused_camera_track->type == OBJECT_TYPE_TRUCK || fused_camera_track->type == OBJECT_TYPE_CAR) && track_in_box(track, fused_camera_track))
            {
                in_box = true;
                if (track->rel_pos.x < fused_track_pack->Object_DX[fused_camera_idx])
                {
                    fused_track_pack->Object_DX[fused_camera_idx] = track->rel_pos.x;       //one measurement point could be inside two bounding boxes 
                }
            }
        }
        
        if(!in_box)
        {
            output_one_track(fused_track_pack, track_idx, track, vehicle_info);
            output_cnt++;
        }
    }
#if LOG_SWITCH == 1
    printf("Output %d out of %d tracks in total\n", output_cnt, obj_num);
#endif
}