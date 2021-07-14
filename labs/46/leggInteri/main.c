#include "lettura.h"
#include <stdio.h>
#include <stdlib.h>

int main (void){

    size_t size = 0;

    int *ret = leggiinteri("dati1.bin", &size);
    free(ret);

    ret = leggiinteri("dati2.bin", &size);
    free(ret);

    ret = leggiinteri("dati3.bin", &size);
    free(ret);

    ret = leggiinteri("dati4.bin", &size);
    free(ret);

    return 0;
}
