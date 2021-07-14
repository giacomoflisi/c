#include "product.h"

int main (void){
    FILE *f = fopen("prova.txt", "wt");

    struct product vec[3] = { {"12345", "name", 10}, 
                           {"0987", "name1", 1}, 
                            {"63746", "2name", 2}};

    size_t size = 3;

    write_products(f, vec, size);

    return 0;
}
