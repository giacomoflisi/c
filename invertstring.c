
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printReverse(char *str){

    size_t len = strlen(str);
    size_t i = 0;

    char *out = malloc(len * sizeof(char) +1);


    for (; len > 0; len--){
        out[i] = str[len-1];

        i++;
    }

    printf("%s", out);
    free(out);
}

int main (int argc, char **argv){

    if (argc != 2)
        return 1;

    printReverse(argv[1]);

    return 0;
}
