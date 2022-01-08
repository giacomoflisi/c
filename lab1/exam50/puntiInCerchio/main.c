
#include "punti_in_cerchio.h"
#include <stdio.h>

int main (void){

    struct punto p[] = {    {5, 1},
                            {4, 3.7},
                            {6.3, 8}};
    //x and y coordinates 
    //

    size_t n_points = sizeof p /sizeof *p;

    size_t count = 0;
    struct punto *points_inside = punti_in_cerchio(p, n_points, 2.0, &count);

    printf("%ld, points inside r\n", count);

    return 0;
}
