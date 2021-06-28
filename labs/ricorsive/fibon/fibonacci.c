#include <stdio.h>

int FibonacciRec(int n){

    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    return FibonacciRec(n-1)+FibonacciRec(n-2);

}

int Fibonacci(int n){

    if (n<0){
        return -1;
    }

    return FibonacciRec(n);

}

int main (void){

    int f;

    f=Fibonacci(1);
    printf("%d\n", f);
    f=Fibonacci(2);
    printf("%d\n", f);
    f=Fibonacci(3);
    printf("%d\n", f);
    f=Fibonacci(5);
    printf("%d\n", f);
    f=Fibonacci(10);
    printf("%d\n", f);

    return 0;
}



