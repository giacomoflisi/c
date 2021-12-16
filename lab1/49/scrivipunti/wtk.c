#include "wtk.h"


size_t write_points(FILE *f, const struct point *p, size_t n)
{
    size_t write = 0;

    for(size_t i = 0; i<n; i++){
        fprintf(f, "POINT(%f %f)\n", (p[i]).x, (p[i]).y);
        write++;
    }
    if(write == 0)
        return 0;

    return write;
}

int main (void)
{
//    FILE *f = fopen(stdout, "wt");
    
    struct point p[] = {
        {1, 2},
        {2, 3.4},
        {4.2, 1},
        };

    size_t n = sizeof(p)/sizeof(struct point);

    size_t wrote = 0;
    wrote= write_points(stdout, p, n);

 //   fclose(f);
    return 0;
}
