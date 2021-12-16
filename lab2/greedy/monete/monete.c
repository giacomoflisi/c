#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

//ritorna un vettore di int allocato dinamicamente lungo 'tagli_size' dove in ogni posizione metto il numero
//di monete che ho scelto di quel valore 

//Ad esempio, con tagli = {50,20,10,5,2,1} e budget = 126

//L'output della funzione dovrà essere il vettore    {2,1,0,1,0,1}

int* Monete( int* tagli, size_t tagli_size, int budget){
    if (budget <= 0){
        return NULL;
    }

    int* res = calloc(tagli_size, sizeof(int));

    //scorro il vettore di tagli
    for (size_t i = 0; i<tagli_size; ++i){
        
        //calcolo quanto il valore della moneta corrente sta nel budget rimasto, 
        res[i] = budget/tagli[i];
        //aggiorno il budget
        budget = budget % tagli[i];

    }

    return res;
}

int main (void){

    int tagli[] = {50, 20, 10, 5, 2 ,1 };
    size_t tagli_size = sizeof(tagli)/sizeof(*tagli);
    
    int* res = Monete(tagli, tagli_size, 126);
    free(res);

    return 0;
}
