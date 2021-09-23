
#include "minheap.h"

void HeapMinHeapsort(Heap *h){

    if (HeapIsEmpty(h))
        return;

    size_t original = h->size;
    while(h->size > 1){
    //swappo l'elemento più piccolo (radice) con l'ultimo elemento
    ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

    //riduco h->size
    h->size -= 1;

    //movedown sulla nuova radice
    HeapMinMoveDown(h, 0);

    }

    h->size = original;
}
