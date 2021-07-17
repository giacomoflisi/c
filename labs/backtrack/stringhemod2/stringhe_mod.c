#include <stdio.h>
#include <stdlib.h>

void BacktrackStrModRec(int n,int k, int i, char *vcurr){
    //base: sono arrivato ad una foglia
    if (i == n){
        //stampa curr
        printf("{ ");
        for (size_t j = 0; j<n; j++){
            printf("%c", vcurr[j]);
        }
        printf(" }, ");
        return;
    }

    for (char c = 'a'; c < 'a'+k; c++){
        vcurr[i] = c;
        BacktrackStrModRec(n,k, i+1, vcurr);
    }
}

void BacktrackStrMod(int n, int k){

    //controllo input
    if (n <= 0 || k > 26 || k<= 0){
        return;
    }

    char *vcurr = malloc(n*sizeof(char));
    BacktrackStrModRec(n, k,  0, vcurr);

    free(vcurr);
}
