#include "tree.h"

extern int TreeHeight(const Node *t);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Node *t1 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));

    TreeWriteStdoutInOrder(t1);
    printf("%d = height\n", TreeHeight(t1));
    //          0
    //         / \
    //        1   2
    //------------------------------------------------------


    Node *t2 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1],
                        TreeCreateRoot(&e[4], NULL, NULL),
                        TreeCreateRoot(&e[2], NULL, NULL)),
                    TreeCreateRoot(&e[3], NULL, NULL));

    TreeWriteStdoutInOrder(t2);
    printf("%d = height\n", TreeHeight(t2));
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

    TreeWriteStdoutInOrder(bst);
    printf("%d = height\n", TreeHeight(bst));
    //          2 
    //         / \
    //        0   3
    //         \   \
    //          1   4
    //------------------------------------------------------


    printf("%d = height\n", TreeHeight(TreeCreateEmpty()));

    return 0;
}

