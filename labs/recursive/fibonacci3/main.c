#include <stdio.h>

extern int Fibonacci(int n);

int main (void){

    int ret = Fibonacci(5);

    printf("returned %d\n", ret);


    return 0;
}
