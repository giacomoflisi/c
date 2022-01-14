

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

extern bool primigemelli(uint32_t start, uint32_t *x, uint32_t *y);


int main (void){

    uint32_t start = 0;
    uint32_t x, y;


    primigemelli(start, &x, &y)? printf("true, %d %d\n", x, y): printf("false\n");


    return 0;
}

