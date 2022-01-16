#include "tree.h"
#include <stdlib.h>
#include <stdbool.h>

static void NHeight(const Node *t, int n, size_t *best, size_t curr){

    //base
    if (t && *TreeGetRootValue(t) == n){
        *best = curr;
    }

    if (TreeIsEmpty(t) || TreeIsLeaf(t)){
        return;
    }


    NHeight(TreeLeft(t), n, best, curr+1);
    NHeight(TreeRight(t), n, best, curr+1);
}


bool Brothers (const Node *t, int a, int b){

    if (TreeIsEmpty(t) || TreeIsEmpty(TreeLeft(t)) || TreeIsEmpty(TreeRight(t)))
        return false;

    if ((*TreeGetRootValue(TreeLeft(t)) == a && *TreeGetRootValue(TreeRight(t)) == b ) || 
         (*TreeGetRootValue(TreeLeft(t)) == b && *TreeGetRootValue(TreeRight(t)) == a )){

        return true;
    }

    return Brothers(TreeLeft(t), a, b);
    return Brothers(TreeRight(t), a, b);
}

bool Cugini (const Node *t, int a, int b){

    size_t height_a = 0;
    NHeight(t, a, &height_a, 0);

    size_t height_b= 0;
    NHeight(t, b, &height_b, 0);

    if (!Brothers(t, a, b) && (height_a == height_b)){

        return true;
    }

    return false;
}
