
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

extern bool crescente(unsigned int n);

int main (int argc, char **argv){

    if (argc != 2)
        return 1;

    unsigned int x = atoi(argv[1]);

    crescente(x) ? printf("true\n") : printf("false\n");

    return 0;
}
