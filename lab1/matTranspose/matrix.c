#include "matrix.h"

struct matrix *mat_transpose(const struct matrix *mat){

    if (!mat)
        return NULL;

    struct matrix *trix = malloc(sizeof(struct matrix));
    trix->rows = mat->cols;
    trix->cols = mat->rows;

    size_t cols = trix->cols;
    size_t rows = trix->rows;

    trix->data = malloc(trix->rows * trix->cols * sizeof(double));


    for (size_t r = 0; r<rows; r++){
        for (size_t c = 0; c<cols; c++){

            trix->data[r*cols+c] = mat->data[c*rows+r];
        }
    }

    return trix;
}
