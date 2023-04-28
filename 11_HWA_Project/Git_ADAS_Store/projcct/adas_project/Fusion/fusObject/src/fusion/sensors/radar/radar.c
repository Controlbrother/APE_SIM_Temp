#include "radar.h"
#include "circular_buffer.h"
#include <math.h>
#include "DTC.h"

extern unsigned long DTC_counter;

/*!
global variable contains all the radar object frame input.
*/
RadarObjectFrameQueue radar_frame_queue_array[RADAR_CNT];
/*!
global variable contains all the front radar object input.
*/
RadarObject radar_front_frame_elems_[RADAR_QUEUE_CAPCITY][MAX_FRONT_RADAR_OBJECT_CNT];

/*!
global variable contains all the corner radar object input.
*/
RadarObject radar_corner_frame_elems_[RADAR_CNT - 1][RADAR_QUEUE_CAPCITY][MAX_CR_RADAR_OBJECT_CNT];

/*!
global variable counts all types of radar frame input
*/
unsigned char radar_frame_cnt[RADAR_CNT];


/*!
init object container by init front radar frame queue, corner radar frame queue

\param void
\return void
*/
void init_radar_object_container(void) 
{
    //init front radar queue
    memset(radar_front_frame_elems_, 0, sizeof(radar_front_frame_elems_));
    init_circular_buffer(radar_frame_queue_array[RADAR_FRONT]);
    for (unsigned char frame_idx = 0; frame_idx < RADAR_QUEUE_CAPCITY; frame_idx++) {
        radar_frame_queue_array[RADAR_FRONT].elems[frame_idx].elems = radar_front_frame_elems_[frame_idx]; //pass the pointer of each row to queue array
    }
    //init corner radar queue
    memset(radar_corner_frame_elems_, 0, sizeof(radar_corner_frame_elems_));
    for (unsigned char sensor_idx = RADAR_FL; sensor_idx < RADAR_CNT; sensor_idx++) {
        init_circular_buffer(radar_frame_queue_array[sensor_idx]);
        for (unsigned char frame_idx = 0; frame_idx < RADAR_QUEUE_CAPCITY; frame_idx++) {
            radar_frame_queue_array[sensor_idx].elems[frame_idx].elems = radar_corner_frame_elems_[sensor_idx - 1][frame_idx];
        }
    }
}

/*!
calculate sensor's object age info
- EPM/410 is unable to output age infomation, thus the calculation of sensor's object age is necessary
- since there's id replacement with same id, check of object stamp and object dynamic property is unavoidable.

\param pre_object_frame the lastest frame's pointer of object input
\param object the pointer to radar object

\return ObjectAgeStatus

\todo if the EQ4 chip is stable implemented on the controller board, delete this function to speed up and get accurate sensor's object age info
*/
static ObjectAgeStauts update_radar_object_age(const RadarObjectFrame* pre_object_frame, RadarObject* object)
{
    unsigned char find_elem_array(pre_object_frame->id_array, object->id, pre_object_idx);
    if (pre_object_idx != INVALID_IDX)
    {
        const RadarObject* pre_object = &(pre_object_frame->elems[pre_object_idx]);
        if (object->stamp - pre_object->stamp < 0.5f &&
            fabsf(object->rel_vel.x - pre_object->rel_vel.x) < 4.0f &&
            fabsf(object->rel_vel.y - pre_object->rel_vel.y) < 4.0f &&
            fabsf(object->rel_pos.x - pre_object->rel_pos.x) < 10.0f &&
            fabsf(object->rel_pos.y - pre_object->rel_pos.y) < 10.0f)
        {
            if (pre_object->age < UCHAR_MAX)
            {
                object->age += pre_object->age;
            }
            else
            {
                object->age = pre_object->age;
            }
            return __AGE_UPDATE;
        }
        else
            return __OBJECT_CHANGE;
    }
    else
        return __NO_PRE_OBJECT;
}

/*!
add and transmit an MRR frame data to radar object frame data
- data transmission is committed by this function

\param header MRR header data from bus
\param pack MRR pack data from bus

\return void
*/
void add_mrr_object_frame(const MRR_HDR_BUS* header, const MRR_OBJ_BUS* pack) 
{
    if (header->MRR_hdr_TimeStamp < 0) return;
    const RadarObjectFrame* pre_object_frame = NULL;
    unsigned char get_end_index_circular_buffer(radar_frame_queue_array[RADAR_FRONT], end_idx);
    if (end_idx != INVALID_IDX)
    {
        pre_object_frame = &(radar_frame_queue_array[RADAR_FRONT].elems[end_idx]);
    }
    RadarObjectFrame* frame = &(radar_frame_queue_array[RADAR_FRONT].elems[radar_frame_queue_array[RADAR_FRONT].head]);
    frame->stamp = header->MRR_hdr_TimeStamp;
    frame->radar_type = RADAR_FRONT;
    memset(&frame->id_array, 0, sizeof(UCharArray64));
    for (unsigned char idx = 0; idx < MAX_FRONT_RADAR_OBJECT_CNT; idx++) {
        const MRR_OBJ_BUS* pack_object = &(pack[idx]);
        if (pack_object->MRR_ObjID == 0)
        {
            continue;
        }
        RadarObject* object = &(frame->elems[frame->id_array.size]);
        emplace_back_array(frame->id_array, pack_object->MRR_ObjID);
        object->age = 1;
        object->stamp = frame->stamp;
        object->id = pack_object->MRR_ObjID;
        object->type = pack_object->MRR_ObjType;
        object->move_status = pack_object->MRR_ObjMotionType;
        object->orientation = pack_object->VFC_ObjMotionDirection;
        object->exist_prob = pack_object->MRR_ObjExistProb;
        object->obs_prob = pack_object->MRR_ObjObstacleProb;
        object->rel_pos.x = pack_object->MRR_ObjDistX;
        object->rel_pos.y = pack_object->MRR_ObjDistY;
        object->rel_vel.x = pack_object->MRR_ObjRelVelX;
        object->rel_vel.y = pack_object->MRR_ObjRelVelY;
        object->rel_accel.x = pack_object->MRR_ObjRelAccelX;
        object->rel_accel.y = pack_object->MRR_ObjRelAccelY;
        object->rel_pos_std.x = pack_object->MRR_ObjDistXStd;
        object->rel_pos_std.y = pack_object->MRR_ObjDistYStd;
        object->rel_vel_std.x = pack_object->MRR_ObjRelVelXStd;
        object->rel_vel_std.y = pack_object->MRR_ObjRelVelYStd;
        object->rel_accel_std.x = pack_object->MRR_ObjRAccelXStd;
        object->rel_accel_std.y = pack_object->MRR_ObjRAccelYStd;
        object->size2d.x = pack_object->VFC_ObjLength;
        object->size2d.y = pack_object->VFC_ObjWidth;
        if (pre_object_frame) {
            update_radar_object_age(pre_object_frame, object);
            DTC_check_radar_sensor(RADAR_FRONT, pre_object_frame, object);
        }
    }
    //fusion_track_frame_.data_error = IsDataCorrect(&frame->id_array, frame->stamp);
    emplace_back_circular_buffer_move_pointer(radar_frame_queue_array[RADAR_FRONT]);
    radar_frame_cnt[RADAR_FRONT]++;
}

/*!
add and transmit an corner frame data to radar object frame data
- data transmission is committed by this function

\param radar_type cornner radar type
\param header corner radar header data from bus
\param pack corner radar pack data from bus

\return void
*/
void add_cr_object_frame(ERadarType radar_type, const CR_HDR_BUS* header, const CR_OBJ_BUS* pack)
{
    if (header->CR_hdr_TimeStamp < 0) return;
    const RadarObjectFrame* pre_object_frame = NULL;
    unsigned char get_end_index_circular_buffer(radar_frame_queue_array[radar_type], end_idx);
    if (end_idx != INVALID_IDX)
    {
        pre_object_frame = &(radar_frame_queue_array[radar_type].elems[end_idx]);
    }
    RadarObjectFrame* frame = &(radar_frame_queue_array[radar_type].elems[radar_frame_queue_array[radar_type].head]);
    frame->stamp = header->CR_hdr_TimeStamp;

    frame->radar_type = radar_type;
    memset(&frame->id_array, 0, sizeof(UCharArray64));
    for (unsigned char idx = 0; idx < MAX_CR_RADAR_OBJECT_CNT; idx++) {
        const CR_OBJ_BUS* pack_object = &(pack[idx]);
        if (pack_object->CR_ObjID == 0) {
            continue;
        }
        RadarObject* object = &(frame->elems[frame->id_array.size]);
        emplace_back_array(frame->id_array, pack_object->CR_ObjID);
        object->age = 1;
        object->stamp = frame->stamp;
        object->id = pack_object->CR_ObjID;
        object->move_status = 0;// MOVE_STATUS_UNKNOWN;
        object->exist_prob = pack_object->CR_ObjExistProb;
        object->obs_prob = pack_object->CR_ObjObstacleProb;
        object->rel_pos.x = pack_object->CR_ObjDistX;
        object->rel_pos.y = pack_object->CR_ObjDistY;
        object->rel_vel.x = pack_object->CR_ObjRelVelX;
        object->rel_vel.y = pack_object->CR_ObjRelVelY;
        object->rel_accel.x = pack_object->CR_ObjRelAccelX;
        object->rel_accel.y = pack_object->CR_ObjRelAccelY;
        object->rel_pos_std.x = pack_object->CR_ObjDistXStd;
        object->rel_pos_std.y = pack_object->CR_ObjDistYStd;
        object->rel_vel_std.x = pack_object->CR_ObjRelVelXStd;
        object->rel_vel_std.y = pack_object->CR_ObjRelVelYStd;
        object->rel_accel.x = pack_object->CR_ObjRelAccelX;
        object->rel_accel.y = pack_object->CR_ObjRelAccelY;
        object->rel_accel_std.x = pack_object->CR_ObjRAccelXStd;
        object->rel_accel_std.y = pack_object->CR_ObjRAccelYStd;
        object->size2d.x = pack_object->CR_VFC_ObjLength;
        object->size2d.y = pack_object->CR_VFC_ObjWidth;
        if (pre_object_frame) {
            update_radar_object_age(pre_object_frame, object);
            DTC_check_radar_sensor(radar_type, pre_object_frame, object);
        }
    }
    //fusion_track_frame_.data_error = IsDataCorrect(&frame->id_array, frame->stamp);
    emplace_back_circular_buffer_move_pointer(radar_frame_queue_array[radar_type]);
    radar_frame_cnt[radar_type]++;

}

/*!
add and transmit an rsds frame data to radar object frame data
- data transmission is committed by this function

\param radar_type cornner radar type
\param header rsds radar header data from bus
\param pack rsds radar pack data from bus

\return void
*/
void add_rsds_object_frame(ERadarType radar_type, const RSDS_HDR_BUS* header, const RSDS_OBJ_BUS* pack)
{
    if (header->RSDS_hdr_TimeStamp < 0) return;
    // b_flag[4] = header->RSDS_hdr_ErrorStatus;
    const RadarObjectFrame* pre_object_frame = NULL;
    unsigned char get_end_index_circular_buffer(radar_frame_queue_array[radar_type], end_idx);
    if (end_idx != INVALID_IDX) {
        pre_object_frame = &(radar_frame_queue_array[radar_type].elems[end_idx]);
    }
    RadarObjectFrame* frame = &(radar_frame_queue_array[radar_type].elems[radar_frame_queue_array[radar_type].head]);
    frame->stamp = header->RSDS_hdr_TimeStamp;
    frame->radar_type = radar_type;
    memset(&frame->id_array, 0, sizeof(UCharArray64));
    for (unsigned char idx = 0; idx < MAX_CR_RADAR_OBJECT_CNT; idx++) {
        const RSDS_OBJ_BUS* pack_object = &(pack[idx]);
        if (pack_object->RSDS_ObjID == 0) {
            continue;
        }
        RadarObject* object = &(frame->elems[frame->id_array.size]);
        emplace_back_array(frame->id_array, pack_object->RSDS_ObjID);
        object->age = 1;
        object->stamp = frame->stamp;
        object->id = pack_object->RSDS_ObjID;
        object->move_status = 0;// MOVE_STATUS_UNKNOWN;
        object->exist_prob = pack_object->RSDS_ObjExistProb;
        object->obs_prob = pack_object->RSDS_ObjObstacleProb;
        object->rel_pos.x = pack_object->RSDS_ObjDistX;
        object->rel_pos.y = pack_object->RSDS_ObjDistY;
        object->rel_vel.x = pack_object->RSDS_ObjRelVelX;
        object->rel_vel.y = pack_object->RSDS_ObjRelVelY;
        object->rel_accel.x = pack_object->RSDS_ObjRelAccelX;
        object->rel_accel.y = pack_object->RSDS_ObjRelAccelY;
        object->rel_pos_std.x = pack_object->RSDS_ObjDistXStd;
        object->rel_pos_std.y = pack_object->RSDS_ObjDistYStd;
        object->rel_vel_std.x = pack_object->RSDS_ObjRelVelXStd;
        object->rel_vel_std.y = pack_object->RSDS_ObjRelVelYStd;
        object->rel_accel.x = pack_object->RSDS_ObjRelAccelX;
        object->rel_accel.y = pack_object->RSDS_ObjRelAccelY;
        object->rel_accel_std.x = pack_object->RSDS_ObjRAccelXStd;
        object->rel_accel_std.y = pack_object->RSDS_ObjRAccelYStd;
        object->size2d.x = pack_object->RSDS_VFC_ObjLength;
        object->size2d.y = pack_object->RSDS_VFC_ObjWidth;
        if (pre_object_frame) 
        {
            update_radar_object_age(pre_object_frame, object);
            DTC_check_radar_sensor(radar_type, pre_object_frame, object);
        }
    }
    //fusion_track_frame_.data_error = IsDataCorrect(&frame->id_array, frame->stamp);
    emplace_back_circular_buffer_move_pointer(radar_frame_queue_array[radar_type]);
    radar_frame_cnt[radar_type]++;
    // log_current_function();
    // log_radar_object_frame_simple(object_frame);
    // log_frame_queue_simple();
}

