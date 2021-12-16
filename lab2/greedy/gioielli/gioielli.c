#include "gioielli.h"
#include <stdio.h>

int LeggiDati(FILE *f, Gioiello **g){
    Gioiello *letti = NULL;
    Gioiello tmp;

    int i = 0;
    while (1) {

        //leggo da file
        if (fscanf(f, "%i %f %f", &tmp.codice, &tmp.peso, &tmp.prezzo) != 3){
            break;
        }

        letti = realloc(letti, (++i)* sizeof(Gioiello));
        letti[i-1] = tmp;

    }
    //doppio puntatore per la realoc per evitare il rischio che la memoria venga spostata
    *g = letti;

    fclose(f);
    return i;
}

int TrovaMigliore(Gioiello *g, int n){
    float value_best = 0;
    int index_best = -1;

    for (int i = 0; i<n; ++i) {
        if (g[i].peso != 0) { //scorro tutti i gioielli a parte quelli con peso zero
            float cur_value = g[i].peso / g[i].prezzo;
            if (index_best == -1 || cur_value > value_best) {
                value_best = cur_value; // aggiorno best e l'indice del migliore trovato
                index_best = i;
            }
        }
    }

    return index_best;
}

Gioiello *CompraGioielli(const char *filename, float budget, size_t *ret_size){

    FILE *f;

    f = fopen(filename, "r");
    if (f == NULL){
        return NULL;
    }

    Gioiello *g; //gioielli disponibili
    int n = LeggiDati(f, &g);

    Gioiello *a; //gioielli acquistati
    a = malloc(n*sizeof(Gioiello));

    float soldi_rimasti = budget;
    (*ret_size)=0;

    while (soldi_rimasti > 0) {
        int index_best = TrovaMigliore(g, n); //ritorna l'indice dell'elemento più appetibile tra i gioielli
        if (index_best == -1) {
            //non ci sono più gioielli da comprare
            break;
        }
        if (g[index_best].prezzo <= soldi_rimasti) {
            a[(*ret_size)] = g[index_best]; //nella posizione ret_size di a vado a scrivere il gioiello più appetibile, poi incremento
            (*ret_size)++;
            soldi_rimasti -= g[index_best].prezzo;
        }
        g[index_best].peso = 0;
        //azzero il peso del gioiello acquistato (oppure di quelli troppo costosi per il budget) così non può più acquistato
    }

    free(g);
    return a;
}

int main (void){
    size_t ret_size = 3;
    Gioiello *m = CompraGioielli("gioielli_1.txt", 121, &ret_size);

    return 0;
}
