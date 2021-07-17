
int MCD(int m, int n){

    if (n == 0)
        return m;

    if (m<n){
        //swap
        int tmp = m;
        m = n;
        n = tmp;
    }
    

    return MCD(n, m%n);
}
