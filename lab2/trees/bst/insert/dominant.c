#include "tree.h"
#include "elemtype.h"

const ElemType *SumSons(const Node *t){

    return NULL;
}


void CountDominantRec(const Node *t, int *count){

    if (TreeIsEmpty(t) || TreeIsLeaf(t)){
        return;
    }
    //se ha solo un figlio
    /*
    if (TreeIsEmpty(t->left)){
        if (ElemCompare(TreeGetRootValue(t), TreeGetRootValue(t->right)) > 0){
            (*count)+=1;
        }
    }

    if (TreeIsEmpty(t->right)){
        if (ElemCompare(TreeGetRootValue(t), TreeGetRootValue(t->left)) > 0){
            (*count)+=1;
        }
    }
    */

    if (ElemCompare(TreeGetRootValue(t), SumSons(t)) > 0){
        (*count)+=1;
    }

    CountDominantRec(t->left, count);
    CountDominantRec(t->right, count);

}

int CountDominant(const Node *t){

    //se è una foglia o è vuoto
    if (TreeIsEmpty(t) || TreeIsLeaf(t)) return 0;
    
    int count = 0;

    CountDominantRec(t->left, &count);
    CountDominantRec(t->right, &count);

    return count;
}
