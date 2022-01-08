
#include "read_dvec.h"
#include <stdlib.h>
#include <stdio.h>

int main (void){

    struct dvec *outvoid= read_dvec_comp("void.dvec");
    struct dvec *out1= read_dvec_comp("1.dvec");
    for (size_t i = 0; i< out1->n; i++){
        printf("%f | ", out1->d[i]);


    }
    struct dvec *out2= read_dvec_comp("2.dvec");
    struct dvec *outlong= read_dvec_comp("lungo.dvec");


    free(out1);
    free(out2);
    free(outlong);
    free(outvoid);
    return 0;
}
