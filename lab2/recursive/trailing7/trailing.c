unsigned int TrailingZeros(unsigned int n){

   //base
   if (n==0){
       return 0;
   }

   unsigned int tmp = n;
   unsigned int cnt = 0;

   while (tmp % 2 == 0){
       cnt++;
       tmp /= 2;
   }

   return cnt + TrailingZeros(n-1);

   /*
    if (n == 0)
        return 0;

    n >>= 1 //shift a sinistra di 1 quindi divido per 2
    return n + TrailingZeros(n);
    */

}
