
#include "divisori.h"
#include <stdlib.h>

unsigned int conta_divisori(unsigned int num, unsigned int max){

    if (num == 0)
        return 0;

    unsigned int count = 0;

    for (size_t i = max; i>0; i--){

        if (num % i == 0)
            count++;

    }

    return count;
}
