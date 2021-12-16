
#include <stdlib.h>
#include <string.h>

void ReverseStringRec(const char *str, char *out, size_t size, size_t pos){

    if (size < 1){
        return;
    }

    out[pos] = str[size-1];

    ReverseStringRec(str, out, size-1, pos+1);

}

char *ReverseString(const char *str){

    if (!str)
        return NULL;

    size_t size = strlen(str);
    char *out = malloc(size*sizeof(char)+1);
    out[size] = '\0';

    ReverseStringRec(str, out, size, 0);

    return out;
}
