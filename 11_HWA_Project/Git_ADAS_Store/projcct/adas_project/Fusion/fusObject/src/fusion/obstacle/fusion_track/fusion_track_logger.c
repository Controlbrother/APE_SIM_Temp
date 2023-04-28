#include "fusion_track_logger.h"
#include <math.h>


#if LOG_SWITCH

#define LOG_BUF_LEN 240

//void log_fusion_track_simple(const FusionTrack* track) 
//{
//    static char log_buffer_[320];
//    memset(log_buffer_, 0, sizeof(log_buffer_));
//    sprintf_s(log_buffer_, LOG_BUF_LEN,
//        "  "
//        "tid:%-2d,t:%-8.2f,age:%-3d,pos:(%7.2f,%7.2f),vel:(%6.2f,%6.2f),acc:("
//        "%6.2f,%6.2f),match:%2d,camera:%3d,radar:{",
//        track->id, track->stamp, track->age, track->rel_pos.x,
//        track->rel_pos.y, track->rel_vel.x, track->rel_vel.y,
//        track->rel_accel.x, track->rel_accel.y, track->match_status,
//        track->camera_object ? track->camera_object->id : 0);
//    for (unsigned char sensor_idx = RADAR_FRONT; sensor_idx < RADAR_CNT; sensor_idx++) 
//    {
//        size_t len = strlen(log_buffer_);
//        sprintf_s(&log_buffer_[len], LOG_BUF_LEN, "%d(", sensor_idx);
//
//        len = strlen(log_buffer_);
//        sprintf_s(&log_buffer_[len], LOG_BUF_LEN, "%d,",
//            track->radar_ids[sensor_idx]);
//
//        len = strlen(log_buffer_);
//        sprintf_s(&log_buffer_[len], LOG_BUF_LEN, "),");
//    }
//    printf("%s}\n", log_buffer_);
//}
//
//void log_fusion_track_frame(const FusionTrackFrame* frame) 
//{
//    log_array(frame->id_array, "[track frame] ids", "%d,");
//    for (unsigned char idx = 0; idx < frame->id_array.size; idx++) {
//        unsigned char object_idx = frame->id_array.elems[idx] - 1;
//        const FusionTrack* track = &(frame->elems[object_idx]);
//        log_fusion_track(track);
//    }
//}
//
//void log_fusion_track_frame_simple(const FusionTrackFrame* frame) 
//{
//    log_array(frame->id_array, "[track frame] ids", "%d,");
//    for (unsigned char idx = 0; idx < frame->id_array.size; idx++) 
//    {
//        unsigned char object_idx = frame->id_array.elems[idx] - 1;
//        const FusionTrack* track = &(frame->elems[object_idx]);
//        log_fusion_track_simple(track);
//    }
//}

char track_type_name[9][8] = { "UNKNW", "UNCER", "CAR", "TRUCK", "MOTOR", "BIKE", "PEDES", "GNRAL", "ANIML" };
char camera_type_name[9][8] = { "UNKNW", "CAR", "TRUCK", "MOTOR", "BIKE", "PEDES", "GNRAL", "ANIML","UNCER" };
char radar_type_name[5][8] = { "UNKNW", "TRUCK", "CAR", "PEDES", "BIKE"};

void log_time_stamp_error(float delta_t)
{
    printf("\033[1;31mtime stamp error detla_t = %8.4f\033[0m\n", delta_t);
}

void log_single_track_status(const FusionTrack* track) 
{
    printf("%d\t%c\t%d\t%d\t%d\t%4.3f\t%4.3f\t%4.3f\t%4.3f\t%4.4f\t", 
        track->id, track->status, track->age, track->coasting_age, track->match_status, track->rel_pos.x,
        track->rel_pos.y, track->rel_vel.x, track->rel_vel.y, track->stamp);
   
    if ((track->camera_object != NULL))
    {
        if(track->camera_id != INVALID_ID) printf("%d", track->camera_id);
    }
    printf("\t");
    if (track->radar_ids[RADAR_FRONT] != INVALID_ID) printf("%d", track->radar_ids[RADAR_FRONT]);
    printf("\t");
    if (track->radar_ids[RADAR_FL] != INVALID_ID) printf("%d", track->radar_ids[RADAR_FL]);
    printf("\t");
    if (track->radar_ids[RADAR_FR] != INVALID_ID) printf("%d", track->radar_ids[RADAR_FR]);
    printf("\t");
    if (track->radar_ids[RADAR_RL] != INVALID_ID) printf("%d", track->radar_ids[RADAR_RL]);
    printf("\t");
    if (track->radar_ids[RADAR_RR] != INVALID_ID) printf("%d", track->radar_ids[RADAR_RR]);
    printf("\t");
    printf("%4.2f\t %4.2f\t", track->exist_prob, track->obstacle_prob);
    printf("%s\t%d\t%4.1f\t%4.1f\t", track_type_name[track->type], track->type_confidence, track->heading, track->yaw_angle);
    printf("\n");
}

void log_single_output_track_status(const OFM_OBJ_BUS* fused_track_pack, unsigned char idx)
{
    printf("%d\t%c\t%d\t%d\t%d\t%4.3f\t%4.3f\t%4.3f\t%4.3f\t%4.4f\t",
        idx, ' ', fused_track_pack->Object_Age[idx], 0, fused_track_pack->Object_Fus_Type[idx], fused_track_pack->Object_DX[idx],
        fused_track_pack->Object_DY[idx], fused_track_pack->Object_VX[idx], fused_track_pack->Object_VY[idx], 0.);
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("\t");
    printf("%4.2f\t %4.2f\t", fused_track_pack->Object_ExistProb[idx], fused_track_pack->Object_ObstacleProb[idx]);
    printf("\n");
}

void log_track_status(const FusionTrackFrame* track_frame) 
{
    for (unsigned char i = 0; i < track_frame->id_array.size; ++i) 
    {
        const FusionTrack* track = &(track_frame->elems[track_frame->id_array.elems[i]-1]);
        log_single_track_status(track);
    }
}


void log_track_title(void)
{
    printf("TrackID\tStatus\tAge\tCoast\tMatch\tX\tY\tVx\tVy\tStamp\t\tC_ID\tMMR_ID\tFL_ID\tFR_ID\tRL_ID\tRR_ID\tExist\tObsProb\tType\tT_Cf\tHead\tYaw_Ag\n");
}

static void log_pair(const UCharPair* pair) {
    printf("<%d,%d>, ", pair->first, pair->second);
}

static void log_assignment(const Assignment* assignment) {
    printf("<%d,(", assignment->first);
    for (unsigned char i = 0; i < assignment->second.size; i++) {
        printf("%d ", assignment->second.elems[i]);
    }
    printf(")>,");
}

static void log_track_assignment(const PureTrackAssignment* assignment) {
    printf("<%d,", assignment->first);
    printf("%d>,", assignment->second);
}

void log_matcher_assignment(AssigmentArray* assigned_idxs, UCharArray64* unassigned_track_idxs, UCharArray64* unassigned_object_idxs) 
{
    log_array_ptr_with_func(assigned_idxs, "assigned_idxs", log_assignment);
    log_array_ptr(unassigned_track_idxs, "unassigned_track_idxs", "%d,");
    log_array_ptr(unassigned_object_idxs, "unassigned_object_idxs", "%d,");
}

void log_matcher_tracks_assignment(TrackAssigmentArray* assigned_idxs, UCharArray64* pure_camera_track_idxs, UCharArray64* pure_radar_track_idxs) 
{
    log_array_ptr_with_func(assigned_idxs, "assigned_tracks_idxs", log_track_assignment);
    log_array_ptr(pure_camera_track_idxs, "unassigned_pure_camera_track_idxs", "%d,");
    log_array_ptr(pure_radar_track_idxs, "unassigned_pure_radar_track_idxs", "%d,");
}

void log_mk_assignment(UCharPairArray64* assigned_idxs) {
    log_array_ptr_with_func(assigned_idxs, "local_assigned_idxs", log_pair);
}

void log_unassigned_track(const UCharArray64* unassigned_track_idxs, const FusionTrackFrame* track_frame) 
{
    log_array_ptr(unassigned_track_idxs, "unassigned_track_idxs", "%d,");
    printf("TrackID\tStatus\tAge\tCoast\tMatch\tX\tY\tVx\tVy\tStamp\t\tC_ID\tMMR_ID\tFL_ID\tFR_ID\tRL_ID\tRR_ID\tExist\tObsProb\tType\tT_Cf\n");
    for (unsigned char _i = 0, j=0; _i < unassigned_track_idxs->size; _i++, j++) {
        const FusionTrack* track = &(track_frame->elems[unassigned_track_idxs->elems[_i]]);
        log_single_track_status(track);
    }
    printf("\n");
}

void log_track_status_with_id(const UCharArray64* track_idxs, const FusionTrackFrame* track_frame)
{
    for (unsigned char i = 0; i < track_idxs->size; i++) {
        const FusionTrack* track = &(track_frame->elems[track_idxs->elems[i]]);
        log_single_track_status(track);
    }
    printf("\n");
}

void log_single_camera_object(const CameraObject* object)
{
    printf("\033[1;31m%d\t%d\t%d\t\t\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.4f\t\t\t\t\t\t\t%4.2f\t\t%s\t%4.2f\033[0m\n",
        object->id, object->move_status,object->age, object->rel_pos.x,
        object->rel_pos.y, object->rel_vel.x, object->rel_vel.y, object->stamp, object->exist_prob, camera_type_name[object->type], object->type_prob);
}

void log_unassigned_camera_object(const UCharArray64* unassigned_object_idxs,
    const CameraObjectFrame* object_frame) {
    log_array_ptr(unassigned_object_idxs, "unassigned_camera_object_idxs", "%d,");
    printf("cID\tStatus\tAge\t\t\tX\tY\tVx\tVy\t\n");
    for (unsigned char _i = 0; _i < unassigned_object_idxs->size; _i++) {
       const CameraObject* object = &(object_frame->elems[unassigned_object_idxs->elems[_i]]);
       log_single_camera_object(object);
    }
}

void log_single_radar_object(const RadarObject* object)
{
    printf("\033[1;31m%d\t%d\t%d\t\t\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.4f\t\t\t\t\t\t\t%4.2f\t%4.2f\t%s\033[0m\n",
        object->id, object->move_status, object->age, object->rel_pos.x,
        object->rel_pos.y, object->rel_vel.x, object->rel_vel.y, object->stamp, object->exist_prob, object->obs_prob, radar_type_name[object->type]);
}

void log_unassigned_radar_object(const UCharArray64* unassigned_object_idxs, const RadarObjectFrame* object_frame) 
{
    log_array_ptr(unassigned_object_idxs, "unassigned_radar_object_idxs", "%d,");
    printf("rID\tMove\tAge\t\t\tX\tY\tVx\tVy\tStamp\t\n");
    for (unsigned char _i = 0; _i < unassigned_object_idxs->size; _i++) 
    {
        const RadarObject* object = &(object_frame->elems[unassigned_object_idxs->elems[_i]]);
        log_single_radar_object(object);
    }
}

void log_radar_break_from_track(const float cost, const RadarObject* object, FusionTrack* track)
{
    printf("\n\033[47;31mcost:%4.3f\t try to break radar id: %d assignemnt with track id: %d\033[0m\n", cost, object->id, track->id);
}

void log_camera_break_from_track(const float cost, const CameraObject* object, FusionTrack* track)
{
    printf("\n\033[47;31mcost:%4.3f\t try to break camera id: %d assignemnt with track id: %d\033[0m\n", cost, object->id, track->id);
}

void log_track_fusion_result(unsigned char pure_camera_track_idx, unsigned char pure_radar_track_idx)
{
    printf("\033[1;35mfuse pure camera track %d to pure radar track %d \033[0m\n", pure_camera_track_idx + 1, pure_radar_track_idx + 1);
    //printf("\033[1; 35mtrack frames now contains %d tracks in total\033[0m\n", trackFrame->id_array.size);
}

void log_camera_frame_info(const CameraObjectFrame* object_frame) 
{
    printf("\033[0;34mtime %f\033[0m : received %d objects from camera\n",
        object_frame->stamp, object_frame->id_array.size);
}

void log_radar_frame_info(const RadarObjectFrame* object_frame) 
{
    printf("\033[0;34mtime %f\033[0m : received %d objects from %d radar\n",
        object_frame->stamp, object_frame->id_array.size,
        object_frame->radar_type);
}

void log_frame_complete(const FusionTrackFrame* track_frame) 
{
    printf("\ntrack frame now contains %d tracks\n", track_frame->id_array.size);
    printf("TrackID\tStatus\tAge\tCoast\tMatch\tX\tY\tVx\tVy\tStamp\t\tC_ID\tMMR_ID\tFL_ID\tFR_ID\tRL_ID\tRR_ID\tExist\tObsProb\tType\tT_Cf\tHead\tYaw_Ag\n");
    log_track_status(track_frame);
    printf("\033[1;32mtime: %4.4f FUSION ONE FRAME COMPLETE\033[0m\n\n", track_frame->stamp);
    #if BLOCK_FRAME
    char input_cmd;
    scanf_s("%c", &input_cmd, 1);
    #endif
}

void log_yawrate(float yaw_rate, float delta_t, float angle)
{
    printf("yawrate: %4.6f; delta_t: %4.6f; angle: %4.6f; sin(angle): %4.6f; cos(angle): %4.6f;\n", yaw_rate, delta_t, angle, sin(angle), cos(angle));
}

#endif
