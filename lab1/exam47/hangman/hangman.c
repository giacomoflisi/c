#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char *hangman(const char *frase, const char *lettere){

    if (!frase || !lettere)
        return NULL;

    size_t l = strlen(lettere)+1;
    size_t s = strlen(frase)+1;

    char *out = malloc(s*sizeof (char));

    for (size_t i = 0; i<s ; i++){
        for (size_t j = 0; j<l ; j++){

            if (isalpha(frase[i])){
                //if current frase[i] == lettere[j]
                if (frase[i] == lettere[j] || frase[i] == toupper(lettere[j])){
                    //copy
                    out[i] = frase[i];
                    break;
                }

                out[i] = '*';

            } else {
                out[i] = frase[i];
            }

            //else look for next lettera
        }

    }

    return out;
}
