#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void hexstring2vec(const char *s, uint8_t out[8]){

    size_t len = strlen(s);
    size_t i = 0;
    size_t j = 0;


    for (size_t o = 0; o<8; ++o){
        out[o] = 0x0;
    }

    while ( i<=len){

         if (isdigit(s[i])){
             out[j] = s[i] + (48-'0');
         }

         if (isupper(s[i])){
            out[j] = tolower(s[i])+ (170 - 'a');

         }

         if (islower(s[i])){
            out[j] = s[i]+ (170-'a');

         }

         //out[j] = out[j]<<4;
         ++j;
         ++i;
         ++i;
    }

    return;
}
