#include <stdlib.h>
#include <stdio.h>

void hailstoneRec(int n, size_t *s){

    if (n == 1){
        printf("1");
        (*s)++;
        return;
    }

    if ( n % 2 == 0){
        //pari
//        if (n/2 == 1){
//            printf("1");
 //           (*s)++;
  //          return;
   //     }
        printf("%d, ", n/2);
        (*s)++;
        hailstoneRec(n/2, s);
        return;
    }

    //dispari
    printf("%d, ", n*3+1);
    (*s)++;
    hailstoneRec(n*3+1, s);
    
    return;

}

int hailstone(int argc, char **argv){

    if(argc != 2){
        return -1;
    }
    
//    int n = atoi(argv[1]);

    if(atoi(argv[1]) <= 0){
        return 0;
    }

    size_t s = 0;

    hailstoneRec(atoi(argv[1]), &s);

    return s;
}

int main (int argc, char **argv){

    int ret = hailstone(argc, argv);
//    printf("\n ret = %d \n", ret);

    return 0;
}
