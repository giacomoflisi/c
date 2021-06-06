#include <stdio.h>
#include <stdbool.h>

bool scrivi_intero(const char *filename, int i)
{
   if(filename == NULL)
       return false;

    FILE *f = fopen(filename, "wt");

    fprintf(f, "%d\n", i);

    fclose(f);
    return true;
}

int main (void)
{

    bool feedb = scrivi_intero("file1.txt", 42);


    return 0;
}


