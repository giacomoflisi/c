#include <stdlib.h>
#include <stdint.h>

uint32_t *somme_2a2(uint32_t *vett, size_t size){

    if (!vett)
        return NULL;

    uint32_t *sum = malloc((size/2) * sizeof(uint32_t));


    size_t v = 0;
    for (size_t i = 0; i<size/2;){

        sum[i] = vett[v] + vett[v+1];

        i++;
        v+=2;
    }

    return sum;
}
