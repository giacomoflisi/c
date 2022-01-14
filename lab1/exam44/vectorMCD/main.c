
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

extern uint32_t vector_MCD(const uint32_t *v,  size_t n);

int main (void){

    uint32_t vec[] = {20, 24, 40};


    size_t elements = sizeof vec /sizeof *vec;


    printf("%i MCD\n", vector_MCD(vec, elements));
    return 0;
}
