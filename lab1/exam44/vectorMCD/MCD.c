#include <stdlib.h>
#include <stdint.h>

static uint32_t mcd_rec(uint32_t a, uint32_t b){

    if (a == b || a == 0 || b== 0)
        return a;
    
    if (a > b)
        return mcd_rec(a-b, b);

    return mcd_rec(a, b-a);

}

uint32_t vector_MCD(const uint32_t *v,  size_t n){

    if (!v || n== 0)
        return 0;

    uint32_t result = v[0];
    for (size_t  i = 1; i<n ; i++)
    {
        result = mcd_rec(v[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

