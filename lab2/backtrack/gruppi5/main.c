#include <stdio.h>

extern int Gruppi(const char *filename, int n);

int main (void){

    int ret = Gruppi("nomi_01.txt", 5);

    printf("returned %d\n", ret);


    return 0;
}
