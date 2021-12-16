#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void BabboNataleRec(const int *pacchi, size_t npacchi, int p, int i, bool* vcurr, bool* vbest, int *max, int cnt, int sum ){

    if (i==npacchi){
        for (int j=0; j<npacchi; ++j){
            printf("%d ", vbest[j]);
        }
    printf("\n");

    }

    if (*max== npacchi || sum > p || cnt == npacchi){
        return;
    }



    if (sum += vcurr[i] <= p){
        vcurr[i]=1;
        vbest[i]=1;
        BabboNataleRec(pacchi, npacchi, p, i+1, vcurr, vbest, max+1, cnt+1, sum);
    }

    vcurr[i]=0;
    vbest[i]=0;
    BabboNataleRec(pacchi, npacchi, p, i+1, vcurr, vbest, max, cnt, sum);

    return;
}
void BabboNatale(const int *pacchi, size_t pacchi_size, int p){
    int i = 0; //pos attuale, livello dell'albero
    int max = 0; //numero dei regali caricati in vbest
    int cnt = 0; //numero dei regali caricati nella sol vcurr
    int sum = 0; //somma dei regali fino ad ora caricati in vcurr

    bool* vcurr = calloc(pacchi_size, sizeof(bool));
    bool* vbest = calloc(pacchi_size, sizeof(bool));

    
    BabboNataleRec(pacchi, pacchi_size, p, i, vcurr, vbest, &max, cnt, sum);


    free(vcurr);
    free(vbest);
    return;
}

int main (void){
    int portata = 20;
    int pacchi[] = {10, 11, 2, 3, 3};
    size_t npacchi = 5;

    BabboNatale(pacchi, npacchi, portata);
    return 0;
}
