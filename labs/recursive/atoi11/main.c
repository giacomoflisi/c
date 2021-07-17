#include <stdio.h>

//recursive atoi
extern int AToI(const char *str);

int main (void){

    int ret = AToI("12345");

    printf("returned %d\n", ret);


    return 0;
}
