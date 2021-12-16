#include <stdio.h>


extern int divisione(double a, double b, double *q);

int main (void){

    double res = 0;
    divisione(11, 2, &res);

    double resu = 0;
    divisione(5, 0, &resu);

    double resul = 0;
    divisione(6.6, 3.3, &resul);
    
    return 0;
}
