#include "product.h"

void write_products(FILE *f, const struct product *list, size_t n){
    if (f == NULL || list == NULL || n == 0)
        return;

    printf("[\n");

    for (size_t i = 0; i<n-1; ++i){

        printf("\t{\n");

        printf("\t\t\"productId\": \"%s\",\n", list[i].productId);
        printf("\t\t\"fullName\": \"%s\",\n", list[i].fullName);
        printf("\t\t\"price\": %d\n", list[i].price);

        printf("\t},\n");

    }

    //stampa ultimo
    printf("\t{\n");

    printf("\t\t\"productId\": \"%s\",\n", list[n-1].productId);
    printf("\t\t\"fullName\": \"%s\",\n", list[n-1].fullName);
    printf("\t\t\"price\": %d\n", list[n-1].price);

    printf("\t}\n");
    //done


    printf("]\n");


}
