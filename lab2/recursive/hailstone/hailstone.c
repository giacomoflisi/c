
#include <stdio.h>
#include <stdlib.h>

void hailstone(int n, size_t *elem){

    //base
    if (n==1){
        printf("%d", n);
        ++(*elem);
        return;
    }

    printf("%d, ", n);
    ++(*elem);

    if (n%2 == 0){
        hailstone(n/2, elem);
    }

    if (n%2 != 0){
        hailstone(3*n +1, elem);
    }
}

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    if (atoi(argv[1]) <= 0)
        return 0;

    size_t elem = 0;
    hailstone(atoi(argv[1]), &elem);
    //printf("\n %ld elements returned\n", elem);
    return elem;
}
