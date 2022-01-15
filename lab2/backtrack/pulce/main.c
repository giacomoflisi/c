#include <stdio.h>

extern char *GuidaLaPulce(const int *f, size_t f_size, int a, int b, int n, int h, size_t *ret_size);

int main (void){

    int f2[] = {8, 3, 16, 6, 12, 20};
    size_t f_size = sizeof f2 /sizeof *f2;

    size_t ret_size = 0;
    char *ret;
    
    ret = GuidaLaPulce(f2, f_size, 15, 13, 5, 11, &ret_size);
    
    printf ("%ld retsize\n", ret_size);

    if (ret){
        for (size_t i = 0; i<ret_size; i++){

            printf("%c ", ret[i]);
        }
    }

    return 0;

}
