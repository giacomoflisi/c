
#include "maxheap.h"

void HeapMaxHeapsort(Heap *h){

    if (HeapIsEmpty(h))
        return;

    //saving original heap size
    size_t og_size = h->size;

    while(h->size > 1){

        //swapping first with last element value
        ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

        //now the biggest value is in the right position, at the end of the array
        //decreasing heap size
        h->size -= 1;

        //reordering (moving down the element that i just swapped in first pos)
        HeapMaxMoveDown(h, 0);

    } //repeat until array is down to 2 elements


    //resetting h->size to the original size
    h->size = og_size;

}
