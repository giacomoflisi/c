
#include "vettore.h"


int main (void){

    Vector *v1 = VectorRead("input1.txt");
    Vector *v2 = VectorRead("input2.txt");



    printf("v1[");
    for( size_t i = 0 ; i< v1->size; i++){
        printf("%d, ", v1->data[i]);
    }
    printf("]\n");

    printf("v2[");
    for( size_t i = 0 ; i< v2->size; i++){
        printf("%d, ", v2->data[i]);
    }
    printf("]\n");
    
    return 0;
}
