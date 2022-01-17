#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void PancakeSort(int *v, size_t v_size);

int main (void){

    int vec[] ={ -3, -6, -2, -9, 0, -7, -1, -4, -8, -10, -45, -100, -23, -88, -12, -37, -51};
 //   int vec[] ={ 3, 6, 2, 9, 0, 7, 1, -4, 8};
 //   int vec[] ={ 1, 2, 3};
    size_t v_size = sizeof vec /sizeof *vec;

    int *v = malloc(sizeof (int)* v_size);
    memcpy(v, vec, sizeof(int)*v_size);

    printf("v = [");
    for (size_t i = 0; i<v_size; i++){
        printf("%d, ", v[i]);

    }
    printf("]");
    printf("\n");

    printf("cocktail sorting...\n");
    PancakeSort(v, v_size);
    
    printf("v = [");
    for (size_t i = 0; i<v_size; i++){
        printf("%d, ", v[i]);

    }
    printf("]");
    printf("\n");


    free(v);
    return 0;
}
