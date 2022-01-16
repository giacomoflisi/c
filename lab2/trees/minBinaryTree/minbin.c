#include "tree.h"
#include <stdlib.h>
#include <string.h>

static const ElemType *Min(ElemType *v, size_t v_size, size_t *min_index ){

    if (!v)
        return NULL;

    const ElemType *min = &v[0];
    *min_index = 0;
    size_t i;

    for (i = 1; i<v_size; i++){

        if (v[i] < *min ){
            min = &v[i];
            *min_index = i;
        }
    }
    return min;
}

Node *CreateMinBinTreeRec(ElemType *v, size_t v_size){

    if (!v || v_size < 1)
        return TreeCreateEmpty();

    if ( v_size == 1){
        return TreeCreateRoot(&v[0], NULL, NULL);
    }

    size_t min_index = 0;
    const ElemType *min = Min(v, v_size, &min_index);

    ElemType vl[min_index];
    ElemType vr[v_size-min_index-1];

    size_t l = 0;
    size_t r = 0;

    //filling left vector
    for (; l < min_index;){

        vl[l] = v[l];
        l++;
    }

    //filling right vector
    for (size_t i = min_index+1; i< v_size; i++){

        vr[r] = v[i];
        r++;
    }

    return TreeCreateRoot(min, CreateMinBinTreeRec(vl, l), CreateMinBinTreeRec(vr, r));

}

Node *CreateMinBinTree(const ElemType *v, size_t v_size){

    if (!v || v_size < 1)
        return TreeCreateEmpty();

    if ( v_size == 1){
        return TreeCreateRoot(&v[0], NULL, NULL);
    }

    ElemType *vec = malloc(sizeof (ElemType) * v_size);

    memcpy(vec, v, v_size*sizeof (ElemType));

    Node *out = CreateMinBinTreeRec(vec, v_size);

    free(vec);
    return out;
}
