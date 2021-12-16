#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Student {
    char name[21];
};

static bool Verify(struct Student *vcurr, int vcurr_size, struct Student *tocheck){

    for (int i = 0; i< vcurr_size; ++i){
        bool a = vcurr[i].name[0] == tocheck->name[0];  //stessa lettera iniziale
        bool b = (vcurr[i].name[0] == tocheck->name[0]+1) || (vcurr[i].name[0] == tocheck->name[0]-1);
        if (a || b){
            return false;
        }
    }
    return true;
}

static void GruppiRec(struct Student *stud, int k, struct Student *vcurr, int i, int n, int *nsol){

    //base, gruppo completato
    if (i == n){
        //print su stdout
        printf("{ %s", vcurr[0].name);
        for (int j = 1; j < n; ++j){
            printf(", %s", vcurr[j].name);
        }

        printf(" }\n");
        ++*nsol; //incremento le soluzioni
        return;         //termino
    }

    for (int j = 0; j<k; ++j){
        if (Verify(vcurr, i, stud+j)){
            strcpy(vcurr[i].name, stud[j].name);
            GruppiRec(stud, k, vcurr, i+1, n, nsol);
        }
    }
}

int Gruppi(const char *filename, int n){

    FILE *f = fopen(filename, "rt");

    if (f == NULL)
        return 0;

    struct Student *stud = NULL;
    int k = 0;
    while (1){
        stud  = realloc(stud, sizeof(struct Student) * (k+1));
        if (fscanf(f, "%20s", stud[k].name) != 1){
            stud = realloc(stud, sizeof(struct Student) * k);
            break;
        }
        ++k;
    }

    fclose(f);

    struct Student *vcurr = malloc(n *sizeof(struct Student));
    int nsol = 0;

    GruppiRec(stud, k, vcurr, 0, n, &nsol);

    free(stud);
    free(vcurr);

    return nsol;
}
