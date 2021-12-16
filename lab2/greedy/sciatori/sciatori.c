#include "sciatori.h"
#include <stdbool.h>
#include <math.h>
#include <float.h>

//    typedef struct {
//        double a;
//        double l;
//    } Sciatore;

Sciatore *Accoppia(double *altezze, double *lunghezze, size_t v_size){

    if (v_size == 0) {
        return NULL;
    }

    Sciatore *out = malloc (v_size * sizeof(Sciatore)); //alloco spazio per contenere le coppie

    bool *a_usate = calloc(v_size, sizeof(bool)); //creo 2 vettori di booleani che mi permettono
    bool *l_usate = calloc(v_size, sizeof(bool)); // di ricordare quali lunghezze e altezze ho già usato
                                                    //FALSE =  non ancora usata
    double best_diff = DBL_MAX;
    int best_a_idx = -1;
    int best_l_idx = -1;

    //per ogni coppia che devo creare, guardo tutte le altezze...
    for (size_t i = 0; i<v_size; ++i){
        for (size_t a = 0; a<v_size; ++a){
            if (!a_usate[a]){ //... se l'altezza corrente non è ancora stata usata, ...
                for (size_t l = 0; l<v_size; ++l){ //... la provo ad accoppiare con la lungh degli sci
                    if (!l_usate[l]){              //non ancora utilizzati
                        if (fabs(altezze[a] - lunghezze[l]) < best_diff){ //confronto la differenza a-l
                            best_diff = fabs(altezze[a] - lunghezze[l]); // con la migliore fino ad ora
                            best_a_idx = a;                              // trovata, se è migliore 
                            best_l_idx = l;                             // aggiorno best_diff e mi salvo 
                                                                        // gli indici della migliore
                        }

                    }
                }
            }
        }
        out[i].a = altezze[best_a_idx];// alla fine del ciclo mi salvo le migliori nello 
        out[i].l = lunghezze[best_l_idx];// spazio che abbiamo allocato per l'output

        //imposto la coppia che ho scelto come usata, così non la riutilizzo il prossimo ciclo
        a_usate[best_a_idx] = true;
        l_usate[best_l_idx] = true;
        best_diff = DBL_MAX;
    }

    free(a_usate);
    free(l_usate);
    return out;
}

int main (void){


    return 0;
}
