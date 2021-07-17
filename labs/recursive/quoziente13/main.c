#include <stdio.h>

extern int Quoziente(size_t x, size_t y);

int main (void){

    int ret = Quoziente(8, 3);

    printf("returned %d\n", ret);


    return 0;
}
