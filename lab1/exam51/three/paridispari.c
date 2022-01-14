#include "paridispari.h"


void paridispari(int *v, size_t n){

    if (!v || n == 0)
        return;

    for (size_t i= 0; i<n; i++){

        if (v[i] % 2 != 0){
            //dispari
            for (size_t j = i+1; j<n; j++){
                if (v[j] % 2 == 0){
                    //swap
                    int tmp = v[i];
                    v[i] = v[j];
                    v[j] = tmp;
                    break;
                }

            }
            
        } else 
            continue;


    }


}
