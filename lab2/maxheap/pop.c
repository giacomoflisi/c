
#include <stdbool.h>
#include "maxheap.h"

//popping max element out of the heap 
bool HeapMaxPop(Heap *h, ElemType *e){

    if (!h)
        return false;

    //saving popping value in *e before deletion
    *e = ElemCopy(HeapGetNodeValue(h, 0)); 

    //swapping the first element in last pos
    ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

    //delete and redizing
    ElemDelete(HeapGetNodeValue(h, h->size-1));
    h->size -= 1;

    //movedown the new root 
    HeapMaxMoveDown(h, 0);

    return true;
}

