
#include "matrix.h"
#include <stdio.h>

int main (void){


    struct matrix mat;


    mat.rows = 2;
    mat.cols = 3;

    double data[] = {1,2,3,4,5,6};

    mat.data = data;
    
    struct matrix *tr = mat_transpose(&mat);

    for (size_t i = 0; i< (mat.rows*mat.cols); i++){

        printf("%lf ", tr->data[i]);


    }


    return 0;
}
