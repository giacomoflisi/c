#include "domino.h"
#include <stdlib.h>
#include <stdint.h>

int main (void) {

    Tessera t[] = { { .val1 = 5, .val2 = 3 }, { .val1 = 5, .val2 = 6 }, { .val1 = 6, .val2 = 2 }, { .val1 = 5, .val2 = 6 } };

    size_t t_size = 4;

    size_t ret_size = 0;

    Placing *p = Domino(t, t_size, &ret_size);

    return 0;
}
