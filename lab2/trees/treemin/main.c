#include "tree.h"

extern const ElemType *BstTreeMin(const Node *n);
extern const ElemType *TreeMin(const Node *n);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5, 6, -1};

    Node *t1 = TreeCreateRoot(&e[4], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));
    //          4 
    //         / \
    //        1   2
    //------------------------------------------------------


    Node *t2 = TreeCreateRoot(&e[6], 
                    TreeCreateRoot(&e[1],
                        TreeCreateRoot(&e[4], NULL, NULL),
                        TreeCreateRoot(&e[2], NULL, NULL)),
                    TreeCreateRoot(&e[3], NULL, NULL));
    //          6 
    //         / \
    //        1   3
    //       / \
    //      4   2
    //------------------------------------------------------


    Node *bst = TreeCreateRoot(&e[2], 
                    TreeCreateRoot(&e[0],
                        TreeCreateRoot(&e[7], NULL, NULL),
                        TreeCreateRoot(&e[1], NULL, NULL)), 
                    TreeCreateRoot(&e[3],
                        TreeCreateRoot(&e[5], 
                            TreeCreateRoot(&e[4], NULL, NULL), 
                            TreeCreateRoot(&e[6], NULL, NULL)), NULL));

    //          2 
    //         / \
    //        0   3
    //       / \   \
    //      -1  1   5
    //             / \
    //            4  6
    //------------------------------------------------------



    TreeWriteStdoutInOrder(t1);
    const ElemType *t1min = TreeMin(t1);
    printf("\n");
    ElemWriteStdout(t1min);
    printf("\n");

    TreeWriteStdoutInOrder(t2);
    const ElemType *t2min = TreeMin(t2);
    printf("\n");
    ElemWriteStdout(t2min);
    printf("\n");

    TreeWriteStdoutInOrder(bst);
    const ElemType *bstmin = BstTreeMin(bst);
    printf("\n");
    ElemWriteStdout(bstmin);
    printf("\n");

    return 0;
}

