#include "list.h"
#include <stdio.h>

extern Item *Taglia(Item *i, int n);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5};

    ElemType n = 7;
    Item *i = ListCreateEmpty();
    i = ListInsertHead(e+0, i);
    i = ListInsertHead(e+1, i);
    i = ListInsertHead(e+2, i);
    i = ListInsertHead(e+3, i);
    i = ListInsertHead(e+4, i);
    i = ListInsertHead(e+5, i);
    ListWriteStdout(i);

    i = Taglia(i, n);
    printf("taglia...\n");

    ListWriteStdout(i);
    

    return 0;
}
