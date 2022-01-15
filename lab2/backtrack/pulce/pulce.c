//f[] = prohibited positions (cannot jump here)
//f_size = sizeof f /sizeof *f
//a = forward jump len
//b = backwards jump len
//n = max number of jumps
//h = ENDPOINT (found solution)
//ret = vector of final solution
//i = choice index counter (level in the tree)
//ret_size
//pos = current pos in the field
//nsalti = current jumps count

#include <stdbool.h>
#include <stdlib.h>

static bool ForbiddenPos(const int *f,size_t f_size, int n){

    for (size_t i = 0; i< f_size; i++){
        if (n == f[i])
            return true; //forbidden position
    }

    return false;
}

void GuidaLaPulceRec(const int *f, size_t f_size, int a, int b, int n, 
                        int h, size_t i,  char *vbest, char *vcurr, int pos, size_t *sbest, size_t *ret_size){

    //base case solution
    if (pos == h && i < (size_t)n) {
        if (i < *sbest){
            *sbest = i;

            *ret_size = *sbest; 
            for (size_t b = 0; b<i; b++){
                vbest[b] = vcurr[b];
            }

        }
        return;
    }
    
    //check if we are at max jumps
    if (i >= (size_t)n){
        return;
    }

    if (!ForbiddenPos(f, f_size, pos+a)){
        pos += a;
        vcurr[i] = 'a';
        GuidaLaPulceRec(f, f_size, a, b, n, h,i+1, vbest, vcurr, pos, sbest, ret_size);

        //resetting
        pos -= a;
        vcurr[i] = 0;
    }

    if (!ForbiddenPos(f, f_size, pos-b)){
        pos -= b;
        vcurr[i] = 'b';
        GuidaLaPulceRec(f, f_size, a, b, n, h,i+1, vbest, vcurr, pos, sbest, ret_size);
    }
}

char *GuidaLaPulce(const int *f, size_t f_size, int a, int b, int n, int h, size_t *ret_size){

    char *vbest = malloc(n*sizeof(char));
    char *vcurr = malloc(n*sizeof(char));
    size_t sbest = n;
    int pos = 0;
    *ret_size = 0;

    GuidaLaPulceRec(f, f_size, a, b, (size_t)n, h, 0, vbest, vcurr, pos, &sbest, ret_size);
     
    free(vcurr);
    vbest = realloc(vbest, sbest*sizeof(char));
    return vbest;
}
