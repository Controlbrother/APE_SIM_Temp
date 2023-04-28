/** !------------------------------------------------------------------------->
*
*  @file ArrayList.h
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

#ifndef DATA_STRUCTURES_ARRAYLIST_H_
#define DATA_STRUCTURES_ARRAYLIST_H_

#include <stdlib.h>
#include <Platform_Types.h>
#include "BMUtils.h"

/* In memory iteration over the arraylist */
#define ARRAYLIST_ITERATE(type, listPtr, elementPtr) for(elementPtr = (type*)(listPtr)->Elements; elementPtr != (type*)((listPtr)->Elements + (listPtr)->Size * (listPtr)->ElementSize); elementPtr++)
/* Get a direct pointer to the given index */
#define ARRAYLIST_DIRECT_PTR(listPtr, index) ((listPtr)->Elements + (listPtr)->ElementSize * index)
/* Get a direct pointer to the given index, but where the ArrayList is just an element of the given listPtr */
#define ARRAYLIST_INDIRECT_PTR(listPtr, index) ((listPtr)->List.Elements + (listPtr)->List.ElementSize * index)
/* Create a new arraylist */
#define ARRAYLIST_CREATE(type) {0, 0, (uint32)sizeof(type), NULL}
/* minimal arraylist size */
#define ARRAYLIST_MIN_SIZE 4
/* newSize = oldSize * LIST_GROWTH / 100 */
#define ARRAYLIST_GROWTH 200

typedef struct {
    uint32 Size;            /* number of elements in the list */
    uint32 Capacity;        /* number of elements the list is prepared for. Is always >= Size */
    uint32 ElementSize;     /* a single elements size in bytes */
    uint8* Elements;        /* pointer to the first element in list or NULL if list is empty/not initialized */
} ArrayList;

/* Ensures that the provided arraylist has enough space and increases it if necessary. */
EXTERN_C_DECL boolean ArrayListEnsureCapacity(ArrayList* list, uint32 capacity);

/* Sets the size of the arraylist and increases the capacity if necessary.
* Warning: If the size is increased, the new elements are not initialized!
*/
EXTERN_C_DECL boolean ArrayListSetSize(ArrayList* list, uint32 size);

/* Set the provided element at the given index. The arraylist is not modified if the given index is out of bounds. */
EXTERN_C_DECL boolean ArrayListSet(ArrayList* list, uint32 index, void* element);

/* Get the value at the given index. */
EXTERN_C_DECL boolean ArrayListGet(ArrayList* list, uint32 index, void* element);

/* Sets the capacity to the minimal size. */
EXTERN_C_DECL boolean ArrayListMinimize(ArrayList* list);

/* Clears the arraylist without freeing the memory. */
EXTERN_C_DECL void ArrayListClear(ArrayList* list);

/* Clears and frees the memory. */
EXTERN_C_DECL void ArrayListFree(ArrayList* list);

#endif