#include "list.h"
#include <stdlib.h> 

int ContaVette(const Item *i){

    int count = 0;


    while (!ListIsEmpty(i)){
        if (ElemCompare(ListGetHeadValue(i), ListGetHeadValue(ListGetTail(i))) > 0){
            count++;

        }

        i = ListGetTail(i);
        if (!i->next){
            count++;
            break;
        }
    }



    return count;
}
