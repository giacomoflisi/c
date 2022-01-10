
#include "matrix.h"
#include <stdio.h>

int main (void){


    struct matrix a;
    a.rows = 2;
    a.cols = 3;

    double v[] = {1, 2, 3, 4,5, 6};
    a.data = v;


    struct matrix *out = mat_pad(&a);

    for (size_t i = 0; i< out->cols * out->rows; i++){
        printf("%f, ", out->data[i]);
    }

    printf("\n");
    return 0;
}
