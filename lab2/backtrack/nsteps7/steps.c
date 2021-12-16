#include <stdio.h>
#include <stdlib.h>

static void StepsRec(int n, int *vcurr, size_t i, int *nsol){

    //base
    if (n==0){
    //print sol
        printf("[");
        for (size_t j = 0; j<i-1; ++j){
            printf("%d, ", vcurr[j]); 
        }
        printf("%d], ", vcurr[i-1]);
        ++*nsol;
        return;
    }


    for (int s = 1; s<=3; ++s){
        
        if (n>=s) {
            vcurr[i] = s;
            StepsRec(n-s, vcurr, i+1, nsol);

        }
    }
}

int Steps(int n){

    //n sono i gradini di una scala.
    //ad ogni passo si può decidere di salire di 1, 2 o 3 gradini.
    //in quanti modi si può arrivare in cima?
    
    //una soluzione è valida solo se la somma dei gradini saliti è uguale ad n.

    if (n <= 0)
        return 0;

    int nsol = 0;
    int *vcurr = calloc(n, sizeof(int));

    StepsRec(n, vcurr, 0, &nsol);

    free(vcurr);
    return nsol;
}
