#include <stdio.h>
#include <string.h>

int scrivi_conta_caratteri(FILE *f, const char *s){

    int write_count = 0;
    int num_count = 0;

    if (!s || strlen(s) == 0)
        return write_count;

    size_t s_len = strlen(s);

    //writing string to file
    for(size_t i = 0; i<s_len; i++){
        fputc(s[i], f);
        write_count++;

    }

    //newline
    fputs("\n", f);

    const char numbers[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    
    //printing line with char count
    while(num_count < write_count){

        for (size_t i = 0; i<10; i++){

            fputc(numbers[i], f);
            num_count++;
            if (num_count == write_count)
                break;

        }
    }

    //endline
    fputs("\n", f);
    return write_count;
}
