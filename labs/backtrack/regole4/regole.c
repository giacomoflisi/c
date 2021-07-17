#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


void RegoleRec(const char *r, int n, int i, int *vcurr, bool *used){

    //BASE: sono arrivato al livello n+1
    if (i == n+1){
        //print
        for (int j = 0 ; j<n+1; ++j){
            printf("%d ", vcurr[j]);
        }
        printf("\n");
        return;
    }

    //scelgo a turno uno dei valori compresi tra 1 e n+1
    for (int j = 1; j<= n+1; ++j){

        //variabili ausiliarie
        bool first = !used[j-1];
        bool a = i==0;
        bool b = (r[i-1] == 'i' || r[i-1] == 'I') && vcurr[i-1] < j;
        bool c = (r[i-1] == 'd' || r[i-1] == 'D') && vcurr[i-1] > j;
        bool second = a || b || c;

        if (first && second){
            //posso scegliere j
            used[j-1] = true; // segno di aver usato l'elemento
            vcurr[i] = j;       //update vettore soluzione parziale
            //chiamo ricorsivamente per i prossimi livelli
            RegoleRec(r, n, i+1, vcurr, used);

            //al termine della ricorsione devo disfare la scelta attuale,
            //  così preparo il vettore per le prossime iterazioni
            used[j-1] = false; 
        }
    }
}

void Regole(const char *r){

    size_t n = strlen(r);

    int *vcurr = malloc(n+1 *sizeof(int));
    bool *used = calloc(n+1, sizeof(bool));

    RegoleRec(r, n, 0, vcurr, used);

    free(vcurr);
    free(used);
}
