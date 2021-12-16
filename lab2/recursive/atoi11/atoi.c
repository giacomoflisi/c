#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>


static bool AToIRec(const char *str, int i, int *res){
    int c = str[i];

    //base: terminatore
    if (c == 0){
        return true;
    }

    if(!isdigit(str[i]))
        return false;

    (*res) = (*res) * 10 + (str[i]-'0');

    return AToIRec(str, i+1, res);
}

int AToI(const char *str){

    if (str == NULL)
        return 0;

    int res = 0;
    int sign = str[0] == '-' ? -1 : 1;

    if (str[0] == '-' || str[0] == '+'){
        str = str+1;
    }

    bool success = AToIRec(str, 0, &res);

    if (!success)
        res = 0;

    return res*sign;
}
