#include "list.h"
#include <stdbool.h>
#include <stdlib.h>

//chainining lists one after the other
static Item *ChainList(Item **v, int n){

    Item *head = ListCreateEmpty();
    Item *last = ListCreateEmpty();

    for (int i = 0; i<n; i++){

        if (!ListIsEmpty(v[i])){

            if (ListIsEmpty(head)){
                head = v[i]; //first head of the chain list

            } else {
                last->next = v[i]; //linking 
            }

            while (!ListIsEmpty(ListGetTail(v[i]))){
                v[i] = ListGetTail(v[i]);
            }

            last = v[i]; //saving last element of current list
        }
    }

    return head;
}

//iterating through list and saving max min and size
static void MinMaxSize(const Item *i, ElemType *max, ElemType *min, int *size){

    *size = 0;
    if (i){

        *max = *ListGetHeadValue(i);
        *min = *ListGetHeadValue(i);

        for (const Item *tmp = i; tmp; tmp = tmp->next){
            int curr = *ListGetHeadValue(tmp);
            
            if (curr > *max){
                *max = curr;
            }

            if (curr < *min){
                *min = curr;
            }

            (*size)++;
        }
    }
}


//sortign from smaller to bigger recursively
//BUCKET-SORT
//
Item *BucketSort(Item *i){

    ElemType min, max, n;
    MinMaxSize(i, &max, &min, &n);

    //base, empty list or single element list
    if (n < 1 || min == max)
        return i;


    //allocating empty buckets vectors
    Item **v = calloc(n, sizeof (Item*));

    //iterating on i list
    for (Item *tmp = i; tmp; tmp = ListGetTail(tmp)){
        ElemType e = *ListGetHeadValue(tmp);

        int index = (n-1) *(e-min) / (max-min); //calculating index

        v[index] = ListInsertBack(v[index], &e);
    }
    ListDelete(i);

    //recursion call
    for (int j = 0; j<n; j++){
        v[j] = BucketSort(v[j]);
    }

    //appending every bucket one after the other
    Item *bucket_chain = ChainList(v, n);

    free(v);
    return bucket_chain;
}
