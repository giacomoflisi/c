
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

static bool isPrime(uint32_t n, size_t i){

    if (n == 1 || n == 0)
        return false;

    if (i == 1)
        return true;

    if (n % i == 0)
        return false;

    return isPrime(n, i-1);
}

bool primigemelli(uint32_t start, uint32_t *x, uint32_t *y){

    if (start == 0)
        start++;

    while (start < pow(2, 32)-1){
        if (isPrime(start, sqrt(start))){

            if (isPrime(start+2, sqrt(start+2))){
                (*x) = start;
                (*y) = start+2;

                return true;
            }

        }

        start++;

    }

    return false;
}
