#ifndef __LOG_H_
#define __LOG_H_

#include <stdio.h>
#include <string.h>

#define LOG_OBJECT_CONTAINER 0
#define LOG_SWITCH 0

#if LOG_SWITCH
#define log_current_function() printf("[function] %s\n", __func__);
#else
#define log_current_function(...)
#endif

#endif
