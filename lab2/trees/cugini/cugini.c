
#include "tree.h"
#include <stdlib.h>
#include <stdbool.h>

int NHeight(const Node *t, int n){

    //base
    if (*TreeGetRootValue(t) == n || TreeIsEmpty(t) || TreeIsLeaf(t))
        return 0;


    return 1+  abs(NHeight(TreeLeft(t), n) - (NHeight(TreeRight(t), n)));
}

bool SameHeight (const Node *t, int a, int b){

    if (TreeIsEmpty(t))
        return false;
    

    


    return SameHeight(TreeLeft(t), a, b);
    return SameHeight(TreeRight(t), a, b);
}

bool Brothers (const Node *t, int a, int b){

    if (TreeIsEmpty(t))
        return false;

    if ((*TreeGetRootValue(TreeLeft(t)) == a && *TreeGetRootValue(TreeRight(t)) == b ) || 
         (*TreeGetRootValue(TreeLeft(t)) == b && *TreeGetRootValue(TreeRight(t)) == a )){

        //brothers
        return true;
    }

    return Brothers(TreeLeft(t), a, b);
    return Brothers(TreeRight(t), a, b);
}

bool Cugini (const Node *t, int a, int b){

    return !Brothers(t, a, b) && SameHeight(t, a, b);
}
