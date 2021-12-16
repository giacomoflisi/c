#include <stdio.h>

extern unsigned int PowerTwo(unsigned int n);

int main (void){

    unsigned int  ret = PowerTwo(16);

    printf("returned %d\n", ret);

    return 0;
}
