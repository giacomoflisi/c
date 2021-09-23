
#include "minheap.h"

void HeapMinMoveDownRec(Heap *h, int i){

    //base
    if (i >(int) (h->size-1) / 2)
        return;

    int small = i;
    int left = HeapLeft(i);
    int right = HeapRight(i);
    
    if (left <(int) h->size && ElemCompare(HeapGetNodeValue(h, small), 
                HeapGetNodeValue(h, left)) > 0){

        small = left;
    }

    if (right <(int) h->size && ElemCompare(HeapGetNodeValue(h, small), 
                HeapGetNodeValue(h, right)) > 0){

        small = right;
    }

    if (small != i){
        ElemSwap(HeapGetNodeValue(h, small), HeapGetNodeValue(h, i));

        HeapMinMoveDownRec(h, small);

    }
}
