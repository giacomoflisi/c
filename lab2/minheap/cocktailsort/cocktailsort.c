#include <stdlib.h>
#include <stdbool.h>

void CocktailSort(int *v, size_t v_size){

    size_t start = 0;
    size_t end = v_size-1;
    bool swap = false;

    while (end > start){

        for (;start<(end-1); start++){
        
            if (v[start] > v[start+1]){
                int tmp = v[start];
                v[start] = v[start+1];
                v[start+1] = tmp;
                swap = true;
        
            }
        
        }
        
        for (start = 1; end >= start; end--){
            if (v[end] < v[end-1]){
                int tmp = v[end];
                v[end] = v[end-1];
                v[end-1] = tmp;
                swap = true;
        
            }
        
        }

        if (swap == false)
            break;

    }
}
