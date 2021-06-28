
unsigned long long fattorialeRec(int n){

    if (n==1){
        return 1;
    }

    return fattorialeRec(n-1)*n;
}

unsigned long long fattoriale(int n){
    if (n<=0){
        return -1;
    }

    return fattorialeRec(n);
}

