#include "tree.h"
#include <stdbool.h>

extern bool TreeIsMirror(Node *t);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4};

    Node *t1 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));

    TreeWriteStdoutInOrder(t1);
    if(TreeIsMirror(t1)){
        printf("is mirror\n");
    } else {
        printf("not a mirror\n");
    }



    //          0
    //         / \
    //        1   2
    //------------------------------------------------------


    Node *t2 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1],
                        TreeCreateRoot(&e[4], NULL, NULL),
                        TreeCreateRoot(&e[2], NULL, NULL)),
                    TreeCreateRoot(&e[1], 
                        TreeCreateRoot(&e[2], NULL, NULL),
                        TreeCreateRoot(&e[4], NULL, NULL)));
    TreeWriteStdoutInOrder(t2);
    if(TreeIsMirror(t2)){
        printf("is mirror\n");
    } else {
        printf("not a mirror\n");
    }
    //          0
    //         / \
    //        1   1 
    //       / \  /\
    //      4  2  2 4
    //------------------------------------------------------

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


    return 0;
}

