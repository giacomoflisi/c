#include "domino.h"
#include <stdlib.h>
#include <stdbool.h>

static void DominoRec(const Tessera *t , Placing *p, size_t t_size, size_t *ret_size, size_t curr, size_t *bestsize){
    //se sono all'ultima tessera 
    if (curr == t_size-1){

        if (t[curr].val1 == t[p->indice].val2){
            p[curr].flipped = false;
            p[curr].indice = curr;
            (*ret_size)++;
            (*bestsize)++;
            return;
        } else if (t[curr].val2 == t[p->indice].val2){
            p[curr].flipped = true;
            p[curr].indice = curr;
            (*ret_size)++;
            (*bestsize)++;
            return;
        }

        return;
    }

    //se è la prima tessera
    if (curr == 0){
        p[curr].indice = curr;
        p[curr].flipped = false;

        (*ret_size)++;
        (*bestsize)++;
        DominoRec(t, p, t_size, ret_size, curr+=1, bestsize);

    }


    if (t[curr].val1 == t[p->indice].val2){
        p[curr].flipped = false;
        p[curr].indice = curr;

        (*ret_size)++;
        (*bestsize)++;
        DominoRec(t, p, t_size, ret_size, curr+=1, bestsize);

    } else if (t[curr].val2 == t[p->indice].val2){
        p[curr].flipped = true;
        p[curr].indice = curr;
        
        (*ret_size)++;
        (*bestsize)++;
        DominoRec(t, p, t_size, ret_size, curr+=1, bestsize);
    }
    //scarto la carta

    DominoRec(t, p, t_size, ret_size, curr+=1, bestsize);


}

Placing *Domino(const Tessera *t, size_t t_size, size_t *ret_size){
    if (t == NULL)
        return NULL;

    Placing *p = malloc(t_size * sizeof(Placing));

    size_t curr = 0;
    size_t bestsize = 0;

    DominoRec(t, p, t_size, ret_size, curr, &bestsize);

    return p;
}
