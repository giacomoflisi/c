#include <stdlib.h>
#include <math.h>

double media(double *x, unsigned int n){

    double res = 0;

    for(size_t i = 0; i<n; i++){

        res+=x[i];
    }

    return res/n;

}

double varianza(double *x, unsigned int n){

    if (n<2)
        return 0;

    double mu = media(x, n);

    double diffsquared = 0;
    for(size_t i = 0; i<n; i++){

        diffsquared+=pow((x[i]-mu), 2);
    }


    return diffsquared/n;
}
