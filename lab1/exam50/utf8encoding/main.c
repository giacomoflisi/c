
#include "utf8.h"
#include <stdio.h>

int main(int argc, char **argv){

    if (argc != 2)
        return -1;


    uint32_t codepoint = atoi(argv[1]);

    uint8_t seq[4] = {0, 0, 0, 0};


    printf("wrote %ld byte(s)\n", utf8_encode(codepoint, seq));

    for (size_t i = 0; i<4 ; i++){
        printf(" %x |", seq[i]);
    }


    return 0;
}
