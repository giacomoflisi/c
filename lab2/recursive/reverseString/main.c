#include <stdio.h>
#include <stdlib.h>

extern char *ReverseString(const char *str);

int main (void){

    char *out = ReverseString("stringa di prova");

    printf("\n%s\n", out);
    free(out);
    return 0;
}
