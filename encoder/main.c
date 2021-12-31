
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void encode(char *str);
void decode(char *str);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    encode(argv[1]);

    return 0;
}
