
#include <stdio.h>
#include "list.h"

Item *ListLoad(const char *filename){

    Item *i = ListCreateEmpty();

    //apro file in lettura tradotta
    FILE *f = fopen(filename, "rt");

    if (f == NULL || filename == NULL)
        return i;
    
    ElemType e;

    //leggo numeri separati da <whitespace>
    while (fscanf(f, "%d", &e)!=EOF){
        i = ListInsertHead(&e, i);
        //aggiungo in testa ad una lista allocata

    }
    
    fclose(f);
    //ritorno la nuova lista
    return i;
}

