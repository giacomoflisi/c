
#include "paridispari.h"
#include <stdio.h>



int main (void){

    
    int *vec =  malloc(sizeof (int) * 9);

    for (size_t i = 0; i<9; i++){
        vec[i] = i+1;
    }




    paridispari(vec, 9);

    for (size_t i = 0; i<9; i++){
        printf("%d, ", vec[i]);
    }

    return 0;
}

/*
int main (int argc, char **argv){

    if (argc != 2)
        return -1;




    return 0;
}
*/
