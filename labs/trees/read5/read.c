
#include "tree.h"
#include <stdio.h>

Node *TreeReadRec(FILE *f){
    //reading one character from f
    ElemType c;
    int read = fscanf(f, " %c", &c);

    //based there is no more data to be red
    if (read !=1){
        return TreeCreateEmpty();
    }

    //based: i red '.' so now i have to read a leaf
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

    if (!f){
        return TreeCreateEmpty();
    }

    Node *t = TreeReadRec(f);

    fclose(f);
    return t;
}
