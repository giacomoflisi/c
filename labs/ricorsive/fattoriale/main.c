#include <stdio.h>

extern unsigned long long fattoriale(int n);

int main (void){


    unsigned long long f;
    f= fattoriale(2);
    printf("%lld\n", f);
    f= fattoriale(10);
    printf("%lld\n", f);
    f= fattoriale(5);
    printf("%lld\n", f);
    f= fattoriale(19);
    printf("%lld\n", f);
    f= fattoriale(-1);
    printf("%lld\n", f);


    return 0;
}
