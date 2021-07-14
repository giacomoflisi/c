#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

extern int *slicing(const int *v, size_t *n, size_t start, size_t end, int step);

int main (void){

    const int v[] = {1, 2, 3, 4, 5, 6, 7, 8};
    size_t n = 8;

    int *ret = slicing(v, &n, 2, 6, -3);
    printf("%ld returned\n", n);
    
    for(size_t i =0; i<n; ++i){
        printf("%d |", ret[i]);

    }

    printf("\n");
    free(ret);


    return 0;
}
