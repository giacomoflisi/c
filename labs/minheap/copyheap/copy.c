
#include <stdlib.h>
#include "minheap.h"


Heap *HeapCopy(const Heap *h){

    if (!h)
        return NULL;

    Heap *ret = malloc(sizeof(Heap));
    ret->data = malloc(sizeof(ElemType)*h->size);
    ret->size = h->size;

    for (size_t i = 0; i<h->size; ++i){
        ret->data[i] = ElemCopy(&h->data[i]);
    }


    return ret;
}
