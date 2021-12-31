#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double area( double a, double b, double c){
    
    double res = sqrt(((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)));
    return res/4;
}

int main (int argc, char **argv){

    if(argc != 4)
        return 1;

    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);


    if (a <= 0 || b <= 0 || c <= 0){
        return 1;
    }


    printf("%lf", area(a, b, c));


    return 0;
}
