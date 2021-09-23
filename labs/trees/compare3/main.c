#include "tree.h"

extern bool TreeAreIdentical(const Node *t1, const Node *t2);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Node *t1 = TreeCreateRoot(&e[0], 
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

    TreeWriteStdoutInOrder(t1);
    TreeWriteStdoutInOrder(t2);

    if (TreeAreIdentical(t1, t2)){
        printf("yep identical\n");
    } else {
        printf("not identical\n");
    }

    return 0;
}

