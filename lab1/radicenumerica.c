
#include <stdio.h>
#include <stdlib.h>

int radicenumerica(int n){

    if (n < 10)
        return n;

    int unit = n%10;
    n /= 10;
    n += unit;

    return radicenumerica(n);
}

int main (int argc, char **argv){


    if (argc != 2 || atoi(argv[1]) < 0){
        return 1;
    }

    printf("%d", radicenumerica(atoi(argv[1])));




    return 0;
}
