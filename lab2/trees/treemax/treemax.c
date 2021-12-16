#include "tree.h"
#include "elemtype.h"

const ElemType *BstTreeMax(const Node *n){
    //scorro tutto a sinistra nell'albero senza ricorsione

    const ElemType *max = TreeGetRootValue(n);

    while (!TreeIsEmpty(n)){

        if (TreeIsLeaf(n) || TreeIsEmpty(TreeRight(n))){
            max = TreeGetRootValue(n);
            break;

        }
        n = TreeRight(n);

    }
    return max;

}

static void TreeMaxRec(const Node *n, const ElemType **max, int *max_lev, int curr_lev){
    //caso base albero vuoto
    if (TreeIsEmpty(n)){
        return;
    }

    //confronto il max con il nodo corrente
    if (ElemCompare(*max, TreeGetRootValue(n)) < 0){
        *max = TreeGetRootValue(n);
        *max_lev = curr_lev;
    } else if (ElemCompare(*max, TreeGetRootValue(n)) == 0 && *max_lev > curr_lev){
        //aggiorno il max solo se il livello corrente è inferiore del liv precedente
        *max = TreeGetRootValue(n);
        *max_lev = curr_lev;
    }

    //proseguo nell'analisi ricorsivamente
    TreeMaxRec(TreeLeft(n), max, max_lev, curr_lev+=1); //dato che scendo nell'albero devo incrementare curr_lev
    TreeMaxRec(TreeRight(n), max, max_lev, curr_lev+=1);

}

const ElemType *TreeMax(const Node *n){
    //caso particolare
    if (TreeIsEmpty(n)){
        return NULL;
    }
    //altrimenti chiamo ricorsivamente per cercare il massimo

    //setto la radice corrente dell'albero come massimo
    //la aggiorneremo in futuro

    const ElemType *max = TreeGetRootValue(n);
    int max_lev = 0;

    TreeMaxRec(TreeLeft(n), &max, &max_lev, 1);
    TreeMaxRec(TreeRight(n), &max, &max_lev, 1);

    return max;
}
