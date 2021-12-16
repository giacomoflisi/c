#ifndef VETTORE_H_
#define VETTORE_H_

#include "elemtype.h"

typedef struct {
    size_t capacity;
    size_t size;
    ElemType *data;
} Vector;

extern Vector *VectorRead(const char *filename);
extern Vector *VectorReadSorted(const char *filename);

#endif //VETTORE_H_
