#include "read_dvec.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dvec *read_dvec_comp(const char *filename){


    FILE *f = fopen(filename, "rb");


    if (!f){
        struct dvec *out = malloc(sizeof(struct dvec));
        out->n = 0;
        out->d = malloc(1*sizeof(double));
        out->d = NULL;
        return out;
    }
    
    size_t count =0;

    while (1){
        int c = fgetc(f);
        if (c == EOF)
            break;

        count++;
    }

    rewind(f);
    count /= 2;

    size_t i = 0;
    struct dvec *out = malloc(sizeof(struct dvec));
    out->d = malloc(count*sizeof(double));
    out->n = count;

    while (1){


        if (i == count){
            break;
        }

        short u;

        //size_t ret = fscanf(f, "%2hx", &u);
        size_t ret = fread(&u, sizeof(u), 1, f);

        

        out->d[i] = u / pow (2, 14);

        ++i;
    }

    fclose(f);
    return out;
    
}
