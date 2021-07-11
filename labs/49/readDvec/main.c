#include "read_dvec.h"

int main (void){

    struct dvec *ret = read_dvec_comp("1.dvec");
    for (size_t i = 0; i<ret->n ; i++){

        printf("%.3f | ", ret->d[i]);
    }
    printf("\n");
    printf("returned %ld\n", ret->n);
//    ret = read_dvec_comp("2.dvec");
 //   ret = read_dvec_comp("lungo.dvec");

    return 0;
}
