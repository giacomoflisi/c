#ifndef NONOGRAM_H_
#define NONOGRAM_H_

#include <stdlib.h>
#include <stdbool.h>

struct nonogram{
    size_t n;
    char *schema;

};

extern bool nonogram_load(struct nonogram *ng, const char *filename);

#endif //NONOGRAM_H_
