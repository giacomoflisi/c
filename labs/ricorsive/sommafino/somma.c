#include <stdio.h>
#include "somma.h"

static int SommaFinoARec(int n){

    //caso base
    if( n==1){
        return 1;
    }

    //altrimenti richiamo ricorsivamente
    return SommaFinoARec(n-1) + n;
}

int SommaFinoA(int n){
    //caso n<=0
    if(n<=0)
        return -1;

    return SommaFinoARec(n);
}


int main (void){

    int s;
    s = SommaFinoA(1);
    printf("%d\n", s);
    s = SommaFinoA(2);
    printf("%d\n", s);
    s = SommaFinoA(3);
    printf("%d\n", s);
    s = SommaFinoA(10);
    printf("%d\n", s);
    s = SommaFinoA(100);
    printf("%d\n", s);
    s = SommaFinoA(1000);
    printf("%d\n", s);
    s = SommaFinoA(-1);
    printf("%d\n", s);


    return 0;
}
