#include <string.h>
#include <stdio.h>

extern char *hangman(const char *frase, const char *lettere);

int main (void){

    char *out = hangman("Il gioco dell'impiccato non e' CASE-sensitive", "aeiou");

    printf("%s\n", out);

    return 0;
}
/*
int main (int argc, char **argv){


    if (argc != 3)
        return -1;

    char *out = hangman(argv[1], argv[2]);

    printf("%s\n", out);

    return 0;
}
*/
