
#include "nonogram.h"
#include <stdio.h>

bool nonogram_load(struct nonogram *ng, const char *filename){

    if (!filename || !ng )
        return false;

    FILE *f = fopen(filename, "rt");

    if (!f)
        return false;

    
    size_t n = 0;
    fscanf(f, "%lu", &n);
    ng->n = n;
    ng->schema = malloc(sizeof (char) * n*n);

    int c;
    while (c != '\n'){

        c = fgetc(f);
    }

    //line 2

    size_t line = 0;
    size_t t = 0;
    while(line < n){

        for (size_t i = 0; i<n; i++){
            c = fgetc(f);
            if (c == ' '){

                ng->schema[t] = ' ';
                t++;
            } else {
                ng->schema[t] = '*';
                t++;
            }

        }

        fgetc(f);
        line++;
    }


    fclose(f);
    return true;
}
