#include "stat.h"

#include <stdio.h>
#include <stdlib.h>


int main (void){


    unsigned int n = 10;
    double *vect1 = malloc(n * sizeof(double));

    double *vect2 = malloc(n * sizeof(double));

    for (size_t i = 0; i<n; i++){
        vect1[i] = i;
        vect2[i] = i;

    }

    double resmedia = media(vect1, n);
    double resvarianza = varianza(vect2, n);

    printf("media = %lf\nvarianza = %lf\n", resmedia, resvarianza);

    free(vect1);
    free(vect2);
    return 0;
}
