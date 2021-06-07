#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_pangram(const char *sentence)
{
    if(sentence == NULL)
        return false;

    char ch = 'a';

    while(ch <= 'z'){
        if(strchr(sentence, ch)== NULL)
            return false;
        else 
            ch += 1;

    }
    return true;
}

int main (void)
{
    bool pangram = false;

    pangram = is_pangram("xwyjkqertuioplhgfdsamnbvcz");
    return 0;
}
