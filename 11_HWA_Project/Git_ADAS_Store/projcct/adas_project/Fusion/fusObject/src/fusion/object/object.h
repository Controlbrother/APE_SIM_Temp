#ifndef _OBJECT_H
#define _OBJECT_H

#include "sensors.h"
#define MAX_FUSION_FRAME_CNT (12)
/*!
enum for object age update status
*/
typedef enum
{
    __AGE_UPDATE,
    __NO_PRE_OBJECT,
    __OBJECT_CHANGE
}ObjectAgeStauts;

typedef struct {
    float stamp;
    ESensorType sensor_type;
    void* frame;
} ObjectFrame;

typedef struct {
    unsigned char size;
    ObjectFrame elems[MAX_FUSION_FRAME_CNT];
} ObjectFrameArray;

#endif