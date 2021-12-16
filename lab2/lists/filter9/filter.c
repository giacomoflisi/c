#include "list.h"
#include <stdlib.h>

Item *Filter(Item *i, ElemType e){

    //per eliminare un elemento direttamente dalla lista i:
    //- cerco il predecessore dell'elemento che devo eliminare, 
    //- cambio p->next perchè punti al successivo dopo l'elemento che elimino
    //- libero la memoria occupata dal nodo rimosso

    Item *r = i;
    Item *p = NULL; //puntatore all'elemento precedente


    while (i) {
        if (i->value >= e){
            //rimuovo l'elemento corrente
            if ( p == NULL){ //se l'elemento da filtrare è in testa alla lista
                r = i->next; // allora aggiorno il puntatore
                free(i);
                i = r; //aggiorno per l'iterazione successiva

            } else {
                p->next = i->next; //faccio puntare il precedente al successivo i->next
                free(i);        //libero
                i = p->next;    //aggiorno per l'iter successiva
            }


        } else {
            //se l'elemento corrente non è da filtrare
            p = i;
            i = i->next;
        }
    }

    return r;



    /*
       //VERSIONE CON LISTA AUSILIARIA

    Item *tmp = ListCreateEmpty();
    while (!ListIsEmpty(i)){
        if (i->value < e){
            tmp = ListInsertBack(tmp, ListGetHeadValue(i));

        }
        i = ListGetTail(i);

    }

    ListDelete(i);
    return tmp;
    */
}
