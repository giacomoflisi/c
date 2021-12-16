#include <stdio.h>
#include "list.h"
#include "elemtype.h"

extern int ContaVette(const Item *i);

int main (void){

    ElemType e[] = {4, 3, 7, 2, 1};

    Item *list = ListCreateEmpty();
    // Item *list = NULL;
    list = ListInsertHead(e+0, list);
    list = ListInsertHead(e+1, list);
    list = ListInsertHead(e+2, list);
    list = ListInsertHead(e+3, list);
    list = ListInsertHead(e+4, list);

    int vettecount = ContaVette(list);

    ListWriteStdout(list);
    printf("%d vette\n", vettecount);


    ListDelete(list); //libero la memoria occupata dagli elementi della lista
    return 0;
}
