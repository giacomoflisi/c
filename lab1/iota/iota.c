#include <stdint.h>
#include <stdlib.h>

void iota(uint32_t *x, size_t n){

    if (!x)
        return;

    for (size_t i = 0; i<n; i++){
        x[i] = i;
    }

}
