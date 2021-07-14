#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <stdio.h>
#include <stdlib.h>

struct product{
    char *productId;
    char *fullName;
    int price;
};

extern void write_products(FILE *f, const struct product *list, size_t n);

#endif //PRODUCT_H_
