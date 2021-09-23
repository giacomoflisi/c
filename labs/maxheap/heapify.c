
#include "maxheap.h"

Heap *HeapMaxHeapify(const ElemType *v, size_t v_size){

    if (v == NULL)
        return NULL;

    Heap *h = HeapCreateEmpty();

    for (size_t i = 0; i<v_size; ++i){
        HeapMaxInsertNode(h, &v[i]);
    }

    return h;

}
