
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
static bool ismin(int *next, int m, size_t last){

    for (size_t i = 0; i<last; ++i){

        if( m >= next[i]){

            return false;
        }

    }

    return true;
}

static bool ismax(int *prev, int m, size_t mid){

    for (size_t i = 0; i<mid; ++i){

        if( m <= prev[i]){

            return false;
        }

    }

    return true;
}


size_t find_first_partition(const int *seq, size_t n){

    if (seq == NULL || n == 0){
        return 0;
    }

    size_t idx = 0;

    int *prev = malloc(n*sizeof(int));
    int *next = malloc(n*sizeof(int));

    while(idx < n){
        size_t i, pr = 0, ne = 0;

        for (i = 0; i<=idx ; ++i){
            //prev[pr] = abs(seq[i]);
            prev[pr] = seq[i];
            ++pr;
        
        }
        
        for (i = idx+1; i<n ; ++i){
            //next[ne] = abs(seq[i]);
            next[ne] = seq[i];
            ++ne;
        
        }

        if(ismax(prev, seq[idx], idx) && ismin(next, seq[idx], n-idx-1)){
            free(prev);
            free(next);
            return idx;
        }


        prev = calloc(n, sizeof(int));
        next = calloc(n, sizeof(int));
        ++idx;

    }
    free(prev);
    free(next);

    return n;

}
