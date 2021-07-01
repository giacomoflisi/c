
int main (void){

    Vector *v = VectorRead("input1.txt");
    Vector *v = VectorRead("input2.txt");

//    Vector *v = VectorReadSorted("input1.txt");
 //   Vector *v = VectorReadSorted("input2.txt");

    return 0;
}
/* la struct Vector rappresenta un vettore di ElemType contenente size elementi 
 * di una capacità totale pai a capacity. 
 * Il primo elemento si trova alla posizione data[0] il secondo in data[1] e via dicendo.
 *
 * VectorRead apre il file in modalità di lettura tradotta (rt).
 * il file contiene già una sequenza di ElemType che possono essere letti tramite ElemRead().
 *
 * La funzione deve creare un nuovo Vector, allocato dinamicamente, contenente la
 * sequenza di ElemType presente sul file. Ritorna il puntatore al vector creato.
