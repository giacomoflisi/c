
#include <stdlib.h>
#include <string.h>


char *rimuovi_singoli_spazi(const char *s){

    if (!s)
        return NULL;
    
    size_t n = strlen(s);
    char *out = malloc(n * sizeof(char)+1);

    //iterate string and remove only single spaces 

    size_t i = 0;
    size_t cnt = 0;

    for (; i<n; i++){


        if (i == 0 && s[i] == ' ' && s[i+1] != ' '){
            //single space at the beginning of string
            //don't copy
            continue;
        }

        if (s[i] == ' ' && s[i+1] != ' ' &&  s[i-1] != ' '){
            //single space int the middle ofstring
            //don't copy
            continue;
        }

        if (i == n-1 && s[i] == ' ' && s[i-1] != ' '){
            //single space at the end of string
            //don't copy
            continue;
        }

        out[cnt] = s[i];
        cnt++;

    }

    out = realloc(out, cnt*sizeof (char) + 1);
    out[cnt] = '\0';

    return out;
}


