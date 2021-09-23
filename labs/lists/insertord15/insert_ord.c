
#include "list.h"

Item *InsertOrd(const ElemType *e, Item *i){

    //inserisco in testa
    if (ListIsEmpty(i) || ElemCompare(ListGetHeadValue(i), e) >= 0){
        return ListInsertHead(e, i);
    }

    Item *new = ListInsertHead(e, ListCreateEmpty());
    Item *head = i;
    Item *prev = NULL; //puntatore al precedente

    //scorro fino a che trovo la posizione dove inserire e
    while (!ListIsEmpty(i) && ElemCompare(ListGetHeadValue(i), e) < 0){

        prev = i;
        i = ListGetTail(i); 
    }
        
    //aggiorno i puntatori
    prev->next = new;
    new->next = i;



    return head;

}
