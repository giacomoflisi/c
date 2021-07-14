#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

extern size_t find_first_partition(const int *seq, size_t n);

int main (void){

    const int seq[] = {1, 1, 4, 3, 6, 8, 10, 7, 9};
    size_t idx = find_first_partition(seq, 9);

    printf("returned %ld\n", idx);

    return 0;
}
