#include <string.h>
#include <stdlib.h>

char *sostituisci(const char *str, const char *old, const char *new)
{
    //prev è inizializzato con str ovver il primo carattere
    const char *cur, *prev = str;
    char *s = NULL;
    //ssize è la grandezza della string da ritornare
    //nsize e osize sarà la lunghezza delle 2 stringhe new e old
    size_t ssize = 0, nsize, osize;

//CONTROLLI
    if(str == NULL || old == NULL || new == NULL)
        return NULL;

    if(*str==0)
        return "";

    //se old è vuota ritorno una copia della stringa str
    if(*old==0){
        s = malloc(strlen(str)+1);
        return strcpy(s, str);
    }

    //mi salvo la lunghezza di old e new
    nsize = strlen(new);
    osize = strlen(old);

    while(1){
        cur = strstr(str, old);

        if(cur == NULL)
            break; //non ci sono più occorrenze di old in str
        
        /*devo creare spazio per copiare tutto ciò che ho trovato dall'ultima
         * occorrenza di old in str (prev) alla posizione attuale (cur) poi
         * aggiungerci la stringa nuova (di dimensione nsize) + terminatore */
        s = realloc(s, ssize + cur - prev + nsize +1 );

        //copio tutti i caratteri da prev a cur
        strncpy(s +ssize, prev, cur - prev);
        //incremento il valore ssize (numero di caratteri in s)
        ssize += cur-prev;
        //copio new a partire da s+ssize
        strcpy(s+ssize, new);
        ssize += nsize;
        //mando avanti prev che ora punta al primo carattere dopo
        //l'occorrenza di old appena trovata
        prev = cur + osize;

    }
    //ho finito di trovare tutte le occorrenze di old, 
    //prev punta ancora al primo carattere dopo l'ultima occorrenza
    s = realloc(s, ssize + strlen(prev) +1);
    strcpy(s+ssize, prev);
    return s;

}

int main (void)
{
    char *s;
    s= sostituisci("qui cambia la parola cambia", "cambia", "sostituisci");

    free(s);
    return 0;
}

