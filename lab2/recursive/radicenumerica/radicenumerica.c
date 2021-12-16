#include <stdio.h>
#include <stdlib.h>

void radicenum(int n){

    if (n<10){
        printf("%d", n);
        return;
    }

    radicenum((n%10) + (n/10));

}

int main (int argc, char **argv){


    if (argc != 2 || atoi(argv[1]) < 0)
        return 1;

    radicenum(atoi(argv[1]));

    return 0;

}
