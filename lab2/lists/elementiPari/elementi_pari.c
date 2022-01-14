
#include "list.h"

Item *ElementiPari(const Item *i){

    if (!i)
        return ListCreateEmpty();


    Item *pari = ListCreateEmpty();
    const Item *tmp  = i;

    while (tmp){


        pari = ListInsertBack(pari, ListGetHeadValue(tmp));

        tmp = ListGetTail(tmp);
        if (tmp){
            tmp = ListGetTail(tmp);
        } else {
            break;

        }
    }



    return pari;
}
