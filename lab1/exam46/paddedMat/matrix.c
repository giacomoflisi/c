#include "matrix.h"

struct matrix *mat_pad(const struct matrix *mat){

    size_t cols = mat->cols;
    size_t rows = mat->rows;

    struct matrix *out = malloc (sizeof (struct matrix));
    out->cols = (cols*2) -1;
    out->rows = (rows*2) -1;

    out->data = calloc (out->cols *out->rows, sizeof (double));

    for (size_t r = 0; r< rows; r++){

        for (size_t c = 0; c< cols; c++){

            out->data[r*2*(out->cols)+c*2] = mat->data[r*cols+c];

        }

    }

    return out;
}
