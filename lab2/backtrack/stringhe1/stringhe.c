#include <stdio.h>
#include <stdlib.h>

void BacktrackStrRec(int n, int i, char *vcurr){
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

    for (char c = 'a'; c < 'a'+n; c++){
        vcurr[i] = c;
        BacktrackStrRec(n, i+1, vcurr);
    }
}

void BacktrackStr(int n){

    //controllo input
    if (n <= 0 || n > 26){
        return;
    }

    char *vcurr = malloc(n*sizeof(char));
    BacktrackStrRec(n, 0, vcurr);

    free(vcurr);
}
