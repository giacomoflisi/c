
#include <stdio.h>
#include <string.h>

extern char *rimuovi_singoli_spazi(const char *s);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    printf("%s|\n", rimuovi_singoli_spazi(argv[1]));
    

    return 0;
}
