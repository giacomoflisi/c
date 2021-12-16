
#include "list.h"

int ListLenght(const Item *i){
 
    int count = 0;
    for (; !ListIsEmpty(i); i = ListGetTail(i)){
        count++;

    }
    return count;
}
