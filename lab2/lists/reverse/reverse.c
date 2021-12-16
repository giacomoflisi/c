
#include "list.h"

Item *Reverse(Item *i){

    Item *curr, *prev;
    Item *head = i;

    if (!ListIsEmpty(head)){

        prev = head;
        head = ListGetTail(head);
        curr = head;

        prev->next = NULL;

        while (!ListIsEmpty(head)){
        
            head = head->next;

            curr->next = prev;
            prev = curr;
        
            curr = head;
        }

        i = prev;
        return i;
    }

    return i;
}
