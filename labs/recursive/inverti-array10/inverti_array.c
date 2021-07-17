#include <stdio.h>

//prende in input un vettore di int e la sua dimensione, 
//e deve invertire ricorsivamente gli elementi del vettore.

void InvertiArrayRec(int *arr, size_t size, size_t start, size_t end){
    
    //caso base 
    if( start >= end){
        return;
    }

    //swap
    int tmp;
    tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;

    InvertiArrayRec(arr, size, start+1, end-1);
    return;
}

void InvertiArray(int *arr, size_t size){

    InvertiArrayRec(arr, size, 0, size-1);

}
