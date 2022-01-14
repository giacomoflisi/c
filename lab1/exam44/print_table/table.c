#include <stdint.h>
#include <stdio.h>
#include <string.h>

/*
    |cat      |dog      |deer     |frog     |
    +---------+---------+---------+---------+
    |         |         |         |         |
    +---------+---------+---------+---------+
    |         |         |         |         |
    +---------+---------+---------+---------+
 
    */

void print_table(char **colnames, uint8_t ncols, uint8_t nrows){

    for (size_t i = 0; i< nrows; i++){

        printf("|");
        for (size_t j = 0; j< ncols; j++){

            printf("%s", colnames[j]);

            for (size_t c = 9 - strlen(colnames[j]); c > 0; c--){
                printf(" ");

            }
            printf("|");



        }
        printf("\n");
        
        for (size_t j = 0; j< ncols; j++){
            printf("+---------");
        }
        printf("+\n");

    }

    




    return;
}

