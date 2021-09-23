#include <stdlib.h>
#include <stdio.h>

static size_t HailstoneRecRec(int n){

    printf("%d", n);

    //base
    if (n == 1)
        return 1;
    printf(", ");
    
    n = n%2 ? n*3+1 : n/2;


    return 1 + HailstoneRecRec(n);
}

static void HailstoneRec(int n, size_t *elem){

    printf("%d", n);
    ++*elem;

    //base
    if (n == 1){
        return;
    }

    printf(", ");

    //n = n%2 ? n*3+1 : n/2;

    if (n%2 == 0){
        n /= 2;
    } else {
        n = n*3+1;
    }
    HailstoneRec(n, elem);

}

size_t Hailstone(int argc, char **argv){
    
    if (argc != 2)
        return -1;

    int n = atoi(argv[1]);

    if (n<=0)
        return 0;
    
    //size_t s = 0;

    //HailstoneRec(n, &s);
    //return s;

    return HailstoneRecRec(n);
}

int main (int argc, char **argv){
    //Hailstone(argc, argv);
    size_t elem = Hailstone(argc, argv);
    printf("\n%ld elements\n", elem);

    return 0;
}
