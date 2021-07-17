#include <stdio.h>

extern size_t Hailstone(int n);

int main (void){

    size_t ret = Hailstone(5);
    printf("\n ret = %ld \n", ret);

    return 0;
}
