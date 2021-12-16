#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

bool is_ugly(unsigned int num)
{
    if(num % 2 == 0|| num % 3 == 0|| num % 5 == 0){
        if( num % 7 == 0|| num % 11 == 0|| num % 13 == 0 || num % 17 == 0|| num % 19 == 0)
            return false;
        else
            printf("%d is ugly\n", num);
            return true;
    }

    printf("%d is ugly\n", num);
    return true;
}

int main (void)
{
    bool ugly = false;
       ugly  = is_ugly(14);
       ugly  = is_ugly(30);
       ugly  = is_ugly(25);
       ugly  = is_ugly(24);

        return 0;
}
