#include "tree.h"

extern Node *CreateMinBinTree(const ElemType *v, size_t v_size);

int main (void){


    ElemType e[] = { 0, 4, 45, 12, 7, 88, 3, 52, 2, 78, 35, 11 };

    size_t v_size = sizeof e / sizeof *e;

    Node *out = CreateMinBinTree(e, v_size);    
    TreeWriteStdoutInOrder(out);

    TreeDelete(out);
    return 0;
}


    /*
    Node *t1 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));
              0
             / \
            1   2
    -----------------------------------------------------
    */


    /*
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
    */

    /*
    Node *bst = TreeCreateRoot(&e[2], 
                    TreeCreateRoot(&e[0],
                        TreeCreateRoot(&e[1], NULL, NULL), NULL),
                    TreeCreateRoot(&e[3],
                        TreeCreateRoot(&e[4], NULL, NULL), NULL));

    //          2 
    //         / \
    //        0   3
    //         \   \
    //          1   4
    //------------------------------------------------------
    */



