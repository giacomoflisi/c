#include "tree.h"
#include "elemtype.h"
#include <stdio.h>

extern Node *BstInsert(const ElemType *e, Node *n);
extern Node *BstInsertRec(const ElemType *e, Node *n);

extern int CountDominant(const Node *t);

extern const ElemType *BstTreeMax(const Node *n);
extern const ElemType *TreeMax(const Node *n);

extern const ElemType *BstTreeMin(const Node *n);
extern const ElemType *TreeMin(const Node *n);

int main (void){
    ElemType e[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
                    16, 17, 18, 19, 20, 21, 22};



    Node *t = TreeCreateRoot(e + 15,
                TreeCreateRoot(e + 10,
                    TreeCreateRoot(e + 3, NULL, NULL),
                    TreeCreateRoot(e + 12, NULL, NULL)),
                TreeCreateRoot(e + 21, NULL, NULL));

    const ElemType *res = TreeMax(t);
    printf("max is %d\n", *res);

    /*
    t = BstInsertRec(e+0, t);
    t = BstInsertRec(e+1, t);
    t = BstInsertRec(e+2, t);
    t = BstInsertRec(e+3, t);
    t = BstInsertRec(e+4, t);
    t = BstInsertRec(e+5, t);
    t = BstInsertRec(e+6, t);
    t = BstInsertRec(e+7, t);
    t = BstInsertRec(e+8, t);
    
    int dom = CountDominant(t);
    printf("tree has %d dominant nodes\n", dom);
    */

    /*
    TreeWriteStdoutPreOrder(t);
    TreeWriteStdoutInOrder(t);
    TreeWriteStdoutPostOrder(t);
    printf("...done!\n");
    */

    TreeDelete(t);
    return 0;
}
