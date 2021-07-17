#include "file.h"
#include <stdlib.h>
#include <stdio.h>

extern void minmax(const int *v, size_t n, int *min, int *max);

int main (void){
    int min = 0;
    int max = 0;

    int v[]= {1, 2, 3, 4, 5, 6};
    minmax(v, 6, &min, &max);

    printf("%d min, %d max\n", min, max);

    return 0;
}
