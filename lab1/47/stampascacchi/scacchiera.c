#include "scacchiera.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stampa_scacchiera(const struct scacchiera *sc){

    if (sc == NULL)
        return;

    size_t rows = 8;
    size_t cols = 8;


    for (size_t r = rows; r>0; r--){
        printf("+---+---+---+---+---+---+---+---+\n");
        for (size_t c = cols ; c>0; c--){
            //printf("| %c ", sc->caselle[r*cols+c]);
            printf("| %c ", sc->caselle[(c-1)*(rows)+r-1]);

        }
        printf("|\n");
    }
    
    printf("+---+---+---+---+---+---+---+---+\n");


    /*
    for (size_t c = 0; c<cols; ++c){
        printf("+---+---+---+---+---+---+---+---+\n");
        for (size_t r = 0; r<rows; ++r){
            //printf("| %c ", 'a');
            printf("| %c ", sc->caselle[c*rows+r]);

        }
        printf("|\n");
    }
    
    printf("+---+---+---+---+---+---+---+---+\n");

    */


}
