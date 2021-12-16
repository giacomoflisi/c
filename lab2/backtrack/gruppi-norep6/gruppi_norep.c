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

static void GruppiRec(struct Student *stud, int k, struct Student *vcurr, int vcurr_size, int i, int n, int *nsol){

    //base, gruppo completato
    if (vcurr_size == n){
        //print su stdout
        printf("{ %s", vcurr[0].name);
        for (int j = 1; j < n; ++j){
            printf(", %s", vcurr[j].name);
        }

        printf(" }\n");
        ++*nsol; //incremento le soluzioni
        return;         //termino
    }

    //base: non ci sono più nomi da scegliere
    if (i >= k)
        return;

    //se posso, uso il nome corrente stud[i].name 
    //per costruire la soluzione corrente: 
    //nello specifico lo uso come nome in posizione vcurr_size
    
    if (Verify(vcurr, vcurr_size, stud+i)){
            strcpy(vcurr[vcurr_size].name, stud[i].name);
            //nella chiamata ricorsiva incremento sia il livello corrente, 
            //sia vcurr_size in quanto ho aggiunto un nuovo elemento al vettore
            GruppiRec(stud, k, vcurr, vcurr_size+1, i+1, n, nsol);
    }

    //in ogni caso provo a costruire la soluzione che non
    //usa il nome i-esimo incrementando il livello, ma non vcurr_size

    GruppiRec(stud, k, vcurr, vcurr_size, i+1, n, nsol);
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

    //vincoli
    if (n<1 || n>k){
        free(stud);
        return 0;
    }

    struct Student *vcurr = malloc(n *sizeof(struct Student));
    int nsol = 0;

    GruppiRec(stud, k, vcurr,0, 0, n, &nsol);

    free(stud);
    free(vcurr);

    return nsol;
}
