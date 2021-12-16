
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

long long CatalanRec(long long n, long long i){


    if (n == 0)
        return 1;

    long long sum = 0;


    for (long long i = 0; i<= n-1; i++){

        sum += CatalanRec(i, 0)*CatalanRec(n-1-i, 0);

    }


    return sum;


}

void Catalan (int n){

    if (n == 0){
        printf("1");
        return;
    }

    long long sum = 0;
        
    for (long long i = 0; i<= n-1; i++){

        sum += CatalanRec(i, 0)*CatalanRec(n-1-i, 0);

    }


    printf("%lld", sum);

}

int main (int argc, char **argv){

    if (argc != 2 || atoi(argv[1]) < 0){
        return 1;

    }

    Catalan(atoi(argv[1]));

    return 0;
}
