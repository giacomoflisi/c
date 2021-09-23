
#include <stdbool.h>
#include <string.h>

bool IsPalindromoRec(const char *str, int len, int pos){

    if (len < 0)
        return true;

    if (str[len] != str[pos])
        return false;

    return IsPalindromoRec(str, len-1, pos+1);
}

bool IsPalindromo(const char *str){

    if (!str)
        return false;

    int len = strlen(str);

    return IsPalindromoRec(str, len-1, 0);

    
}
