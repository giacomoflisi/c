#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint8_t* nonogram_row(const char* s, size_t *n){


    if (!s )
        return NULL;

    (*n)= 0;
    uint8_t *out = malloc ((*n)*sizeof (uint8_t));

    size_t len = strlen(s);
    size_t out_len = 0;

    for (size_t i = 0; i<len; i++){

        if (s[i] == '*'){

            out_len++;
            //found a sequence
            
            size_t count = 1;
            size_t c = i+1;
            while (s[c] == '*'){

                count++;
                c++;
            }
            

            out = realloc(out, out_len * sizeof (uint8_t));
            out[out_len - 1] = count;
            (*n) = out_len;
            i = c;
        }


    }




    return out;
}
