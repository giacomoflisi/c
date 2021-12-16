#ifndef PREZZO_H_
#define PREZZO_H_

#include <stdio.h>

struct Articolo{
    char nome[11];
    int prezzo;
};

extern void TrovaArticolo(const struct Articolo *a, size_t a_size, int sum);

#endif //PREZZO_H_
