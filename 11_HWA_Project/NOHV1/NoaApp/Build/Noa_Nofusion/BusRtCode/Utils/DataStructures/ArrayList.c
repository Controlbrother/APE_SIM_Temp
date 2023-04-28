/** !------------------------------------------------------------------------->
*
*  @file ArrayList.c
*
*  @brief Automatically growing array list implementation. Typically used indirectly by other data structures like Stack or Heap.
*
*  @author Henrik Heine
*
*  @copyright
*    Copyright 2018, dSPACE GmbH. All rights reserved.
*
*  @version
*
*!-------------------------------------------------------------------------->*/

#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"

static uint32 Max(uint32 a, uint32 b) {
	return a > b ? a : b;
}

boolean ArrayListEnsureCapacity(ArrayList* list, uint32 capacity) {
	if (list == NULL) return FALSE;
	if (list->Elements == NULL) { /* create initial list */
		list->Capacity = Max(capacity, ARRAYLIST_MIN_SIZE);
		list->Elements = (uint8*)malloc(list->Capacity * list->ElementSize);
		if (list->Elements == NULL) return FALSE;
	}
	else if (capacity > list->Capacity) { /* increase size */
		capacity = Max(capacity, list->Capacity * ARRAYLIST_GROWTH / 100);
		uint8* elements = (uint8*)realloc(list->Elements, capacity * list->ElementSize);
		if (elements == NULL) return FALSE;
		list->Capacity = capacity;
		list->Elements = elements;
	}
	return TRUE;
}

boolean ArrayListSetSize(ArrayList* list, uint32 size) {
	if (!ArrayListEnsureCapacity(list, size)) return FALSE;
	list->Size = size;
	return TRUE;
}

boolean ArrayListSet(ArrayList* list, uint32 index, void* element) {
	if (list == NULL || list->Elements == NULL || index >= list->Size) return FALSE;
	memcpy(ARRAYLIST_DIRECT_PTR(list, index), element, list->ElementSize);
	list->Size = Max(index + 1, list->Size);
	return TRUE;
}

boolean ArrayListGet(ArrayList* list, uint32 index, void* element) {
	if (list == NULL || list->Elements == NULL || index >= list->Size) return FALSE;
	memcpy(element, ARRAYLIST_DIRECT_PTR(list, index), list->ElementSize);
	return TRUE;
}

boolean ArrayListMinimize(ArrayList* list) {
	uint8* elements;
	uint32 capacity;
	if (list == NULL || list->Elements == NULL) return TRUE; /* nothing to do */
	capacity = Max(list->Size, ARRAYLIST_MIN_SIZE);
	if (capacity >= list->Capacity) return TRUE; /* nothing to do */
	elements = (uint8*)realloc(list->Elements, list->ElementSize * capacity);
	if (elements == NULL) return FALSE;
	list->Elements = elements;
	list->Capacity = capacity;
	return TRUE;
}

void ArrayListClear(ArrayList* list) {
	if (list != NULL) list->Size = 0;
}

void ArrayListFree(ArrayList* list) {
	if (list == NULL) return;
	ArrayListClear(list);
	list->Capacity = 0;
	free(list->Elements);
	list->Elements = NULL;
}
