#include "tree.h"
#include <stdbool.h>

bool TreeIsMirrorRec(Node *l, Node *r){

    if (TreeIsEmpty(l) && TreeIsEmpty(r)){
        return true;
    }

    if (TreeIsEmpty(l) || TreeIsEmpty(r)){
        return false;
    }

    return ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) == 0 && 
        TreeIsMirrorRec(TreeLeft(l), TreeRight(r)) && 
        TreeIsMirrorRec(TreeRight(l), TreeLeft(r)); 
}

bool TreeIsMirror(Node *t){
    return TreeIsMirrorRec(TreeLeft(t), TreeRight(t));
}
