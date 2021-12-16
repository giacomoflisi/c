
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

extern void copy(uint32_t *dst, uint32_t *src, size_t n);

int main (void){

    size_t n = 10;
    uint32_t *src = malloc(n *sizeof (uint32_t));
    for (size_t i = 0; i<n; i++){
        src[i] = i;

    }

    uint32_t *dst = calloc(n, sizeof(uint32_t));

    copy(dst, src, n);

    return 0;
}
