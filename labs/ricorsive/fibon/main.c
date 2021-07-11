#include <stdio.h>

extern int Fibonacci(int n);

int main (void){

    int f = Fibonacci(5);
    printf("returned %d\n", f);

    f = Fibonacci(10);
    printf("returned %d\n", f);

    f = Fibonacci(1);
    printf("returned %d\n", f);

    f = Fibonacci(-2);
    printf("returned %d\n", f);


    return 0;
}
