#include "razionali.h"
#include <math.h>
#include <stdlib.h>

static int mcd(int m, int n)
{
    while(m != 0 && n != 0){
        if(m>n)
            m = m % n;
        else
            n = n % m;
    }

    return m == 0 ? n : m;
}

void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b)
{
    int num = (int) a->num*b->den + b->num*a->den;
    int den = (int) b->den*a->den;

    //calcolo mcd
    int d = mcd(abs(num), den);

    ris->num = num/d;
    ris->den = den/d;
}

int main (void)
{

    struct fraz ris;
    
    struct fraz a = {1, 2}; 
    struct fraz b = {1, 3};

    fr_somma(&ris, &a, &b);

    return 0;
}
