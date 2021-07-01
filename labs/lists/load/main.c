#include "list.h"
#include "elemtype.h"

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Item *list = ListCreateEmpty();
    // Item *list = NULL;
    list = ListInsertHead(e+0, list);
    list = ListInsertHead(e+1, list);
    list = ListInsertHead(e+2, list);
    list = ListInsertHead(e+3, list);
    list = ListInsertHead(e+4, list);
    //lista creata inizializzata

    //tutte le volte che aggiorno il puntatore della testa
    //sto perdendo il riferimento a quella prima, 
    //quindi se ne ho bisogno devo salvarmela da qualche parte

    Item *tmp = list; //mi salvo l'indirizzo del primo elemento(testa)
    //itero fino a quando la lista non è vuota
    while (!ListIsEmpty(tmp)) {
        //operazioni con tmp corrente

        tmp = ListGetTail(tmp); // in questo modo tmp punta all'elemento successivo
    }

/*
    //versione senza primitive
    Item *tmp = list;
    while (tmp) { //fino a che tmp non è NULL vado avanti
        //operazioni con tmp 
        tmp = tmp->next;
    }
 

    //versione con for loop
    for (Item *tmp = list; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
        //operazioni
    }

    //forloop senza primitive
    for (Item *tmp = list; tmp; tmp = tmp->next) {
        //operazioni
    }
*/

    ListDelete(list); //libero la memoria occupata dagli elementi della lista
    return 0;
}
