
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void encode(char *str){

    if (!str)
        return;

    int current;
    int previous = 0;
    size_t i = 0;

    while((current=str[i]) != 0 ){

        printf("%02X",(unsigned char)(current-previous));
        previous = current;
        i++;
    }

    putc('\n', stdout);

}
