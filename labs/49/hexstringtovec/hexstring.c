#include <string.h>
#include <stdint.h>

void hexstring2vec(const char *s, uint8_t out[8])
{
    if(strlen(s)== 0){
        for(size_t i = 0; i<=strlen(s); i++){
            out[i] = 0x00;
        }
    }


    






    return;
}

int main (void)
{
    uint8_t out[8];
    hexstring2vec("AAAAAAAAAA", out);

    return 0;
}
