#include "divisori.h"
#include <stdio.h>


unsigned int conta_divisori(unsigned int num, unsigned int max)
{

    if(num == 0 || max == 0)
        return 0;

    size_t count = 0;

    for(int i = 1; i<=max; i++){
        if((num % i )== 0){
            count++;
        }

    }

    return count;
}



int main (void)
{

    int ret;
    ret = conta_divisori(20, 100);
    printf("ret = %d", ret);

    return 0;
}

