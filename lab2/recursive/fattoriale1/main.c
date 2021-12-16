#include <stdio.h>

extern double Fattoriale(int n);

int main (void){

    double fact = Fattoriale(10);

    printf("%f returned\n", fact);

    return 0;
}
