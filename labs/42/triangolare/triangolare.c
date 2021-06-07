#include <stdio.h>
#include <stdbool.h>

bool triangolare(int n)
{
    if(n == 1 ||n == 3 ||n == 6 ||n == 10 ||n == 15)
        return true;

    size_t s = 1;

    while(s <= n/2 ){
        if(n-s == 0)
            return true;
        else
            ++s;
    } 

    return false;
}

int main (void)
{
    bool tr = false;

    tr = triangolare(10);
//    tr = triangolare(155);
    if(tr == true)
        printf("yep  triangolare\n");
    else 
        printf("nope\n");

    return 0;
}
