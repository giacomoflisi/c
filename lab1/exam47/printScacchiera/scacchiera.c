#include "scacchiera.h"
#include <stdio.h>

void stampa_scacchiera(const struct scacchiera *sc){

    for (size_t c = 8 ; c>0 ; c--){

        //newline
        printf("+---+---+---+---+---+---+---+---+\n");

        for ( size_t r = 0; r<64; r+=8){



            printf("| %c ", sc->caselle[r+c-1]);
        }
        printf("|\n");

    }

    printf("+---+---+---+---+---+---+---+---+\n");


    return;
}
