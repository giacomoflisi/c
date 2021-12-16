
#include <stdlib.h>

int MCDrec(int m, int n) {

    if (n == 0)
        return m;
    
    return MCDrec(n, m%n);
}

int MCD(int m, int n) {

    if (m>=n)
        return MCDrec(m, n);

    return MCDrec(n, m);

}
