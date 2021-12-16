#include <stdlib.h>
#include "tree.h"

Node *DeleteBstNodeRec(Node *n, const ElemType *key){
    if (TreeIsEmpty(n))
        return NULL;


    //controllo la chiave corrente per decidere che albero scendere
    if (ElemCompare(key, TreeGetRootValue(n)) < 0){
        n->left = DeleteBstNodeRec(TreeLeft(n), key);
    } else if (ElemCompare(key, TreeGetRootValue(n)) > 0){
        n->right = DeleteBstNodeRec(TreeRight(n), key);
    } else {

        //caso 1: il nodo da eliminare è una foglia
        if (TreeIsLeaf(n)){
            TreeDelete(n);
            return NULL;
        }
        
        //caso 2: il nodo ha due figli
        else if (TreeLeft(n) && TreeRight(n)){
            //sostituisco...
            //devo trovare il predecessore: 
            //      sarà il figlio maggiore
            //      del sottoalbero sinistro di n
            //quindi
            Node *pred = TreeLeft(n);
        
            while(!TreeIsEmpty(TreeRight(pred))){
                pred = TreeRight(pred);
            }
        
            //elimino e copio
            ElemDelete(&n->value);
            n->value = ElemCopy(TreeGetRootValue(pred));
        
        
            //tratto il mini albero predecessore come se avesse un solo figio (sinistro)
            //dato che il destro l'abbiamo percorso fino in fondo
        
            n->left = DeleteBstNodeRec(TreeLeft(n), TreeGetRootValue(pred));
        
            return n;

        } else {

            //caso 3: il nodo ha solo un figlio, quale?
            //se ha solo il figlio destro
            Node *son;
            if (TreeLeft(n)){
                son = TreeLeft(n);

            } else {
                son = TreeRight(n);

            }

            Node *currNode = n;
            n = son;

            ElemDelete(&currNode->value);
            free(currNode);
            return n;

        }
    }

    return n;
}

Node *DeleteBstNode(Node *n, const ElemType *key){
    return DeleteBstNodeRec(n, key);
}
