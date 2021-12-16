#include <stdio.h>

void FrazioneEgiziaRec(int n, int d){

    //se il denom è un multiplo del num, termina
    if (d % n == 0){
        printf("1/%i ", d / n);
        return;
    }

    int unitaria = d / n + 1;
    printf("1/%i + ", unitaria);

    n = n * unitaria - d;
    d = d * unitaria;

    FrazioneEgiziaRec(n, d);
}

void FrazioneEgizia(int n, int d){

    if (n > d || n <= 0 || d <= 0){
        printf("Impossibile convertire la stringa.\n");
        return;
    }

    FrazioneEgiziaRec(n, d);
    printf("\n");
}
