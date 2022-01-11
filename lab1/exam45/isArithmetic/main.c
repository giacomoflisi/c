
#include <stdio.h>
#include <stdbool.h>

extern bool is_arithmetic(const int *v, size_t n);

int main (void){


    int v[] = {3, 3, 3,3 };

    size_t elements = sizeof v / sizeof *v;


    is_arithmetic(v, elements) ? printf("yep\n"): printf("nope\n");


    return 0;
}
