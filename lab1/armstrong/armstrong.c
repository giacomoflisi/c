#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_armstrong_number(int candidate){

    int n = candidate;
    int tmp = candidate;
    size_t digits = 0;
    int sum = 0;
    
    do {
        tmp /= 10;
        ++digits;
    } while (tmp != 0);

    for (size_t i = 1; i<=digits; i++){
        sum += (int)pow(n%10, digits);

        n /= 10;
    }

    if (sum == candidate)
        return true;
    else 
        return false;
}
