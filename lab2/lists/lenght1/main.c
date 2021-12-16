#include "list.h"
#include <stdio.h>

extern int ListLenght(const Item *i);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5};

    Item *i = ListCreateEmpty();
    i = ListInsertHead(e+0, i);
    i = ListInsertHead(e+1, i);
    i = ListInsertHead(e+2, i);
    i = ListInsertHead(e+3, i);
    i = ListInsertHead(e+4, i);
    i = ListInsertHead(e+5, i);

    int ret = ListLenght(i);

    printf("returned %d\n", ret);
    

    return 0;
}
