#include "matrix.h"
#include <stdio.h>

struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic)
{
    size_t rows, cols;
    rows = m->rows;
    cols = m->cols;

    if(m == NULL || ir > rows || ic > cols)
        return NULL;

    struct matrix *cross = malloc(sizeof(struct matrix));
    cross->cols = cols;
    cross->rows = rows;

    //ricopio la matrice
    cross->data = malloc(rows*cols*sizeof(double));
    for(size_t i = 0; i<(rows*cols); i++){
        cross->data[i] = m->data[i];
    }


    for(size_t r = 0; r<rows; r++){
        for(size_t c = 0; c<cols; c++){
            //azzero la riga ir
            if(r == ir){
                cross->data[ir*cols +c] = 0;    
                continue;
            }
            if(c == ic){
                cross->data[r*cols +ic] = 0;
                continue;
            }
            else
                continue;
        }
    }
    //riscrivo il carattere all'incrocio
    size_t x = ir*cols+ic;
    cross->data[x] = m->data[x];

    return cross;
}

int main (void)
{
    double data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct matrix a = {3, 3, data};

    struct matrix *cross = mat_reset_cross(&a, 0, 1);
    
    return 0;
}


