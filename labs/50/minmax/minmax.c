#include <stdlib.h>

void minmax(const int *v, size_t n, int *min, int *max){

    if (n == 0 || v == NULL)
        return;


    *min = v[0];
    for (size_t i = 1; i<n; ++i){
        

        if ( v[i] < *min){
            *min = v[i];
            continue;
        
        }

    }

    *max = v[0];
    for (size_t i = 1; i<n; ++i){
        

        if ( v[i] > *max){
            *max = v[i];
            continue;
        
        }

    }

}



