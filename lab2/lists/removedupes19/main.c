
#include "remove.h"

int main (void){

    ElemType e[] = {0, 1, 2, 3, 3, 4, 4};

    Item *list = ListCreateEmpty();

    list = ListInsertHead(e+0, list);
    list = ListInsertHead(e+1, list);
    list = ListInsertHead(e+2, list);
    list = ListInsertHead(e+3, list);
    list = ListInsertHead(e+3, list);
    list = ListInsertHead(e+5, list);
    list = ListInsertHead(e+5, list);

    ListWriteStdout(list);
    printf("removing dupes...\n");

    list = RemoveDuplicates(list, true);

    ListWriteStdout(list);
    ListDelete(list);
    return 0;
}
