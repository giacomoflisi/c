#include <stdlib.h>

int *slicing(int *v, size_t *n, size_t start, size_t end, int step){

    size_t begin = start;
    size_t finish = end;

    int *out = malloc(*n * sizeof(int));
    size_t o_cnt = 0;

    if (step < 0){
        //swap start and end
        begin = end;
        finish = start;

        for (size_t i = begin; i>=finish; i+=step){
            out[o_cnt] = v[i];


            o_cnt++;
        }

        out = realloc(out, o_cnt*sizeof(int));
        (*n) = o_cnt;

        return out;
    }

    for (size_t i = begin; i<=finish; i+=step){
        out[o_cnt] = v[i];


        o_cnt++;
    }

    out = realloc(out, o_cnt*sizeof(int));
    (*n) = o_cnt;

    return out;

}
