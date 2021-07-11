#include <stdio.h>

extern unsigned long long Fattoriale(int n);

int main (void){


    unsigned long long f;
    f= Fattoriale(-2);
    printf("%lld\n", f);
    f= Fattoriale(1);
    printf("%lld\n", f);
    f= Fattoriale(5);
    printf("%lld\n", f);
    f= Fattoriale(19);
    printf("%lld\n", f);
    f= Fattoriale(0);
    printf("%lld\n", f);


    return 0;
}
