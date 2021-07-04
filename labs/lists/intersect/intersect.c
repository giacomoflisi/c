#include "list.h"

//scorro gli elementi della prima lista e li confronto
//con tutti quelli della seconda
//se trovo una corrispondenza agungo il numero ad output

//prende in input 2 indirizzi modificabili di 2 Item NON modificabili

Item *Intersect(const Item *i1, const Item *i2){

    Item *ris = ListCreateEmpty();

    //doppio ciclo for
    for (const Item *tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)){
        
        for (const Item *tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)){
            //confronto, se sono uguali allora l'elemento corrente lo inserisco
            //nella lista di ritorno ris
            if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0) {
                //primitiva che inserisce in coda il valore
                ris = ListInsertBack(ris, ListGetHeadValue(tmp1));
                break; //lo aggiungo una volta sola quindi interrompo

            }
        }
    }

    return ris;
}
