
#include <stdio.h>

extern char *change_font(const char *s);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    printf("%s", change_font(argv[1]));
    printf("||\n");

    return 0;
}
