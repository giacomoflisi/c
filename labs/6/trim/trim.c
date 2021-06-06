#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *trim(const char *s)
{
    if(s == NULL)
        return NULL;

    char *trimmed=malloc(strlen(s)+1);
    size_t t =0;
    size_t i =0;

    //rimuovo spazi all'inizio
    while(s[i] != '\0')
    {

        if(isalpha(s[i])){
            for(; s[i]!= '\0'; i++){
                trimmed[t] = s[i];
                t++;
            }
            break;
        }
        else if(s[i] ==' '){
            i++;
        }
    }

    //rimuovo spazi in coda
    size_t n = strlen(s); //16 senza terminatore
    size_t endspaces = 0;

    for(size_t f=n-1;!isalpha(s[f]);f--){
        endspaces++;
    }

    trimmed = realloc(trimmed, n-endspaces);
    trimmed[n-endspaces] = '\0';

    printf("%s|\n", trimmed);
//    free(trimmed);

    return trimmed;
}

int main (void)
{
    char *trimed = trim("  trimma questa ");    

    free(trimed);
    return 0;
}
