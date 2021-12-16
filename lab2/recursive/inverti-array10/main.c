#include <stdio.h>

extern void InvertiArray(int *arr, size_t size);

int main (void){

    int arr[] = {1, 2, 3, 4, 5, 6};
    size_t size = 6;
    for (size_t i = 0; i<size; ++i){
        printf("%d |", arr[i]);
    }
    printf("\n");

    InvertiArray(arr, size);

    printf("...inverting...\n");
    for (size_t i = 0; i<size; ++i){
        printf("%d |", arr[i]);
    }
    printf("\n");


    return 0;
}
