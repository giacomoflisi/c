#include "tree.h"
#include <stdlib.h>

Node *GetNodeMaxK(Node *n){
    while (!TreeIsEmpty(TreeRight(n))){
            n = TreeRight(n);
    }

    return n;

}

Node *DeleteBstNodeRec(Node *n, const ElemType *key){
    //IDEA: per ogni nodo verifico se è il nodo da eliminare, 
    //  altrimenti delego alla funzione ricorsiva di scendere nell'albero
    //  fino al nodo che cerco

    if (TreeIsEmpty(n)){
        return NULL;
    }
   
    if (ElemCompare(key, TreeGetRootValue(n)) < 0){
        n->left = DeleteBstNodeRec(TreeLeft(n), key);
    } else if (ElemCompare(key, TreeGetRootValue(n)) > 0){
        n->right = DeleteBstNodeRec(TreeRight(n), key);
    } else {
        //CASO 1: se il nodo è una foglia
        if (TreeIsLeaf(n)){
            TreeDelete(n);
            return NULL;
        }
        //CASO 2: il nodo che devo eliminare ha 2 figli
        else if (TreeLeft(n) && TreeRight(n)){

            //vado a trovare il predecessore (come indicato nel testo)
            //il predecessore è il più grande tra tutti i figli
            //del sottoalbero sinistro
            Node *predecessor = GetNodeMaxK(TreeLeft(n));

            //copio il valore del predecessore nel nodo che sto eliminando
            //ed elimino il predecessore ricorsivamente.
            //Il predecessore ha al più un figlio sinistro

            ElemDelete(&n->value);
            n->value = ElemCopy(TreeGetRootValue(predecessor));
            //delego la liberazione del sottoalbero sinistro del predecessore
            //Non avrà sottoalbero destro dato che altrimenti non sarebbe il predecessore

            n->left = DeleteBstNodeRec(TreeLeft(n), TreeGetRootValue(predecessor));

            return n; //ritorno n così la funzione chiamante può aggiornare 
                        //il puntatore al proprio figlio
        }
        else {
            //CASO 3: il nodo corrente ha un solo figlio
            //  capisco di quale figlio si tratta

            Node *child;
            if (TreeLeft(n)){
                child = TreeLeft(n);
            } else {
                child = TreeRight(n);
            }
            Node *curr = n;
            n = child;

            ElemDelete(&curr->value);
            free(curr);
            return n;

        }
    }
    
    return n;
}

Node *DeleteBstNode(Node *n, const ElemType *key){
    DeleteBstNodeRec(n, key);
    return n;
}
