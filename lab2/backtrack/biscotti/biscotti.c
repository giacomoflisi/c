#include <stdlib.h>
int AssegnaBiscottiRec(const int *bam, size_t bam_size, const int *bis, size_t bis_size){

    return AssegnaBiscottiRec();
}

int AssegnaBiscotti(const int *bam, size_t bam_size, const int *bis, size_t bis_size){


    //invalid input
    if (!bam || !bis || bam_size == 0|| bis_size == 0)
        return 0;


    size_t nsol = AssegnaBiscottiRec(bam, bam_size, bis, bis_size);










    return nsol;
}
