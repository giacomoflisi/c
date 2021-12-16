#include "lettura.h"
#include <stdlib.h>
#include <stdint.h>



int *leggiinteri(const char *filename, size_t *size){

    FILE *f = fopen(filename, "rb");

    if (f == NULL)
        return NULL;

    uint32_t n;
    size_t red = fread(&n, sizeof(n), 1, f);

    if (red != 1){
        fclose(f);
        return NULL;
    }

    int *out = malloc(n*sizeof(int));

    red = fread(out, sizeof(int), n, f);

    if (red != n){
        free(out);
        fclose(f);
        return NULL;
    }

    fclose(f);
    *size = n;
    return out;
}
