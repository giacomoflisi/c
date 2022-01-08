#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>

/*      INPUT s        |  out[0] >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> out[7]
    "12AB34CD56EF7890" | { 0x12, 0xAB, 0x34, 0xCD, 0x56, 0xEF, 0x78, 0x90}
    "12ab34cd56ef7890" | { 0x12, 0xAB, 0x34, 0xCD, 0x56, 0xEF, 0x78, 0x90}
    "35AF"             | { 0x35, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    "0A0a0B0bcCdD"     | { 0x0A, 0x0A, 0x0B, 0x0B, 0xCC, 0xDD, 0x00, 0x00}
    ""     
*/

static int hextoint(const char c){

    int i = 0;

    switch (c) {
        case 'a': i=10; break;
        case 'b': i=11; break;
        case 'c': i=12; break;
        case 'd': i=13; break;
        case 'e': i=14; break;
        case 'f': i=15; break;
        case 'A': i=10; break;
        case 'B': i=11; break;
        case 'C': i=12; break;
        case 'D': i=13; break;
        case 'E': i=14; break;
        case 'F': i=15; break;
    }

    return i;
}

void hexstring2vec(const char *s, uint8_t out[8]){

    //strlen s = maximum 16 characters
//    uint8_t msb = 0;
//    uint8_t lsb = 0;
    if (!strlen(s))
        return;

    size_t byte_c = 0;
    for (size_t i = 0; i<strlen(s); i++){

        //setting  MSB (most significant 4 bits) of out[i]
        if(isalpha(s[i])){
            out[byte_c] = hextoint(s[i]) << 4; //xxxx 0000 
        } else {
            out[byte_c] = (s[i]-48) << 4; //xxxx 0000 //-48 to convert character to int
        }

        i++;
        //setting  LEAST (least significant 4 bits) of out[i]
        if(isalpha(s[i])){
            out[byte_c] |= hextoint(s[i]); //0000 xxxx
        } else {
            out[byte_c] |= s[i]-48; //0000 xxxx
        }

        //going for next out byte...
        byte_c++;
    }

    
    for(;byte_c < 8; byte_c++){
        out[byte_c] = 0;

    }
}
