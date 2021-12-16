#include <stdio.h>

extern int SubsetEqual(int n, int s);

int main (void){

    int ret = SubsetEqual(4, 6);

    printf("returned %d\n", ret);


    return 0;
}
