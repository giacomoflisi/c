#include "scacchiera.h"
#include <stdio.h>

//extern void stampascacchiera

int main (void){

    struct scacchiera sc = { .caselle = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    stampa_scacchiera(&sc);



    return 0;
}
