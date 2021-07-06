#include "tree.h"
#include <stdbool.h>

bool TreeIsMirrorRec(const Node *l, const Node *r){

    if (TreeIsEmpty(l) && TreeIsEmpty(r)){
        return true;
    }
    
    if (TreeIsEmpty(l) ||  TreeIsEmpty(r)){
        return false;
        //se solo uno dei 2 è vuoto allora non sono specchiati
        //dato che hanno struttura differente
    }

    //altrimenti confronto le 2 radici, 
    //se sono uguali e allo stesso momento i rispettivi sottoalberi hanno la config
    //specchiata ritorno TRUE
    //
    //il sottoalbero sinistro deve essere uguale al sottoalbero destro e viceversa
    return ElemCompare(TreeGetRootValue(l), TreeGetRootValue(r)) == 0 && 
             TreeIsMirrorRec(TreeLeft(l), TreeRight(r)) && 
             TreeIsMirrorRec(TreeRight(l), TreeLeft(r));  


    return false;
}

bool TreeIsMirror(const Node *t){
    return TreeIsMirrorRec(TreeLeft(t), TreeRight(t));
}
