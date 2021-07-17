#include <stdio.h>

extern int MCD(int m, int n);

int main (void){

    int ret = MCD(50, 24);

    printf("returned %d\n", ret);


    return 0;
}
