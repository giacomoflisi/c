
#include <stdio.h>

static size_t max(size_t i, size_t j){

    if (i<j)
        return j;
    else
        return i;
}

void quadrati_progressivi(FILE *f, int n){

    if (n <0)
        return;

    for (size_t i = 0; i<(size_t)n; i++){
        for (size_t j = 0; j<(size_t)n; j++){
            fprintf(f, "%ld ", (max(i,j)+1) % 10);
        }
        fprintf(f, "\n");

    }

}
