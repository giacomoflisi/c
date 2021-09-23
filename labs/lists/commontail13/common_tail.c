
#include "list.h"
#include <stdlib.h>

const Item *CommonTail(const Item *i1, const Item *i2){

    while(i1){
        const Item *tmp = i2;
        while (tmp){
            if (i1 == tmp){

                return i1;
            }

            tmp = tmp->next;
        }


        i1 = i1->next;
    }
    return NULL;

}
