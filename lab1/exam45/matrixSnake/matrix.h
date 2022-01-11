
#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdlib.h>


struct matrix{

    size_t rows, cols;
    double *data;
};

extern double *matrix_snake(const struct matrix *m);

#endif //MATRIX_H_
