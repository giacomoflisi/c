#include <stdio.h>
#include <stdlib.h>
#include "utf8.h"

int main (void){

    uint8_t *seq = malloc(4*sizeof(uint8_t));
    uint32_t codepoint = 0x0000d55c;

    size_t ret = utf8_encode(codepoint, seq);

    for (size_t i =0; i<ret; ++i){
        printf("%X |", seq[i]);
    }
    printf("returned %ld\n", ret);

    return 0;
}
