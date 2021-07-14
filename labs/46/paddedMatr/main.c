//MAIN.C
#include "matrix.h"

int main (void){


    struct matrix mat = {.cols = 1, .rows = 1, .data = NULL};

    mat.data = malloc(mat.cols*mat.rows*sizeof(double));

    mat.data[0] = 5;

    struct matrix *pad = mat_pad(&mat);

    
    return 0;

}
