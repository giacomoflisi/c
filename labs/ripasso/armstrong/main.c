#include <stdbool.h>
#include <math.h>
#include <stdio.h>

extern bool is_armstrong_number(int candidate);


int main (void){

    if (is_armstrong_number(9))
        printf("true");
    else
        printf("false");

    if (is_armstrong_number(371))
        printf("true");
    else
        printf("false");

    if (is_armstrong_number(153))
        printf("true");
    else
        printf("false");

    if (is_armstrong_number(1634))
        printf("true");
    else
        printf("false");

    if (is_armstrong_number(8208))
        printf("true");
    else
        printf("false");

    if (is_armstrong_number(370))
        printf("true");
    else
        printf("false");
    if (is_armstrong_number(407))
        printf("true");
    else
        printf("false");


    return 0;
}
