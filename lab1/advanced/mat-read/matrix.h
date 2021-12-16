#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdio.h>
#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double *data;
};

extern int matrix_read(struct matrix *matr, FILE *f);

#endif //MATRIX_H_
