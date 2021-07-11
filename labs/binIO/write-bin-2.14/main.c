#include <stdio.h>
#include <stdlib.h>

extern void write_bin(const double *values, size_t n, FILE *f);

int main (void){

     size_t n = 5;
     double *values = malloc(n*sizeof(double));


     values[0] = 9.0;
     values[1] = 23.0;
     values[2] = 0.07;
     values[3] = 1.1;
     values[4] = 42;

     FILE *f = fopen("prova.bin", "wb");
     if (f == NULL)
         return 0;
     

     write_bin(values, n, f);

     return 0;
}
