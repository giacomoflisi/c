#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern char *hangman(const char* frase, const char* lettere);

int main (void){

    char *ret = hangman("Questa e' una frase di prova.", "rsta");

    printf("%s \n", ret);


    free(ret);
    return 0;
}
