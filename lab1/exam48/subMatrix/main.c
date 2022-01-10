
#include "matrix.h"
#include <stdio.h>

int main (void){

    struct matrix a;
    a.rows = 3;
    a.cols = 4;

    double vec[] = {1, 2, 3, 4,
                5, 6, 7, 8,
                9, 10, 11, 12};

    a.data = vec;

    const int row_idxs[] = {1, 2, -1};
    const int col_idxs[] = {0, 2, 3, -1};

    struct matrix *out = mat_submatrix(&a, row_idxs, col_idxs);

    if (!out){
        printf("wrong indexes\n");
        return -1;
    }
    

    for (size_t i = 0; i< out->rows*out->cols; i++){
        printf("%f | ", out->data[i]);
    }

    free(out->data);
    free(out);
    return 0;
}
