#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

static bool isprimeRec( int n, int i){

    if (n <= 1)
        return false;

    if (i == 1)
        return true;

    if (n%i == 0)
        return false;

    return isprimeRec(n, i-1);
}

bool isprime (int n){

    return isprimeRec(n, sqrt(n));
}

int main (int argc, char **argv){


    if (argc != 2 || atoi(argv[1]) < 0)
        return 1;

    isprime(atoi(argv[1])) ? printf("true") : printf("false");

    return 0;
}
