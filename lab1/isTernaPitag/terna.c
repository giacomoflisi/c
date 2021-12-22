
#include <stdbool.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c){

    unsigned int max;
    unsigned int cat1;
    unsigned int cat2;


    if (c >= b && c >= a){
        max = c;
        cat1 = a;
        cat2 = b;
    }

    if (b >= a && b >= c){
        max = b;
        cat1 = a;
        cat2 = c;
    }

    if (a >= b && a >= c){
        max = a;
        cat1 = c;
        cat2 = b;
    }


    if (cat1*cat1 + cat2*cat2 == max*max)
        return true;


    return false;
}
