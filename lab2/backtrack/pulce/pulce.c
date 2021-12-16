#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


void GuidaLaPulceRec(const int *f, size_t f_size, int a, int b, int n, int h, char *ret, size_t *ret_size, size_t *pos, size_t *nsalti){

    if (*pos == h && *nsalti <= n) {
        //nido
        *ret_size = *nsalti;
        return;
    }
    
    for (size_t i = 0; i<f_size; ++i){
        if (*pos == f[i]){
            return;
        }

    }

    if (*nsalti > n ) {
        return;

    }

    if ( *pos != h) {
        (*pos)+= a;
        (*nsalti)++;
        ret[(*nsalti)-1] = 'a';
        GuidaLaPulceRec(f, f_size, a, b, n, h, ret, ret_size, pos, nsalti);

        if ( *pos != h && (*nsalti) < n) {
        (*pos)-= b;
        (*nsalti)++;
        ret[(*nsalti)-1] = 'b';
        GuidaLaPulceRec(f, f_size, a, b, n, h, ret, ret_size, pos, nsalti);
        }

    }
    return;
}

char *GuidaLaPulce(const int *f, size_t f_size, int a, int b, int n, int h, size_t *ret_size){

    char *ret = malloc(n*sizeof(char));
    size_t pos = 0;
    size_t nsalti = 0;

    GuidaLaPulceRec(f, f_size, a, b, n, h, ret, ret_size, &pos, &nsalti);

    
     
    ret = realloc(ret, nsalti*sizeof(char));

    for (size_t i = 0; i<nsalti; ++i){

        printf("%c", ret[i]);
    }

    return ret;
}
