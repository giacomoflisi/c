
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *change_font(const char *s){

    if (!s)
        return NULL;

    size_t len = strlen(s);
    size_t outi = 0;
    char *out = malloc(len *sizeof (char) +1);

//    strcpy(out, s);

    for (size_t i = 0; i<len; i++){
        if (s[i] == 'A'){
            out[outi] = '4';
            outi++;
            continue;

        } else if (s[i] == 'E'){
            out[outi] = '3';
            outi++;
            continue;

        } else if (s[i] == 'I'){
            out[outi] = '1';
            outi++;
            continue;

        } else if (s[i] == 'O'){
            out[outi] = '0';
            outi++;
            continue;

        }  else if (s[i] == 'S'){
            if (s[i+1] == 'E' && s[i+2] == 'I'){
                //sei
                out[outi] = '6';
                outi++;
                i+=2;
                continue;

            }
            out[outi] = '5';
            outi++;
            continue;
        }  else if (s[i] == 'P' && s[i+1] == 'E' && s[i+2] == 'R'){
                //per
                out[outi] = 'X';
                outi++;
                i+=2;
                continue;

        } else {
            out[outi] = s[i];
            outi++;
        }

    }

    out = realloc(out, outi*sizeof (char)+1);
    out[outi] = '\0';
    return out;
}
