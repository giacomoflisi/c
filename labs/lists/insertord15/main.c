#include "list.h"
#include <stdio.h>
#include <stdbool.h>

extern Item *InsertOrd(const ElemType *e, Item *i);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    ElemType n = 5;
    Item *i = ListCreateEmpty();
    i = ListInsertBack(i, e+0);
    i = ListInsertBack(i, e+1);
    i = ListInsertBack(i, e+2);
    i = ListInsertBack(i, e+3);
    i = ListInsertBack(i, e+4);
    ListWriteStdout(i);

    printf("insertOrd...\n");
    i = InsertOrd(&n, i);

    ListWriteStdout(i);
    

    return 0;
}
