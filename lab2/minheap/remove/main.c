#include "minheap.h"

extern void DeleteNode(Heap *h, int k);

int main (void){
    Heap *h = HeapCreateEmpty();

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }


    HeapWriteStdout(h);

    int index = 5;
    printf("deleting node at index %d...\n", index);
    DeleteNode(h, index);

    HeapWriteStdout(h);
    printf("done!\n");

    HeapDelete(h);
    return 0;
}
