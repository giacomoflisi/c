#ifndef LIBRI_H_
#define LIBRI_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct libro {
  char *titolo;
  uint16_t *anni_ristampe;
};

extern bool lobro_scrivi(const struct libro *p, FILE *f);

#endif //LIBRI_H_
