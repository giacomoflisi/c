#include "matrix.h"
#include <stdint.h>

double *matrix_snake(const struct matrix *m){

    if (!m)
        return NULL;

    size_t out_len = (m->cols) * (m->rows);
    size_t outi = 0;

    double *out = malloc(out_len * sizeof (double));

    size_t rows = m->rows;
    size_t cols = m->cols;

    for (size_t r = 0; r<rows;){
        for (size_t c = 0; c<cols; c++){

            out[outi] = m->data[r*cols+c];

            outi++;
        }
        r++;
        if (r == rows)
            break;
        
        for (size_t c = cols; c>0; c--){

            out[outi] = m->data[r*cols+c-1];

            outi++;
        }
        r++;
        //next line

    }
    
    return out;
}
