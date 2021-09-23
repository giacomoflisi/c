#include "tree.h"

extern Node *TreeRead(const char *filename);

int main (void){

    Node *t = TreeRead("albero_01.txt");
    TreeWriteStdoutInOrder(t);


    return 0;
}

