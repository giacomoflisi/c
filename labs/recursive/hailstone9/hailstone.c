#include <stdlib.h>
#include <stdio.h>

static size_t HailstoneRec(int n){

    printf("%d", n);

    if (n == 1){
        return 1;
    }

    printf(", ");

    n = n%2 ? n*3+1 : n/2;

    return 1 + HailstoneRec(n);
    /*

    if (n == 1){
        printf("1");
        (*s)++;
        return;
    }

    if ( n % 2 == 0){
        //pari
        printf("%d, ", n/2);
        (*s)++;
        HailstoneRec(n/2, s);
        return;
    }

    //dispari
    printf("%d, ", n*3+1);
    (*s)++;
    HailstoneRec(n*3+1, s);
    
    return;
*/

}

size_t Hailstone(int n){

    
    if (n<=0)
        return 0;

//    size_t s = 0;

//    HailstoneRec(n, &s);
    return HailstoneRec(n);


}
