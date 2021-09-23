
#include "list.h"

Item *PariDispari(Item *i){

    if (ListIsEmpty(i)){
        return NULL;
    }

    if (ListIsEmpty(ListGetTail(i)))
        return i;

    Item *prev = i;
    Item *head = ListGetTail(i);
    Item *mid = NULL;

    while (!ListIsEmpty(prev)){

        if (*ListGetHeadValue(prev) % 2 == 0){ //pari

            break;


        }else if (!mid){

            mid = prev;            
        }else{

            prev->next = mid;

        }

        prev = ListGetTail(prev);

    }

    return mid;
}
