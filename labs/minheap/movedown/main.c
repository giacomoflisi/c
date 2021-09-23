#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>


extern void HeapMinMoveDownRec(Heap *h, int i);

int main (void){
    Heap *h = HeapCreateEmpty();
    h->data = malloc(sizeof(ElemType)*5);
    h->size = 5;

    h->data[0] = 5;
    h->data[1] = 2;
    h->data[2] = 3;
    h->data[3] = 1;
    h->data[4] = 4;
    HeapMinMoveDownRec(h, 2);

    HeapWriteStdout(h);
    HeapDelete(h);
    return 0;
}
