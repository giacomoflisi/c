
#include <stdio.h>
#include <stdlib.h>

extern void stampa_quadrati_concentrici(int n);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    int n = atoi(argv[1]);

    stampa_quadrati_concentrici(n);

    return 0;
}
