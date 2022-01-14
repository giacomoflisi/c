
#ifndef MAP_H_
#define MAP_H_

#include <stdlib.h>
#include <stdbool.h>

struct connections{
    size_t n;
    bool *data;
};

extern struct connections *load_connections(const char *filename);

#endif //MAP_H_
