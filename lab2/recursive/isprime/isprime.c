#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void isprime(int n, int i){

    if (i == 1) {
        printf("true");
        return;
    }

    if (n == 1 || n == 0 || n%i == 0){
        printf("false");
        return;
    }

    isprime(n, i-1);
}

int main (int argc, char **argv){

    if (argc != 2 || atoi(argv[1]) < 0)
        return 1;

    int n = atoi(argv[1]);
    isprime(n, n/2);

    return 0;
}
