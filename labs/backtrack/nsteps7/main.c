#include <stdio.h>

extern int Steps(int n);

int main (void){

    int ret = Steps(3);

    printf("returned %d\n", ret);


    return 0;
}
