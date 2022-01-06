
/* 3 3 3 3 3|
 * 3 2 2 2 3| upper half
 * 3 2 1 2 3|
 *
 * 3 2 2 2 3| lower half
 * 3 3 3 3 3| notice how it is the mirror of the first 2 rows
 *
 */

#include <stdio.h>

void stampa_quadrati_concentrici(int n){

    if (n < 0 || n == 0)
        return;

    size_t s = 2*n - 1; // n == 3 -> s == 5

    //UPPER HALF, 
    //printing rows from 1 to n (aka rows 1 to 3)
    for (size_t i = 1; i <= (size_t)n; i++){ 

        size_t m = n;

        //decreasing part (3 2)
        for (size_t j = 0; j < i; j++){
            printf(" %ld", m%10);
            m--;
        }

        //constant middle part (1)
        for (size_t k = 1; k < s-2 * (i-1)-1 ; k++){
            printf(" %d", (int)(n-i+1)%10);
        }

        m = n-i+1;
        //increasing part (2 3)
        for (size_t l = 0; l < i; l++){
            if (m != 1){
                printf(" %ld", m%10);
            }
            m++;
        }

        //new row
        printf("\n");

    }


    //LOWER HALF, 
    //printing rows from n+1 to n*2-1
    for (size_t i = s/2 ; i > 0; i--){

        size_t m = n;

        //decreasing part (3 2)
        for (size_t j = 0; j < i; j++){
            printf(" %ld", m%10);
            m--;
        }

        //constant middle part (1)
        for (size_t k = 1; k < s-2 * (i-1)-1 ; k++){
            printf(" %d", (int)(n-i+1)%10);
        }

        m = n-i+1;
        //increasing part (2 3)
        for (size_t l = 0; l < i; l++){
            if (m != 1){
                printf(" %ld", m%10);
            }
            m++;
        }

        //new row
        printf("\n");

    }

}
