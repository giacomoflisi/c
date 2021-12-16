
#include <stdio.h>
#include <stdlib.h>

void printbinRec(int n){

    if (n == 0)
        return;

    printbinRec(n/2);

    printf("%d", n%2);
}

void printbin(int n){

    if (n == 0){
        printf("%d", n);
        return;
    }

    printbinRec(n);
}

int main (int argc, char **argv){

    if (argc != 2 || atoi(argv[1])<0){
        return 1;
    }

    printbin(atoi(argv[1]));

    return 0;

}
