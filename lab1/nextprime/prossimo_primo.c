#include <math.h>
#include <stdbool.h>

static bool isPrimeRec (unsigned int next, unsigned int n){

    if (n == 1)
        return true;

    if (next % n == 0)
        return false;

    return isPrimeRec(next, n-1);

}

static bool isPrime (unsigned int next){

    return isPrimeRec(next, sqrt(next));
}

unsigned int prossimo_primo(unsigned int x){

    if (x == 0 || x == 1)
        return 2;

    unsigned int next;

    if (x%2 == 0)
        next = x+1;
    else
        next = x+2;


    while (!isPrime(next)){
        next+=2;
    }

    return next;
}
