#include "prezzo.h"

/*
struct Articolo{
    char nome[11];
    int prezzo;
};

*/
extern void TrovaArticolo(const struct Articolo *a, size_t a_size, int sum);

int main (void){

    struct Articolo a[] = {
                            {.nome = "Monopoli"   ,.prezzo = 20},
                            {.nome = "Carcassonne",.prezzo = 30},
                            {.nome = "Perudo"     ,.prezzo = 20},
                         };

    TrovaArticolo(a, 3, 50);

    return 0;
}
