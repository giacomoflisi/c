
#include "matrix.h"
#include <stdio.h>

struct vector *mat_vectorize(const struct matrix *m, enum vectorize_by dir){

    if (!m) 
        return NULL;

    struct vector *out = malloc(sizeof (struct vector));

    out->n = m->rows * m->cols;
    out->data = malloc(m->cols *m->rows *sizeof (double));

    size_t rows = m->rows;
    size_t cols = m->cols;
    size_t t = 0;

    if (dir == BY_ROW){
        for (size_t r = 0; r < rows; r++){
            for (size_t c = 0; c < cols; c++){
                out->data[t] = m->data[r*cols+c];
                t++;
            }
        }
    } else if (dir == BY_COLUMN){
        for (size_t c = 0; c < cols; c++){
            for (size_t r = 0; r < rows; r++){
                out->data[t] = m->data[r*cols+c];
                t++;
            }
        }
    } else {
        free(out->data);
        free(out);
        return NULL;
    }


    return out;
}
