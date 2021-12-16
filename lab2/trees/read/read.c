
#include <stdio.h>
#include "tree.h"

Node *TreeReadRec(FILE *f){

    ElemType c;
    int read = fscanf(f, " %c", &c);

    if (read != 1)
        return TreeCreateEmpty();


    //leaf
    if (c == '.'){
        fscanf(f, " %c", &c);

        return TreeCreateRoot(&c, TreeCreateEmpty(), TreeCreateEmpty());
    }

    Node *l = TreeReadRec(f);
    Node *r = TreeReadRec(f);

    return TreeCreateRoot(&c, l, r);
}

Node *TreeRead(const char *filename){

    FILE *f = fopen(filename, "rt");
    
    if (!f)
        return NULL;


    Node *t = TreeReadRec(f);


    fclose(f);
    return t;
}
