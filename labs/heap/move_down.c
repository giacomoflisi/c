#include "minheap.h"
#include <stdlib.h>

void HeapMinMoveDownRec(Heap *h, int i) {
    //guardo il valore del figlio sinistro e destro del nodo corrente
    //  prendo il minore, se esso è più piccolo del padre allora devo scambiarli
    //  se il nodo corrente è già più piccolo dei figli allora è già il pos giusta

    if (i > (h->size -1) / 2) {
        return; //sono arrivato ad una foglia
    }

    int smallest = i;
    //mi tengo traccia del più piccolo
    size_t left = HeapLeft(i);
    size_t right = HeapRight(i);

    //controllo anche che il figlio sinistro sia compreso all'interno dell'heap
    if (left < h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, left)  ) > 0){
        smallest = left;
    }

    if (right < h->size && ElemCompare(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, right)) > 0){ 
        smallest = right;
    }

    if (smallest != i){
        ElemSwap(HeapGetNodeValue(h, smallest), HeapGetNodeValue(h, i));
        //ripeto la procedura anche per il risultato

        HeapMinMoveDownRec(h, smallest);
    }
}

