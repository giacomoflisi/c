
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t *x, size_t n);

int main (void){

    size_t n = 10;
    uint32_t x[n];

    iota(x, n);

    return 0;
}
