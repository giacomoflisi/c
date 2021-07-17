#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isprimeRec(int n, int i ){

    if (n % i == 0)  {
        return false;
    }

    if (i*i >n ){
        return true;
    }

    return isprimeRec(n, i+1);


}

int isprime(int argc, char **argv){

    if (argc != 2 || atoi(argv[1]) <0) {
        return 1;
    }
    
    int i = 2;

    unsigned int n = (atoi(argv[1]));

    if ( n == 2 || isprimeRec(n, i) ) {
        printf("true");

    } else {
        printf("false");
    }
    
    return 0;
}
