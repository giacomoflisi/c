

int RecamanRec(int n){

    if (n == 1){
        return 1;
    }

    if (RecamanRec(n-1) % (n-1) == 0){
        return RecamanRec(n-1);
    }

    return (n-1) * RecamanRec(n-1);
}

int Recaman(int n){

    if (n < 1){
        return -1;
    }

    return RecamanRec(n);

}
