#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void SubsetKRec(int n, int k, bool* vcurr, int i, int* nsol, int cnt){

    if (cnt == k){ //posso interrompere la funzione ricorsiva preventivamente se ho già incontrato il massimo delle soluzioni
        (*nsol)++;
        printf("{ ");
        for (int j = 0; j<i; ++j) {
            if (vcurr[j]){
                printf("%d ", j);
            }
        }

        printf("}, ");
        return;
    }

    //caso base, quando il sottoalbero che abbiamo scelto corrisponde ad una foglia dell'albero
    if (i == n){ //n è il numero di livelli dell'albero e dove stanno le foglie
        return;
    }

    //scelgo di non prendere l'elemento i-esimo
    vcurr[i] = 0;
    SubsetKRec(n, k, vcurr, i+1, nsol, cnt); //chiamo ricorsivamente incrementando il livello dell'albero

    //scelgo di prendere
    vcurr[i] = 1;
    SubsetKRec(n, k, vcurr, i+1, nsol, cnt+1); //incremento cnt perchè ho scelto un elemento


}

int SubsetK(int n, int k){
    
    bool* vcurr = calloc(n, sizeof(bool));
    int nsol = 0;

    SubsetKRec(n, k, vcurr, 0, &nsol, 0);
    printf("\n");

    return nsol;
}

int main (void){
    SubsetK(4, 2);
    return 0;
}
