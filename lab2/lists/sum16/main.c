#include "list.h"
#include <stdio.h>
#include <stdbool.h>

extern Item *Sum(const Item *i1, const Item *i2);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    Item *i = ListCreateEmpty();
    i = ListInsertBack(i, e+1);
    i = ListInsertBack(i, e+2);
    i = ListInsertBack(i, e+3);
    i = ListInsertBack(i, e+4);
    ListWriteStdout(i);
    Item *i2 = ListCreateEmpty();
    i2 = ListInsertBack(i2, e+5);
    i2 = ListInsertBack(i2, e+6);
    i2 = ListInsertBack(i2, e+7);
    i2 = ListInsertBack(i2, e+8);
    i2 = ListInsertBack(i2, e+9);
    ListWriteStdout(i2);

    printf("summing...\n");
    Item *r = ListCreateEmpty();
    r = Sum(i, i2);

    ListWriteStdout(r);
    

    return 0;
}
