#include "minheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern void CocktailSort(int *v, size_t v_size);

int main (void){

    Heap *h = HeapCreateEmpty();

    ElemType v[] = { 1,  3 , -4 ,4 ,2 , 21, 5, 67, 8, 11, 10};
    size_t vsize = sizeof v/ sizeof *v;

    for (size_t i = 0; i<vsize; ++i){
        HeapMinInsertNode(h, &v[i]);
    }

    CocktailSort(v, vsize);



    HeapDelete(h);
    return 0;
}
