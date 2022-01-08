#include <stdio.h>

extern void minmax(const int *v, size_t n, int *min, int *max);

int main (void){

    int v[] = {1, 2,3,4, 5, 6, 6, 7, 8, 9};

    size_t n = sizeof (v)/sizeof *v;
    int min ;
    int max ;

    printf("size %ld\n", n);

    minmax(v, n, &min, &max);


    printf("min = %d\nmax = %d\n", min, max);

    return 0;
}
