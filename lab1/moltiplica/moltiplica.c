#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int multiply(const char *one, const char *two){

    int a, b;

    a = atoi(one);
    b = atoi(two);

    return a*b;
}

int main (int argc, char **argv){

    if(argc!= 3){
        fprintf(stderr, "Il numero di parametri non é corretto. Sintassi del programma: \"mul <a> <b>\"\n");
        return 1;
    }

    else{
        int mul = 0;
        mul = multiply(argv[1], argv[2]);

        printf("%d\n", mul);
    }

    return 0;
}



