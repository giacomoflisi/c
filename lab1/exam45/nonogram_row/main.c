#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

extern uint8_t* nonogram_row(const char* s, size_t *n);

int main (void){

    char *input = "* **  ***   ****    *****     ";
    size_t mem;

    uint8_t *out = nonogram_row(input, &mem);
    
    for (size_t i = 0; i< mem; i++){
        printf("%d, ", out[i]);
    }
    

    return 0;
}
