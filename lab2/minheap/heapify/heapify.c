#include "minheap.h"

Heap *HeapMinHeapify(const ElemType *v, size_t size){

    Heap *h = HeapCreateEmpty();

    for (size_t i = 0; i<size; i++){
        HeapMinInsertNode(h, &v[i]);

    }

    return h;

}
