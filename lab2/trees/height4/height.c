
#include <stdbool.h>
#include "tree.h"

static void TreeHeightRec(const Node *t, int *best, int curr){

    if (TreeIsEmpty(t)){
        if (curr > *best)
            *best = curr;

        return;
    }


    TreeHeightRec(TreeLeft(t), best, curr+1);
    TreeHeightRec(TreeRight(t), best, curr+1);
}

int TreeHeight(const Node *t){

    int bestHeight = -1;
    
    //TreeHeightRec(TreeLeft(t), TreeRight(t), &bestHeight, 0);
    TreeHeightRec(t, &bestHeight, 0);

    return bestHeight;
}
