#include <stdlib.h>


void ProdottoNegativiRec(int *prod, int a, int b){

    if (b==1){
        return;
    }
    
    *prod += a;
    b--;

    ProdottoNegativiRec(prod, a, b);
}
int ProdottoNegativi(int a, int b){

    if (a == 0 || b==0){
        return 0;
    }

    int prod = abs(a);
    int foo = abs(a);
    int bar = abs(b);
    ProdottoNegativiRec(&prod, foo, bar);
    
    if ((a<0 && b>0) || (a>0 && b<0)){
        return -prod;
    }

    return prod;
}
