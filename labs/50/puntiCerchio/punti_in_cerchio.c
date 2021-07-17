#include "punti_in_cerchio.h"

#include <stdlib.h>
#include <math.h>

struct punto *punti_in_cerchio(const struct punto *p, size_t n, double r, size_t *count){

    *count = 0;
    if (p == NULL || n == 0 || r < 0){
        return NULL;
    }
    struct punto *out = malloc(n*sizeof(struct punto));


    double dist = 0;
    for (size_t i = 0; i<n ;++i){

        dist = sqrt((p[i].x * p[i].x) +(p[i].y * p[i].y)) ;
        if (dist < r){
            //scrivo
            out[i].x = p[i].x;
            out[i].y = p[i].y;

            ++*count;

        }

    }

    if(*count == 0)
        return NULL;

    return out;
}
