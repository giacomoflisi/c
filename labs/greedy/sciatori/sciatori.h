#ifndef SCIATORI_H_
#define SCIATORI_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    double a;
    double l;
} Sciatore;

extern Sciatore *Accoppia(double *altezze, double *lunghezze, size_t v_size);
#endif //SCIATORI_H_
