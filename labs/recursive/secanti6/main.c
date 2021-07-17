#include "secanti.h"
#include <stdlib.h>

//Dobbiamo allocare memoria e inizializzare i polinomi che vogliamo testare
//Non abbiamo bisogno di calcolare le derivate prime dei polinomi.

int main (void){

    double n;
    Polinomio p;

    //alloco per i coefficienti di p
    p.coeffs = malloc(4 * sizeof(int));
    //e inizializzo la sua size e i suoi coefficienti in modo che rappresentino 2x^3 - 3x^2 - 12x + 1
    p.size = 4;
    p.coeffs[0] = 1;
    p.coeffs[1] = -12;
    p.coeffs[2] = 3;
    p.coeffs[3] = 2;


    //chiamo
    n = Secanti(&p, -2, 4, 0.00001, -1);
    n = Secanti(&p, -2, 4, 0.00001,  4);
    n = Secanti(&p, -2, 4, 0.0000001, -1);
    n = Secanti(&p, -2, 0, 0.00001, -1);

    //libero la memoria
    free(p.coeffs);

    //preparo il vettore per testare un altro polinomio
    //magari di grado diverso...
    //...
    return 0;
}
