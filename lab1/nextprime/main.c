
#include <stdlib.h>
#include <stdio.h>

extern unsigned int prossimo_primo(unsigned int x);

int main (int argc, char *argv[]){

    if (argc != 2)
        return -1;

    unsigned int x = atoi(argv[1]);

/*int main (void){

    unsigned int x = 1000000;
*/

    unsigned int next = prossimo_primo(x);

    printf("next prime after %d is %d\n", x, next);
    return 0;
}
