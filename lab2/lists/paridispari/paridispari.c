#include "list.h"

//reorders the input list by putting all even numbers before odd numbers 
//witout allocating new memory

Item *PariDispari(Item *i){

    //empty list
    if (ListIsEmpty(i))
        return NULL;

    //single item list
    if (ListIsEmpty(ListGetTail(i)))
        return i;

    Item *odd_head = NULL;
    Item *even_head = NULL;
    Item *odd_tail = NULL;
    Item *even_tail = NULL;

    Item *curr = i;

    while(curr){

        if ((*ListGetHeadValue(curr)) & 1){
        //current node is odd

            if (!odd_head){ //found first odd number
                odd_head = odd_tail = curr;
            } else {
                //found another odd num
                //adding it to the tail
                odd_tail->next = curr;
                odd_tail = ListGetTail(odd_tail);
            }

        } else {
            //curent node is even
            if (!even_head){
                //setting even head
                even_head = even_tail = curr;
            } else {
                //setting other even numbers after tail

                even_tail->next = curr;
                even_tail = ListGetTail(even_tail);
            }
        }

        curr = curr->next;
    }

    //if there is at least one even node
    if (even_head){

        i = even_head;
        even_tail->next = odd_head;

    } else {
        i = odd_head;
    }

    if (odd_tail){

        odd_tail->next = NULL;
    } 

    return i;
}

