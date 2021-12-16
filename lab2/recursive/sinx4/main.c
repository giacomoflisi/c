#include <stdio.h>

extern double Sen(double x, int i);

int main (void){

    double ret = Sen(5, 5);

    printf("returned %f\n", ret);


    return 0;
}
