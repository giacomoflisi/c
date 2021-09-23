#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern bool HeapMinPop(Heap *h, ElemType *e);

int main (void){
    Heap *h = HeapCreateEmpty();

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }


    HeapWriteStdout(h);

    ElemType e;
    bool ret = HeapMinPop(h, &e);
    printf("popped min... %d\n", e);

    HeapWriteStdout(h);
    printf("done!\n");

    HeapDelete(h);
    return 0;
}
