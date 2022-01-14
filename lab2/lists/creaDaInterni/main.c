#include "list.h"

extern Item *CreaDaInterni(const Item *i, double r);

int main (void){


    ElemType e1[] = {{.x=3,.y=4}, 
                     {.x=2,.y=0}, 
                     {.x=45, .y=1}};

    size_t e1_size = sizeof(e1) / sizeof(ElemType);

    Item *list_a = ListCreateEmpty();
    
    for (size_t  i = 0; i<e1_size; ++i) {

        list_a = ListInsertBack(list_a, e1 + i); 
    }
    ListWriteStdout(list_a);

    Item *ret = CreaDaInterni(list_a, 6);
    ListWriteStdout(ret);

    ListDelete(list_a);
    return 0;
}
