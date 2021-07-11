#include <stdio.h>

extern int Prodotto (int a, int b);
extern int ProdottoNegativi(int a, int b);

int main (void){




    int ret = ProdottoNegativi(1, 2);
    printf("%i\n", ret);

    ret = ProdottoNegativi(-1, 2);
    printf("%i\n", ret);

    ret = ProdottoNegativi(-4, 4);
    printf("%i\n", ret);

    ret = ProdottoNegativi(-4, -4);
    printf("%i\n", ret);


    return 0;
}
