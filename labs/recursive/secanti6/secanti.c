
#include "secanti.h"
#include <math.h> //fabs(), pow()

static double F(const Polinomio *p, double xn){

    double fxn = 0; //variabile in cui viene accumulato il risultato

    for (size_t i = 0; i<p->size; ++i){
        //per ogni monomio della funzione polinomiale
        //viene calcolato il prodotto tra:
        //      -il coefficiente, ovvero p->coeffs[i]
        //      -il valore xn elevato al grado del monomio i.
        //e viene accumulato il risultaato in fxn
        fxn += pow(xn, i) * p->coeffs[i];
    }
    return fxn;
}

//ausiliaria che mi consente di contare quante volte ho già iterato
//il calcolo dell'approssimazione
double SecantiRec(const Polinomio *p, double xn_prev, double xn, double t, int max_iter, int i) {

    //calcolo il valore dlela funzione p nei punti xn_prev e xn
    double f_xn_prev = F(p, xn_prev);
    double f_xn = F(p, xn);

    //calcolo l'approssimazione al passo corrente (n+1) secondo la formula
    double xn_suc = xn - ((xn-xn_prev) / (f_xn - f_xn_prev)) * f_xn;

    //verifico caso base 1: l'approssimazione ottenuta è suff buona
    if (fabs(xn_suc -xn) <= t){
        return xn_suc;
    }

    //verifico caso base 2: ho raggiunto il numero max di iterazioni
    if (max_iter > 0 && max_iter == i){
        return xn_suc;
    }

    //chiamata ricorsiva
    return SecantiRec(p, xn, xn_suc, t, max_iter, i+1);
}

double Secanti (const Polinomio *p, double x0, double x1, double t, int max_iter) {


    return SecantiRec(p, x0, x1, t, max_iter, 1);
}
