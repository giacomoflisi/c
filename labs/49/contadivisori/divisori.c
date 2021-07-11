#include "divisori.h"
#include <stdio.h>

unsigned int conta_divisori(unsigned int num, unsigned int max){
    
    size_t count = 0;

    if(num == 0 || max == 0)
        return count;

    for (size_t i = 1; i<=max; ++i){

        if (num % i == 0) {
            count++;
        }
    }

    return count;
}


int main (void)
{

    int ret;
    ret = conta_divisori(20, 100);
    printf("ret = %d\n", ret);

    ret = conta_divisori(20, 9);
    printf("ret = %d\n", ret);

    ret = conta_divisori(3, 2);
    printf("ret = %d\n", ret);

    return 0;
}
