#include "list.h"

extern Item *PariDispari(Item *i);

int main (void){


    ElemType e1[] = {3, 4, 2, 0, 45, 1, 6};
    size_t e1_size = sizeof(e1) / sizeof(ElemType);

    Item *list_a = ListCreateEmpty();
    
    for (size_t  i = 0; i<e1_size; ++i) {

        list_a = ListInsertBack(list_a, e1 + i); 
    }
    ListWriteStdout(list_a);

    list_a = PariDispari(list_a);

    ListWriteStdout(list_a);



    ElemType e2[] = {2, 3, 4, 56, 7, 0, 5};
    size_t e2_size = sizeof(e2) / sizeof(ElemType);

    Item *list_b = ListCreateEmpty();
    
    for (size_t i = 0; i<e2_size; ++i) {

        list_b = ListInsertBack(list_b, e2 + i); 
    }

    ListWriteStdout(list_b);
    list_b = PariDispari(list_b);

    ListWriteStdout(list_b);


    ListDelete(list_a);
    ListDelete(list_b);

    return 0;
}
