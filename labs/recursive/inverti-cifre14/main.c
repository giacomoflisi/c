#include <stdio.h>

extern int InvertiCifre(int n);

int main (void){

    int ret = InvertiCifre(12345);

    printf("returned %d\n", ret);


    return 0;
}
