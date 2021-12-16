#include "list.h"
#include <stdio.h>


extern Item *Sort(Item *i);
extern Item *BubbleSort(Item *i);

int main (void){
    ElemType e[] = {
                    { "Michele", "Firenze", 12, "Modena", "MO", "41121"},
                    { "Federico", "Peschiera", 54, "Modena", "MO", "41121"},
                    { "Massimiliano", "Roma", 23, "Firenze", "FI", "50100"},
                    { "Massimiliano", "Firenze", 23, "Firenze", "FI", "41121"},
                    { "Stefano", "Ciro Menotti", 10, "Milano", "MI", "20019"},
    };

    Item *ab = ListCreateEmpty();
    ab = ListInsertBack(ab, e+0);
    ab = ListInsertBack(ab, e+1);
    ab = ListInsertBack(ab, e+2);
    ab = ListInsertBack(ab, e+3);
    ab = ListInsertBack(ab, e+4);

/*  printf("calling function Sort()...\n");
    ab = Sort(ab);
    ListWriteStdout(ab);
    printf("...done\n");
*/

    printf("BubbleSorting...\n");
    ab = BubbleSort(ab);
    ListWriteStdout(ab);
    printf("...done!\n");

    ListDelete(ab);
    return 0;}
