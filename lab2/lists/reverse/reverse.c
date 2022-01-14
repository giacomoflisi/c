#include "list.h"

Item *Reverse(Item *i){

    Item *next, *curr, *prev;

    curr = i;
    prev = NULL;
    next = NULL;;


    while(curr){

        next = ListGetTail(curr);

        //switch the arrows
        curr->next = prev;


        prev = curr;
        curr = next;
    }


    i = prev;
    return i;

}
