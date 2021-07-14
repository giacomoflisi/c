
#include "matrix.h"

struct matrix *mat_pad(const struct matrix *mat){

    size_t mat_elem = mat->cols*mat->rows;
    struct matrix *pad = malloc(sizeof(struct matrix));
    pad->rows = mat->rows * 2 -1;
    pad->cols = mat->cols * 2 -1;
    size_t rows = pad->rows;
    size_t cols = pad->cols;
    pad->data = calloc(rows*cols,sizeof(double));

    if (mat_elem == 1){
        pad->data[0] = mat->data[0];
        return pad;

    }


    size_t i = 0;
    while (1){
        for (size_t r = 0; r<=rows; r+=2){
            if(i== mat_elem-1){
                break;
            }
            for (size_t c = 0; c<=cols; c+=2){
                pad->data[r*cols+c] = mat->data[i];
                ++i;

            }

        }
        break;
    }

    return pad;
}
