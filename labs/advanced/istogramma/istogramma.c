#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* vec= 1231234 quindi scrivo tante linee qunnto il valore più alto (4)
 *  stampo tante colonne quante n, la dimensione del vettore
 *
 *       |
 *   |  ||
 *  || |||
 * |||||||
 *
 * */

void disegna(uint8_t* h, size_t n, FILE *fout)
{
    //cerco il massimo del vettore
    int l= 0;
    for(size_t i = 0; i<n ; i++){
        if(h[i]>l)
            l= h[i];
    }

    for(size_t j = l; j>0; j--){
        for (size_t i = 0; i<n; i++){
            //se l'elemento i-esimo è >= j scrivo '|' altrimenti ' '
            if(h[i] >= j)
                fputc('|', fout);
            else
                fputc(' ', fout);
        }
        fputc('\n', fout);
    }
}

int main (void)
{
    uint8_t vec[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(vec);

    FILE *f = fopen("isto1.txt", "wt");

    disegna(vec, n, stdout);

    fclose(f);
    return 0;
}
