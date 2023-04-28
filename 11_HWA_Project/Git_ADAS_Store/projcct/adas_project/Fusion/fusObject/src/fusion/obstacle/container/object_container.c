/*! \file object_container.h */

#include "object_container.h"
#include <math.h>
#include <stdlib.h>
#include "circular_buffer.h"
#include "DTC.h"


void init_object_container(void)
{
    init_camera_object_container();
    init_radar_object_container();
}
/*!
compare two frame by stamp and sensor type to sort the frame of sensors' measurement 
- sort them by stamp from earlier to the lastest
- if the measurements have the same stamp, sort them by sensor type

\param a pointer to a camera/radar object frame 
\param b pointer to a camera/radar object frame 

\return void
*/
static int compare_frame(const void *a, const void *b) 
{
  const ObjectFrame *a_frame_ptr = (ObjectFrame *)a;
  const ObjectFrame *b_frame_ptr = (ObjectFrame *)b;
  if (a_frame_ptr->stamp > b_frame_ptr->stamp) 
  {
    return 1;
  } 
  else if (a_frame_ptr->stamp < b_frame_ptr->stamp) 
  {
    return -1;
  }
  return a_frame_ptr->sensor_type > b_frame_ptr->sensor_type;       //if stamps are equal, sort with sensor type
}

/*!
compare two frame by stamp and sensor type to sort the frame of sensors' measurement
- sort them by stamp from earlier to the lastest
- if the measurements have the same stamp, sort them by sensor type

\param a pointer to a camera/radar object frame
\param b pointer to a camera/radar object frame

\return void
*/
void get_object_frames(ObjectFrameArray *object_frame_array) 
{
    clear_array_ptr(object_frame_array);
    get_camera_object_frames(object_frame_array);
    get_radar_object_frames(object_frame_array);
    qsort(object_frame_array->elems, object_frame_array->size, sizeof(ObjectFrame), compare_frame);
    #if LOG_MATCH
    log_current_function();
    log_object_frame_array_simple(object_frame_array);
    #endif
}

/*!
clean camera frame counter and radar frame counter
- this function is invoked by do_obstacle_fusion, and reset the frame each turn 

\param a pointer to a camera/radar object frame
\param b pointer to a camera/radar object frame

\return void
*/
void clear_container_frame_counter(void) 
{
  camera_frame_cnt = 0;
  memset(&radar_frame_cnt, 0, sizeof(radar_frame_cnt));
}

/*!
get lastest radar object frame
- this function is NOT invoked by object fusion module.
- this api is supplied by OFM for other module to use it.

\param radar_type radar type
\param object_frame pointer to pointer of RadarObjectFrame

\return 0 if success; -1 if no radar object frame exists
*/
int get_latest_radar_object_frame(ERadarType radar_type, RadarObjectFrame** object_frame)
{
    unsigned char get_end_index_circular_buffer(radar_frame_queue_array[radar_type], end_idx);
    if (end_idx != INVALID_IDX)
    {
        *object_frame = &(radar_frame_queue_array[radar_type].elems[end_idx]);
        return 0;
    }
    else
        return -1;
}

/*!
put radar measurement from object_frame_array to global circular buffer radar_frame_queue and obtain the necessary info
- the circular buffer is not full at the beginning of running and keeps full until the end of this program
- radar_frame_cnt_ is a global variable that refreshed by add_radar_object_frame and cleared by clear_container_frame_counter

\param object_frame_array pointer ObjectFrameArray of input measurement data

\return void
*/
void get_radar_object_frames(ObjectFrameArray* object_frame_array)
{
    for (unsigned char sensor_idx = RADAR_FRONT; sensor_idx < RADAR_CNT; sensor_idx++)
    {
        unsigned char get_end_index_circular_buffer(radar_frame_queue_array[sensor_idx], head); // radar_frame_queue_array_[sensor_idx].tail;
        unsigned char frame_cnt = radar_frame_cnt[sensor_idx] < radar_frame_queue_array[sensor_idx].capacity ? radar_frame_cnt[sensor_idx] : radar_frame_queue_array[sensor_idx].capacity;
        for (unsigned char i = 0; i < frame_cnt; i++)
        {
            RadarObjectFrame* frame = &(radar_frame_queue_array[sensor_idx].elems[head % radar_frame_queue_array[sensor_idx].capacity]);
            head++;
            ObjectFrame* object_frame = &(object_frame_array->elems[object_frame_array->size]);
            object_frame->stamp = frame->stamp;
            object_frame->sensor_type = radar_type2sensor_type((ERadarType)sensor_idx);
            object_frame->frame = (void*)frame;
            object_frame_array->size++;
        }
    }
}

/*!
get lastest camera object frame
- this function is NOT invoked by object fusion module.
- this api is supplied by OFM for other module to use it.

\param object_frame pointer to pointer of CameraObjectFrame

\return 0 if success; -1 if no camera object frame exists
*/
int get_latest_camera_object_frame(CameraObjectFrame** object_frame)
{
    unsigned char get_end_index_circular_buffer(camera_frame_queue, end_idx);
    if (end_idx != INVALID_IDX)
    {
        *object_frame = &(camera_frame_queue.elems[end_idx]);
        return 0;
    }
    else
        return -1;
}

/*!
put camera measurement from object_frame_array to global circular buffer camera_frame_queue and obtain the necessary info
- the circular buffer is not full at the beginning of running and keeps full until the end of this program
- camera_frame_cnt_ is a global variable that refreshed by add_camera_object_frame and cleared by clear_container_frame_counter

\param object_frame_array pointer ObjectFrameArray of input measurement data

\return void
*/
void get_camera_object_frames(ObjectFrameArray* object_frame_array)
{
    unsigned char get_end_index_circular_buffer(camera_frame_queue, head);
    unsigned char frame_cnt = camera_frame_cnt < camera_frame_queue.capacity ? camera_frame_cnt : camera_frame_queue.capacity;
    for (unsigned char i = 0; i < frame_cnt; i++)
    {
        unsigned char idx = head % camera_frame_queue.capacity;
        CameraObjectFrame* frame = &(camera_frame_queue.elems[idx]);
        head++;
        //if (frame->id_array.size == 0) continue;                //since
        ObjectFrame* object_frame = &(object_frame_array->elems[object_frame_array->size]);
        object_frame->stamp = frame->stamp;
        object_frame->sensor_type = SENSOR_CAMERA;
        object_frame->frame = (void*)frame;
        object_frame_array->size++;
    }
}

#if LOG_SWITCH
#define LOG_BUF_LEN 240
void log_camera_object(const CameraObject *object) {
  static char log_buffer_[LOG_BUF_LEN];
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN, "  cid:%-2d,type:%d,lane:%d,orien:%d,cipv:%d",object->id, object->type, object->lane, object->orientation, object->is_cipv);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(
      log_buffer_, LOG_BUF_LEN,
      "  "
      "t:%-8.2f,age:%-3d,pos:(%7.2f,%7.2f),vel:(%6.2f,%6.2f),acc:(%6.2f,%6.2f)",
      object->stamp, object->age, object->rel_pos.x, object->rel_pos.y,
      object->rel_vel.x, object->rel_vel.y, object->rel_accel.x,
      object->rel_accel.y);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN,
          "  pos_std:(%4.2f,%4.2f),vel_std:(%4.2f,%f),acc_std:(%4.2f,%4.2f)",
          object->rel_pos_std.x, object->rel_pos_std.y, object->rel_vel_std.x,
          object->rel_vel_std.y, object->rel_accel_std.x,
          object->rel_accel_std.y);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN, "  size:(%f %f %f), size_std:(%f %f %f)",
          object->size3d.length, object->size3d.width, object->size3d.height,
          object->size3d_std.length, object->size3d_std.width, object->size3d_std.height);
  printf("%s\n", log_buffer_);
  sprintf_s(log_buffer_, LOG_BUF_LEN, "  heading:%f, heading_std %f", object->heading,
          object->heading_std);
  printf("%s\n", log_buffer_);
}

void log_camera_object_simple(const CameraObject *object) {
  static char log_buffer_[240];
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(
      log_buffer_, LOG_BUF_LEN,
      " cid:%-2d,t:%-8.2f,age:%-3d,pos:(%7.2f,%7.2f),vel:(%6.2f,%6.2f),acc:(%6."
      "2f,%6.2f)",
      object->id, object->stamp, object->age, object->rel_pos.x,
      object->rel_pos.y, object->rel_vel.x, object->rel_vel.y,
      object->rel_accel.x, object->rel_accel.y);
  printf("%s\n", log_buffer_);
}

void log_camera_object_frame(const CameraObjectFrame *frame) {
  printf("\n[camera-frame t:%.2f] ", frame->stamp);
  log_array(frame->id_array, "ids", "%d,");
  for (unsigned char idx = 0; idx < frame->id_array.size; idx++) {
    const CameraObject *object = &(frame->elems[idx]);
    log_camera_object(object);
  }
}

void log_camera_object_frame_simple(const CameraObjectFrame *frame) {
  printf("\n[camera-frame t:%.2f] ", frame->stamp);
  log_array(frame->id_array, "ids", "%d,");
  for (unsigned char idx = 0; idx < frame->id_array.size; idx++) {
    const CameraObject *object = &(frame->elems[idx]);
    log_camera_object_simple(object);
  }
}

void log_radar_object(const RadarObject *object) {
  static char log_buffer_[240];
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN,
          "  rid:%-2d,type:%d,mov_status:%d,exitst:%4.2f,obs:%4.2f",
          object->id, object->type, object->move_status, 
          object->exist_prob, object->obs_prob);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(
      log_buffer_, LOG_BUF_LEN,
      "  "
      "t:%-8.2f,age:%-3d,pos:(%7.2f,%7.2f),vel:(%6.2f,%6.2f),acc:(%6.2f,%6.2f)",
      object->stamp, object->age, object->rel_pos.x, object->rel_pos.y,
      object->rel_vel.x, object->rel_vel.y, object->rel_accel.x,
      object->rel_accel.y);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN,
          "  pos_std:(%4.2f,%4.2f),vel_std:(%4.2f,%4.2f),acc_std:(%4.2f,%4.2f)",
          object->rel_pos_std.x, object->rel_pos_std.y, object->rel_vel_std.x,
          object->rel_vel_std.y, object->rel_accel_std.x,
          object->rel_accel_std.y);
  printf("%s\n", log_buffer_);
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN, "  size:(%5.2f,%5.2f)", object->size2d.x,
          object->size2d.y);
  printf("%s\n", log_buffer_);
}

void log_radar_object_simple(const RadarObject *object) {
  static char log_buffer_[240];
  memset(log_buffer_, 0, sizeof(log_buffer_));
  sprintf_s(log_buffer_, LOG_BUF_LEN,
          " rid:%-2d,t:%-8.2f,age:%-3d,pos:(%7.2f,%7.2f),vel:(%6.2f,%6.2f),acc:("
          "%6.2f,%6.2f)",
          object->id, object->stamp, object->age, object->rel_pos.x,
          object->rel_pos.y, object->rel_vel.x, object->rel_vel.y,
          object->rel_accel.x, object->rel_accel.y);
  printf("%s\n", log_buffer_);
}

void log_radar_object_frame(const RadarObjectFrame *frame) {
  printf("\n[radar-frame type:%d t:%.2f] ", frame->radar_type, frame->stamp);
  log_array(frame->id_array, "ids", "%d,");
  for (unsigned char idx = 0; idx < frame->id_array.size; idx++) {
    const RadarObject *object = &(frame->elems[idx]);
    log_radar_object(object);
  }
}

void log_radar_object_frame_simple(const RadarObjectFrame *frame) {
  printf("\n[radar-frame type:%d t:%.2f] ", frame->radar_type, frame->stamp);
  log_array(frame->id_array, "ids", "%d,");
  for (unsigned char idx = 0; idx < frame->id_array.size; idx++) {
    const RadarObject *object = &(frame->elems[idx]);
    log_radar_object_simple(object);
  }
}

#define FRAME_QUEUE_MSG_LEN 50
void log_frame_queue(void) {
  static char frame_queue_msg[FRAME_QUEUE_MSG_LEN];
  printf("[function] %s\n", __func__);
  log_circular_buffer(camera_frame_queue, "  camera_frame_queue",
                      log_camera_object_frame);

  for (unsigned char sensor_idx = RADAR_FRONT; sensor_idx < RADAR_CNT; sensor_idx++) {
    memset(frame_queue_msg, 0, sizeof(frame_queue_msg));
    sprintf_s(frame_queue_msg, FRAME_QUEUE_MSG_LEN, "  radar_frame_queue sensor, type%d",
            (int)sensor_idx);
    log_circular_buffer(radar_frame_queue_array[sensor_idx], frame_queue_msg, log_radar_object_frame);
  }
}

#define SIMPLE_MSG_LEN 50

void log_frame_queue_simple() {
  static char frame_queue_simple_msg[SIMPLE_MSG_LEN];
  printf("[function] %s\n", __func__);
  log_circular_buffer(camera_frame_queue, "camera_frame_queue", log_camera_object_frame_simple);
  for (unsigned char sensor_idx = RADAR_FRONT; sensor_idx < RADAR_CNT; sensor_idx++) {
    memset(frame_queue_simple_msg, 0, sizeof(frame_queue_simple_msg));
    sprintf_s(frame_queue_simple_msg, SIMPLE_MSG_LEN, "radar_frame_queue sensor %d",
            (int)sensor_idx);
    log_circular_buffer(radar_frame_queue_array[sensor_idx], frame_queue_simple_msg, log_radar_object_frame_simple);
  }
}

void log_object_frame(const ObjectFrame *object_frame) {
  switch (object_frame->sensor_type) {
  case SENSOR_CAMERA: {
    log_camera_object_frame((CameraObjectFrame *)object_frame->frame);
    break;
  }
  case SENSOR_RADAR_FRONT:
  case SENSOR_RADAR_FL:
  case SENSOR_RADAR_FR:
  case SENSOR_RADAR_RL:
  case SENSOR_RADAR_RR: {
    log_radar_object_frame((RadarObjectFrame *)object_frame->frame);
    break;
  }
  default: {
      DTC_counter = 16;
    assert(0);
    break;
  }
  }
}

void log_object_frame_simple(const ObjectFrame *object_frame) {
  switch (object_frame->sensor_type) {
  case SENSOR_CAMERA: {
    log_camera_object_frame_simple((CameraObjectFrame *)object_frame->frame);
    break;
  }
  case SENSOR_RADAR_FRONT:
  case SENSOR_RADAR_FL:
  case SENSOR_RADAR_FR:
  case SENSOR_RADAR_RL:
  case SENSOR_RADAR_RR: {
    log_radar_object_frame_simple((RadarObjectFrame *)object_frame->frame);
    break;
  }
  default: {
      DTC_counter = 17;
    assert(0);
    break;
  }
  }
}

void log_object_frame_array(const ObjectFrameArray *object_frame_array) {
  log_array_ptr_with_func(object_frame_array, "object_frame_array",
                          log_object_frame);
}

void log_object_frame_array_simple(const ObjectFrameArray *object_frame_array) {
  log_array_ptr_with_func(object_frame_array, "object_frame_array",
                          log_object_frame_simple);
}
#endif
