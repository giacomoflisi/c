#include <stdio.h>

extern int printbin(int argc, char **argv);

int main (int argc, char **argv){

    int ret = printbin(argc, argv);
    printf("\n");
    
    if (ret == 0) printf("success\n");
    else printf("failure\n");


    return 0;
}
