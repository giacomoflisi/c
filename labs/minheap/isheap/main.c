#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern bool IsHeap(const Heap *h);

int main (void){
    Heap *h = HeapCreateEmpty();

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }

    HeapWriteStdout(h);

    if (IsHeap(h)){
        printf("yep true\n");
    } else {
        printf("not a min-heap\n");
    }


    HeapDelete(h);
    return 0;
}
