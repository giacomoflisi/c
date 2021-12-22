
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

extern double calcola_seno(double x);

int main (void){

    printf("seno 0   gradi = %lf\n", calcola_seno(0));
    printf("seno 30  gradi = %lf\n", calcola_seno(M_PI/6));
    printf("seno 45  gradi = %lf\n", calcola_seno(M_PI/4));
    printf("seno 60  gradi = %lf\n", calcola_seno(M_PI/3));
    printf("seno 90  gradi = %lf\n", calcola_seno(M_PI/2));
    printf("seno 180 gradi = %lf\n", calcola_seno(M_PI));
    printf("seno 360 gradi = %lf\n", calcola_seno(2*M_PI));

    return 0;
}
