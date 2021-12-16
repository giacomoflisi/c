#include "tree.h"
#include <stdio.h>

//dato un albero e un nodo da aggiungere, 
//aggiungi il nodo in modo da mantenere rispettate le proprietà BST
//1. Il sottoalbero SINISTRO di un nodo contiene soltanto chiavi MINORI O UGUALI 
//      alla chiave del nodo stesso.
//2. Il sottoalbero DESTRO di un nodo contiene solamente chiavi MAGGIORI
//      della chiave del nodo.
//
Node *BstInsert(const ElemType *e, Node *n){
    if (TreeIsEmpty(n)){
        return TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
        
    }

    Node *root =  n;

    while (true){

        if (ElemCompare(e, TreeGetRootValue(n)) > 0){
            //metto a destra
            if (TreeIsEmpty(TreeRight(n))){
                //se non esiste il nodo lo creo
                n->right = TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
                break;
            } else {
                //altrimenti inserisco e basta
                n = TreeRight(n);
            }

        } else {
            //metto a sinistra
            if (TreeIsEmpty(TreeLeft(n))){
                //se non esiste il nodo lo creo
                n->left = TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
                break;
            } else {
                //altrimenti inserisco e basta
                n = TreeLeft(n);
            }
        }
    }

    //ritorno il puntatore alla radice dell'albero risultante BST
    return root;
}

Node *BstInsertRec(const ElemType *e, Node *n){
    if (TreeIsEmpty(n)){
        return TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
    }

    if (ElemCompare(e, TreeGetRootValue(n)) > 0){
        //metto a destra
        n->right = BstInsertRec(e, TreeRight(n));
    } else {
        //metto a sinistra
        n->left = BstInsertRec(e, TreeLeft(n));
    }

    return n;
}
