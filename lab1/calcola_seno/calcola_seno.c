
#include <stdlib.h>
#include <math.h>

static double fact(double x){

    if (x == 0)
        return 1.;


    return x * fact(x-1);

}

double calcola_seno(double x){

    double sinx = 0;
    double sinnext = 1;
    size_t n = 0;

    
    while (sinx != sinnext){


    sinx += (pow(-1, n)/fact((2*n)+1))*pow(x, (2*n)+1);
    n++;

    sinnext = sinx + (pow(-1, n)/fact((2*n)+1))*pow(x, (2*n)+1);


    }

    return sinx;
}
