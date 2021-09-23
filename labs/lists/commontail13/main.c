#include "list.h"
#include <stdio.h>
#include <stdbool.h>

extern const Item *CommonTail(const Item *i1, const Item *i2);

int main (void){

    ElemType e[] = {7, 2, 5, 5, 6};

    Item *i = ListCreateEmpty();
    i = ListInsertBack(i, e+0);
    i = ListInsertBack(i, e+1);
    i = ListInsertBack(i, e+2);
    i = ListInsertBack(i, e+3);
    i = ListInsertBack(i, e+4);
    ListWriteStdout(i);
    ElemType e2[] = {1, 2, 5, 5, 6};

    Item *i2 = ListCreateEmpty();
    i2 = ListInsertBack(i2, e2+0);
    i2 = ListInsertBack(i2, e2+1);
    i2 = ListInsertBack(i2, e+2);
    i2 = ListInsertBack(i2, e+3);
    i2 = ListInsertBack(i2, e+4);
    ListWriteStdout(i2);

    printf("commonTail is...\n");
    const Item *ret = CommonTail(i, i2);

    ListWriteStdout(ret);

    return 0;
}
