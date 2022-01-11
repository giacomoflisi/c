
#include "nonogram.h"
#include <stdio.h>

int main (void){

    struct nonogram ng;

    nonogram_load(&ng, "nonogram1.txt");

    size_t t = 0;
    for (size_t i = 0; i < ng.n; i++){
        for (size_t j = 0; j < ng.n; j++){
            printf("%c", ng.schema[t]);
            t++;
        }
        printf("\n");
    }


    return 0;
}
