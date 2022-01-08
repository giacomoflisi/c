#include "matrix.h"

struct matrix *mat_submatrix(const struct matrix *mat, const int *row_idxs, const int *col_idxs){

    if (!mat || !row_idxs || !col_idxs)
        return NULL;

    struct matrix *out = malloc(sizeof(struct matrix));
    out->rows = 0;
    out->cols = 0;

    size_t o = 0;
    while(row_idxs[o] >= 0){
        out->rows++;
        o++;
    }

    o = 0;
    while(col_idxs[o] >= 0){
        out->cols++;
        o++;
    }

    out->data = malloc((out->rows * out->cols)*sizeof(double));


    const int cols = mat->cols;
    const int rows = mat->rows;

    for (size_t i = 0; i < out->rows; i++){
        for (size_t j = 0; j < out->cols; j++){

            //if out of bounds
            if (row_idxs[i] >= rows || col_idxs[j] >= cols){
                free(out->data);
                free(out);
                return NULL;
            } //-------------


            out->data[i*(out->cols)+j] = mat->data[row_idxs[i]*cols+col_idxs[j]];


        }
    }

    return out;
}
