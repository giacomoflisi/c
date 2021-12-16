#include "list.h"

Item *Sort(Item *i){
    Item *tmp = i;

    while (!ListIsEmpty(tmp)){

        
        //confronto l'elemento corrente con tutti quelli che ci sono dopo
        Item *tmp2 = ListGetTail(tmp);
        while (!ListIsEmpty(tmp2)){
            if (ElemCompare(ListGetHeadValue(tmp), ListGetHeadValue(tmp2)) > 0){
                //se il primo è maggiore del secondo allora scambio
                ElemSwap(&tmp->value, &tmp2->value);
            }
            tmp2 = ListGetTail(tmp2); //incremento per passare all'elemento successivo della lista

        }
        tmp = ListGetTail(tmp);

    }

    return i;
}

//funzione ausiliaria per BubbleSort() che calcola la lunghezza della lista
size_t Len(const Item *i){
    size_t s = 0;
    for (;i; i=i->next){
        s++;
    }

    return s;
}

Item *BubbleSort(Item *i){
    //inizializzo un Item fittizzio STATICO che sarà il previous della root
    Item head = { .next = i};

    size_t dim = Len(i);
    bool done = false; //controla se ci sono stati scambi ad ogni passata

    while(!done){
        done = true;
        Item *prev = &head; //all'inizio, il precedente sarà l'indirizzo di head
        Item *curr = prev->next; //prev->next ovvero 'i'

        for (size_t j = 0; j<dim && curr->next; ++j){ //scorro per tutta la lunghezza dim 
                                                        //e fino a quando curr->next NON È NULL
                                                        //dato che in quel caso l'elemento sarà
                                                        //sarà l'ultimo e già ordinato

            if (ElemCompare(ListGetHeadValue(curr), ListGetHeadValue(curr->next)) > 0){
                //swappo gli elementi, NON I VALUES
                //quindi 3 puntatori
                Item *foll = curr->next;
                Item *follfoll = foll->next; 

                prev->next = foll; //scambio...
                foll->next = curr; //
                curr->next = follfoll; //

                //riorganizzo gli elementi per il giro successivo
                //curr punta già all'elemento corretto
                prev = foll;
                done = false;
                //metto false perchè se entriamo dell'if per fare lo scambio
                //dobbiamo fare sicuramente un altro giro

            } else {

                //mando avanti i puntatori senza scambiare
                prev = curr;
                curr = curr->next;


            }
        }
        //dato che il max è stato sicuramente spostato in ultima posizione
        //possiamo evitare un confronto decrementando dim
        
        dim--;
    }

    return head.next;
}
