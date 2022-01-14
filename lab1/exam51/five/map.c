#include "map.h"
#include <stdio.h>

struct connections *load_connections(const char *filename){

    FILE *f = fopen(filename, "rt");

    if (!f)
        return NULL;

    struct connections *out = malloc(sizeof (struct connections));
    fscanf(f, "%ld", &out->n);
    out->data = calloc(out->n, sizeof (bool));

    while (1){
        int c =fgetc(f);
        if (c == '\n')
            break;

    }
 
    int num;
    while (1){

        for (size_t r = 0 ; r<out->n; r++){
            fscanf(f, "%d", &num);
            out->data[r*(out->n)+num] = true;
            fscanf(f, " ");

            /*

            if (c == EOF){
                break;
            } else if (c == '.'){

                continue;
            } else if (c == ' '){
                continue;
            }
            */
                
        }


        break;


    }



    return out;
}
