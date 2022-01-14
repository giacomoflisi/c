#include "list.h"

Item *Sum(const Item *i1, const Item *i2){

    Item *res = ListCreateEmpty();
    int carry_over = 0;
    ElemType sum = 0;

    while (i1 && i2){


        sum = (*ListGetHeadValue(i1) + *ListGetHeadValue(i2) + carry_over);

        carry_over = sum/10;
        sum = sum%10;

        res = ListInsertBack(res, &sum);


        i1 = ListGetTail(i1);
        i2 = ListGetTail(i2);
    }

    while (i1){
       
        sum = (*ListGetHeadValue(i1) + carry_over);
        carry_over = sum/10;
        sum = sum%10;

        res = ListInsertBack(res, &sum);

        i1 = ListGetTail(i1);
    }

    while (i2){
       
        sum = (*ListGetHeadValue(i2) + carry_over);
        carry_over = sum/10;
        sum = sum%10;

        res = ListInsertBack(res, &sum);

        i2 = ListGetTail(i2);
    }

    if (carry_over)
        res = ListInsertBack(res, &carry_over);

    return res;
}
