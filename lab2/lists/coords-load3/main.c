#include "list.h"
#include <stdio.h>

extern Item *ListLoad(const char *filename);

int main (void){

    Item *i;
    
    i = ListLoad("coords_01.txt");
    ListWriteStdout(i);
    ListDelete(i);

    /*
    ElemType e[] = {0, 2, 2, 3, 4, 2};

    ElemType n = 2;
    Item *i = ListCreateEmpty();
    i = ListInsertHead(e+0, i);
    i = ListInsertHead(e+1, i);
    i = ListInsertHead(e+2, i);
    i = ListInsertHead(e+3, i);
    i = ListInsertHead(e+4, i);
    i = ListInsertHead(e+5, i);

    int ret = ListOccorrenze(i, &n);

    printf("returned %d\n", ret);
    


    */
    return 0;
}
