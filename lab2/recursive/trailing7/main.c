#include <stdio.h>

extern unsigned int TrailingZeros(unsigned int n);

int main (void){

    unsigned int ret = TrailingZeros(15);


    printf("returned %d\n", ret);

    return 0;
}
