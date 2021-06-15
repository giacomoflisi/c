#include "matrix.h"

int matrix_read(struct matrix *matr, FILE *f)
{
    if(fscanf(f, "%u", &matr->rows)!= 1)
        return 0;
    
    if(fscanf(f, "%u", &matr->cols)!= 1)
        return 0;

    matr->data = malloc(matr->rows * matr->cols *sizeof(double));

    for(size_t r = 0; r< matr->rows; ++r){
        for(size_t c = 0; c<matr->cols; ++c){
            if(fscanf(f,"%lf",  matr->data+ r*matr->cols + c)!=1){
                free(matr->data);
                return 0;
            }
        }
    }

    return 1;
}

int main (void)
{
    struct matrix a;

    FILE *f = fopen("mat1.txt", "rt");
    int succ = 0;
    succ = matrix_read(&a, f);

    if(succ == 1)
        printf("succesfully red!!");
    else
        printf("something went wrong :(");

    printf("closing file...");
    fclose(f);
    return 0;
}
