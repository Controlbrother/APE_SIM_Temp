#ifndef __ASSIGNMENT_TYPE_H
#define __ASSIGNMENT_TYPE_H

#include "common.h"

typedef struct {
	unsigned char first;        // track id
	UCharArray6 second; // sensors id
} Assignment;

typedef struct
{
	unsigned char first;		//track id contains pure camera id	
	unsigned char second;		//track id contains pure radar id
} PureTrackAssignment;

DECLARE_ARRAY(AssigmentArray, Assignment, MAX_OBSTACLE_CNT)

DECLARE_ARRAY(TrackAssigmentArray, PureTrackAssignment, MAX_OBSTACLE_CNT)

//VisitedFlag is used to pick up tracks and objects to assignment and unassignment quickly
typedef enum {
	TRACK_VISITED = 1,
	OBJECT_VISITED = 2,
} VisitedFlag;



#endif