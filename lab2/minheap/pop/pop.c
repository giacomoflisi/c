
#include <stdbool.h>
#include "minheap.h"

bool HeapMinPop(Heap *h, ElemType *e){

    //estrae l'elemento minimo da heap
    //...in questo caso la radice (elemento in testa)

    if (HeapIsEmpty(h))
        return false;

    
    //scambio il min con l'ultimo
    ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

    //esporto l'elemento ed elimino
    *e = ElemCopy(&h->data[h->size-1]);
    ElemDelete(&h->data[h->size-1]);
    h->size -= 1;

    //riordino
    //heapify?

    int i = 0;
    while(i<(int)h->size-1){
        HeapMinMoveDown(h, i);


        i++;
    }


    return true;
}
