#include "tree.h"

extern Node *DeleteBstNode(Node *n, const ElemType *key);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    Node *bst2 = TreeCreateRoot(&e[5],
                    TreeCreateRoot(&e[3],
                        TreeCreateRoot(&e[1],
                            TreeCreateRoot(&e[0], NULL, NULL),
                            TreeCreateRoot(&e[2], NULL, NULL)),
                        TreeCreateRoot(&e[4], NULL, NULL)),
                    TreeCreateRoot(&e[10],
                        TreeCreateRoot(&e[8],
                            TreeCreateRoot(&e[6], NULL, NULL),
                            TreeCreateRoot(&e[9], NULL, NULL)),
                        TreeCreateRoot(&e[11], NULL, 
                            TreeCreateRoot(&e[12], NULL, NULL))));

    TreeWriteStdoutInOrder(bst2);


    const ElemType *key = &e[5];

    printf("removing key... %d...\n", *key);
    bst2 = DeleteBstNode(bst2, key);

    TreeWriteStdoutInOrder(bst2);

    TreeDelete(bst2);
    return 0;
}

