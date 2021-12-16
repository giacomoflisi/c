#include "maxheap.h"
#include <stdlib.h>
#include <stdbool.h>

extern Heap *HeapMaxHeapify(const ElemType *v, size_t v_size);
//La funzione crea dinamicamente una max-heap contenente tutti gli elementi del vettore 
//e ne ritorna il puntatore. Se il vettore di input è vuoto, la funzione ritorna una heap vuota.

extern bool HeapMaxPop(Heap *h, ElemType *e);
//La funzione prende in input un max-heap ed estrae l'elemento massimo dallo heap, 
//deallocando opportunamente la memoria e assicurandosi che le proprietà max-heap siano rispettate al termine dell'operazione.
//La funzione ritorna false se l'heap è vuoto, true altrimenti. La funzione salva in e l'elemento estratto.

extern void HeapMaxHeapsort(Heap *h);
//La funzione prende in input un max-heap e lo trasforma in modo tale che 
//al termine dell'esecuzione l'array dei dati sia ordinato in senso crescente. 
//La funzione deve sfruttare le proprietà dell'heap e non deve fare uso di altri algoritmi di ordinamento.

int main (void){

    ElemType v[] = {11, 1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10};
    size_t vsize = sizeof v/ sizeof *v;

    Heap *h = HeapMaxHeapify(v, vsize);
    HeapWriteStdout(h);

    ElemType e;
    HeapMaxPop(h, &e);
    printf("popped %d from maxheap\n", e);

    HeapWriteStdout(h);
    printf("done!\n");

    printf("Heapsorting from smallest...!\n");
    HeapMaxHeapsort(h);
    HeapWriteStdout(h);
    printf("done!\n");

    HeapDelete(h);
    return 0;
}
