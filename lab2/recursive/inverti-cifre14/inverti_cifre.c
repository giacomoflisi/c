#include <stdlib.h>

static void InvertiCifreRec(int n, int *out){

    if (n<=9){
        *out += n%10;
        return;
    }

    *out += n%10;
    *out *= 10;
    

    InvertiCifreRec(n/10, out);
}

int InvertiCifre(int n){
    
    int out = 0;

    

    InvertiCifreRec(n, &out);
    return out;
}
