#include <stdio.h>
#include <stdbool.h>

extern bool IsPalindromo(const char *str);

int main (void){
    //la funzione prende in input una stringa C, che non contiene spazi.
    //La funzione deve verificare ricorsivamente se la stringa di input è
    //palindroma o no, ovveoro se leggendone il contenuto al contrario
    //la stringa rimane invariata. anche la stringa vuota "" è palindroma
    //stringa NULL invece non lo è.

    char s[] = {"notpalindr"};
    bool is = IsPalindromo(s);

    if (is == true){
        printf("%s\n is Pali \n", s);
    } else {
        printf("%s\n is NOT Pali \n", s);
    }

    char s2[] = "ossesso";
    bool is2 = IsPalindromo(s2);


    if (is2 == true){
        printf("%s\n is Pali \n", s2);
    } else {
        printf("%s\n is NOT Pali \n", s2);
    }


    return 0;
}
