#include <stdio.h>

extern int Minimo(const int *v, int v_size);

int main (void){

    int min;
    const int v[] = {4};
    int v_size = 1;

    min = Minimo(v, v_size);
    printf("min is %d\n", min);

    return 0;
}
