#include <stdio.h>
#include <stdbool.h>

extern bool IsPalindromo(const char *str);

int main (void){

//    bool ret = IsPalindromo("osso");
    //bool ret = IsPalindromo("");
//    bool ret = IsPalindromo("ossesso");
    bool ret = IsPalindromo(NULL);

    if (ret)
        printf("true");
    else
        printf("false");

    return 0;
}
