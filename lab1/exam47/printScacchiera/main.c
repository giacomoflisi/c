#include "scacchiera.h"

#include <stdio.h>


int main (void){

    struct scacchiera s = {.caselle = { 'R', 'P', ' ', ' ', ' ', ' ', 'p', 'r',
                                        'N', 'P', ' ', ' ', ' ', ' ', 'p', 'n', 
                                        'B', 'P', ' ', ' ', ' ', ' ', 'p', 'b', 
                                        'Q', 'P', ' ', ' ', ' ', ' ', 'p', 'q',                         
                                        'K', 'P', ' ', ' ', ' ', ' ', 'p', 'k', 
                                        'B', 'P', ' ', ' ', ' ', ' ', 'p', 'b',                         
                                        'N', 'P', ' ', ' ', ' ', ' ', 'p', 'n', 
                                        'R', 'P', ' ', ' ', ' ', ' ', 'p', 'r' }};

    stampa_scacchiera( &s);

    return 0;
}
