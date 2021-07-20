
#include "list.h"

Item *ListLoad(const char *filename){

    FILE *f = fopen(filename, "rt");


    if (f == NULL){
        return ListCreateEmpty();
    }

    ElemType e;
    Item *i = ListCreateEmpty();


    while(1){
        if (ElemRead(f, &e) != 2){
            break;
        }

        i = ListInsertHead(&e, i);
    }


    fclose(f);
    return i;
}
