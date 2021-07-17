#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//i: indice scelta corrente, ovvero il livello dell'albero
//vcurr: vettore di bool che rappresenta le scelte fatte fino ad ora
//      se vcurr[i] == true  allora il numero i fa parte dell'insieme corrente.
//scurr: somma elementi correnti della soluzione parziale
//nsol: puntatore che contiene il numero delle soluzioni valide trovate fino ad ora

static void SubsetEqualRec(int n, int s, int i, bool *vcurr, int *nsol, int sum){

    //BASE 1 
    //ho trovato una soluzione
    if (sum == s){
        (*nsol)++; //incremento
        //stampo
        printf("{ ");

        for (int j = 1; j<=n; ++j){
            if (vcurr[j]){
                printf("%d ", j);
            }

        }

        printf("}, ");
        return;
    }

    //BASE 2
    //ho finito gli elementi da considerare
    if (i > n){
        return;
    }

    //scelgo di usare l'elementi di valore i
    if (sum + i <= s){
        vcurr[i] = true;

        SubsetEqualRec(n, s, i+1, vcurr, nsol, sum + i);

        //ripristino lo stato delle variabili correnti
        //per la prossima ricorsione
        vcurr[i] = false;
        
    }

    //non scelgo di usare i
    SubsetEqualRec(n, s, i+1, vcurr, nsol, sum);
}

int SubsetEqual(int n, int s){

    //stampa su stdout tutti i sottoinsiemi da 1 a n per i quali
    //  la somma degli elementi è esattamente s e ritorna il numero di soluzioni trovate.

    if (n <= 0 || s <= 0){
        return 0;
    }

    bool *vcurr = calloc(n+1, sizeof(bool));
    int nsol = 0;
    int sum = 0;
    SubsetEqualRec(n, s, 1, vcurr, &nsol, sum);

    free(vcurr);
    return nsol;
}
