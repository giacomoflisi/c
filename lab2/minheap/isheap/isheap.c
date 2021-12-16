
#include <stdbool.h>
#include "minheap.h"

bool IsHeap(const Heap *h){

    if (!h)
        return false;

    //controllo se è minheap

    bool ret = true;
    size_t i = 0;
    while (i < (h->size-1)/2){
        if ((ElemCompare(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapLeft(i))) > 0) || 
            (ElemCompare(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapRight(i))) > 0)){
            ret = false;
        }

        i++;
    }

    return ret;
}

