#include "newton.h"
#include <stdlib.h>

//dobbiamo allocare la memoria e inizializzare i polinomi per poter testare la funzione.
//Inoltre per non dover calcolare a mano le derivate di ogni polinomio, 
//implementiamo una funzione D() che calcola e ritona il polinomio rappresentate
//la derivata di una funzione polinomiale.

extern double Newton(const Polinomio *p, const Polinomio *d, double xn, double t, int max_iter);

    //dato un polinomio p che rappresenta una funzione polinomiale, 
    //la funzione D() calcola e restituisce il polinomio
    //che rappresenta la derivata prima di p.
static Polinomio *D(const Polinomio *p){

    Polinomio *d = malloc(sizeof(Polinomio));

    d->size = p->size -1;
    d->coeffs = malloc(sizeof(int)*d->size); //alloco per memorizzare anche i suoi coeff.

    //calcolo il valore dei coeff della derivata
    for (unsigned i = 1; i<p->size; ++i){
        d->coeffs[i-1] = p->coeffs[i] * i;
    }

    return d;
}

int main (void){

    double n;
    Polinomio p;
    Polinomio *d;

    //alloco per i coefficienti di p
    p.coeffs = malloc(4 * sizeof(int));
    //e inizializzo la sua size e i suoi coefficienti in modo che rappresentino x^3 - 2x
    p.size = 4;
    p.coeffs[0] = 0;
    p.coeffs[1] = -2;
    p.coeffs[2] = 0;
    p.coeffs[3] = 1;

    //calcolo il polinomio che rappresenta la derivata di p usanto la funzione D()

    d = D(&p);

    //chiamo
    n = Newton(&p, d,   1, 0.00001, -1);
    n = Newton(&p, d,   1, 0.00001,  4);
    n = Newton(&p, d, 0.5, 0.00001, -1);
    n = Newton(&p, d,  -1, 0.00001, -1);

    //libero la memoria e preparo il vettore per testare un altro polinomio
    //magari di grado diverso...
    free(p.coeffs);
    free(d->coeffs);
    free(d);

    return 0;
}
