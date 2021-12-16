#include "tree.h"

extern const ElemType *BstTreeMax(const Node *n);
extern const ElemType *TreeMax(const Node *n);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5, 6};

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
                        TreeCreateRoot(&e[5], 
                            TreeCreateRoot(&e[4], NULL, NULL), 
                            TreeCreateRoot(&e[6], NULL, NULL)), NULL));

    //          2 
    //         / \
    //        0   3
    //         \   \
    //          1   5
    //             / \
    //            4  6
    //------------------------------------------------------



    const ElemType *t1max = TreeMax(t1);
    ElemWriteStdout(t1max);

    const ElemType *t2max = TreeMax(t2);
    ElemWriteStdout(t2max);

    const ElemType *bstmax = TreeMax(bst);
    ElemWriteStdout(bstmax);

    return 0;
}

