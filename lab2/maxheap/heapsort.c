
#include "maxheap.h"

void HeapMaxHeapsort(Heap *h){

    if (HeapIsEmpty(h))
        return;

    //mi salvo la lunghezza dell'heap originale
    size_t og_size = h->size;

    while(h->size > 1){

        ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size-1));

        //ora il maggiore è in ultima posizione; posizione corretta
        //accorcio l'Heap
        h->size -= 1;

        //riordino
        HeapMaxMoveDown(h, 0);

    } //ripeto fino a quando ho un heap di 1 elemento

    //aggiorno la size con quella originale

    h->size = og_size;

}
