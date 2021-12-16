#include <stdio.h>
#include <stdlib.h>

static void printbinRec(int n){

    if (n<1){
        return;
    }
    
    printbinRec(n/2);

    printf("%d", n%2);

    return;
}

int printbin(int argc, char **argv){

    if (argc != 2 || atoi(argv[1]) < 0){
        return 1;
    }

    int n = atoi(argv[1]);
    
    printbinRec(n);
    return 0;
}
