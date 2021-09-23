#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>


extern ElemType KthLeast(const Heap *h, int k);


int main (void){
    Heap *h = HeapCreateEmpty();

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }

    HeapWriteStdout(h);

    ElemType k = 4;
    ElemType ret = KthLeast(h, k);
    printf("%dth lowest element was... %d\n",k, ret);

    printf("done!\n");

    HeapDelete(h);
    return 0;
}
