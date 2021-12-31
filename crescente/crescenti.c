#include <stdbool.h>

static bool crescenteRec( unsigned int x , unsigned int unit){

    if (!x)
        return true;

    unsigned int curr_u = x%10;

    if (curr_u == unit-1)
        return crescenteRec(x/10, x%10);

    return false;
}

bool crescente (unsigned int x){

    if (x < 10)
        return true;

    return crescenteRec(x/10, x%10);
}
