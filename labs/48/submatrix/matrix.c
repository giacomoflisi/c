#include "matrix.h"

struct matrix *mat_submatrix(const struct matrix *mat, const int *row_idxs, const int *col_idxs)
{
    if (mat == NULL || row_idxs == NULL || col_idxs == NULL)
        return NULL;

    size_t i = 0;
    while(i<mat->rows){
       if(row_idxs[i]>mat->rows)
           return NULL;
       else
           ++i;
    }

    i = 0;
    while(i<mat->cols){
       if(col_idxs[i]>mat->cols)
           return NULL;
       else
           ++i;
    }

    struct matrix *m = malloc(sizeof(struct matrix));
    m->cols = mat->cols;
    m->rows = mat->rows;
    
    size_t cols = mat->cols;
    size_t rows = mat->rows;




    return m;
}

int main (void)
{
    double val[] = {1,  2,  3,  4, 
                    5,  6,  7,  8, 
                    9, 10, 11, 12};

    struct matrix a = {3, 4, val};

    int row_idxs[] = {1, 2, -1};
    int cols_idxs[] = {0, 2, 3, -1};

    struct matrix *s = mat_submatrix(&a, row_idxs, cols_idxs);

    return 0;
}
