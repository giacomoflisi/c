#ifndef PUNTI_IN_CERCHIO_H_
#define PUNTI_IN_CERCHIO_H_

#include <stdlib.h>

struct punto {

    double x, y;
};

extern struct punto *punti_in_cerchio(const struct punto *p, size_t n, double r, size_t *count);

#endif //PUNTI_IN_CERCHIO_H_
