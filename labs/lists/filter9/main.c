#include "list.h"
#include <stdio.h>

extern Item *Filter(Item *i, ElemType e);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Item *i = ListCreateEmpty();
    i = ListInsertHead(e+0, i);
    i = ListInsertHead(e+1, i);
    i = ListInsertHead(e+2, i);
    i = ListInsertHead(e+3, i);
    i = ListInsertHead(e+4, i);
    ListWriteStdout(i);

    printf("filtering...\n");
    i = Filter(i, 2);

    ListWriteStdout(i);
    

    return 0;
}
