
#include <stdio.h>

extern int primo(unsigned int val);

int main(void){

    if (primo(2))
        printf("true\n");
    else
        printf("false\n");

    if (primo(3))
        printf("true\n");
    else
        printf("false\n");

    if (primo(8))
        printf("true\n");
    else
        printf("false\n");

    if (primo(7789))
        printf("true\n");
    else
        printf("false\n");

    if (primo(7919))
        printf("true\n");
    else
        printf("false\n");

    if (primo(1001467))
        printf("true\n");
    else
        printf("false\n");



    return 0;
}
