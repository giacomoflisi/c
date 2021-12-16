#include <string.h>
#include <stdio.h>

int occor(const char *s, const char *c){

    int count = 0;
    for(size_t i = 0; i<=strlen(s); ++i){
        if(s[i] == c[0])
            count++;
    }

    return count;
}

int main (int argc, char **argv){

    if(argc!= 3){
        fprintf(stderr, "Il numero di parametri non è corretto. Sintassi del programma: \"occorenze <s> <c>\"\n");
        return 1;
    }

    else{
        int i = 0;
        i = occor(argv[1], argv[2]);
        printf("%d\n", i);
    }

    return 0;
}



