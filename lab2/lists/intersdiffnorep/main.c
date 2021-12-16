#include "list.h"
#include "elemtype.h"

extern Item *IntersectNoRep(const Item *i1, const Item *i2);
extern Item *DiffNoRep(const Item *i1, const Item *i2);

int main (void){

    ElemType e1[] = {3, 4, 2, 0, 45, 1, 3};
    size_t e1_size = sizeof(e1) / sizeof(ElemType);

    Item *list_a = ListCreateEmpty();
    for (size_t i = 0; i < e1_size; ++i) {
        list_a = ListInsertBack(list_a, e1 + i);
    }

    ElemType e2[] = {8, 2, 3, 45, 7};
    size_t e2_size = sizeof(e2) / sizeof(ElemType);

    Item *list_b = ListCreateEmpty();
    for (size_t i = 0; i < e2_size; ++i) {
        list_b = ListInsertBack(list_b, e2 + i);
    }

    ListWriteStdout(list_a);
    ListWriteStdout(list_b);

    Item *ris = IntersectNoRep(list_a, list_b);
    Item *diff = DiffNoRep(list_a, list_b);


    ListDelete(ris);
    ListDelete(diff);
    ListDelete(list_a);
    ListDelete(list_b);

    return 0;
}
