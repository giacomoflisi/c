
int MinimoRec(const int* v, int v_size, int i){
    //caso base vettore lunghezza 1
    if(v_size-1==i){
        return v[i];
    }

    int min = MinimoRec( v, v_size, i +1);
    //confronto
    if (v[i] < min){
        return v[i];
    }else{
        return min;
    }

}

int Minimo(const int* v, int v_size){

    return MinimoRec(v, v_size, 0);
}

