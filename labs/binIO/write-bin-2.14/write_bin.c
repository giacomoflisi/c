#include <stdio.h>
#include <stdint.h>

void write_bin(const double *values, size_t n, FILE *f){

    if (f == NULL || values == NULL || n == 0)
        return;


    fwrite(values, sizeof(double), n, f);
        

    return;
}
