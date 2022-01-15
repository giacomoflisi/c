#include <stdio.h>

//bam, un vettore di bambini di dimensione bam_size, contenente il valore di golosità in grammi
//bis, vettore di biscotti di dimensione bis_size, contenente la massa di ciascun biscotto.

//      la funzione deve determinare il modo più efficiente di distribuire i biscotti,
//      con l'obiettivo di massimizzare il numero di bambini soddisfatti.
//      Ogni bambino può ricevere 0, 1 o anche più biscotti, 
//      ed è considerato soddisfatto se riceve biscotti per una massa
//      totale maggiore o uguale del suo valore di golosità.
//
//      la funzione ritorna il numero massimo di bambini che possono essere accontentati.
//
//      biscotti non sono frazionabili

extern int AssegnaBiscotti(const int *bam, size_t bam_size, 
                            const int *bis, size_t bis_size);

int main (void){

    int bam[] = {10, 20, 25, 30, 5, 60};
    size_t bam_size = sizeof bam /sizeof *bam;
    int bis[] = {10, 6, 7, 8, 20, 50};
    size_t bis_size = sizeof bis /sizeof *bis;
    int ret = AssegnaBiscotti(bam, bam_size, bis, bis_size);

    printf("%d bambini soddisfatti\n", ret);

    return 0;
}
