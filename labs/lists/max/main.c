#include "list.h"
#include "elemtype.h"

extern ElemType *MaxElement(const Item *i);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Item *list = ListCreateEmpty();
    // Item *list = NULL;
    list = ListInsertHead(e+0, list);
    list = ListInsertHead(e+1, list);
    list = ListInsertHead(e+2, list);
    list = ListInsertHead(e+3, list);
    list = ListInsertHead(e+4, list);

    ElemType *max = MaxElement(list);

    printf("%d = max element\n", *max);

    ListDelete(list); //libero la memoria occupata dagli elementi della lista
    return 0;
}
