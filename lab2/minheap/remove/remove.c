
#include "minheap.h"

void DeleteNode(Heap *h, int k){

    if (!h || k<0 || k>= h->size)
        return;

    ElemSwap(HeapGetNodeValue(h, k), HeapGetNodeValue(h, h->size-1));
    ElemDelete(HeapGetNodeValue(h, h->size-1));
    h->size -= 1;

    HeapMinMoveDown(h, k);

}
