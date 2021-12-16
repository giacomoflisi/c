#include "list.h"

Item *Diff (const Item *i1, const Item *i2){

    Item *i3 = ListCreateEmpty();

    const Item *tmp = i1;

    while (!ListIsEmpty(tmp)){

        bool match = false;
        const Item *tmp2 = i2;
        while (!ListIsEmpty(tmp2)){

            if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(tmp2)) == 0){
                //se gli elementi sono uguali
                match = true;
                break;

            }

            match = false;


            tmp2 = ListGetTail(tmp2);
        }


        if (match == false){
            i3 = ListInsertBack(i3, ListGetHeadValue(tmp));
        }

        tmp = ListGetTail(tmp);
    }



    return i3;

}
