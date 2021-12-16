#include "file.h"
#include <stdio.h>

extern int scrivi_conta_caratteri(FILE *f, const char* s);

int main (void){

    FILE *f = fopen("prova", "wt");

    int ret = scrivi_conta_caratteri(f, "scrivimi su file per completare l'esercizio.");



    printf("%d returned\n", ret);
    return 0;
}
