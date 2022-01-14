
#include "list.h"
#include <math.h>

Item *CreaDaInterni(const Item *i, double r){

    Item *out = ListCreateEmpty();

    const Item *curr = i;

    while (curr){

        double d = sqrt(pow(curr->value.x, 2)+pow(curr->value.y, 2));

        if (d <= r){

            out = ListInsertBack(out, ListGetHeadValue(curr));

        }

        curr = ListGetTail(curr);
    }





    return out;
}
