
#include <stdio.h>
#include <stdlib.h>

extern unsigned int somma_cifre(unsigned int x);

int main (int argc, char *argv[]){
    
    if (argc != 2)
        return -1;

    unsigned int x = atoi(argv[1]);


    unsigned int sum = somma_cifre(x);

    printf("adding together '%d' digits... %d\n", x, sum);

    return 0;
}
