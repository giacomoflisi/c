
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence){

    //pangram if sentence contains all letters of the italian alphabet (so even without w, x, y, j, k)
    if (!sentence)
        return false;

    if (!strlen(sentence))
        return false;

    const char alphabet[] = {"abcdefghilmnopqrstuvz"};
    size_t a_size = strlen(alphabet);

    for (size_t i = 0; i<a_size; i++){

        //if current alpha character is not in sentence nor its uppercase form
        if (!strchr(sentence, alphabet[i]) && !strchr(sentence, toupper(alphabet[i]))){
            //ret false
            return false;
        }

    }


    return true;
}
