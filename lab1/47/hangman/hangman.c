#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *hangman(const char* frase, const char* lettere){

    if (frase == NULL || lettere == NULL){
        return NULL;
    }
    size_t lenfrase = strlen(frase) + 1;
    size_t lenlett = strlen(lettere) + 1;

    char *out = malloc(lenfrase*sizeof(char));


    size_t m = 'a' - 'A';

    for (size_t i = 0; i < lenfrase; ++i){
        for (size_t j = 0; j < lenlett; ++j){
            if (isalpha(frase[i])){
                if(frase[i] == lettere[j] || frase[i]+m == lettere[j]  ){
                    out[i] = frase[i];
                    break;
                
                } 
                out[i] = '*';

            } else 
                out[i] = frase[i];
        }

    }



    return out;
}
