
#include "list.h"

static Item *InsertOrd(Item *i, Item *to_ins){

    if (ListIsEmpty(i) || ElemCompare(ListGetHeadValue(i), ListGetHeadValue(to_ins)) >= 0){
        //inserisco in testa
        //
        to_ins->next = i;
        return to_ins;
    }

    Item *head = i;
    Item *prev = NULL;

    while (!ListIsEmpty(i) && ElemCompare(ListGetHeadValue(i), ListGetHeadValue(to_ins)) < 0){
        //scorro fino a che trovo il punto esatto dove inserire

        prev = i;
        i = ListGetTail(i);

    }


    prev->next = to_ins;
    to_ins->next = i;


    return head;
}

void InsertionSort(Item **i){

    //riordina in crescente usando insertionsort
    if (ListIsEmpty(*i))
        return;


    Item *ordered = NULL;

    Item *curr = *i;


    while (!ListIsEmpty(curr)){
        Item *next = ListGetTail(curr);


        ordered = InsertOrd(ordered, curr);
        curr = next;

    }

    *i = ordered;
}
