#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern void hexstring2vec(const char *s, uint8_t out[8]);


int main (void){


    uint8_t *out = malloc(8* sizeof(uint8_t));

    hexstring2vec("35FA", out);
    for (size_t i = 0; i<8; ++i){
        printf("%x ,", out[i]);
    }
    printf("\n");

    hexstring2vec("12AB34CD56EF7890", out);

    return 0;

}
