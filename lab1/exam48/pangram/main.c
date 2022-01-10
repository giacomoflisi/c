
#include <stdio.h>
#include <stdbool.h>


extern bool is_pangram(const char *sentence);

int main (int argc, char **argv){

    if (argc != 2)
        return -1;

    is_pangram(argv[1])? printf("yep pangram\n") : printf("not a pangram\n");

    return 0;
}
