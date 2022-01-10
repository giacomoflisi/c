
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//returns the first element of seq that is both max of
//the first ones and smallest of the next ones

//{5, 1, 4, 3, 6, 8, 10, 7, 9} n = 9

//returnpos of first partitio = 4

static bool isMin(const int *v, size_t n){

    if (n == 1)
        return true;

    for (size_t i = 1; i<n; i++){
        if ( v[0] >= v[i])
            return false;
    }

    return true;

}

static bool isMax(const int *v, size_t n){

    for (size_t i = 0; i<n-1; i++){
        if (v[i] >= v[n-1])
            return false;
    }

    return true;
}

size_t find_first_partition(const int *seq, size_t n){

    if(!seq || n <= 1)
        return 0;

    size_t pos = 0;

    int *prec = malloc(n * sizeof (int));
    int *succ = malloc(n * sizeof (int));

    bool done = false;

    
    for (size_t i = 0; i<n; i++){

        prec = realloc(prec, (i+1) * sizeof(int));
        succ = realloc(succ, (n-i) * sizeof(int));

        memcpy(prec, &seq[0], (i+1) * sizeof(int));
        memcpy(succ, &seq[i], (n-i) * sizeof(int));

        if (isMax(prec, i+1) && isMin(succ, n-i)){
            pos = i;
            done = true;
            break;
        }
    }
    

    free(prec);
    free(succ);

    if (done){
        return pos;
    }

    //not found
    return n;
}
