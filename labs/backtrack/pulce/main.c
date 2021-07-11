#include <stdio.h>

extern char *GuidaLaPulce(const int *f, size_t f_size, int a, int b, int n, int h, size_t *ret_size);

int main (void){

    int f[] = {8, 3, 16, 6, 12, 20};

    size_t ret_size = 0;
    char *ret;
    
    ret = GuidaLaPulce(f, 6, 15, 13, 10, 11, &ret_size);
    


    return 0;

}
