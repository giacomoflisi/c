
#include <stdlib.h>
#include "minheap.h"


ElemType KthLeast(const Heap *h, int k){

    Heap *copy = malloc(sizeof(Heap));
    copy->data = malloc(sizeof(ElemType)*h->size);
    copy->size = h->size;
    for (size_t i = 0; i<h->size; ++i){
        copy->data[i] = ElemCopy(&h->data[i]);
    }

    while (--k > 0){
        ElemSwap(&copy->data[0], &copy->data[copy->size-1]);
        ElemDelete(&copy->data[copy->size-1]);
        copy->data = realloc(copy->data, (copy->size-1)*sizeof(ElemType));
        copy->size--;

        HeapMinMoveDown(copy, 0);
    }

    ElemType ret = ElemCopy(&copy->data[0]);
    copy->size = h->size;

    HeapDelete(copy);
    return ret;
}
