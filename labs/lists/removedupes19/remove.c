
#include <stdlib.h>
#include "remove.h"

static Item *RemoveOrderedDupes(Item *i){
    Item *curr = i;
    Item *succ = ListGetTail(curr);


    while(!ListIsEmpty(succ)){

        if (ElemCompare(&curr->value, &succ->value) == 0){

            curr->next = succ->next;
            succ->next = NULL;
            ListDelete(succ);


        } else {

            curr = ListGetTail(curr);
        }

        succ = ListGetTail(succ);
    }

    return i;
}

static Item *RemoveUnorderedDupes(Item *i){


        for (Item *out = i; out; out = out->next){
            Item *in_prec = out;
            Item *in_curr = out->next;

            while(in_curr){

                if (ElemCompare(&in_prec->value, &in_curr->value) == 0){
                    //elimino il doppio

                    in_prec->next = in_curr->next;
                    ElemDelete(&in_curr->value);
                    free(in_curr);

                    in_curr = in_prec->next;

                }else{
                    in_curr = ListGetTail(in_curr);
                    in_prec = ListGetTail(in_prec);

                }

            }

        }


    return i;
}

Item *RemoveDuplicates(Item *i, bool ordered){

    if (ordered){
        i = RemoveOrderedDupes(i);
        return i;
    } else {
        i = RemoveUnorderedDupes(i);
        return i;
    }
}
