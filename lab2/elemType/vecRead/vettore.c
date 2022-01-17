#include "vettore.h"
#include <stdio.h>
#include <stdlib.h>

Vector *VectorRead(const char *filename){

    if (!filename)
        return NULL;

    FILE *f = fopen(filename, "rt");

    if (!f)
        return NULL;

    Vector *v = malloc(sizeof(Vector));
    v->size = 1;
    v->data = malloc(sizeof(ElemType) * (v->size));

    while (ElemRead(f, &v->data[v->size-1]) != EOF){

        v->size += 1;
        v->data = realloc(v->data, sizeof(ElemType) * v->size);
    }


    ElemDelete(&v->data[v->size]);
    v->size--;
    v->data = realloc(v->data, sizeof(ElemType) * v->size);

    fclose(f);
    return v;
}

Vector *VectorReadSorted(const char *filename){

    if (!filename)
        return NULL;

    FILE *f = fopen(filename, "rt");

    if (!f)
        return NULL;

    Vector *v = malloc(sizeof(Vector));
    v->size = 0;
    v->data = malloc(sizeof(ElemType) * (v->size+1));

    ElemType curr;

    while (ElemRead(f, &curr) != EOF) {

        if (v->size == 0){
            v->data[v->size] = curr;
            v->size += 1;
            v->data = realloc(v->data, sizeof(ElemType) * (v->size+1));

        } else if (ElemCompare(&curr, &v->data[v->size-1]) >= 0){
            //putting after
            v->data[v->size] = curr;

            //preparing for next iter
            v->size++;
            v->data = realloc(v->data, sizeof(ElemType) * (v->size+1));

        } else if (ElemCompare(&curr, &v->data[v->size-1]) < 0){
            //if curr is lower than v->size pos
            ElemType tmp;

            //loop back to find position to insert
            size_t i = v->size-1;

            while(ElemCompare(&curr, &v->data[i-1]) < 0 && i > 0){
                i--;
            }

            tmp = v->data[i];
            v->data[i] = curr;

            //shift right the vec to make space for curr
            size_t j = v->size;
            for (; j> 0; j--){

                if (v->data[j-1] == curr){
                    v->data[j] = tmp;
                    break;
                }

                v->data[j] = v->data[j-1];

            }

            v->size++;
            v->data = realloc(v->data, sizeof(ElemType) * (v->size+1));
        }

    }

    //if nothing red
    if (v->size == 0){
        free(v->data);
        free(v);
        fclose(f);
        return NULL;
    }

    fclose(f);
    return v;
}
