#include "read_dvec.h"
#include <math.h>
#include <stdio.h>

struct dvec *read_dvec_comp(const char *filename){


    FILE *f = fopen(filename, "rb");

    struct dvec *out = malloc(sizeof(struct dvec));
    out->n = 0;
    out->d = NULL;

    //if file doesn't exist
    if (!f){
        return out;
    }

    //if file empty 
    if (fgetc(f) == EOF){
        fclose(f);
        return out;
    }

    size_t cnt = 1; //bytes red
    while(1){

        int c = fgetc(f);
        if (c == EOF)
            break;

        cnt++;
    }

    //rewinding file
    rewind(f);
    cnt /= 2; //shorts red

    //allocating struct for cnt doubles
    out->d = malloc(cnt * sizeof (double));
    out->n = cnt;

    size_t i= 0;
    while(1){

        if (i == cnt)
            break;

        short u = 0; //16bytes

        //reading 2 bytes and storing in u
        fread(&u, 2, 1, f);

        out->d[i] = u / pow(2, 14);

        i++;
    }

    fclose(f);
    return out;
}
