#include <stdlib.h>

void minmax(int *v, size_t n, int *min, int *max){


    if (!v || n == 0)
        return;

    *min = v[0];
    *max = v[0];

    for (size_t i = 1; i<n; i++){
        
        //look for min in v
        if (*min > v[i]){
            //swap
            *min = v[i];

        }

        //look for max in v
        if (*max < v[i]){
            //swappo
            *max = v[i];

        }

    }



}
