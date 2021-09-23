#include "minheap.h"

extern Heap *HeapCopy(const Heap *h);

int main (void){
    Heap *h = HeapCreateEmpty();

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }

    HeapWriteStdout(h);


    printf("copying...\n");
    Heap *copy = HeapCopy(h);

    HeapWriteStdout(copy);
    printf("done!\n");

    HeapDelete(h);
    HeapDelete(copy);
    return 0;
}
