
#include <stdio.h>
#include <stdlib.h>

extern size_t find_first_partition(const int *seq, size_t n);


int main (void){


    int seq[] = {1, 1, 4, 3, 6, 8, 10, 7, 9};

    size_t n = sizeof seq/ sizeof *seq;

    size_t index = find_first_partition(seq, n);

    printf("first, at index %ld\n", index);

    return 0;
}
