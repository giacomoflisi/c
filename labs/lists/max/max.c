
#include "list.h"

const ElemType *MaxElement(const Item *i){

    if (ListIsEmpty(i))
        return NULL;

    const Item *tmp = i;
    const ElemType *max = ListGetHeadValue(tmp);

    while (!ListIsEmpty(tmp)){

        if (ElemCompare(max, ListGetHeadValue(tmp)) < 0){
            //switch
            max = ListGetHeadValue(tmp);
        }


        tmp = ListGetTail(tmp);
    }


    return max;
}
