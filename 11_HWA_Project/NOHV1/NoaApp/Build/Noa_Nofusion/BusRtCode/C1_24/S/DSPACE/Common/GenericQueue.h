#ifndef DATA_STRUCTURES_QUEUE_H_
#define DATA_STRUCTURES_QUEUE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <Platform_Types.h>
#include "Config.h"

	/* QUEUE */
#define QUEUE_CREATE(type) {0, 0, 0, 0, sizeof(type), NULL}
#define QUEUE_MIN_SIZE 16
	/* newSize = oldSize * QUEUE_GROWTH / 100 */
#define QUEUE_GROWTH 200

	typedef struct Queue {
		uint32 Head;
		uint32 Tail;
		uint32 Size;
		uint32 Capacity;
		size_t ElementSize;
		void* Elements;
	} Queue;

	boolean QueuePush(Queue* queue, void* element);

	boolean QueuePop(Queue* queue, void* element);

	boolean QueuePeek(Queue* queue, void* element);

	void QueueClear(Queue* queue);

	void QueueFree(Queue* queue);

#ifdef __cplusplus
}
#endif

#endif