
#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdlib.h>

struct matrix{
    size_t rows, cols;
    double *data;

};

extern struct matrix *mat_pad(const struct matrix *mat);

#endif //MATRIX_H_
