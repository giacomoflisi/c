
#include <stdlib.h>

#include <stdio.h>


int main (int argc, char **argv){

    if (argc != 2)
        return 1;


    FILE *f = fopen(argv[1], "rt");
    
    if (!f)
        return 1;


    size_t rows = 1; 
    int c;

    for (; rows <= 10; rows++){

        
        while (1){
            c = fgetc(f);

            if (c == '\n'){
                printf("\n");
                break;

            } else if (c == EOF){
                printf("\n");
                return 0;
            }
            printf("%c", c);

        }


    
    }


    return 0;
}
