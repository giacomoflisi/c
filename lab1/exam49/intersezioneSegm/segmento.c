
#include "segmento.h"
#include <stdlib.h>

struct segmento *intersezione(struct segmento s1, struct segmento s2){

    //non valid input segment if b<a
    if (s1.b < s1.a || s2.b < s2.a)
        return NULL;

    struct segmento *out;
    
    int first_1, last_1, first_2, last_2;

    //find the lower segment
    // s1 = [1,4)       s2 = [3,5)
    if (s1.a <= s2.a){
        first_1 = s1.a;         //1
        last_1 = s1.b - 1;      //3

        first_2 = s2.a;         //3
        last_2 = s2.b - 1;      //4

    } else {
        first_1 = s2.a;
        last_1 = s2.b - 1;

        first_2 = s1.a;
        last_2 = s1.b - 1;
    }

    if (first_2 >= first_1 && first_2 <= last_1){
        // ---
        //   --
        //intersezione
        out = malloc(1*sizeof(struct segmento));

        out->a = first_2; //3
        for (int i = first_2; i<=last_1+1 && i<=last_2+1; i++){
            out->b = i;
        }

    } else {
        // ---
        //     --
        //no intersection
        return NULL;
    }


    return out;
}
