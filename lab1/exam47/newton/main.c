
#include <stdio.h>

extern double newton(double m1, double m2, double d);

int main (void){

    double dist_m = 5.97e+24;
    double massa1 = 6.70e+22;
    double massa2 = 3.84e+08;

    double eff = newton(massa1, massa2, dist_m);
    printf("%e force\n", eff);

    return 0;
}
