
unsigned int PowerTwo(unsigned int n){

    //caso base se n AND 1 quindi se n è dispari o nullo ritorno;
    if (n & 1 || n == 0){
        return 0;
    }


    return PowerTwo(n>>1) + 1;
}
