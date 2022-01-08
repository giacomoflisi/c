
#include "WTK.h"

int main (void){

    FILE *f = fopen("file1.txt", "wt");
    if (!f)
        return -1;

    size_t elements;

    struct point p[] = {
                        {1.1, 2.2},
                        {11.5, 11.5},
                        {5.0, 3.0},
                            };

    elements =  sizeof p / sizeof *p;
    printf("%ld elements in p[]\n", elements);

    printf("%ld points written\n", write_points(f, p, elements));

    return 0;
}
