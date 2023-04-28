#ifndef __OBJECT_CONTAINER_H_
#define __OBJECT_CONTAINER_H_

#include "sensors.h"
#include "track.h"
#include "object.h"
#include "camera.h"
#include "radar.h"

void init_object_container(void);
void get_object_frames(ObjectFrameArray* object_frame_array);
void clear_container_frame_counter(void);


#if LOG_SWITCH
void log_camera_object(const CameraObject *object);
void log_camera_object_simple(const CameraObject *object);
void log_camera_object_frame(const CameraObjectFrame *frame);
void log_camera_object_frame_simple(const CameraObjectFrame *frame);
void log_radar_object(const RadarObject *object);
void log_radar_object_simple(const RadarObject *object);
void log_radar_object_frame(const RadarObjectFrame *frame);
void log_radar_object_frame_simple(const RadarObjectFrame *frame);
void log_frame_queue(void);
void log_frame_queue_simple(void);
void log_object_frame(const ObjectFrame *object_frame);
void log_object_frame_simple(const ObjectFrame *object_frame);
void log_object_frame_array(const ObjectFrameArray *object_frame_array);
void log_object_frame_array_simple(const ObjectFrameArray *object_frame_array);
#else
#define log_camera_object(...)
#define log_camera_object_simple(...)
#define log_camera_object_frame(...)
#define log_camera_object_frame_simple(...)
#define log_radar_object(...)
#define log_radar_object_simple(...)
#define log_radar_object_frame(...)
#define log_radar_object_frame_simple(...)
#define log_frame_queue(...)
#define log_frame_queue_simple(...)
#define log_object_frame(...)
#define log_object_frame_simple(...)
#define log_object_frame_array(...)
#define log_object_frame_array_simple(...)
#endif

#endif