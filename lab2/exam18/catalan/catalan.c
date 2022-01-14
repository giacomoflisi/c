

#include <stdio.h>
#include <stdlib.h>

static long long catalanRec(long long n){

    if (n== 0)
        return 1;

    long long sum = 0;

    for(long long i = 0; i<=n-1; i++){

        sum += catalanRec(i) * catalanRec(n-1-i);

    }


    return sum;
}

static void catalan(int n){

    if (n == 0){
        printf("1");
        return;
    }

    long long sum = 0;

    for(long long i = 0; i<=n-1; i++){

        sum += catalanRec(i) * catalanRec(n-1-i);

    }

    printf("%lld", sum);
}


int main (int argc, char **argv){


    if (argc != 2 || atoi(argv[1]) < 0)
        return 1;

    catalan(atoi(argv[1]));


    return 0;
}

