
#include "list.h"

int ListOccorrenze(const Item *i, ElemType *e){

    int count = 0;

    while(!ListIsEmpty(i)){
        if (ElemCompare(ListGetHeadValue(i), e) == 0){
            count++;
        }
        i = ListGetTail(i);
    
    }

    return count;
}
