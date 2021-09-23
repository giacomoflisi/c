
#include "list.h"

void Back2Front(Item **i){

    if (ListIsEmpty(*i) || ListIsEmpty(ListGetTail(*i)))
        return;


    Item *prev = *i;
    Item *curr = ListGetTail(*i);

    //itero sugli elementi della lista fino a quando curr->next è NULL
    while(!ListIsEmpty(ListGetTail(curr))){

        prev = ListGetTail(prev);
        curr = ListGetTail(curr);

    }

    //a questo punto, prev contiene l'indirizzo del penultimo elemento
    //curr contiene quello dell'ultimo...
    //Quindi aggiorno i puntatori secondo la consegna
    prev->next = NULL;          //il penultimo diventa ultimo
    curr->next = *i;            //l'ultimo diventa primo
    *i = curr;                  //aggiorno con la nuova testa

}
