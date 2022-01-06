
#include "punti_in_cerchio.h"
#include <math.h>

struct punto *punti_in_cerchio(const struct punto *p, size_t n, double r, size_t *count){

    if (!p || n == 0 || r < 0)
        return NULL;

    struct punto *out = malloc(sizeof(struct punto));
    size_t o = 1;

    for (size_t i = 0; i<n; i++){
        //for each point in vector calculate distance to origin 0

        //if p[i] is in circle
        if (r >= sqrt(pow(p[i].x, 2)+(pow(p[i].y, 2)))){
                //add current point to out[]

                out = realloc(out, o*sizeof(struct punto));

                out[o-1] = p[i];
                o++;
                (*count) = o-1;
        }

    }

    //if no points are inside the circumference
    if ((o-1) == 0){
        (*count) = 0;
        free(out);
        return NULL;
    }

    return out;
}
