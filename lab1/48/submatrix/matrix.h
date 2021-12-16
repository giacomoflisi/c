#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdint.h>
#include <stdlib.h>

struct matrix{
    size_t rows, cols;
    double *data;
};

extern struct matrix *mat_submatrix(const struct matrix *mat, const int *row_idxs, const int *col_idxs);

#endif //MATRIX_H_
