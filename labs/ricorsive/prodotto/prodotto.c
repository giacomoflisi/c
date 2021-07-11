
void ProdottoRec(int *prod, int a, int b){
    if (b==0){
        return;
    }
    
    *prod += a;
    b--;

    ProdottoRec(prod, a, b);
}
int Prodotto(int a, int b){

    if (a<0 || b<0){
        return -1;
    }
    if (a == 0 || b==0){
        return 0;
    }

    int prod = a;
    b--;
    ProdottoRec(&prod, a, b);
    return prod;
}
