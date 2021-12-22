#include <math.h>
#include <stdbool.h>

static bool isPrime(unsigned int val, int i){
    
    if (i == 1)
        return true;

    if (val%i == 0 || val == 0 || val == 1 )
        return false;

    return isPrime(val, i-1);
}

int primo(unsigned int val){

    return (int)isPrime(val, sqrt(val));
}
