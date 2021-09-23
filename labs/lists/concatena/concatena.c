
#include "list.h"

Item *ConcatenaN(Item **v, size_t v_size){

    Item *head = NULL;
    Item *last = ListCreateEmpty();

    for(size_t j  = 0; j < v_size; ++j){

        if (!ListIsEmpty(v[j])){

            if (ListIsEmpty(head)){

                head = v[j];

            } else {

                last->next = v[j];
            }

            while (!ListIsEmpty(ListGetTail(v[j]))){
                v[j] = ListGetTail(v[j]);

            }

            last = v[j];
        }
    }
    return head;
}
