#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char *s)
{
    //cornice sopra
    printf("/-");
    for(size_t i = 0; i<strlen(s); i++){
        printf("-");
    }
    printf("-\\\n");
    
    //main line
    printf("| ");
    printf("%s", s);
    printf(" |\n");

    //cornice sotto
    printf("\\-");
    for(size_t i = 0; i<strlen(s); i++){
        printf("-");
    }
    printf("-/\n");



return;
}

int main (void)
{
    stampa_cornicetta("ciao");
    stampa_cornicetta("aaaaaaA");
    stampa_cornicetta(NULL);
    stampa_cornicetta("uwwwwwe");

    return 0;

}
