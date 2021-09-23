#include "list.h"
#include <stdbool.h>
#include <stdlib.h>

Item *BucketSort(Item *i){

    //ordina gli interi positivi della lista i, in senso crescente, ricorsivamente.
    Item *tmp = i;
    int n = 0;
    while(!ListIsEmpty(tmp)){
        tmp = ListGetTail(tmp);
        n++;
    }

    Item **v = malloc(n * sizeof(Item));




    return i;
}
