#include "list.h"
#include "elemtype.h"

extern void InsertionSort(Item **i);

int main (void){

    ElemType e[] = {5, 2, 7, 3, 0};

    Item *list = ListCreateEmpty();

    list = ListInsertBack(list, e+0);
    list = ListInsertBack(list, e+1);
    list = ListInsertBack(list, e+2);
    list = ListInsertBack(list, e+3);
    list = ListInsertBack(list, e+4);

    ListWriteStdout(list);

    InsertionSort(&list);
    printf("sorting...\n");

    ListWriteStdout(list);

    ListDelete(list);
    return 0;
}
