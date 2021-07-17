#include <stdint.h>
#include <stdio.h>

void stampa_quadrati_concentrici(int n){

    if (n <= 0){
        return;
    }
    if (n == 1){
        printf("%d\n", n);
        return;
    }

    size_t size = n*2-1;

    for(size_t  i = 0; i<size; ++i){
        for (size_t j = 0; j<size; ++j){

            if (i>n)
                break;
            printf("%ld ", n-i);

        }

        printf("\n");

    }


}
