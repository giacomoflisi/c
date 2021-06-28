#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void OmbrelloniRec(int k, int n, bool* vcurr, int* nsol, int i, int cnt){


    if (cnt==k){ //se ho posizionato tutti i ragazzi
        (*nsol)++;
        printf("%d) ", *nsol);
        for (int j=0; j<n; ++j){
            printf("%d ", vcurr[j]);
        }

        printf("\n");

        return;

    }

    //caso base, arrivo alla foglia
    if (i==n){
        return;
    }


    vcurr[i]=0;
    OmbrelloniRec(k, n, vcurr, nsol, i+1, cnt);

    //vincolo per cui 2 ragazzi non possono essere attaccati
    if (i==0 || vcurr[i-1] == 0){
         vcurr[i]=1;
         OmbrelloniRec(k, n, vcurr, nsol, i+1, cnt+1);
         vcurr[i]=0;
    }
}

int Ombrelloni(int k, int n){
    //se non ci possono essere soluzioni
    if (n<0 || k<0 || k+1 >= n){
        return 0;
    }

    int nsol = 0;
    int i = 0;
    int cnt = 0;

    bool *vcurr = calloc(n, sizeof(bool));

    OmbrelloniRec(k, n, vcurr, &nsol, i, cnt);

    free(vcurr);
    return nsol;
}

