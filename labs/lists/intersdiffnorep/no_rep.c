#include "list.h"
#include <stdbool.h>


//funzione ausiliaria interna per cercare elemento all'interno della lista
static bool Find(const Item *i, const ElemType *e){
    //cerco elemento e nella lista
    for (const Item *tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)){
        if (ElemCompare(ListGetHeadValue(tmp), e)==0){
            //se sono uguali 
            return true;
        }
    }

    return false;
}

Item *IntersectNoRep(const Item *i1, const Item *i2){

    Item *ris = ListCreateEmpty();

    for (const Item *tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)){
        if (Find (i2, ListGetHeadValue(tmp)) && !Find(ris, ListGetHeadValue(tmp))) {
            //allora inserisco l'elemento
            ris = ListInsertBack(ris, ListGetHeadValue(tmp));
        }
    }

    printf("Intersecting no rep...\n");
    ListWrite(ris, stdout);

    return ris;
}

Item *DiffNoRep(const Item *i1, const Item *i2){

    Item *ris = ListCreateEmpty();

    for (const Item *tmp = i1; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)){
        if (!Find (i2, ListGetHeadValue(tmp)) && !Find(ris, ListGetHeadValue(tmp))) {
            //allora inserisco l'elemento
            ris = ListInsertBack(ris, ListGetHeadValue(tmp));
        }
    }

    printf("Diff without rep...\n");
    ListWrite(ris, stdout);

    return ris;
}
