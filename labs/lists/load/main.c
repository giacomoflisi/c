#include "list.h"
#include "elemtype.h"

extern Item *ListLoad(const char *filename);

int main (void){

    Item *listzero = ListCreateEmpty();
    Item *listone = ListCreateEmpty();
    Item *listtwo = ListCreateEmpty();
    Item *listempty = ListCreateEmpty();

    listzero = ListLoad("data_00.txt");
    listone = ListLoad("data_01.txt");
    listtwo = ListLoad("data_02.txt");
    listempty = ListLoad("empty.txt");

    Item *nonesiste = ListLoad("nonesiste.txt");
    ListWriteStdout(nonesiste);
    ListDelete(nonesiste);

    ListWriteStdout(listzero);
    ListWriteStdout(listone);
    ListWriteStdout(listtwo);
    ListWriteStdout(listempty);

    ListDelete(listzero);
    ListDelete(listone);
    ListDelete(listtwo); //libero la memoria occupata dagli elementi della lista
    ListDelete(listempty);
    return 0;
}
