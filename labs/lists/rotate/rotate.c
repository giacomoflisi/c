
#include "list.h"

Item *Rotate(Item *i, int n){

    if (ListIsEmpty(i) || ListIsEmpty(ListGetTail(i)))
        return i;

    Item *prev, *head;

    prev = i;
    head = ListGetTail(i);
    Item *start = i;

    for (int  j = 1; j<n; j++){


        head = head->next;
        prev = prev->next;

    }

    i = head;

    prev->next = NULL;

    while (!ListIsEmpty(ListGetTail(head))){

        head = ListGetTail(head);

    }
    
    head->next = start;

    return i;
}
