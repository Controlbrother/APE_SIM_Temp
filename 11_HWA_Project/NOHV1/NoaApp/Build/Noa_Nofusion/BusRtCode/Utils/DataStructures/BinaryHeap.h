/** !------------------------------------------------------------------------->
*
*  @file BinaryHeap.h
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

#ifndef DATA_STRUCTURES_BINARY_HEAP_H_
#define DATA_STRUCTURES_BINARY_HEAP_H_

#include <stdlib.h>
#include <Platform_Types.h>
#include "BMUtils.h"
#include "ArrayList.h"

#define BINARY_HEAP_CREATE(type, compareFunction) {{0, 0, (uint32)sizeof(type), NULL}, compareFunction}

/* The Elements array contains the binary heap, where index 0 is the min/max value of the heap.
* The entry at position i has two children at position 2*i+1 and 2*i+2.
* The parent of entry i is at position (i-1)/2
*/
typedef struct {
	ArrayList List;
	GenericCompareFunction Compare;
} BinaryHeap;

/* Inserts the given element into the binary heap and ensures the heap properties. 
 * @param heap: The binary heap which shall be modified. 
 * @param element: Input parameter which shall be copied into the heap. Must be a pointer to the same type as used by BINARY_HEAP_CREATE.
 * @return true if the operation has succeeded.
 */
EXTERN_C_DECL boolean BinaryHeapPush(BinaryHeap* heap, void* element);

/* Removes the minimal value from the heap and ensures the heap properties. 
 * @param heap: The binary heap which shall be modified. 
 * @param element: Output parameter. Must be a pointer to the same type as used by BINARY_HEAP_CREATE.
 * @return true if the operation has succeeded.
 */
EXTERN_C_DECL boolean BinaryHeapPop(BinaryHeap* heap, void* element);

/* Queries the minimal value without removing it. 
 * @param heap: The binary heap which shall be modified. 
 * @param element: Output parameter. Must be a pointer to the same type as used by BINARY_HEAP_CREATE.
 * @return true if the operation has succeeded.
 */
EXTERN_C_DECL boolean BinaryHeapPeek(BinaryHeap* heap, void* element);

/* Removes an arbitrary value from the heap and ensures the heap properties. 
 * @param heap: The binary heap which shall be modified. 
 * @param element: Input parameter. Must be a pointer to the same type as used by BINARY_HEAP_CREATE.
 * @param findFunction: Comparator function which shall be used to find the given element in the heap. If NULL, the comparator of the heap is used.
 * @return true if the operation has succeeded.
 */
EXTERN_C_DECL boolean BinaryHeapRemove(BinaryHeap* heap, void* element, GenericCompareFunction findFunction);

/* Clears the heap without freeing the memory pool. */
EXTERN_C_DECL void BinaryHeapClear(BinaryHeap* heap);

/* Clears and frees the heap. */
EXTERN_C_DECL void BinaryHeapFree(BinaryHeap* heap);

#endif /* DATA_STRUCTURES_BINARY_HEAP_H_ */