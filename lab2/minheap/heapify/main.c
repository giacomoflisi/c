#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern Heap *HeapMinHeapify(const ElemType *v, size_t v_size);

int main (void){
    ElemType v[] = {1, 3, 4, 65, 9, 0, 4, 5, 6};
    size_t size = sizeof v/sizeof *v;


    Heap *h = HeapMinHeapify(v, size);
    HeapWriteStdout(h);

    HeapDelete(h);
    return 0;
}
