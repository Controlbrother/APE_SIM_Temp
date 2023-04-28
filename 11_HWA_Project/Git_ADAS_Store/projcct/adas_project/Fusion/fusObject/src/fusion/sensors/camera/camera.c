/*!
Common defintion and functions of camera by mutiple types of camera sensors
*/
#include "camera_type.h"
#include "camera.h"
#include "circular_buffer.h"
#include "fusion_config.h"
#include <math.h>
#include "DTC.h"

extern unsigned long DTC_Counter;

/*!
global variable contains all the camera object frame input.
*/
CameraObjectFrameQueue camera_frame_queue;
/*!
global variable counts camera frame input
*/
unsigned char camera_frame_cnt;
/*!
global variable contains line info
*/
LineInfos line_infos;

/*!
init object container of camera frame queue

\param void
\return void
*/
void init_camera_object_container(void) 
{
    init_circular_buffer(camera_frame_queue);
    camera_frame_cnt = 0;
}

float GetNearestPoint(Point2F *pPos, float heading, Size3D *pSize)
{
    /*return (pPos->y_ - cosf(heading) / sinf(heading) * (pPos->x) - pSize->width / 2 / sinf(heading);*/
    return 0;
}
/*!
check input data valid status and return a reasonable output 

\param bool data_valid, int data_in
\return float data_out
*/
static inline int CheckDataValidInt(bool data_valid, int data_in)
{
    /*if (data_valid == VALID) return data_in;
    else return -1;*/
    return data_in;
}

/*!
check input data valid status and return a reasonable output

\param bool data_valid, float data_in
\return float data_out
*/
static inline float CheckDataValidFloat(bool data_valid, float data_in)
{
    /*if (data_valid == VALID) return data_in;
    else return DEFAULT_INVALID_FLOAT;*/
    return data_in;
}

/*!
check input data valid status and return a reasonable output

\param bool data_valid, bool data_in
\return float data_out
*/
static inline bool CheckDataValidBool(bool data_valid, bool data_in)
{
    //if (data_valid == VALID) return data_in;
    //else return false;
    return data_in;
}

static void adjust_object_location(CameraObject* object)
{
    if (object->heading < -135.0f || object->heading >135.0f)
    {
        object->rel_pos.x += object->size3d.length * cosf(object->heading * M_PI / 180.0f);
        object->rel_pos.y -= 0.5f* object->size3d.length * sinf(object->heading * M_PI / 180.0f);
    }
}
/*!
add and transmit an EQ4 frame data to camera object frame data
- data transmission is committed by this function

\param pack EQ4 pack data from bus

\return void
*/
void add_camera_object_frame(const EQ4_OBJ_BUS* pack)
{
    if (pack->EQ4_APPINFO.APP_SyncTs == 0) return;          //if there is a time error exist, return directly
    char obj_nums;

    const CameraObjectFrame* pre_object_frame = NULL;
    unsigned char get_end_index_circular_buffer(camera_frame_queue, end_idx);
    if (end_idx != INVALID_IDX)
    {
        pre_object_frame = &(camera_frame_queue.elems[end_idx]);
    }
    CameraObjectFrame* frame = &(camera_frame_queue.elems[camera_frame_queue.head]);
    memset(&frame->id_array, 0, sizeof(UCharArray64));
    frame->stamp = (float)pack->EQ4_APPINFO.APP_SyncTs * EQ4_TIME_COEFFICIENT;
    
#ifdef USE_EQ4
    obj_nums = pack->EQ4_OBJ_HDR.OBJ_VRU_Count + pack->EQ4_OBJ_HDR.OBJ_VD_Count + pack->EQ4_OBJ_HDR.OBJ_General_OBJ_Count + pack->EQ4_OBJ_HDR.OBJ_Animal_Count;
#else
    obj_nums = 20;
#endif
    for (unsigned char idx = 0; idx < obj_nums; idx++)
    {
        const EQ4_OBJ_ELEM_BUS* pack_object = &(pack->EQ4_OBJ_ELEM[idx]);
        if (pack_object->OBJ_ID == 0) 
        {
            continue;
        }
        CameraObject* object = &(frame->elems[frame->id_array.size]);
        emplace_back_array(frame->id_array, pack_object->OBJ_ID);
        object->id = pack_object->OBJ_ID;
        object->exist_prob = pack_object->OBJ_Existence_Probability;
        object->age = pack_object->OBJ_Object_Age;          //this age is produced by camera sensor
        object->type = pack_object->OBJ_Object_Class;
        object->type_prob = pack_object->OBJ_Class_Probability;
        object->lane = pack_object->OBJ_Lane_Assignment;
        object->move_status = pack_object->OBJ_Motion_Status;
        object->orientation = pack_object->OBJ_Motion_Orientation;   
        object->stamp = frame->stamp;
        object->rel_pos.x = CheckDataValidFloat(pack_object->OBJ_Long_Distance_V, pack_object->OBJ_Long_Distance + P_Globle_sensor_frame_offset_config_.camera_in_body_x);
        object->rel_pos.y = CheckDataValidFloat(pack_object->OBJ_Lat_Distance_V, -pack_object->OBJ_Lat_Distance + P_Globle_sensor_frame_offset_config_.camera_in_body_y);
        object->rel_vel.x = CheckDataValidFloat(pack_object->OBJ_Relative_Long_Velocity_V, pack_object->OBJ_Relative_Long_Velocity);
        object->rel_vel.y = CheckDataValidFloat(pack_object->OBJ_Relative_Lat_Velocity_V, -pack_object->OBJ_Relative_Lat_Velocity);
        object->rel_accel.x = CheckDataValidFloat(pack_object->OBJ_Relative_Long_Acc_V, pack_object->OBJ_Relative_Long_Acc);
        object->rel_accel.y = 0;                                            //no output from sensor
        object->rel_pos_std.x = CheckDataValidFloat(pack_object->OBJ_Long_Distance_STD_V, pack_object->OBJ_Long_Distance_STD);
        object->rel_pos_std.y = CheckDataValidFloat(pack_object->OBJ_Lat_Distance_STD_V, pack_object->OBJ_Lat_Distance_STD);
        object->rel_vel_std.x = CheckDataValidFloat(pack_object ->OBJ_Rel_Long_Vel_STD_V, pack_object->OBJ_Relative_Long_Vel_STD);
        object->rel_vel_std.y = CheckDataValidFloat(pack_object->OBJ_Rel_Lat_Vel_STD_V, pack_object->OBJ_Relative_Lat_Velocity_STD);
        object->rel_accel_std.x = CheckDataValidFloat(pack_object->OBJ_Rel_Long_Acc_STD_V, pack_object->OBJ_Relative_Long_Acc_STD);
        object->rel_accel_std.y = 0;                                        //no output from sensor

        object->size3d.length = CheckDataValidFloat(pack_object->OBJ_Length_V, pack_object->OBJ_Length);
        object->size3d.width = CheckDataValidFloat(pack_object->OBJ_Width_V, pack_object->OBJ_Width);
        object->size3d.height = CheckDataValidFloat(pack_object->OBJ_Height_V, pack_object->OBJ_Height);
        object->size3d_std.length = CheckDataValidFloat(pack_object->OBJ_Length_STD_V, pack_object->OBJ_Length_STD);
        object->size3d_std.width = CheckDataValidFloat(pack_object->OBJ_Width_STD_V, pack_object->OBJ_Width_STD);
        object->size3d_std.height = CheckDataValidFloat(pack_object->OBJ_Length_STD_V, pack_object->OBJ_Height_STD);

        object->heading = CheckDataValidFloat(pack_object->OBJ_Heading_V, -1 * pack_object->OBJ_Heading * 180.0f / P_Globle_PI);
        if (!CHECK_FLOAT_VALID(object->heading)) object->heading = 0;
        object->heading_std = CheckDataValidFloat(pack_object->OBJ_Heading_STD_V, pack_object->OBJ_Heading_STD);
        if (CHECK_FLOAT_VALID(object->heading) && CHECK_FLOAT_VALID(object->size3d.length))
        {
            adjust_object_location(object);
        }

        object->object_bottom_out_of_image = CheckDataValidBool(pack_object->OBJ_Bottom_Out_Of_Image_V, pack_object->OBJ_Bottom_Out_Of_Image);
        object->object_has_cut_lane = pack_object->OBJ_Has_Cut_Lane;
        object->object_has_cut_path = pack_object->OBJ_Has_Cut_Path;
        object->object_in_drivable_area = CheckDataValidBool(pack_object->OBJ_Is_In_Drivable_Area_V, pack_object->OBJ_Is_In_Drivable_Area);
        object->object_visibility_side = (EVisibleSide)CheckDataValidInt(pack_object->OBJ_Visibility_Side_V, pack_object->OBJ_Visibility_Side);
        object->object_brake_light = CheckDataValidBool(pack_object->OBJ_Light_Indicator_Validity, pack_object->OBJ_Brake_Light);
        object->object_is_very_closed = CheckDataValidBool(pack_object->OBJ_Is_VeryClose_V, pack_object->OBJ_Is_VeryClose);
        
        /*if (object->move_status == C_MOVE_STATIONARY && object->object_visibility_side == C_VISIBLE_FRONT && CHECK_FLOAT_VALID(object->size3d.length))
            object->rel_pos.x -= object->size3d.length;*/

        AdjustCameraObjectSize(object);
        if (pre_object_frame)
        {
            //update_camera_object_age(pre_object_frame, object); //useful
            DTC_check_camera_sensor(pre_object_frame, object);
        }
    }
    //fusion_track_frame_.data_error = IsDataCorrect(&frame->id_array, frame->stamp);
    emplace_back_circular_buffer_move_pointer(camera_frame_queue);
    camera_frame_cnt++;
}

/*!
calculate sensor's object age info
- EPM/410 is unable to output age infomation, thus the calculation of sensor's object age is necessary
- since there's id replacement with same id, check of object stamp and object dynamic property is unavoidable.

\param pre_object_frame the lastest frame's pointer of object input
\param object the pointer to camera object

\return ObjectAgeStatus

\todo if the EQ4 chip is stable implemented on the controller board, delete this function to speed up and get accurate sensor's object age info
*/
static ObjectAgeStauts update_camera_object_age(const CameraObjectFrame* pre_object_frame, CameraObject* object)
{
    unsigned char find_elem_array(pre_object_frame->id_array, object->id, pre_object_idx);
    if (pre_object_idx != INVALID_IDX)
    {
        const CameraObject* pre_object = &(pre_object_frame->elems[pre_object_idx]);
        if (object->stamp - pre_object->stamp < 0.5f &&
            fabsf(object->rel_vel.x - pre_object->rel_vel.x) < 4.0f &&
            fabsf(object->rel_vel.y - pre_object->rel_vel.y) < 4.0f &&
            fabsf(object->rel_pos.x - pre_object->rel_pos.x) < 10.0f &&
            fabsf(object->rel_pos.y - pre_object->rel_pos.y) < 10.0f)
        {
            if (pre_object_frame->elems[pre_object_idx].age < UCHAR_MAX)
            {
                object->age += pre_object_frame->elems[pre_object_idx].age;
            }
            else
            {
                object->age = pre_object_frame->elems[pre_object_idx].age;
            }
            return __AGE_UPDATE;
        }
        else
            return __OBJECT_CHANGE;
    }
    else
        return __NO_PRE_OBJECT;
}

void add_line_infos(const RFM_LINE_BUS* line_infos) 
{

}