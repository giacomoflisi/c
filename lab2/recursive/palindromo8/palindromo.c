#include <stdbool.h>
#include <string.h>

static bool IsPalindromoRec(const char *str, int start, int end){

    //base: È rimasto al più un elemento da analizzare.
    if (start >= end){
        return true;
    }

    if (str[start] == str[end]){
        return IsPalindromoRec(str, start+1, end-1);
    } else {
        return false;
    }

}

bool IsPalindromo(const char *str){

    if (str == NULL)
        return false;

    return IsPalindromoRec(str, 0, strlen(str)-1);

}
