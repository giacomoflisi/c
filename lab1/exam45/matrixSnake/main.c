  
#include "matrix.h"
#include <stdio.h>

int main (void){

    struct matrix m;
    double vec[] = {1, 2,3 ,4, 5, 6, 7, 8, 9};

    m.rows = 3;
    m.cols = 3;
    size_t size = (m.rows)*(m.cols);

    m.data = vec;

    double *out = matrix_snake(&m);

    for (size_t i = 0; i< size; i++){
        printf("%2.f | ", out[i]);
    }


    free(out);
    return 0;
}
