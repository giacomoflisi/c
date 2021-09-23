#include "tree.h"

extern void TreePreOrderDelete(Node *t);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Node *t1 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));

    //          0
    //         / \
    //        1   2
    //------------------------------------------------------


    Node *t2 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1],
                        TreeCreateRoot(&e[4], NULL, NULL),
                        TreeCreateRoot(&e[2], NULL, NULL)),
                    TreeCreateRoot(&e[3], NULL, NULL));


    //          0
    //         / \
    //        1   3
    //       / \
    //      4   2
    //------------------------------------------------------

    Node *bst = TreeCreateRoot(&e[2], 
                    TreeCreateRoot(&e[0],
                        TreeCreateRoot(&e[1], NULL, NULL), NULL),
                    TreeCreateRoot(&e[3],
                        TreeCreateRoot(&e[4], NULL, NULL), NULL));

    TreePreOrderDelete(bst);
    //          2 
    //         / \
    //        0   3
    //         \   \
    //          1   4
    //------------------------------------------------------


    return 0;
}

