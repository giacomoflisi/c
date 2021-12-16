#include "list.h"
#include <stdlib.h> 

static bool Find(const Item **v, size_t vsize, const Item *i){

    for (size_t j = 0; j<vsize; ++j){
        if (v[j] == i)
            return true;

    }

    return false;
}

bool AnyLoop(const Item *i){

    const Item **v = NULL;

    size_t vsize = 0;


    while (!ListIsEmpty(i)){
        //se ho già incontrato l'elemento di indirizzo i,
        //significa che nella lista c'è un loop e ritorno TRUE;
        if (Find(v, vsize, i)){
            return true;
        }

        //aggiungo l'indirizzo dell'item corrente al vettore
        //così se dovessi incontrarlo nuovamente saprei di aver trovato un loop
        v = realloc((void*)v, (vsize+1)*sizeof(Item*));
        v[vsize++] = i;

        i = i->next;
    }

    //se usciti dal ciclo non ho ancora trovato loop, ritorno false
    return false;
}
