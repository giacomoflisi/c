
unsigned int somma_cifre(unsigned int x){

    unsigned int sum = 0;

    while (x >= 10){

    sum += x % 10;
    x /= 10;
    
    }

    sum+=x;

    return sum;
}

/*
 * 187 % 10 = 7
 * 187 / 10 = 18
 *
 * 18 % 10 = 8
 * 18 / 10 = 1
 *
 * 1 % 10 = 1
 * 1 / 10 = 0
 *
 */


