
#include <stdbool.h>
#include <math.h>

static bool isPrimeRec(unsigned int n, unsigned int i){

    if (i == 1)
        return true;

    if (n % i == 0)
        return false;

    return isPrimeRec(n, i-1);
}

bool is_ugly(unsigned int n){


    //number is ugly if its only dividers are 2, 3, or 5


    //if num prime, then not ugly
    if (isPrimeRec(n, sqrt(n))){
            return false;
    }

    for (unsigned int i = n/2; i>5; i--){
        
        if (n % i == 0 && isPrimeRec(i, sqrt(i)))
            return false;

    }

    return true;
}
