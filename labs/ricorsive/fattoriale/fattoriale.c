
unsigned long long fattorialeRec(int n){

    if (n==1){
        return 1;
    }

    return fattorialeRec(n-1)*n;
}

unsigned long long Fattoriale(int n){
    if (n<0){
        return 0;
    }
    if (n==0){
        return 1;
    }

    return fattorialeRec(n);
}

