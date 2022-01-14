
#include <stdio.h>
#include <stdlib.h>

extern void quadrati_progressivi(FILE *f, int n);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    int n = atoi(argv[ 1]);
    
    FILE *f = fopen("file1.txt", "wt");


    quadrati_progressivi(f, n);

    return 0;
}
