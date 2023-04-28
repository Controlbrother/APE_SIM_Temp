/** !------------------------------------------------------------------------->
*
*  @file BinaryHeap.c
*
*  @brief Automatically growing min binary heap implementation
*
*  @author Henrik Heine
*
*  @copyright
*    Copyright 2018, dSPACE GmbH. All rights reserved.
*
*  @version
*
*!-------------------------------------------------------------------------->*/

#include <string.h>
#include "BinaryHeap.h"

#define PARENT(index) ((index - 1) >> 1)
#define LEFT_CHILD(index) ((index << 1) + 1)
#define RIGHT_CHILD(index) ((index << 1) + 2)

#define COMPARE(heap, left, right) (heap->Compare(left, right) <= 0)

boolean BinaryHeapPush(BinaryHeap* heap, void* element) {
	uint32 index, parent;
	if (!ArrayListEnsureCapacity(&heap->List, heap->List.Size + 1)) return FALSE;

	/* start at the end of the heap and sort the new value in */
	for (index = heap->List.Size; index; index = parent) {
		parent = PARENT(index);
		if COMPARE(heap, ARRAYLIST_INDIRECT_PTR(heap, parent), element) break; /* new value must be inserted here */
		memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), ARRAYLIST_INDIRECT_PTR(heap, parent), heap->List.ElementSize); /* old element must be moved down*/
	}
	memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), element, heap->List.ElementSize);
	heap->List.Size++;
	return TRUE;
}

static void HeapifyDown(BinaryHeap* heap, uint32 index) {
	uint32 swap, other;
	uint8* temp = ARRAYLIST_INDIRECT_PTR(heap, heap->List.Size);

	for (; 1; index = swap) {
		swap = LEFT_CHILD(index);
		if (swap >= heap->List.Size) break; /* end of heap reached */
		other = RIGHT_CHILD(index);
		if (other < heap->List.Size && COMPARE(heap, ARRAYLIST_INDIRECT_PTR(heap, other), ARRAYLIST_INDIRECT_PTR(heap, swap)))
			swap = other;
		if COMPARE(heap, temp, ARRAYLIST_INDIRECT_PTR(heap, swap)) break; /* heap properties are satisfied */
		memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), ARRAYLIST_INDIRECT_PTR(heap, swap), heap->List.ElementSize);
	}
	memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), temp, heap->List.ElementSize);
}

boolean BinaryHeapPop(BinaryHeap* heap, void* element) {
	if (heap == NULL || heap->List.Size == 0) return FALSE;
	/* copy result to out pointer */
	memcpy(element, heap->List.Elements, heap->List.ElementSize);
	heap->List.Size--;
	HeapifyDown(heap, 0);
	return TRUE;
}

boolean BinaryHeapPeek(BinaryHeap* heap, void* element) {
	if (heap == NULL || heap->List.Size == 0) return FALSE;
	/* copy result to out pointer */
	memcpy(element, heap->List.Elements, heap->List.ElementSize);
	return TRUE;
}

static void BalanceHeap(BinaryHeap* heap, uint32 index) {
	uint32 swap, other;
	uint32 parent = PARENT(index);
	uint8* temp = ARRAYLIST_INDIRECT_PTR(heap, heap->List.Size);

	/* check if parent is smaller according to heap properties */
	while (index > 0 && COMPARE(heap, temp, ARRAYLIST_INDIRECT_PTR(heap, parent)))
	{
		memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), ARRAYLIST_INDIRECT_PTR(heap, parent), heap->List.ElementSize);
		index = parent;
		parent = PARENT(index);
	}

	/* verify heap properties down */
	for (; 1; index = swap) {
		swap = LEFT_CHILD(index);
		if (swap >= heap->List.Size) break; /* end of heap reached */
		other = RIGHT_CHILD(index);
		if (other < heap->List.Size && COMPARE(heap, ARRAYLIST_INDIRECT_PTR(heap, other), ARRAYLIST_INDIRECT_PTR(heap, swap)))
			swap = other;
		if COMPARE(heap, temp, ARRAYLIST_INDIRECT_PTR(heap, swap)) break; /* heap properties are satisfied */
		memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), ARRAYLIST_INDIRECT_PTR(heap, swap), heap->List.ElementSize);
	}
	memcpy(ARRAYLIST_INDIRECT_PTR(heap, index), temp, heap->List.ElementSize);

}


boolean BinaryHeapRemove(BinaryHeap* heap, void* element, GenericCompareFunction findFunction) {
	uint32 index;
	if (heap == NULL || heap->List.Size == 0) return FALSE;
	if (findFunction == NULL) findFunction = heap->Compare;
	for (index = 0; index < heap->List.Size; index++) {
		if (findFunction(element, ARRAYLIST_INDIRECT_PTR(heap, index)) == 0) {
			/* found: put last element at position of removed element */
			heap->List.Size--;
			/* verify heap properties are satisfied */
			BalanceHeap(heap, index);
			return TRUE;
		}
	}
	return FALSE;
}

void BinaryHeapClear(BinaryHeap* heap) {
	ArrayListClear(&heap->List);
}

void BinaryHeapFree(BinaryHeap* heap) {
	ArrayListFree(&heap->List);
}