#include "list.h"

Item *Taglia(Item *i, int n){

    if (ListIsEmpty(i) || n < 0){
        return i;
    }

    if (n == 0){
        ListDelete(i);
        return i;
    }

    Item *tmp = i;
    int count = 0;
    while (!ListIsEmpty(ListGetTail(tmp))){
        if (count +1 == n){
            ListDelete(ListGetTail(tmp));
            tmp->next = NULL;
            break;
        }
        tmp = ListGetTail(tmp);

        count++;
    }

    return i;

}
