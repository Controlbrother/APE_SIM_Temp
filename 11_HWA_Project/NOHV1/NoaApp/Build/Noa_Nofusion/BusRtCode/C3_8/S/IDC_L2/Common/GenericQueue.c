#include <stdlib.h>
#include <string.h>
#include "GenericQueue.h"

static int EnsureCapacity(Queue* queue) {
	if (queue->Elements == NULL) {
		queue->Elements = malloc(QUEUE_MIN_SIZE * queue->ElementSize);
		if (queue->Elements == NULL) return FALSE;
		queue->Capacity = QUEUE_MIN_SIZE;
	}
	else if (queue->Size == queue->Capacity) {
		uint32 capacity = queue->Size * QUEUE_GROWTH / 100;
		uint8* elements = (uint8*)queue->Elements;
		uint8* mem = (uint8*)malloc(capacity * queue->ElementSize);
		if (mem == NULL) return FALSE;
		if (queue->Head < queue->Tail) {
			memcpy(mem, elements + queue->Head * queue->ElementSize, queue->Size * queue->ElementSize);
		}
		else {
			memcpy(mem, elements + queue->Head * queue->ElementSize, (queue->Capacity - queue->Head) * queue->ElementSize);
			memcpy(mem + (queue->Capacity - queue->Head) * queue->ElementSize, queue->Elements, queue->Tail * queue->ElementSize);
		}
		free(queue->Elements);
		queue->Elements = mem;
		queue->Capacity = capacity;
		queue->Head = 0;
		queue->Tail = queue->Size;
	}
	return TRUE;
}

boolean QueuePush(Queue* queue, void* element) {
	if (!EnsureCapacity(queue)) return FALSE;
	memcpy((uint8*)queue->Elements + queue->Tail * queue->ElementSize, element, queue->ElementSize);
	queue->Size++;
	queue->Tail = (queue->Tail + 1) % queue->Capacity;
	return TRUE;
}

boolean QueuePop(Queue* queue, void* element) {
	if (!QueuePeek(queue, element)) return FALSE;
	queue->Size--;
	queue->Head = (queue->Head + 1) % queue->Capacity;
	return TRUE;
}

boolean QueuePeek(Queue* queue, void* element) {
	uint8* elements = (uint8*)queue->Elements;
	if (queue->Size == 0) return FALSE;
	memcpy(element, elements + queue->Head * queue->ElementSize, queue->ElementSize);
	return TRUE;
}

void QueueClear(Queue* queue) {
	queue->Head = queue->Tail = 0;
	queue->Size =  0;
}

void QueueFree(Queue* queue) {
	QueueClear(queue);
	queue->Capacity = 0;
	free(queue->Elements);
}
