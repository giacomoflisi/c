#include "segmento.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct segmento *intersezione(struct segmento s1, struct segmento s2)
{
    if(s1.a > s1.b || s2.a > s2.b)
        return NULL;

    struct segmento *inters;
    inters = malloc(sizeof(struct segmento));
    
    //se i segmenti sono identici
    if(s1.a == s2.a && s1.b == s2.b){
        inters->a = s1.a;
        inters->b = s1.b;
    }

    //se i segmenti non si intersicano
    if(s1.b < s2.a || s1.a > s2.b)
        return NULL;

    if(s1.a <= s2.a && s1.b >= s2.a){
        inters->a = s2.a;

        if(s1.b >= s2.a && s1.b <= s2.b)
            inters->b = s1.b;

        if(s1.b > s2.b)
            inters->b = s2.b;
    }

    if(s1.a <= s2.b && s1.a >= s2.a){
        inters->a = s1.a;

        if(s1.b <= s2.b)
            inters->b = s1.b;

        if(s1.b > s2.b)
            inters->b = s2.b;
    }


    printf("inters->a = %i\n", inters->a);
    printf("inters->b = %i\n", inters->b);

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
