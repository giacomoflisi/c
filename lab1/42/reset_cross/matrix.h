#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdlib.h>
#include <stdint.h>

struct matrix {
    size_t rows,cols;
    double *data;
};

extern struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic);

#endif //MATRIX_H_
