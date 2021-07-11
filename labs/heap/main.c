#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern Heap *HeapMinHeapify(const ElemType *v, size_t v_size);
extern void HeapMinMoveUpRec(Heap *h, int i);
extern void HeapMinMoveDownRec(Heap *h, int i);
extern bool HeapMinPop(Heap *h, ElemType *e);
extern void HeapMinHeapsort(Heap *h);

int main (void){
    Heap *h = HeapCreateEmpty();
    h->data = malloc(sizeof(ElemType)*5);
    h->size = 5;

    h->data[0] = 1;
    h->data[1] = 2;
    h->data[2] = 3;
    h->data[3] = 4;
    h->data[4] = 5;

    HeapDelete(h);
    return 0;
}
