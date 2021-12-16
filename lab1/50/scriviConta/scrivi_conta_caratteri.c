
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int scrivi_conta_caratteri(FILE *f, const char* s){


    size_t len = strlen(s);

    fputs(s, f); 
    putc('\n', f);
    int ret = len;

    int numbers[] = {'1' , '2' ,'3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9' , '0'};

    size_t i = 0;
    while(1){

        size_t n;
        if (i==len)
            break;

        for(n = 0;n <= 9 ; n++){

            fputc(numbers[n], f);
            ++i;
            if (i==len)
                break;


        }

    }

    putc('\n', f);

    return ret;
}
