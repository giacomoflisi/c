#include "segmento.h"
#include <stdlib.h>
#include <stdint.h>

struct segmento *intersezione(struct segmento s1, struct segmento s2)
{
    if(s1.a > s1.b || s2.a > s2.b)
        return NULL;

    int tmp = s1.a;
    int first[10];
    size_t i = 0, n;

    while(tmp  <= s1.b){
        first[i] = tmp;
        tmp++;
        i++;
    }
    n = sizeof(first)/sizeof(int);

    struct segmento *inters;
    inters = malloc(sizeof(struct segmento));

    for(i = 0; i<=n; i++){
        for(tmp = s2.a; tmp<s2.b; tmp++){
            if(first[i] == tmp){
                inters->a = tmp;

            }
        }
    }

    for(i = n; i>=0; i--){
        for(tmp = s2.b; tmp>=s.2a; tmp--){
            if(first[i] == tmp){
                inters->b = tmp;

            }
        }
    }


    return inters;
}

int main (void)
{
    struct segmento s1, s2;
    s1.a = 1;
    s1.b = 8;

    s2.a = 4;
    s2.b = 9;

    struct segmento *inters;
    inters = intersezione(s1, s2);

    return 0;
}
