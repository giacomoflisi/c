#include "segmento.h"
#include <stdlib.h>
#include <stdio.h>

int main (void){

    struct segmento s1 = { 1, 4 };
    struct segmento s2 = { -3, 105 };

    struct segmento *out = intersezione(s1, s2);

    if (!out)
        printf("function returned NULL, no intersection\n");
    else
        printf("out segment = %d --> %d\n", out->a, out->b);

    free(out);
    return 0;
}
