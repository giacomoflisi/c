
#include <stdlib.h>
#include <stdbool.h>
#include "prezzo.h"

static void TrovaArticoloRec(const struct Articolo *a, size_t a_size, int sum, bool *vcurr, int i, int scurr){
    if (scurr == sum){
        //print soluzione
        for (int j = 0; j<i; ++j){
            if (vcurr[j]){
                printf("%s, ", a[j].nome);

            }

        }
        printf("\n");
        return;
    }

    if (i == a_size)
        return;

    //esploro il ramo a sinistra
    TrovaArticoloRec(a, a_size, sum, vcurr, i+1, scurr);

    //se rispetto i vincoli allora scelgo di prendere l'elemento corrente (ramo destro)
    if (scurr + a[i].prezzo <= sum){

        scurr += a[i].prezzo;
        vcurr[i] = true; //segno che ho utilizzato l'articolo

        TrovaArticoloRec(a, a_size, sum, vcurr, i+1, scurr);

        vcurr[i] = false; //reimposto per la prossima iterazione
    }
}

void TrovaArticolo(const struct Articolo *a, size_t a_size, int sum){

    if (a==NULL || a_size==0){
        return;
    }


    bool *vcurr = calloc(a_size, sizeof(bool));

    int i = 0;          //indice articolo
    int scurr = 0; //valore tot degli articoli scelti nella soluzione vcurr

    TrovaArticoloRec(a, a_size, sum, vcurr, i, scurr);

}
