#include "list.h"
#include <stdio.h>
#include <stdbool.h>

extern bool AnyLoop(const Item *i);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Item *i = ListCreateEmpty();
    i = ListInsertHead(e+0, i);
    i = ListInsertHead(e+1, i);
    i = ListInsertHead(e+2, i);
    i = ListInsertHead(e+3, i);
    i = ListInsertHead(e+4, i);
    ListWriteStdout(i);

    if (AnyLoop(i)){
        printf("is loop\n");
    } else {
        printf("not a loop\n");
    }

    

    return 0;
}
