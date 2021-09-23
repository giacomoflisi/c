
#include <stdbool.h>
#include "maxheap.h"

bool HeapMaxPop(Heap *h, ElemType *e){

    if (!h)
        return false;

    *e = ElemCopy(HeapGetNodeValue(h, 0)); 

    ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

    ElemDelete(HeapGetNodeValue(h, h->size-1));
    h->size -= 1;

    HeapMaxMoveDown(h, 0);

    return true;
}

