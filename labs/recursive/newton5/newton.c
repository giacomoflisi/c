#include "newton.h"
#include <math.h>

    //data una funzione polinomiale, p, e un punto, xn,
    //la funzione F() calcola il valore di p nel punto.
    //Per fare ciò è sufficiente sostiruire alle incognite della funzione
    //il valore xn e risolvere
static double F(const Polinomio *p, double xn){

    double fxn = 0;     //variabile con cui viene accumulato il risultato

    for (size_t i =0; i<p->size; ++i){
        //per ogni monomio della funzione polinomiale viene calcolato
        //il prodotto tra:
        //      - il coefficiente, ovvero p->coeffs[i]
        //      - il valore xn elevato al grado del monomio i
        //e accumulato il risultato in fxn;
        fxn += pow(xn, i) * p->coeffs[i];

    }

    return fxn;

}

double Newton(const Polinomio *p, const Polinomio * d, double xn, double t, int max_iter){

    double p_xn = F(p, xn); //calcolo il valore della funzione p nel punto xn
    double d_xn = F(d, xn); //calcolo il valore della derivata d nel punto xn

    //calcolo l'approssimazione al passo corrente (n+1) secondo la formula
    double xn_1 = xn - p_xn / d_xn;


    //verifico caso base 1: l'approssimazione ottenuta è suff buona
    if (fabs(xn_1 - xn) <= t) {
        return xn_1;
    }

    //ver caso base 2: ho raggiunto il numero massimo di iterazioni
    if (max_iter == 1) {
        return xn_1;
    }

    //chiamo ricorsivamente decrementando max_iter
    return Newton(p, d, xn_1, t, max_iter - 1);

}
