#ifndef GIOIELLI_H_
#define GIOIELLI_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    int codice;
    float peso;
    float prezzo;
} Gioiello;

extern Gioiello *CompraGioielli(const char *filename, float budget, size_t *ret_size);

#endif //GIOIELLI_H_
