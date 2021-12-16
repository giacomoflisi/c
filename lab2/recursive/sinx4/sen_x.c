#include <math.h>
#include <float.h>

static double FattorialeRec(int n){

    if (n==0){
        return 1.;
    }

    return n*FattorialeRec(n-1);
}

double fact(double n){

    if (n<0){
        return -1;
    }

    return FattorialeRec(n);

}

static double SenRec(double x, int i, int n){

    if (n > i){
        return 0;
    }

    double cur = (pow(-1, n) / fact(2*(n)+1+1)) * pow(x, 2*(n)+1);

    return cur + SenRec(x, i, n+1);
}

double Sen(double x, int i){

    if (i < 0){
        return DBL_MIN;
    }

    return SenRec(x, i, 0);
}
