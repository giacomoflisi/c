#include "WTK.h"
#include <stdint.h>
#include <stdio.h>

size_t write_points(FILE *f, const struct point *p, size_t n){

    if (f == NULL || p == NULL){
        return 0;
    }

    size_t w = 0;

    for (size_t i = 0; i<n; ++i){
        fprintf(f, "POINT(%g %g)\n", p[i].x, p[i].y);
        w++;

    }

    return w;
}

int main (void){

    struct point p[] = {{5, 1}, {4, 3.7}, {6.3, 8}};

    size_t n = 3;

    size_t w = write_points(stdout, p, n);

    return 0;
}
