#include <stdio.h>

extern double Binomiale(unsigned int n, unsigned int k);

int main (void){

    double ret = Binomiale(5, 5);

    printf("returned %f\n", ret);


    return 0;
}
