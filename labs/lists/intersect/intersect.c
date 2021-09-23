#include "list.h"

Item *Intersect (const Item *i1, const Item *i2){

    Item *i3 = ListCreateEmpty();

    for(const Item *tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)){
        for(const Item *tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)){

            //comparo
            if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(tmp2)) == 0){
                i3 = ListInsertBack(i3, ListGetHeadValue(tmp));
                break;
            }

        }
    }


    return i3;

}
