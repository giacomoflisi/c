
#include <stdio.h>
#include <stdint.h>

extern void hexstring2vec(const char *s, uint8_t out[8]);

static void print_out(uint8_t out[8]){

    for (size_t  i = 0; i<8; i++){
        printf("%x | ", out[i]);
    }

    printf("\n");

}

int main (void){

    uint8_t out[8]= {0,0,0,0,0,0,0,0};

    printf( "12AB34CD56EF7890");
    printf("\n");
    hexstring2vec( "12AB34CD56EF7890" , out);
    print_out(out);
    
    printf( "12ab34cd56ef7890");
    printf("\n");
    hexstring2vec( "12ab34cd56ef7890" , out); 
    print_out(out);

    printf( "35AF");
    printf("\n");
    hexstring2vec( "35AF"             , out); 
    print_out(out);

    printf( "0A0a0B0bcCdD");
    printf("\n");
    hexstring2vec( "0A0a0B0bcCdD"     , out); 
    print_out(out);

    printf( "");
    printf("\n");
    hexstring2vec( ""                 , out);
    print_out(out);

    return 0;
}






