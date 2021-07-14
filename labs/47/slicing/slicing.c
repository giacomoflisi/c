#include <stdint.h>
#include <stdlib.h>

int *slicing(const int *v, size_t *n, size_t start, size_t end, int step){

    int *out = malloc(*n*sizeof(int));
    size_t count = 0;

    if (step > 0){
        for (size_t i = 0; i<*n; ++i){
            if(start > end)
                break;
        
            out[i] = v[start];
            count++;
            start+=step;
            
        
        }
        *n = count;
        out = realloc(out, count*sizeof(int));
        return out;
    }

    if (step < 0){
        for (size_t i = *n-1; i>=0; --i){
            if(start > end)
                break;
        
            out[count] = v[end];
            count++;
            end-=abs(step);
            
        
        }
        *n = count;
        out = realloc(out, count*sizeof(int));
        return out;
    }

    return out;
}
