#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern void bad_word_filter(char *s, char **words, size_t nwords);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    size_t nwords = 3;
    char *words[nwords];
    words[0] = "catorcio";
    words[1] = "broccolo";
    words[2] = "carciofo";

    char *frase = malloc (sizeof (char) * strlen(argv[1]));
    strcpy(frase, argv[1]);
    printf("%s\n", frase);

    printf("filtering bad words...\n");
    bad_word_filter(frase, words, nwords);

    printf("%s\n", frase);

    return 0;
}
