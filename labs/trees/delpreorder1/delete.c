
#include "tree.h"

void TreePreOrderDelete(Node *t){
    //preorder = print root, free, left rec, right rec

    if (TreeIsEmpty(t))
        return;


    Node *le = TreeLeft(t);
    Node *ri = TreeRight(t);

    printf("%d ", t->value);

    ElemDelete(&t->value);

    TreePreOrderDelete(le);
    TreePreOrderDelete(ri);

}
