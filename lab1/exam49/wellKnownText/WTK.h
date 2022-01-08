#ifndef WTK_H_
#define WTK_H_

#include <stdio.h>
#include <stdlib.h>

struct point{
    double x, y;

};

extern size_t write_points(FILE *f, const struct point *p, size_t n);

#endif //WTK_H_
