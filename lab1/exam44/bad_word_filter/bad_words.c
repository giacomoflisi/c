#include <string.h>
#include <stdlib.h>

void bad_word_filter(char *s, char **words, size_t nwords){

    for (size_t c = 0; c <strlen(s); c++){
        for (size_t i = 0; i<nwords;i++){
            
            char *bad = strstr(s, words[i]);

            if (bad != NULL){

                //found a bad word 
                for (size_t j = 0; j< strlen(words[i]) ; j++){
                    bad[j] = '*';
                }
            }

        }

        c++;
    }


}
