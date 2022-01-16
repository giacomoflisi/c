#include "tree.h"

extern bool Cugini(const Node* t, int a, int b);

int main (void){

    ElemType e[] = {0, 1, 2, 3, 4, 5, 6};

    Node *t1 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1], NULL, NULL),
                    TreeCreateRoot(&e[2], NULL, NULL));

    TreeWriteStdoutInOrder(t1);
    if (Cugini(t1, 1, 2))
        printf("t1 cugini\n");

    Node *t2 = TreeCreateRoot(&e[0], 
                    TreeCreateRoot(&e[1],
                        TreeCreateRoot(&e[4], NULL, NULL),
                        TreeCreateRoot(&e[2], NULL, NULL)),
                    TreeCreateRoot(&e[3], NULL, NULL));

    TreeWriteStdoutInOrder(t2);
    if (Cugini(t2, 4, 2))
        printf("t2 cugini\n");


    Node *bst = TreeCreateRoot(&e[2], 
                    TreeCreateRoot(&e[0], NULL, 
                        TreeCreateRoot(&e[1], NULL, NULL)),
                    TreeCreateRoot(&e[3], NULL,
                        TreeCreateRoot(&e[5],  
                            TreeCreateRoot(&e[4], NULL, NULL), 
                            TreeCreateRoot(&e[6], NULL, NULL)) ));

    TreeWriteStdoutInOrder(bst);
    if (Cugini(bst, 1, 5))
        printf("bst cugini\n");


    return 0;
}

