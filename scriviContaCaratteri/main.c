
#include <stdio.h>

extern int scrivi_conta_caratteri(FILE *f, const char *s);

int main (void){


    FILE *f = fopen("file1.txt", "wt");

    if (!f)
        printf("error opening file\n");

    
//    const char s[] = {"scrivimi su file per completare l'esercizio."};
//    int write_count = scrivi_conta_caratteri(f, s);
//    printf("wrote %d characters\n", write_count);

    scrivi_conta_caratteri(f, "");

    return 0;
}
