#include "list.h"

extern Item *ConcatenaN(Item **v, size_t v_size);

int main (void){


    ElemType e1[] = {3, 4, 2, 0, 45, 1, 6};
    size_t e1_size = sizeof(e1) / sizeof(ElemType);

    Item *list_a = ListCreateEmpty();
    
    for (size_t  i = 0; i<e1_size; ++i) {

        list_a = ListInsertBack(list_a, e1 + i); 
    }
    ListWriteStdout(list_a);



    ElemType e2[] = {8, 2};
    size_t e2_size = sizeof(e2) / sizeof(ElemType);

    Item *list_b = ListCreateEmpty();
    
    for (size_t i = 0; i<e2_size; ++i) {

        list_b = ListInsertBack(list_b, e2 + i); 
    }

    ListWriteStdout(list_b);




    ElemType e3[] = {1, 2, 3, 4, 5, 6};
    size_t e3_size = sizeof(e3) / sizeof(ElemType);

    Item *list_c = ListCreateEmpty();
    
    for (size_t i = 0; i<e3_size; ++i) {

        list_c = ListInsertBack(list_c, e3 + i); 
    }

    ListWriteStdout(list_c);



    Item *v[] = {list_a, list_b, list_c};
    Item *chain = ConcatenaN(v, 3);
    ListWriteStdout(chain);

    Item *n[] = {NULL, NULL, NULL};
    Item *nullchain = ConcatenaN(n, 3);
    ListWriteStdout(nullchain);

    ListDelete(chain);
    ListDelete(nullchain);
    return 0;
}
