
#include <stdlib.h>
#include "list.h"

int ContaVette(const Item *i){

    int count = 0;

    //incrementa count se l'elemento corrente è maggiore di tutti i successivi

    for (const Item *j = i; j; j = j->next){

        bool peak = true;

        for (const Item *k = j->next; k; k= k->next){

            if (k->value >= j->value){
                peak = false;
                break;
            }

        }

        if (peak){
            count++;
        }

    }

    return count;
}
