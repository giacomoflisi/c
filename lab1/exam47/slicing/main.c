#include <stdio.h>
#include <stdlib.h>

extern int *slicing(const int *v, size_t *n, size_t start, size_t end, int step);


int main (void){


    int vector[] = {1,2,3,4, 5, 6, 7, 8};

    size_t n = sizeof vector/sizeof *vector;
    for (size_t i = 0; i<n; i++){
        printf(" %d,", vector[i]);
    }
    printf("\n");
    printf("%ld elements\n", n);

    size_t start = 2;
    size_t end = 6;

    int step = 2;


    printf("slicing...\n");
    int *out = slicing(vector, &n, start, end, step);

    for (size_t i = 0; i<n; i++){
        printf(" %d,", out[i]);
    }
    printf("\n");
    printf("%ld elements\n", n);


    return 0;
}
