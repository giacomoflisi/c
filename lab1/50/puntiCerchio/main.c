#include "punti_in_cerchio.h"
#include <stdio.h>

int main (void){

    struct punto v[]=  {{5, 1},  {4, 3.7}, {6.3, 8} };

    size_t count = 0;
    struct punto *out = punti_in_cerchio(v, 3, 6.0, &count);

    printf("%ld returned count\n", count);

    return 0;

}
