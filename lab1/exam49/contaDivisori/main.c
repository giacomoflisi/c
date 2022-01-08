
#include "divisori.h"
#include <stdio.h>

int main (void){

    printf("%d divisori di 20 minori di 100\n", conta_divisori(20, 100));
    printf("%d divisori di 20 minori di 9\n", conta_divisori(20, 9));
    printf("%d divisori di 40 minori di 4\n", conta_divisori(40, 4));
    printf("%d divisori di 60 minori di 3\n", conta_divisori(60, 3));
    printf("%d divisori di 5 minori di 1\n", conta_divisori(5, 1));
    printf("%d divisori di 0 minori di 5\n", conta_divisori(0, 5));




    return 0;
}
