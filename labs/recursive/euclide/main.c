#include <stdio.h>

extern int MCD(int m, int n);

int main (void){

    int ret = MCD(10, 0);

    printf("returned %d\n", ret);

    return 0;
}
