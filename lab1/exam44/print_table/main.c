#include <stdint.h>
#include <stdio.h>

extern void print_table(char **colnames, uint8_t ncols, uint8_t nrows);


int main (void){

    uint8_t ncols = 4;

    char **colnames = 0;

    colnames[0] = "cat";
    colnames[1] = "deer";
    colnames[2] = "deer";
    colnames[3] = "dog";

    uint8_t nrows = 3;

    print_table(colnames, ncols, nrows);
    return 0;
}

