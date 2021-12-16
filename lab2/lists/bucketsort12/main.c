#include "list.h"
#include <stdio.h>
#include <stdbool.h>

extern Item *BucketSort(Item *i);

int main (void){

    ElemType e[] = {7, 2, 5, 5, 4};

    Item *i = ListCreateEmpty();
    i = ListInsertBack(i, e+0);
    i = ListInsertBack(i, e+1);
    i = ListInsertBack(i, e+2);
    i = ListInsertBack(i, e+3);
    i = ListInsertBack(i, e+4);
    ListWriteStdout(i);

    printf("sorting...\n");
    i = BucketSort(i);


    ListWriteStdout(i);

    return 0;
}
