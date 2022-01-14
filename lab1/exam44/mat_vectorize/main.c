
//     extern struct vector *mat_vectorize(const struct matrix *m, enum vectorize_by dir);
#include "matrix.h"
#include <stdio.h>

int main (void){

    double vec[] = {1, 2,3 ,4 ,
                    5, 6, 7, 8, 
                    9, 10, 11, 12};
    struct matrix m;

    m.rows = 3;
    m.cols = 4;

    m.data = vec;

    enum vectorize_by dir;

    struct vector *V = mat_vectorize(&m, dir=BY_COLUMN );

    for (size_t i = 0; i< V->n; i++){

        printf("%f, ", V->data[i]);
    }

    return 0;
}
