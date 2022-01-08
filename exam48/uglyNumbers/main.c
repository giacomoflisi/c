
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

extern bool is_ugly(unsigned int num);

int main (int argc, char **argv){

    is_ugly(atoi(argv[1]))? printf("yep ugly\n") : printf("not ugly\n");

    return 0;
}
