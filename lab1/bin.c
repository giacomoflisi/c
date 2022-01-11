#include <stdlib.h>
#include <stdio.h>

void printbin(int n){

    if (n == 0){
        return;
    }

    printbin(n/2);

    printf("%d", n%2);

}

int main (int argc, char *argv[]){

    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);

    if (n < 0)
        return 1;
    
    if (n == 0){
        printf("%d", n);
    } else {
        printbin(n);
    }

    return 0;
}
