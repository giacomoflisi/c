
#include <stdio.h>
#include <stdlib.h>

extern size_t lungh(const char *str);

int main (void){


    size_t len = lungh(NULL);
    printf("len = %ld\n", len);

    return 0;
}
