#include <string.h>
#include <stdio.h>
#include <ctype.h>

size_t conta_parole(const char *s)
{
    size_t count = 0;
    size_t i = 0;

    while(s[i]!= '\0'){
        if(s[i]==' ' && isalnum(s[i-1])){
            ++count;
            ++i;
        }
        else
            ++i;
    }
    count += 1;
    printf("%i parole\n", count);
    return count;
}

int main (void)
{
    size_t n = 0;
    n = conta_parole("uella queste sono 5 parole");

    return 0;
}
