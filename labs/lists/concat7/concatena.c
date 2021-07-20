#include "list.h"

Item *Split(Item *i){

    int n = 1;
    Item *tmp = i;
    while(!ListIsEmpty(tmp)){
        tmp = ListGetTail(tmp);
        n++;
    }

            
    tmp = i;
    for (int j = 1; j<n/2; j++){

        tmp = ListGetTail(tmp);

    }

    i = ListGetTail(tmp);
    tmp->next = NULL;

    return i;
}
