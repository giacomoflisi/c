
#include <stdio.h>
#include "map.h"


int main (void){

    struct connections *ret = load_connections("full.txt");

    for (size_t i = 0; i< ret->n; i++){
        for (size_t j = 0; i< ret->n; j++){
            printf("%d ", ret->data[i+j]);

        }
        printf("\n");
    }
    return 0;
}

