
#include <stdio.h>
#include <stdbool.h>

extern bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c);

int main (void){


    if (is_terna_pitagorica(5, 4, 3))
        printf("5, 4, 3 terna\n");
    else
        printf("5, 4, 3 non terna\n");

    if (is_terna_pitagorica(1, 2, 3))
        printf("1, 2, 3 terna\n");
    else
        printf("1, 2, 3 non terna\n");

    if (is_terna_pitagorica(3, 4, 5))
        printf("3, 4, 5 terna\n");
    else
        printf("3, 4, 5 non terna\n");




    return 0;
}
