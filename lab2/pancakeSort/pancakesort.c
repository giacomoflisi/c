#include <stdlib.h>

static void flip(int *v, size_t i){

    if (i == 0)
        return;

    size_t end = i;
    for (size_t start = 0; start <= end; ){

        int tmp = v[start];
        v[start] = v[end];
        v[end] = tmp;

        start++;
        end--;
    }
}

static size_t findMax(int *v, size_t v_size){

    if (v_size == 1)
        return 0;

    int max = v[0];
    int max_idx = 0;

    for (size_t m = 1 ; m<= v_size; m++){

        if (v[m] > max){

            max = v[m];
            max_idx = m;

        }
    }
    
    return max_idx;
}

    /*
void PancakeSortRec(int *v, size_t curr_size){

    //base
    if (curr_size == 1 || !v)
        return;

    size_t max_idx = findMax(v, curr_size);
    flip (v, max_idx);
    flip (v, curr_size);

    PancakeSortRec(v, curr_size-1);
}
    */

void PancakeSort(int *v, size_t v_size){

    if (!v || v_size <= 1)
        return;

    size_t curr_size = v_size;

    //PancakeSortRec(v, curr_size);

    while (curr_size > 1){

        size_t max_idx = findMax(v, curr_size-1);

        flip(v, max_idx);
        flip(v, curr_size-1);

        curr_size -= 1;
    }

    //this is to fix a little unexplaied bug
    //where in some resulting vectors where
    //the first and second elements are inverted
    if (v[0] > v[1]){
        int tmp = v[0]; 
        v[0] = v[1]; 
        v[1] = tmp;
    }

    return;
}
