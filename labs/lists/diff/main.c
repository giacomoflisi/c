#include "list.h"

extern Item *Diff(const Item *i1, const Item *i2);

int main (void){

    //creo 2 liste di esempio

    ElemType e1[] = {1, 45, 0, 2, 4, 1, 3};
    size_t e1_size = sizeof(e1) / sizeof(ElemType);

    //aggiungo in coda alla lista a, così preservo l'ordine dei precedenti
    Item *list_a = ListCreateEmpty();
    
    for (size_t  i = 0; i<e1_size; ++i) {

        list_a = ListInsertBack(list_a, e1 + i); //assegno ogni volta il prossimo elemento
    }

    ElemType e2[] = {7, 45, 3, 2, 5};
    size_t e2_size = sizeof(e2) / sizeof(ElemType);

    Item *list_b = ListCreateEmpty();
    
    for (size_t i = 0; i<e2_size; ++i) {

        list_b = ListInsertBack(list_b, e2 + i); 
    }

    //
    //implemento intersect
    //la funzione Intersect prende in input 2 indirizzi modificabili
    //di 2 item NON modificabili
    Item *ris = Diff(list_a, list_b);

    ListWriteStdout(ris);

    ListDelete(ris);
    ListDelete(list_a);
    ListDelete(list_b);
    return 0;
}
