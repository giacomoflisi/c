
#include "list.h"

//crate a new list
Item *CopiaDaN(const Item *i, int n){

    Item *out = ListCreateEmpty();

    const Item *tmp = i;

    if (i && n > 0){

        for (int i = 1; i<n ; i++){

            if (!ListIsEmpty(ListGetTail(tmp))){
                tmp = tmp->next;

            } else {
                return NULL;
            }
        }

        while (tmp ){

            out = ListInsertBack(out, &tmp->value);
            tmp = tmp->next;
        }

    }

    return out;
}
