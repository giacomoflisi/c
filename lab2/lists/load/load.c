#include <stdio.h>
#include "list.h"

Item *ListLoad(const char *filename){

    Item *i = ListCreateEmpty();
    FILE *f = fopen(filename, "rt");

    if (!f)
        return NULL;

    ElemType e;

    while ( fscanf(f, "%d", &e) !=EOF){
        i = ListInsertHead(&e, i);
    }

    fclose(f);
    return i;
}
