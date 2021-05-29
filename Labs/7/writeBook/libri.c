#include "libri.h"

bool libro_scrivi(const struct libro *p, FILE *F)
{





  return true;
}
/* la funzione riceve un puntatore ad un elemento
 * di tipo struct libro e deve scriverne i dati
 * su un file già aperto in modalità scrittura 
 * NON TRADOTTA passato come parametro.
 *
 * il titolo viene scritto come sequenza di byte
 * terminata con un ulteriore byte uguale a 0.
 * Il campo "anni_ristampe" punta al primo di 
 * una sequenza di interi senza segno a 16 bit
 * terminata con uno di questi che vale 0.
 */
int main (void)
{
  //creo struct libro
    char t[] = {"bango_bongo"};
    uint16_t 
    struct libro *l;
    
  //apro il file in scrittura binaria
    FILE *f;
    f = fopen("file.txt", "wb");

    bool exit = libro_scrivi( l, f);



    return 0;

}
