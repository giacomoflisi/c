#include "tree.h"
#include "elemtype.h"

const ElemType *BstTreeMin(const Node *n){
    //scorro tutto a sinistra nell'albero senza ricorsione

    const ElemType *min = TreeGetRootValue(n);

    while (!TreeIsEmpty(n)){

        if (TreeIsLeaf(n) || TreeIsEmpty(TreeLeft(n))){
            min = TreeGetRootValue(n);
            break;

        }
        n = TreeLeft(n);

    }
    return min;

}

static void TreeMinRec(const Node *n, const ElemType **min, int *max_lev, int curr_lev){
    //caso base albero vuoto
    if (TreeIsEmpty(n)){
        return;
    }

    //confronto il max con il nodo corrente
    if (ElemCompare(*min, TreeGetRootValue(n)) > 0){
        *min = TreeGetRootValue(n);
        *max_lev = curr_lev;
    } else if (ElemCompare(*min, TreeGetRootValue(n)) == 0 && *max_lev < curr_lev){
        //aggiorno il max solo se il livello corrente è inferiore del liv precedente
        *min = TreeGetRootValue(n);
        *max_lev = curr_lev;
    }

    //proseguo nell'analisi ricorsivamente
    TreeMinRec(TreeRight(n), min, max_lev, curr_lev+=1);
    TreeMinRec(TreeLeft(n), min, max_lev, curr_lev+=1); //dato che scendo nell'albero devo incrementare curr_lev

}

const ElemType *TreeMin(const Node *n){
    //caso particolare
    if (TreeIsEmpty(n)){
        return NULL;
    }
    //altrimenti chiamo ricorsivamente per cercare il massimo

    //setto la radice corrente dell'albero come massimo
    //la aggiorneremo in futuro

    const ElemType *min = TreeGetRootValue(n);
    int max_lev = 0;

    TreeMinRec(TreeRight(n), &min, &max_lev, 1);
    TreeMinRec(TreeLeft(n), &min, &max_lev, 1);

    return min;
}
